/* Copyright (c) 2010, 2020, Oracle and/or its affiliates.

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License, version 2.0,
  as published by the Free Software Foundation.

  This program is also distributed with certain software (including
  but not limited to OpenSSL) that is licensed under separate terms,
  as designated in a particular file or component or in included license
  documentation.  The authors of MySQL hereby grant you an additional
  permission to link the program and your derivative works with the
  separately licensed software that they have included with MySQL.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License, version 2.0, for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA */

#ifndef TABLE_EVENTS_TRANSACTIONS_H
#define TABLE_EVENTS_TRANSACTIONS_H

/**
  @file storage/perfschema/table_events_transactions.h
  Table EVENTS_TRANSACTIONS_xxx (declarations).
*/

#include <sys/types.h>

#include "my_base.h"
#include "my_inttypes.h"
#include "sql/rpl_gtid.h"
#include "storage/perfschema/pfs_column_types.h"
#include "storage/perfschema/pfs_engine_table.h"
#include "storage/perfschema/pfs_events_transactions.h"
#include "storage/perfschema/table_helper.h"

class Field;
class Plugin_table;
struct PFS_events;
struct PFS_thread;
struct TABLE;
struct THR_LOCK;

/**
  @addtogroup performance_schema_tables
  @{
*/

class PFS_index_events_transactions : public PFS_engine_index {
 public:
  PFS_index_events_transactions()
      : PFS_engine_index(&m_key_1, &m_key_2),
        m_key_1("THREAD_ID"),
        m_key_2("EVENT_ID") {}

  ~PFS_index_events_transactions() override {}

  bool match(PFS_thread *pfs);
  bool match(PFS_events *pfs);

 private:
  PFS_key_thread_id m_key_1;
  PFS_key_event_id m_key_2;
};

/** A row of table_events_transactions_common. */
struct row_events_transactions {
  /** Column THREAD_ID. */
  ulonglong m_thread_internal_id;
  /** Column EVENT_ID. */
  ulonglong m_event_id;
  /** Column END_EVENT_ID. */
  ulonglong m_end_event_id;
  /** Column NESTING_EVENT_ID. */
  ulonglong m_nesting_event_id;
  /** Column NESTING_EVENT_TYPE. */
  enum_event_type m_nesting_event_type;
  /** Column EVENT_NAME. */
  const char *m_name;
  /** Length in bytes of @c m_name. */
  uint m_name_length;
  /** Column TIMER_START. */
  ulonglong m_timer_start;
  /** Column TIMER_END. */
  ulonglong m_timer_end;
  /** Column TIMER_WAIT. */
  ulonglong m_timer_wait;
  /** Column SOURCE. */
  char m_source[COL_SOURCE_SIZE];
  /** Length in bytes of @c m_source. */
  uint m_source_length;
  /** InnoDB transaction id. */
  ulonglong m_trxid;
  /** Transaction state. */
  enum_transaction_state m_state;
  /** Global Transaction ID. */
  char m_gtid[Gtid_specification::MAX_TEXT_LENGTH + 1];
  /** GTID length in bytes*/
  int m_gtid_length;
  /** XA transaction ID. */
  PSI_xid m_xid;
  /** XA transaction state. */
  enum_xa_transaction_state m_xa_state;
  /** True if XA transaction. */
  bool m_xa;
  /** True if autocommit transaction. */
  bool m_autocommit;
  /** Isolation level. */
  enum_isolation_level m_isolation_level;
  /** True if read-only, read-write otherwise. */
  bool m_read_only;
  /** Column NUMBER_OF_SAVEPOINTS. */
  ulonglong m_savepoint_count;
  /** Column NUMBER_OF_ROLLBACK_TO_SAVEPOINT. */
  ulonglong m_rollback_to_savepoint_count;
  /** Column NUMBER_OF_RELEASE_SAVEPOINT. */
  ulonglong m_release_savepoint_count;
};

