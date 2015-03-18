#ifndef CONFIG_USB_H
#define CONFIG_USB_H

/** @file
 *
 * USB configuration
 *
 */

FILE_LICENCE ( GPL2_OR_LATER_OR_UBDL );

#include <config/defaults.h>

/*
 * USB host controllers (all enabled by default)
 *
 */
//#undef	USB_HCD_XHCI		/* xHCI USB host controller */

#include <config/named.h>
#include NAMED_CONFIG(usb.h)
#include <config/local/usb.h>
#include LOCAL_NAMED_CONFIG(usb.h)

#endif /* CONFIG_USB_H */
