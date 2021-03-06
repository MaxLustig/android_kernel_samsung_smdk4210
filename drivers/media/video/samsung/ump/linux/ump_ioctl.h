/*
 * Copyright (C) 2010 ARM Limited. All rights reserved.
 * 
 * This program is free software and is provided to you under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation, and any use by you of this program is subject to the terms of such GNU licence.
 * 
 * A copy of the licence is included with the program, and can also be obtained from Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef __UMP_IOCTL_H__
#define __UMP_IOCTL_H__

#ifdef __cplusplus
extern "C"
{
#endif

#include <linux/types.h>
#include <linux/ioctl.h>

#include "../common/ump_uk_types.h"

#ifndef __user
#define __user
#endif


/**
 * @file UMP_ioctl.h
 * This file describes the interface needed to use the Linux device driver.
 * The interface is used by the userpace UMP driver.
 */

#define UMP_IOCTL_NR 0x90


#define UMP_IOC_QUERY_API_VERSION _IOR(UMP_IOCTL_NR, _UMP_IOC_QUERY_API_VERSION, _ump_uk_api_version_s)
#define UMP_IOC_ALLOCATE  _IOWR(UMP_IOCTL_NR,  _UMP_IOC_ALLOCATE,  _ump_uk_allocate_s)
#define UMP_IOC_RELEASE  _IOR(UMP_IOCTL_NR,  _UMP_IOC_RELEASE,  _ump_uk_release_s)
#define UMP_IOC_SIZE_GET  _IOWR(UMP_IOCTL_NR,  _UMP_IOC_SIZE_GET, _ump_uk_size_get_s)
#define UMP_IOC_MSYNC     _IOW(UMP_IOCTL_NR,  _UMP_IOC_MSYNC, _ump_uk_size_get_s)
#ifdef CONFIG_ION_EXYNOS
#define UMP_IOC_ION_IMPORT  _IOW(UMP_IOCTL_NR,  _UMP_IOC_ION_IMPORT, _ump_uk_ion_import_s)
#endif

#ifdef __cplusplus
}
#endif

#endif /* __UMP_IOCTL_H__ */