/**
  Position of a cursor on PERFORMANCE_SCHEMA.EVENTS_TRANSACTIONS_HISTORY.
  Index 1 on thread (0 based)
  Index 2 on transaction event record in thread history (0 based)
*/
struct pos_events_transactions_history : public PFS_double_index {
  pos_events_transactions_history() : PFS_double_index(0, 0) {}

  inline void reset(void) {
    m_index_1 = 0;
    m_index_2 = 0;
  }

  inline void next_thread(void) {
    m_index_1++;
    m_index_2 = 0;
  }
};

/**
  Adapter, for table sharing the structure of
  PERFORMANCE_SCHEMA.EVENTS_TRANSACTIONS_CURRENT.
*/
class table_events_transactions_common : public PFS_engine_table {
 protected:
  int read_row_values(TABLE *table, unsigned char *buf, Field **fields,
                      bool read_all) override;

  table_events_transactions_common(const PFS_engine_table_share *share,
                                   void *pos);

  ~table_events_transactions_common() override {}

  int make_row(PFS_events_transactions *statement);

  /** Current row. */
  row_events_transactions m_row;
};

/** Table PERFORMANCE_SCHEMA.EVENTS_TRANSACTIONS_CURRENT. */
class table_events_transactions_current
    : public table_events_transactions_common {
 public:
  /** Table share */
  static PFS_engine_table_share m_share;
  static PFS_engine_table *create(PFS_engine_table_share *);
  static int delete_all_rows();
  static ha_rows get_row_count();

  void reset_position(void) override;

  int rnd_init(bool scan) override;
  int rnd_next() override;
  int rnd_pos(const void *pos) override;

  int index_init(uint idx, bool sorted) override;
  int index_next() override;

 protected:
  table_events_transactions_current();

 public:
  ~table_events_transactions_current() override {}

 private:
  friend class table_events_transactions_history;
  friend class table_events_transactions_history_long;

  /** Table share lock. */
  static THR_LOCK m_table_lock;
  /** Table definition. */
  static Plugin_table m_table_def;

  /** Current position. */
  PFS_simple_index m_pos;
  /** Next position. */
  PFS_simple_index m_next_pos;

  PFS_index_events_transactions *m_opened_index;
};

/** Table PERFORMANCE_SCHEMA.EVENTS_TRANSACTIONS_HISTORY. */
class table_events_transactions_history
    : public table_events_transactions_common {
 public:
  /** Table share */
  static PFS_engine_table_share m_share;
  static PFS_engine_table *create(PFS_engine_table_share *);
  static int delete_all_rows();
  static ha_rows get_row_count();

  void reset_position(void) override;

  int rnd_init(bool scan) override;
  int rnd_next() override;
  int rnd_pos(const void *pos) override;

  int index_init(uint idx, bool sorted) override;
  int index_next() override;

 protected:
  table_events_transactions_history();

 public:
  ~table_events_transactions_history() override {}

 private:
  /** Table share lock. */
  static THR_LOCK m_table_lock;
  /** Table definition. */
  static Plugin_table m_table_def;

  /** Current position. */
  pos_events_transactions_history m_pos;
  /** Next position. */
  pos_events_transactions_history m_next_pos;

  PFS_index_events_transactions *m_opened_index;
};

/** Table PERFORMANCE_SCHEMA.EVENTS_TRANSACTIONS_HISTORY_LONG. */
class table_events_transactions_history_long
    : public table_events_transactions_common {
 public:
  /** Table share */
  static PFS_engine_table_share m_share;
  static PFS_engine_table *create(PFS_engine_table_share *);
  static int delete_all_rows();
  static ha_rows get_row_count();

  int rnd_init(bool scan) override;
  int rnd_next() override;
  int rnd_pos(const void *pos) override;
  void reset_position(void) override;

 protected:
  table_events_transactions_history_long();

 public:
  ~table_events_transactions_history_long() override {}

 private:
  /** Table share lock. */
  static THR_LOCK m_table_lock;
  /** Table definition. */
  static Plugin_table m_table_def;

  /** Current position. */
  PFS_simple_index m_pos;
  /** Next position. */
  PFS_simple_index m_next_pos;
};

/** @} */
#endif
