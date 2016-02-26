/* config.h
 *
 * Copyright (C) 2006-2015 wolfSSL Inc.
 *
 * This file is part of wolfSSL. (formerly known as CyaSSL)
 *
 * wolfSSL is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * wolfSSL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef MDK_CONFIG_H__
#define MDK_CONFIG_H__
/**** wolfSSL for KEIL-RL Configuration ****/

#define __CORTEX_M3__
#define FREERTOS

#define NO_WRITEV
#define NO_WOLFSSL_DIR
#define NO_MAIN_DRIVER
#define AMPM_FF
#define WOLFSSL_DER_LOAD
#define HAVE_NULL_CIPHER
#define USER_TIME

static  int ValidateDate(const unsigned char* date, unsigned char format, int dateType){ return 1; }

#if    defined(MDK_CONF_RTX_TCP_FS)
#include "config-RTX-TCP-FS.h"
#elif  defined(MDK_CONF_TCP_FS)
#include "config-TCP-FS.h"
#elif  defined(MDK_CONF_FS)
#include "config-FS.h"
#elif  defined(MDK_CONF_BARE_METAL)
#include "config-BARE-METAL.h"
#elif  defined(MDK_WOLFLIB)
#include "config-WOLFLIB.h"
#endif

#endif
