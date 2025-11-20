/* Copyright (C) 2025 Frederick Ziola <frederick.ziola@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#include <cwiid.h>
#include <stdio.h>

int main(int argc, char **argv) {
  printf("Searching for wiimote! (press 1+2 now)\n");
  cwiid_wiimote_t *wiimote = cwiid_open(BDADDR_ANY, CWIID_FLAG_NULL);
  if (!wiimote) {
    printf("Failed to open wiimote!\n");
    cwiid_close(wiimote);
    return -1;
  }

  printf("Opened wiimote successfully!");

  cwiid_close(wiimote);
  return 0;
}
