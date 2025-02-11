/******************************************************************************
 * Language.c
 *
 * Copyright (c) 2020, longpanda <admin@ventoy.net>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 */
 
#include <Windows.h>
#include "Ventoy2Disk.h"
#include "Language.h"

const TCHAR * GetString(enum STR_ID ID)
{
    if (g_cur_lang_data)
    {
        return g_cur_lang_data->MsgString[ID];
    }
    else
    {
        return NULL;
    }
};

static const UINT16 g_unicode_icon[UNICODE_BUTT][3] =
{
    { 0xD83D, 0xDD12, 0x0000 },
};

const UINT16 * GetUnicodeIcon(icon)
{
    return g_unicode_icon[icon];
}
