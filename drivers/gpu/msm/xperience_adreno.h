/* Copyright (c) 2017 The XPerience Project
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _LINUX_XPERIENCE_ADRENO_H
#define _LINUX_XPERIENCE_ADRENO_H

extern int msm_unregister_domain(struct iommu_domain *domain);

inline int msm_unregister_domain(struct iommu_domain *domain)
{
	return -ENODEV;
}

#endif
