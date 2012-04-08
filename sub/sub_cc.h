/*
 * This file is part of MPlayer.
 *
 * MPlayer is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * MPlayer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with MPlayer; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef MPLAYER_SUB_CC_H
#define MPLAYER_SUB_CC_H

#include <stdint.h>

extern int subcc_enabled;

void subcc_init(void);
void subcc_reset(void);
void subcc_process_data(const uint8_t *inputdata, unsigned int len);
void subcc_process_eia708(const uint8_t *data, int len);

#endif /* MPLAYER_SUB_CC_H */
