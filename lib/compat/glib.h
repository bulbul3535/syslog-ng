/*
 * Copyright (c) 2002-2013 Balabit
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * As an additional exemption you are allowed to compile & link against the
 * OpenSSL libraries as published by the OpenSSL project. See the file
 * COPYING for details.
 *
 */
#ifndef COMPAT_GLIB_H_INCLUDED
#define COMPAT_GLIB_H_INCLUDED 1

#include "compat/compat.h"

#define GLIB_DISABLE_DEPRECATION_WARNINGS 1

#include <glib.h>

#if !SYSLOG_NG_HAVE_G_MAPPED_FILE_UNREF
#define g_mapped_file_unref g_mapped_file_free
#endif

#if !SYSLOG_NG_HAVE_G_LIST_COPY_DEEP
GList *g_list_copy_deep (GList *list, GCopyFunc func, gpointer user_data);
#endif

#if !SYSLOG_NG_HAVE_G_QUEUE_FREE_FULL
void g_queue_free_full(GQueue *queue, GDestroyNotify free_func);
#endif

#endif
