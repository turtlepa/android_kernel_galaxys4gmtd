/* linux/arch/arm/plat-s5p/include/plat/media.h
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * Samsung Media device descriptions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef _S5P_MEDIA_H
#define _S5P_MEDIA_H

#include <linux/types.h>
#include <asm/setup.h>

struct s5p_media_device {
	u32		id;
	const char	*name;
	u32		bank;
	size_t		memsize;
	dma_addr_t	paddr;
};

extern struct meminfo meminfo;
extern dma_addr_t s5p_get_media_memory_bank(int dev_id, int bank);
extern size_t s5p_get_media_memsize_bank(int dev_id, int bank);
extern void s5p_reserve_bootmem(struct s5p_media_device *mdevs, int nr_mdevs);
extern dma_addr_t s5p_get_media_membase_bank(int bank);

#endif

