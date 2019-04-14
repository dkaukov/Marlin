/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// 100k Epcos thermistor
const short temptable_6[][2] PROGMEM = {
  { OV(   1), 360 },
  { OV(  25), 260 }, 
  { OV(  28), 254 }, // top rating 250C
  { OV(  31), 248 },
  { OV(  35), 242 },
  { OV(  39), 237 },
  { OV(  42), 233 },
  { OV(  44), 230 },
  { OV(  49), 225 },
  { OV(  53), 221 },
  { OV(  62), 212 },
  { OV(  71), 206 }, // fitted graphically
  { OV(  78), 202 }, // fitted graphically
  { OV(  94), 192 },
  { OV( 102), 189 },
  { OV( 116), 182 },
  { OV( 143), 172 },
  { OV( 183), 160 },
  { OV( 223), 150 },
  { OV( 270), 140 },
  { OV( 318), 131 },
  { OV( 383), 121 },
  { OV( 413), 117 },
  { OV( 439), 113 },
  { OV( 484),  107 },
  { OV( 513),  105 },
  { OV( 607),  91 },
  { OV( 664),  84 },
  { OV( 781),  69 },
  { OV( 810),  64 },
  { OV( 849),  58 },
  { OV( 961),  55 },
  { OV( 914),  45 },
  { OV( 935),  39 },
  { OV( 954),  34 },
  { OV( 970),  25 },
  { OV( 978),  22 },
  { OV(1008),   3 },
  { OV(1023),   0 } // to allow internal 0 degrees C
};
