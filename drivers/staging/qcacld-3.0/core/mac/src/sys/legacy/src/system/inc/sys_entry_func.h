/*
 * Copyright (c) 2011-2012, 2014, 2017 The Linux Foundation. All rights reserved.
 *
 * Previously licensed under the ISC license by Qualcomm Atheros, Inc.
 *
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/*
 * This file was originally distributed by Qualcomm Atheros, Inc.
 * under proprietary terms before Copyright ownership was assigned
 * to the Linux Foundation.
 */

/*
 *
 * This file sys_entry_func.h contains module entry functions definitions
 * Author:      V. K. Kandarpa
 * Date:        04/13/2002
 * History:-
 * Date         Modified by    Modification Information
 * --------------------------------------------------------------------
 */
#ifndef __SYS_ENTRY_FUNC_H
#define __SYS_ENTRY_FUNC_H

#include "ani_global.h"

extern tSirRetStatus sys_init_globals(tpAniSirGlobal);
extern void sysBbtEntry(uint32_t dummy);
extern void sysSchEntry(uint32_t dummy);
extern void sysPmmEntry(uint32_t dummy);
extern void sysDphEntry(uint32_t dummy);
extern void sysLimEntry(uint32_t dummy);
extern void sysMmhEntry(uint32_t dummy);
extern void sysMntEntry(uint32_t dummy);
extern void sysHalEntry(uint32_t dummy);
extern void sysNimPttEntry(uint32_t dummy);

#endif /* __SYS_ENTRY_FUNC_H */
