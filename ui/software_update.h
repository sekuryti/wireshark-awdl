/* software_update.h
 * Wrappers and routines to check for software updates.
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * SPDX-License-Identifier: GPL-2.0-or-later*/

#ifndef __SOFTWARE_UPDATE_H__
#define __SOFTWARE_UPDATE_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/** Initialize software updates.
 *
 * Does nothing on platforms that don't support software updates.
 */
extern void software_update_init(void);

/** Force a software update check.
 *
 * Does nothing on platforms that don't support software updates.
 */
extern void software_update_check(void);

/** Clean up software update checking.
 *
 * Does nothing on platforms that don't support software updates.
 */
extern void software_update_cleanup(void);

/** Check to see if Wireshark can shut down safely (e.g. offer to save the
 *  current capture). Called from a separate thread.
 *
 * Does nothing on platforms that don't support software updates.
 */
extern int software_update_can_shutdown_callback(void);

/** Shut down Wireshark in preparation for an upgrade. Called from a separate
 *  thread.
 *
 * Does nothing on platforms that don't support software updates.
 */
extern void software_update_shutdown_request_callback(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __SOFTWARE_UPDATE_H__ */

/*
 * Editor modelines
 *
 * Local Variables:
 * c-basic-offset: 4
 * tab-width: 8
 * indent-tabs-mode: nil
 * End:
 *
 * ex: set shiftwidth=4 tabstop=8 expandtab:
 * :indentSize=4:tabSize=8:noTabs=true:
 */
