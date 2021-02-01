/* Copyright (c) 2017, 2019, Oracle and/or its affiliates. All rights reserved.

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

#ifndef UCA900_JA_DATA_H
#define UCA900_JA_DATA_H

// Quaternary weight of katakana.
static constexpr int JA_KATA_QUAT_WEIGHT= 0x08;
// Quaternary weight of hiragana.
static constexpr int JA_HIRA_QUAT_WEIGHT= 0x02;
static const char ja_cldr_30[]=
  "&\\u309D <<<< \\u30FD"
  "&[before 3]\\u3041 <<<\\u3041|\\u30FC=\\u3042|\\u30FC=\\u304B|\\u30FC"
                       "=\\u3095|\\u30FC=\\u304C|\\u30FC=\\u3055|\\u30FC"
                       "=\\u3056|\\u30FC=\\u305F|\\u30FC=\\u3060|\\u30FC"
                       "=\\u306A|\\u30FC=\\u306F|\\u30FC=\\u3070|\\u30FC"
                       "=\\u3071|\\u30FC=\\u307E|\\u30FC=\\u3083|\\u30FC"
                       "=\\u3084|\\u30FC=\\u3089|\\u30FC=\\u308E|\\u30FC"
                       "=\\u308F|\\u30FC"
                    "<<<<\\u30A1|\\u30FC=\\uFF67|\\u30FC=\\u30A2|\\u30FC"
                       "=\\uFF71|\\u30FC=\\u30AB|\\u30FC=\\uFF76|\\u30FC"
                       "=\\u30AC|\\u30FC=\\u30B5|\\u30FC=\\uFF7B|\\u30FC"
                       "=\\u30B6|\\u30FC=\\u30BF|\\u30FC=\\uFF80|\\u30FC"
                       "=\\u30C0|\\u30FC=\\u30CA|\\u30FC=\\uFF85|\\u30FC"
                       "=\\u30CF|\\u30FC=\\uFF8A|\\u30FC=\\u31F5|\\u30FC"
                       "=\\u30D0|\\u30FC=\\u30D1|\\u30FC=\\u30DE|\\u30FC"
                       "=\\uFF8F|\\u30FC=\\u30E3|\\u30FC=\\uFF6C|\\u30FC"
                       "=\\u30E4|\\u30FC=\\uFF94|\\u30FC=\\u30E9|\\u30FC"
                       "=\\uFF97|\\u30FC=\\u31FB|\\u30FC=\\u30EE|\\u30FC"
                       "=\\u30EF|\\u30FC=\\uFF9C|\\u30FC=\\u30F5|\\u30FC"
                       "=\\u30F7|\\u30FC"
  "&[before 3]\\u3043 <<<\\u3043|\\u30FC=\\u3044|\\u30FC=\\u304D|\\u30FC"
                       "=\\u304E|\\u30FC=\\u3057|\\u30FC=\\u3058|\\u30FC"
                       "=\\u3061|\\u30FC=\\u3062|\\u30FC=\\u306B|\\u30FC"
                       "=\\u3072|\\u30FC=\\u3073|\\u30FC=\\u3074|\\u30FC"
                       "=\\u307F|\\u30FC=\\u308A|\\u30FC=\\u3090|\\u30FC"
                    "<<<<\\u30A3|\\u30FC=\\uFF68|\\u30FC=\\u30A4|\\u30FC"
                       "=\\uFF72|\\u30FC=\\u30AD|\\u30FC=\\uFF77|\\u30FC"
                       "=\\u30AE|\\u30FC=\\u30B7|\\u30FC=\\uFF7C|\\u30FC"
                       "=\\u31F1|\\u30FC=\\u30B8|\\u30FC=\\u30C1|\\u30FC"
                       "=\\uFF81|\\u30FC=\\u30C2|\\u30FC=\\u30CB|\\u30FC"
                       "=\\uFF86|\\u30FC=\\u30D2|\\u30FC=\\uFF8B|\\u30FC"
                       "=\\u31F6|\\u30FC=\\u30D3|\\u30FC=\\u30D4|\\u30FC"
                       "=\\u30DF|\\u30FC=\\uFF90|\\u30FC=\\u30EA|\\u30FC"
                       "=\\uFF98|\\u30FC=\\u31FC|\\u30FC=\\u30F0|\\u30FC"
                       "=\\u30F8|\\u30FC"
  "&[before 3]\\u3045 <<<\\u3045|\\u30FC=\\u3046|\\u30FC=\\u304F|\\u30FC"
                       "=\\u3050|\\u30FC=\\u3059|\\u30FC=\\u305A|\\u30FC"
                       "=\\u3063|\\u30FC=\\u3064|\\u30FC=\\u3065|\\u30FC"
                       "=\\u306C|\\u30FC=\\u3075|\\u30FC=\\u3076|\\u30FC"
                       "=\\u3077|\\u30FC=\\u3080|\\u30FC=\\u3085|\\u30FC"
                       "=\\u3086|\\u30FC=\\u308B|\\u30FC=\\u3094|\\u30FC"
                    "<<<<\\u30A5|\\u30FC=\\uFF69|\\u30FC=\\u30A6|\\u30FC"
                       "=\\uFF73|\\u30FC=\\u30AF|\\u30FC=\\uFF78|\\u30FC"
                       "=\\u31F0|\\u30FC=\\u30B0|\\u30FC=\\u30B9|\\u30FC"
                       "=\\uFF7D|\\u30FC=\\u31F2|\\u30FC=\\u30BA|\\u30FC"
                       "=\\u30C3|\\u30FC=\\uFF6F|\\u30FC=\\u30C4|\\u30FC"
                       "=\\uFF82|\\u30FC=\\u30C5|\\u30FC=\\u30CC|\\u30FC"
                       "=\\uFF87|\\u30FC=\\u31F4|\\u30FC=\\u30D5|\\u30FC"
                       "=\\uFF8C|\\u30FC=\\u31F7|\\u30FC=\\u30D6|\\u30FC"
                       "=\\u30D7|\\u30FC=\\u30E0|\\u30FC=\\uFF91|\\u30FC"
                       "=\\u31FA|\\u30FC=\\u30E5|\\u30FC=\\uFF6D|\\u30FC"
                       "=\\u30E6|\\u30FC=\\uFF95|\\u30FC=\\u30EB|\\u30FC"
                       "=\\uFF99|\\u30FC=\\u31FD|\\u30FC=\\u30F4|\\u30FC"
  "&[before 3]\\u3047 <<<\\u3047|\\u30FC=\\u3048|\\u30FC=\\u3051|\\u30FC"
                       "=\\u3096|\\u30FC=\\u3052|\\u30FC=\\u305B|\\u30FC"
                       "=\\u305C|\\u30FC=\\u3066|\\u30FC=\\u3067|\\u30FC"
                       "=\\u306D|\\u30FC=\\u3078|\\u30FC=\\u3079|\\u30FC"
                       "=\\u307A|\\u30FC=\\u3081|\\u30FC=\\u308C|\\u30FC"
                       "=\\u3091|\\u30FC"
                    "<<<<\\u30A7|\\u30FC=\\uFF6A|\\u30FC=\\u30A8|\\u30FC"
                       "=\\uFF74|\\u30FC=\\u30B1|\\u30FC=\\uFF79|\\u30FC"
                       "=\\u30B2|\\u30FC=\\u30BB|\\u30FC=\\uFF7E|\\u30FC"
                       "=\\u30BC|\\u30FC=\\u30C6|\\u30FC=\\uFF83|\\u30FC"
                       "=\\u30C7|\\u30FC=\\u30CD|\\u30FC=\\uFF88|\\u30FC"
                       "=\\u30D8|\\u30FC=\\uFF8D|\\u30FC=\\u31F8|\\u30FC"
                       "=\\u30D9|\\u30FC=\\u30DA|\\u30FC=\\u30E1|\\u30FC"
                       "=\\uFF92|\\u30FC=\\u30EC|\\u30FC=\\uFF9A|\\u30FC"
                       "=\\u31FE|\\u30FC=\\u30F1|\\u30FC=\\u30F6|\\u30FC"
                       "=\\u30F9|\\u30FC"
  "&[before 3]\\u3049 <<<\\u3049|\\u30FC=\\u304A|\\u30FC=\\u3053|\\u30FC"
                       "=\\u3054|\\u30FC=\\u305D|\\u30FC=\\u305E|\\u30FC"
                       "=\\u3068|\\u30FC=\\u3069|\\u30FC=\\u306E|\\u30FC"
                       "=\\u307B|\\u30FC=\\u307C|\\u30FC=\\u307D|\\u30FC"
                       "=\\u3082|\\u30FC=\\u3087|\\u30FC=\\u3088|\\u30FC"
                       "=\\u308D|\\u30FC=\\u3092|\\u30FC"
                    "<<<<\\u30A9|\\u30FC=\\uFF6B|\\u30FC=\\u30AA|\\u30FC"
                       "=\\uFF75|\\u30FC=\\u30B3|\\u30FC=\\uFF7A|\\u30FC"
                       "=\\u30B4|\\u30FC=\\u30BD|\\u30FC=\\uFF7F|\\u30FC"
                       "=\\u30BE|\\u30FC=\\u30C8|\\u30FC=\\uFF84|\\u30FC"
                       "=\\u31F3|\\u30FC=\\u30C9|\\u30FC=\\u30CE|\\u30FC"
                       "=\\uFF89|\\u30FC=\\u30DB|\\u30FC=\\uFF8E|\\u30FC"
                       "=\\u31F9|\\u30FC=\\u30DC|\\u30FC=\\u30DD|\\u30FC"
                       "=\\u30E2|\\u30FC=\\uFF93|\\u30FC=\\u30E7|\\u30FC"
                       "=\\uFF6E|\\u30FC=\\u30E8|\\u30FC=\\uFF96|\\u30FC"
                       "=\\u30ED|\\u30FC=\\uFF9B|\\u30FC=\\u31FF|\\u30FC"
                       "=\\u30F2|\\u30FC=\\uFF66|\\u30FC=\\u30FA|\\u30FC"
  "&[before 3]\\u3042 <<<\\u3042|\\u309D=\\u3041|\\u309D"
                    "<<<<\\u30A2|\\u30FD=\\uFF71|\\u30FD=\\u30A1|\\u30FD"
                       "=\\uFF67|\\u30FD"
  "&[before 3]\\u3044 <<<\\u3044|\\u309D=\\u3043|\\u309D"
                    "<<<<\\u30A4|\\u30FD=\\uFF72|\\u30FD=\\u30A3|\\u30FD"
                       "=\\uFF68|\\u30FD"
  "&[before 3]\\u3046 <<<\\u3046|\\u309D=\\u3045|\\u309D=\\u3094|\\u309D"
                       "=\\u3046|\\u309E/\\u3099"
                       "=\\u3045|\\u309E/\\u3099"
                       "=\\u3094|\\u309E/\\u3099"
                    "<<<<\\u30A6|\\u30FD=\\uFF73|\\u30FD=\\u30A5|\\u30FD"
                       "=\\uFF69|\\u30FD=\\u30F4|\\u30FD"
                       "=\\u30A6|\\u30FE/\\u3099"
                       "=\\uFF73|\\u30FE/\\u3099"
                       "=\\u30A5|\\u30FE/\\u3099"
                       "=\\uFF69|\\u30FE/\\u3099"
                       "=\\u30F4|\\u30FE/\\u3099"
  "&[before 3]\\u3048 <<<\\u3048|\\u309D=\\u3047|\\u309D"
                    "<<<<\\u30A8|\\u30FD=\\uFF74|\\u30FD=\\u30A7|\\u30FD"
                       "=\\uFF6A|\\u30FD"
  "&[before 3]\\u304A <<<\\u304A|\\u309D=\\u3049|\\u309D"
                    "<<<<\\u30AA|\\u30FD=\\uFF75|\\u30FD=\\u30A9|\\u30FD"
                       "=\\uFF6B|\\u30FD"
  "&[before 3]\\u304B <<<\\u304B|\\u309D=\\u3095|\\u309D"
                    "<<<<\\u30AB|\\u30FD=\\uFF76|\\u30FD=\\u30F5|\\u30FD"
  "&[before 3]\\u304C <<<\\u304C|\\u309D <<<<\\u30AC|\\u30FD"
  "&[before 3]\\u304D <<<\\u304D|\\u309D=\\u304E|\\u309D"
                       "=\\u304D|\\u309E/\\u3099"
                       "=\\u304E|\\u309E/\\u3099"
                    "<<<<\\u30AD|\\u30FD=\\uFF77|\\u30FD=\\u30AE|\\u30FD"
                       "=\\u30AD|\\u30FE/\\u3099"
                       "=\\uFF77|\\u30FE/\\u3099"
                       "=\\u30AE|\\u30FE/\\u3099"
  "&[before 3]\\u304F <<<\\u304F|\\u309D=\\u3050|\\u309D"
                       "=\\u304F|\\u309E/\\u3099"
                       "=\\u3050|\\u309E/\\u3099"
                    "<<<<\\u30AF|\\u30FD=\\uFF78|\\u30FD=\\u31F0|\\u30FD"
                       "=\\u30B0|\\u30FD=\\u30AF|\\u30FE/\\u3099"
                       "=\\uFF78|\\u30FE/\\u3099"
                       "=\\u31F0|\\u30FE/\\u3099"
                       "=\\u30B0|\\u30FE/\\u3099"
  "&[before 3]\\u3051 <<<\\u3051|\\u309D=\\u3096|\\u309D"
                    "<<<<\\u30B1|\\u30FD=\\uFF79|\\u30FD=\\u30F6|\\u30FD"
  "&[before 3]\\u3052 <<<\\u3052|\\u309D <<<<\\u30B2|\\u30FD"
  "&[before 3]\\u3053 <<<\\u3053|\\u309D=\\u3054|\\u309D"
                       "=\\u3053|\\u309E/\\u3099"
                       "=\\u3054|\\u309E/\\u3099"
                    "<<<<\\u30B3|\\u30FD=\\uFF7A|\\u30FD=\\u30B4|\\u30FD"
                       "=\\u30B3|\\u30FE/\\u3099"
                       "=\\uFF7A|\\u30FE/\\u3099"
                       "=\\u30B4|\\u30FE/\\u3099"
  "&[before 3]\\u3055 <<<\\u3055|\\u309D=\\u3056|\\u309D"
                       "=\\u3055|\\u309E/\\u3099"
                       "=\\u3056|\\u309E/\\u3099"
                    "<<<<\\u30B5|\\u30FD=\\uFF7B|\\u30FD=\\u30B6|\\u30FD"
                       "=\\u30B5|\\u30FE/\\u3099"
                       "=\\uFF7B|\\u30FE/\\u3099"
                       "=\\u30B6|\\u30FE/\\u3099"
  "&[before 3]\\u3057 <<<\\u3057|\\u309D=\\u3058|\\u309D"
                       "=\\u3057|\\u309E/\\u3099"
                       "=\\u3058|\\u309E/\\u3099"
                    "<<<<\\u30B7|\\u30FD=\\uFF7C|\\u30FD=\\u31F1|\\u30FD"
                       "=\\u30B8|\\u30FD=\\u30B7|\\u30FE/\\u3099"
                       "=\\uFF7C|\\u30FE/\\u3099"
                       "=\\u31F1|\\u30FE/\\u3099"
                       "=\\u30B8|\\u30FE/\\u3099"
  "&[before 3]\\u3059 <<<\\u3059|\\u309D=\\u305A|\\u309D"
                       "=\\u3059|\\u309E/\\u3099"
                       "=\\u305A|\\u309E/\\u3099"
                    "<<<<\\u30B9|\\u30FD=\\uFF7D|\\u30FD=\\u31F2|\\u30FD"
                       "=\\u30BA|\\u30FD=\\u30B9|\\u30FE/\\u3099"
                       "=\\uFF7D|\\u30FE/\\u3099"
                       "=\\u31F2|\\u30FE/\\u3099"
                       "=\\u30BA|\\u30FE/\\u3099"
  "&[before 3]\\u305B <<<\\u305B|\\u309D=\\u305C|\\u309D"
                       "=\\u305B|\\u309E/\\u3099"
                       "=\\u305C|\\u309E/\\u3099"
                    "<<<<\\u30BB|\\u30FD=\\uFF7E|\\u30FD=\\u30BC|\\u30FD"
                       "=\\u30BB|\\u30FE/\\u3099"
                       "=\\uFF7E|\\u30FE/\\u3099"
                       "=\\u30BC|\\u30FE/\\u3099"
  "&[before 3]\\u305D <<<\\u305D|\\u309D=\\u305E|\\u309D"
                       "=\\u305D|\\u309E/\\u3099"
                       "=\\u305E|\\u309E/\\u3099"
                    "<<<<\\u30BD|\\u30FD=\\uFF7F|\\u30FD=\\u30BE|\\u30FD"
                       "=\\u30BD|\\u30FE/\\u3099"
                       "=\\uFF7F|\\u30FE/\\u3099"
                       "=\\u30BE|\\u30FE/\\u3099"
  "&[before 3]\\u305F <<<\\u305F|\\u309D=\\u3060|\\u309D"
                       "=\\u305F|\\u309E/\\u3099"
                       "=\\u3060|\\u309E/\\u3099"
                    "<<<<\\u30BF|\\u30FD=\\uFF80|\\u30FD=\\u30C0|\\u30FD"
                       "=\\u30BF|\\u30FE/\\u3099"
                       "=\\uFF80|\\u30FE/\\u3099"
                       "=\\u30C0|\\u30FE/\\u3099"
  "&[before 3]\\u3061 <<<\\u3061|\\u309D=\\u3062|\\u309D"
                       "=\\u3061|\\u309E/\\u3099"
                       "=\\u3062|\\u309E/\\u3099"
                    "<<<<\\u30C1|\\u30FD=\\uFF81|\\u30FD=\\u30C2|\\u30FD"
                       "=\\u30C1|\\u30FE/\\u3099"
                       "=\\uFF81|\\u30FE/\\u3099"
                       "=\\u30C2|\\u30FE/\\u3099"
  "&[before 3]\\u3064 <<<\\u3064|\\u309D=\\u3063|\\u309D=\\u3065|\\u309D"
                       "=\\u3064|\\u309E/\\u3099"
                       "=\\u3065|\\u309E/\\u3099"
                       "=\\u3064|\\u309D=\\u3063|\\u309E/\\u3099"
                       "=\\u3064|\\u309E/\\u3099"
                    "<<<<\\u30C4|\\u30FD=\\uFF82|\\u30FD=\\u30C3|\\u30FD"
                       "=\\uFF6F|\\u30FD=\\u30C5|\\u30FD"
                       "=\\u30C4|\\u30FE/\\u3099"
                       "=\\uFF82|\\u30FE/\\u3099"
                       "=\\u30C5|\\u30FE/\\u3099=\\u30C4|\\u30FD"
                       "=\\uFF82|\\u30FD=\\u30C3|\\u30FE/\\u3099"
                       "=\\uFF6F|\\u30FE/\\u3099"
                       "=\\u30C4|\\u30FE/\\u3099"
                       "=\\uFF82|\\u30FE/\\u3099"
  "&[before 3]\\u3066 <<<\\u3066|\\u309D=\\u3067|\\u309D"
                       "=\\u3066|\\u309E/\\u3099"
                       "=\\u3067|\\u309E/\\u3099"
                    "<<<<\\u30C6|\\u30FD=\\uFF83|\\u30FD=\\u30C7|\\u30FD"
                       "=\\u30C6|\\u30FE/\\u3099"
                       "=\\uFF83|\\u30FE/\\u3099"
                       "=\\u30C7|\\u30FE/\\u3099"
  "&[before 3]\\u3068 <<<\\u3068|\\u309D=\\u3069|\\u309D"
                       "=\\u3068|\\u309E/\\u3099"
                       "=\\u3069|\\u309E/\\u3099"
                    "<<<<\\u30C8|\\u30FD=\\uFF84|\\u30FD=\\u31F3|\\u30FD"
                       "=\\u30C9|\\u30FD=\\u30C8|\\u30FE/\\u3099"
                       "=\\uFF84|\\u30FE/\\u3099"
                       "=\\u31F3|\\u30FE/\\u3099"
                       "=\\u30C9|\\u30FE/\\u3099"
  "&[before 3]\\u306A <<<\\u306A|\\u309D <<<<\\u30CA|\\u30FD=\\uFF85|\\u30FD"
  "&[before 3]\\u306B <<<\\u306B|\\u309D <<<<\\u30CB|\\u30FD=\\uFF86|\\u30FD"
  "&[before 3]\\u306C <<<\\u306C|\\u309D <<<<\\u30CC|\\u30FD=\\uFF87|\\u30FD"
                       "=\\u31F4|\\u30FD"
  "&[before 3]\\u306D <<<\\u306D|\\u309D <<<<\\u30CD|\\u30FD=\\uFF88|\\u30FD"
  "&[before 3]\\u306E <<<\\u306E|\\u309D <<<<\\u30CE|\\u30FD=\\uFF89|\\u30FD"
  "&[before 3]\\u306F <<<\\u306F|\\u309D=\\u3070|\\u309D"
                       "=\\u306F|\\u309E/\\u3099"
                       "=\\u3070|\\u309E/\\u3099"
                       "=\\u3071|\\u309D=\\u3071|\\u309E/\\u3099"
                    "<<<<\\u30CF|\\u30FD=\\uFF8A|\\u30FD=\\u31F5|\\u30FD"
                       "=\\u30D0|\\u30FD=\\u30CF|\\u30FE/\\u3099"
                       "=\\uFF8A|\\u30FE/\\u3099"
                       "=\\u31F5|\\u30FE/\\u3099"
                       "=\\u30D0|\\u30FE/\\u3099=\\u30D1|\\u30FD"
                       "=\\u30D1|\\u30FE/\\u3099"
  "&[before 3]\\u3072 <<<\\u3072|\\u309D=\\u3073|\\u309D"
                       "=\\u3072|\\u309E/\\u3099"
                       "=\\u3073|\\u309E/\\u3099"
                       "=\\u3074|\\u309D=\\u3074|\\u309E/\\u3099"
                    "<<<<\\u30D2|\\u30FD=\\uFF8B|\\u30FD=\\u31F6|\\u30FD"
                       "=\\u30D3|\\u30FD=\\u30D2|\\u30FE/\\u3099"
                       "=\\uFF8B|\\u30FE/\\u3099"
                       "=\\u31F6|\\u30FE/\\u3099"
                       "=\\u30D3|\\u30FE/\\u3099=\\u30D4|\\u30FD"
                       "=\\u30D4|\\u30FE/\\u3099"
  "&[before 3]\\u3075 <<<\\u3075|\\u309D=\\u3076|\\u309D"
                       "=\\u3075|\\u309E/\\u3099"
                       "=\\u3076|\\u309E/\\u3099"
                       "=\\u3077|\\u309D=\\u3077|\\u309E/\\u3099"
                    "<<<<\\u30D5|\\u30FD=\\uFF8C|\\u30FD=\\u31F7|\\u30FD"
                       "=\\u30D6|\\u30FD=\\u30D5|\\u30FE/\\u3099"
                       "=\\uFF8C|\\u30FE/\\u3099"
                       "=\\u31F7|\\u30FE/\\u3099"
                       "=\\u30D6|\\u30FE/\\u3099=\\u30D7|\\u30FD"
                       "=\\u30D7|\\u30FE/\\u3099"
  "&[before 3]\\u3078 <<<\\u3078|\\u309D=\\u3079|\\u309D"
                       "=\\u3078|\\u309E/\\u3099"
                       "=\\u3079|\\u309E/\\u3099"
                       "=\\u307A|\\u309D=\\u307A|\\u309E/\\u3099"
                    "<<<<\\u30D8|\\u30FD=\\uFF8D|\\u30FD=\\u31F8|\\u30FD"
                       "=\\u30D9|\\u30FD=\\u30D8|\\u30FE/\\u3099"
                       "=\\uFF8D|\\u30FE/\\u3099"
                       "=\\u31F8|\\u30FE/\\u3099"
                       "=\\u30D9|\\u30FE/\\u3099=\\u30DA|\\u30FD"
                       "=\\u30DA|\\u30FE/\\u3099"
  "&[before 3]\\u307B <<<\\u307B|\\u309D=\\u307C|\\u309D"
                       "=\\u307B|\\u309E/\\u3099"
                       "=\\u307C|\\u309E/\\u3099"
                       "=\\u307D|\\u309D=\\u307D|\\u309E/\\u3099"
                    "<<<<\\u30DB|\\u30FD=\\uFF8E|\\u30FD=\\u31F9|\\u30FD"
                       "=\\u30DC|\\u30FD=\\u30DB|\\u30FE/\\u3099"
                       "=\\uFF8E|\\u30FE/\\u3099"
                       "=\\u31F9|\\u30FE/\\u3099"
                       "=\\u30DC|\\u30FE/\\u3099=\\u30DD|\\u30FD"
                       "=\\u30DD|\\u30FE/\\u3099"
  "&[before 3]\\u307E <<<\\u307E|\\u309D <<<<\\u30DE|\\u30FD=\\uFF8F|\\u30FD"
  "&[before 3]\\u307F <<<\\u307F|\\u309D <<<<\\u30DF|\\u30FD=\\uFF90|\\u30FD"
  "&[before 3]\\u3080 <<<\\u3080|\\u309D <<<<\\u30E0|\\u30FD=\\uFF91|\\u30FD"
                       "=\\u31FA|\\u30FD"
  "&[before 3]\\u3081 <<<\\u3081|\\u309D <<<<\\u30E1|\\u30FD=\\uFF92|\\u30FD"
  "&[before 3]\\u3082 <<<\\u3082|\\u309D <<<<\\u30E2|\\u30FD=\\uFF93|\\u30FD"
  "&[before 3]\\u3084 <<<\\u3084|\\u309D=\\u3083|\\u309D <<<<\\u30E4|\\u30FD"
                       "=\\uFF94|\\u30FD=\\u30E3|\\u30FD=\\uFF6C|\\u30FD"
  "&[before 3]\\u3086 <<<\\u3086|\\u309D=\\u3085|\\u309D <<<<\\u30E6|\\u30FD"
                       "=\\uFF95|\\u30FD=\\u30E5|\\u30FD=\\uFF6D|\\u30FD"
  "&[before 3]\\u3088 <<<\\u3088|\\u309D=\\u3087|\\u309D <<<<\\u30E8|\\u30FD"
                       "=\\uFF96|\\u30FD=\\u30E7|\\u30FD=\\uFF6E|\\u30FD"
  "&[before 3]\\u3089 <<<\\u3089|\\u309D <<<<\\u30E9|\\u30FD=\\uFF97|\\u30FD"
                       "=\\u31FB|\\u30FD"
  "&[before 3]\\u308A <<<\\u308A|\\u309D <<<<\\u30EA|\\u30FD=\\uFF98|\\u30FD"
                       "=\\u31FC|\\u30FD"
  "&[before 3]\\u308B <<<\\u308B|\\u309D <<<<\\u30EB|\\u30FD=\\uFF99|\\u30FD"
                       "=\\u31FD|\\u30FD"
  "&[before 3]\\u308C <<<\\u308C|\\u309D <<<<\\u30EC|\\u30FD=\\uFF9A|\\u30FD"
                       "=\\u31FE|\\u30FD"
  "&[before 3]\\u308D <<<\\u308D|\\u309D <<<<\\u30ED|\\u30FD=\\uFF9B|\\u30FD"
                       "=\\u31FF|\\u30FD"
  "&[before 3]\\u308F <<<\\u308F|\\u309D=\\u308E|\\u309D"
                       "=\\u308F|\\u309E/\\u3099"
                       "=\\u308E|\\u309E/\\u3099"
                    "<<<<\\u30EF|\\u30FD=\\uFF9C|\\u30FD=\\u30EE|\\u30FD"
                       "=\\u30F7|\\u30FD=\\u30EF|\\u30FE/\\u3099"
                       "=\\uFF9C|\\u30FE/\\u3099"
                       "=\\u30F7|\\u30FE/\\u3099"
                       "=\\u30EE|\\u30FE/\\u3099"
  "&[before 3]\\u3090 <<<\\u3090|\\u309D=\\u3090|\\u309E/\\u3099"
                    "<<<<\\u30F0|\\u30FD=\\u30F8|\\u30FD"
                       "=\\u30F0|\\u30FE/\\u3099"
                       "=\\u30F8|\\u30FE/\\u3099"
  "&[before 3]\\u3091 <<<\\u3091|\\u309D=\\u3091|\\u309E/\\u3099"
                    "<<<<\\u30F1|\\u30FD=\\u30F9|\\u30FD"
                       "=\\u30F1|\\u30FE/\\u3099"
                       "=\\u30F9|\\u30FE/\\u3099"
  "&[before 3]\\u3092 <<<\\u3092|\\u309D=\\u3092|\\u309E/\\u3099"
                    "<<<<\\u30F2|\\u30FD=\\uFF66|\\u30FD=\\u30FA|\\u30FD"
                       "=\\u30F2|\\u30FE/\\u3099"
                       "=\\uFF66|\\u30FE/\\u3099"
                       "=\\u30FA|\\u30FE/\\u3099"
  "&[before 3]\\u3093 <<<\\u3093|\\u309D <<<<\\u30F3|\\u30FD=\\uFF9D|\\u30FD"
  "&\\u3041 <<<<\\u30A1=\\uFF67"
  "&\\u3042 <<<<\\u30A2=\\uFF71"
  "&\\u3043 <<<<\\u30A3=\\uFF68"
  "&\\u3044 <<<<\\u30A4=\\uFF72"
  "&\\u3045 <<<<\\u30A5=\\uFF69"
  "&\\u3046 <<<<\\u30A6=\\uFF73"
  "&\\u3047 <<<<\\u30A7=\\uFF6A"
  "&\\u3048 <<<<\\u30A8=\\uFF74"
  "&\\u3049 <<<<\\u30A9=\\uFF6B"
  "&\\u304A <<<<\\u30AA=\\uFF75"
  "&\\u304B <<<<\\u30AB=\\uFF76"
  "&\\u304D <<<<\\u30AD=\\uFF77"
  "&\\u304F <<<<\\u30AF=\\uFF78"
  "&\\u3051 <<<<\\u30B1=\\uFF79"
  "&\\u3053 <<<<\\u30B3=\\uFF7A"
  "&\\u3055 <<<<\\u30B5=\\uFF7B"
  "&\\u3057 <<<<\\u30B7=\\uFF7C"
  "&\\u3059 <<<<\\u30B9=\\uFF7D"
  "&\\u305B <<<<\\u30BB=\\uFF7E"
  "&\\u305D <<<<\\u30BD=\\uFF7F"
  "&\\u305F <<<<\\u30BF=\\uFF80"
  "&\\u3061 <<<<\\u30C1=\\uFF81"
  "&\\u3063 <<<<\\u30C3=\\uFF6F"
  "&\\u3064 <<<<\\u30C4=\\uFF82"
  "&\\u3066 <<<<\\u30C6=\\uFF83"
  "&\\u3068 <<<<\\u30C8=\\uFF84"
  "&\\u306A <<<<\\u30CA=\\uFF85"
  "&\\u306B <<<<\\u30CB=\\uFF86"
  "&\\u306C <<<<\\u30CC=\\uFF87"
  "&\\u306D <<<<\\u30CD=\\uFF88"
  "&\\u306E <<<<\\u30CE=\\uFF89"
  "&\\u306F <<<<\\u30CF=\\uFF8A"
  "&\\u3072 <<<<\\u30D2=\\uFF8B"
  "&\\u3075 <<<<\\u30D5=\\uFF8C"
  "&\\u3078 <<<<\\u30D8=\\uFF8D"
  "&\\u307B <<<<\\u30DB=\\uFF8E"
  "&\\u307E <<<<\\u30DE=\\uFF8F"
  "&\\u307F <<<<\\u30DF=\\uFF90"
  "&\\u3080 <<<<\\u30E0=\\uFF91"
  "&\\u3081 <<<<\\u30E1=\\uFF92"
  "&\\u3082 <<<<\\u30E2=\\uFF93"
  "&\\u3083 <<<<\\u30E3=\\uFF6C"
  "&\\u3084 <<<<\\u30E4=\\uFF94"
  "&\\u3085 <<<<\\u30E5=\\uFF6D"
  "&\\u3086 <<<<\\u30E6=\\uFF95"
  "&\\u3087 <<<<\\u30E7=\\uFF6E"
  "&\\u3088 <<<<\\u30E8=\\uFF96"
  "&\\u3089 <<<<\\u30E9=\\uFF97"
  "&\\u308A <<<<\\u30EA=\\uFF98"
  "&\\u308B <<<<\\u30EB=\\uFF99"
  "&\\u308C <<<<\\u30EC=\\uFF9A"
  "&\\u308D <<<<\\u30ED=\\uFF9B"
  "&\\u308E <<<<\\u30EE"
  "&\\u308F <<<<\\u30EF=\\uFF9C"
  "&\\u3090 <<<<\\u30F0"
  "&\\u3091 <<<<\\u30F1"
  "&\\u3092 <<<<\\u30F2=\\uFF66"
  "&\\u3093 <<<<\\u30F3=\\uFF9D"
  "&\\u3095 <<<<\\u30F5"
  "&\\u3096 <<<<\\u30F6"
  "&\\u3088\\u308A <<\\u309F"
  "&\\u30B3\\u30C8 <<\\u30FF"
  "&\\u0020=\\u3000=\\uFFE3"
  "&\\u0021=\\uFF01"
  "&\\u0022=\\uFF02"
  "&\\u0023=\\uFF03"
  "&\\u0024=\\uFF04"
  "&\\u0025=\\uFF05"
  "&\\u0026=\\uFF06"
  "&\\u0027=\\uFF07"
  "&\\u0028=\\uFF08"
  "&\\u0029=\\uFF09"
  "&\\u002A=\\uFF0A"
  "&\\u002B=\\uFF0B"
  "&\\u002C=\\uFF0C"
  "&\\u002D=\\uFF0D"
  "&\\u002E=\\uFF0E"
  "&\\u002F=\\uFF0F"
  "&0=\\uFF10"
  "&1=\\uFF11"
  "&2=\\uFF12"
  "&3=\\uFF13"
  "&4=\\uFF14"
  "&5=\\uFF15"
  "&6=\\uFF16"
  "&7=\\uFF17"
  "&8=\\uFF18"
  "&9=\\uFF19"
  "&\\u003A=\\uFF1A"
  "&\\u003B=\\uFF1B"
  "&\\u003C=\\uFF1C"
  "&\\u003D=\\uFF1D"
  "&\\u003E=\\uFF1E"
  "&\\u003F=\\uFF1F"
  "&\\u0040=\\uFF20"
  "&A=\\uFF21"
  "&B=\\uFF22"
  "&C=\\uFF23"
  "&D=\\uFF24"
  "&E=\\uFF25"
  "&F=\\uFF26"
  "&G=\\uFF27"
  "&H=\\uFF28"
  "&I=\\uFF29"
  "&J=\\uFF2A"
  "&K=\\uFF2B"
  "&L=\\uFF2C"
  "&M=\\uFF2D"
  "&N=\\uFF2E"
  "&O=\\uFF2F"
  "&P=\\uFF30"
  "&Q=\\uFF31"
  "&R=\\uFF32"
  "&S=\\uFF33"
  "&T=\\uFF34"
  "&U=\\uFF35"
  "&V=\\uFF36"
  "&W=\\uFF37"
  "&X=\\uFF38"
  "&Y=\\uFF39"
  "&Z=\\uFF3A"
  "&\\u005B=\\uFF3B"
  "&\\u005C=\\uFF3C "
  "&\\u005D=\\uFF3D"
  "&\\u005E=\\uFF3E"
  "&\\u005F=\\uFF3F"
  "&\\u0060=\\uFF40"
  "&a=\\uFF41"
  "&b=\\uFF42"
  "&c=\\uFF43"
  "&d=\\uFF44"
  "&e=\\uFF45"
  "&f=\\uFF46"
  "&g=\\uFF47"
  "&h=\\uFF48"
  "&i=\\uFF49"
  "&j=\\uFF4A"
  "&k=\\uFF4B"
  "&l=\\uFF4C"
  "&m=\\uFF4D"
  "&n=\\uFF4E"
  "&o=\\uFF4F"
  "&p=\\uFF50"
  "&q=\\uFF51"
  "&r=\\uFF52"
  "&s=\\uFF53"
  "&t=\\uFF54"
  "&u=\\uFF55"
  "&v=\\uFF56"
  "&w=\\uFF57"
  "&x=\\uFF58"
  "&y=\\uFF59"
  "&z=\\uFF5A"
  "&\\u007B=\\uFF5B"
  "&\\u007C=\\uFF5C"
  "&\\u007D=\\uFF5D"
  "&\\u007E=\\uFF5E"
  "&\\u00A2=\\uFFE0"
  "&\\u00A3=\\uFFE1"
  "&\\u00A5=\\uFFE5"
  "&\\u00A6=\\uFFE4"
  "&\\u00AC=\\uFFE2"
  "&\\u1100=\\uFFA1=\\u3131"
  "&\\u1101=\\uFFA2=\\u3132"
  "&\\u1102=\\uFFA4=\\u3134"
  "&\\u1103=\\uFFA7=\\u3137"
  "&\\u1104=\\uFFA8=\\u3138"
  "&\\u1105=\\uFFA9=\\u3139"
  "&\\u1106=\\uFFB1=\\u3141"
  "&\\u1107=\\uFFB2=\\u3142"
  "&\\u1108=\\uFFB3=\\u3143"
  "&\\u1109=\\uFFB5=\\u3145"
  "&\\u110A=\\uFFB6=\\u3146"
  "&\\u110B=\\uFFB7=\\u3147"
  "&\\u110C=\\uFFB8=\\u3148"
  "&\\u110D=\\uFFB9=\\u3149"
  "&\\u110E=\\uFFBA=\\u314A"
  "&\\u110F=\\uFFBB=\\u314B"
  "&\\u1110=\\uFFBC=\\u314C"
  "&\\u1111=\\uFFBD=\\u314D"
  "&\\u1112=\\uFFBE=\\u314E"
  "&\\u111A=\\uFFB0=\\u3140"
  "&\\u1121=\\uFFB4=\\u3144"
  "&\\u1160=\\uFFA0=\\u3164"
  "&\\u1161=\\uFFC2=\\u314F"
  "&\\u1162=\\uFFC3=\\u3150"
  "&\\u1163=\\uFFC4=\\u3151"
  "&\\u1164=\\uFFC5=\\u3152"
  "&\\u1165=\\uFFC6=\\u3153"
  "&\\u1166=\\uFFC7=\\u3154"
  "&\\u1167=\\uFFCA=\\u3155"
  "&\\u1168=\\uFFCB=\\u3156"
  "&\\u1169=\\uFFCC=\\u3157"
  "&\\u116A=\\uFFCD=\\u3158"
  "&\\u116B=\\uFFCE=\\u3159"
  "&\\u116C=\\uFFCF=\\u315A"
  "&\\u116D=\\uFFD2=\\u315B"
  "&\\u116E=\\uFFD3=\\u315C"
  "&\\u116F=\\uFFD4=\\u315D"
  "&\\u1170=\\uFFD5=\\u315E"
  "&\\u1171=\\uFFD6=\\u315F"
  "&\\u1172=\\uFFD7=\\u3160"
  "&\\u1173=\\uFFDA=\\u3161"
  "&\\u1174=\\uFFDB=\\u3162"
  "&\\u1175=\\uFFDC=\\u3163"
  "&\\u11AA=\\uFFA3=\\u3133"
  "&\\u11AC=\\uFFA5=\\u3135"
  "&\\u11AD=\\uFFA6=\\u3136"
  "&\\u11B0=\\uFFAA=\\u313A"
  "&\\u11B1=\\uFFAB=\\u313B"
  "&\\u11B2=\\uFFAC=\\u313C"
  "&\\u11B3=\\uFFAD=\\u313D"
  "&\\u11B4=\\uFFAE=\\u313E"
  "&\\u11B5=\\uFFAF=\\u313F"
  "&\\u20A9=\\uFFE6"
  "&\\u2190=\\uFFE9"
  "&\\u2191=\\uFFEA"
  "&\\u2192=\\uFFEB"
  "&\\u2193=\\uFFEC"
  "&\\u2502=\\uFFE8"
  "&\\u25A0=\\uFFED"
  "&\\u25CB=\\uFFEE"
  "&\\u3001=\\uFF64"
  "&\\u3002=\\uFF61"
  "&\\u300C=\\uFF62"
  "&\\u300D=\\uFF63";

/*
  Below variables are defined in separate .cc file, generated by uca9dump at
  build-time for the Japanese collations.
 */
extern uint16 *ja_han_pages[];
extern const int MIN_JA_HAN_PAGE;
extern const int MAX_JA_HAN_PAGE;
#endif
