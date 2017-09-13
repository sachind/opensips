/*
 * SNMPStats Module
 * Copyright (C) 2006 SOMA Networks, INC.
 * Written by: Jeffrey Magder (jmagder@somanetworks.com)
 *
 * This file is part of opensips, a free SIP server.
 *
 * opensips is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * opensips is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301
 * USA
 *
 * History:
 * --------
 * 2006-11-23 initial version (jmagder)
 *
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.notify.conf,v 5.3 2004/04/15 12:29:19 dts12 Exp $
 *
 * This file contains function prototypes for sending all traps supported by the
 * SNMPStats module.
 *
 */

#ifndef OPENSERMIBNOTIFICATIONS_H
#define OPENSERMIBNOTIFICATIONS_H


/*
 * Sends off an openserMsgQueueDepthMinorEvent trap to the master agent,
 * assigning the following variable bindings:
 *
 *  - openserMsgQueueDepth          = msgQueueDepth
 *  - openserMsgQueueMinorThreshold = minorThreshold
 *
 */
int send_openserMsgQueueDepthMinorEvent_trap(int msgQueueDepth,
		int minorThreshold);

/*
 * Sends off an openserMsgQueueDepthMajorEvent trap to the master agent,
 * assigning the following variable bindings:
 *
 *  - openserMsgQueueDepth          = msgQueueDepth
 *  - openserMsgQueueMajorThreshold = majorThreshold
 *
 */
int send_openserMsgQueueDepthMajorEvent_trap(int msgQueueDepth,
		int majorThreshold);

/*
 * Sends off an openserDialogLimitMinorEvent trap to the master agent,
 * assigning the following variable bindings:
 *
 *  - openserCurNumDialogs             = numDialogs
 *  - openserDialogLimitMinorThreshold = threshold
 *
 */
int send_openserDialogLimitMinorEvent_trap(int numDialogs, int threshold);

/*
 * Sends off an openserDialogLimitMinorEvent trap to the master agent,
 * assigning the following variable bindings:
 *
 *  - openserCurNumDialogs             = numDialogs
 *  - openserDialogLimitMinorThreshold = threshold
 *
 */
int send_openserDialogLimitMajorEvent_trap(int numDialogs, int threshold);

#endif /* OPENSERMIBNOTIFICATIONS_H */