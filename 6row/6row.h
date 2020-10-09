/* Copyright 2020 wren4777
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define _x_ KC_NO

#include "quantum.h"

#define LAYOUT_6row_ansi( \
  K00, K01, K02, K03, K04, K05, K06, K07,           K08,           K09,                K0A,      \
            K10,      K11,      K12,           K13, K14, K15, K16, K17, K18,                     \
  K20, K21, K22, K23, K24, K25,      K26, K27,                     K28, K29,           K2A,      \
       K30, K31, K32, K33, K34, K35, K36,                K37,      K38, K39,           K3A,      \
       K40, K41, K42, K43, K44, K45, K46,           K47, K48, K49, K4A, K4B,           K4C,      \
       K50, K51, K52, K53, K54, K55, K56,                                              K57,      \
       K60, K61, K62, K63, K64, K65, K66, K67,                K68, K69, K6A,           K6B,      \
       K70, K71, K72, K73,           K74,      K75,      K76,      K77,                          \
                                                                             K80, K81,      K82 \
) { \
{ K00, K01, K02, K03, K04, K05, K06, K07, _x_, _x_, K08, _x_, _x_, K09, _x_, _x_, _x_, K0A, _x_ }, \
{ _x_, _x_, K10, _x_, K11, _x_, K12, _x_, _x_, K13, K14, K15, K16, K17, K18, _x_, _x_, _x_, _x_ }, \
{ K20, K21, K22, K23, K24, K25, _x_, K26, K27, _x_, _x_, _x_, _x_, K28, K29, _x_, _x_, K2A, _x_ }, \
{ _x_, K30, K31, K32, K33, K34, K35, K36, _x_, _x_, _x_, K37, _x_, K38, K39, _x_, _x_, K3A, _x_ }, \
{ _x_, K40, K41, K42, K43, K44, K45, K46, _x_, _x_, K47, K48, K49, K4A, K4B, _x_, _x_, K4C, _x_ }, \
{ _x_, K50, K51, K52, K53, K54, K55, K56, _x_, _x_, _x_, _x_, _x_, _x_, _x_, _x_, _x_, K57, _x_ }, \
{ _x_, K60, K61, K62, K63, K64, K65, K66, K67, _x_, _x_, _x_, K68, K69, K6A, _x_, _x_, K6B, _x_ }, \
{ _x_, K70, K71, K72, K73, _x_, _x_, K74, _x_, K75, _x_, K76, _x_, K77, _x_, _x_, _x_, _x_, _x_ }, \
{ _x_, _x_, _x_, _x_, _x_, _x_, _x_, _x_, _x_, _x_, _x_, _x_, _x_, _x_, _x_, K80, K81, _x_, K82} \
}