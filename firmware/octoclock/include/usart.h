/*
 * Copyright 2014 Ettus Research LLC
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
 */

#ifndef _USART_H_
#define _USART_H_

#define USART_BAUDRATE 115200
#define BAUD_PRESCALE 3

void usart_init(void);

char usart_getc(void);

char usart_getc_noblock(void);

void usart_putc(char ch);

void usart_putc_nowait(char ch);

#endif /* _USART_H_ */
