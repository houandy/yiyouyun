/*
 * memory.h
 *
 * Copyright (c) 2017 Realtek Semiconductor Corp.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 */

#ifndef __ASM_ARCH_MEMORY_H
#define __ASM_ARCH_MEMORY_H

#define RTK_FLAG_NONCACHED (1U << 0)
#define RTK_FLAG_SCPUACC (1U << 1)
#define RTK_FLAG_ACPUACC (1U << 2)
#define RTK_FLAG_HWIPACC (1U << 3)
#define RTK_FLAG_VE_SPEC (1U << 4)
#define RTK_FLAG_SECURE_AUDIO (1U << 5)
#define RTK_FLAG_SECURE_TPACC (1U << 6)

#define RTK_FLAG_DEAULT         (RTK_FLAG_NONCACHED | RTK_FLAG_SCPUACC | RTK_FLAG_ACPUACC | RTK_FLAG_HWIPACC)

#define PLAT_MEM_SIZE (512*1024*1024)

/* 0x00000000 ~ 0x0001efff */ /* (X) ALL*/
#define SYS_BOOTCODE_MEMBASE (PLAT_PHYS_OFFSET)

#define SYS_BOOTCODE_MEMSIZE            (0x0000C000)

#define RPC_COMM_PHYS (0x0000B000)
#define RPC_COMM_VIRT (RBUS_BASE_VIRT+RBUS_BASE_SIZE)
#define RPC_COMM_SIZE (0x00001000)

#if 0
/* 0x00030000 ~ 0x000fffff */
#define RESERVED_832KB_PHYS (0x00030000)
#define RESERVED_832KB_SIZE (0x000D0000)
#endif

#define RPC_RINGBUF_PHYS                (0x01ffe000)
#define RPC_RINGBUF_VIRT                (0xFC7F8000+0x00004000)
#define RPC_RINGBUF_SIZE                (0x00004000)

#if 0
/* 0x02200000 ~ 0x025fffff */
#ifdef CONFIG_RTK_VMX_ULTRA
#define ROOTFS_NORMAL_START (0x32b00000)
#define ROOTFS_NORMAL_SIZE  (0x12C00000) /*300MB*/
#else
#define ROOTFS_NORMAL_START (0x02200000)
#define ROOTFS_NORMAL_SIZE (0x00400000) /*4MB*/
#endif

#define ROOTFS_NORMAL_END \
	(ROOTFS_NORMAL_START + ROOTFS_NORMAL_SIZE)
/* 0x02200000 ~ 0x02dfffff */
#define ROOTFS_RESCUE_START (0x02200000)
#define ROOTFS_RESCUE_SIZE (0x00C00000) /*12MB*/
#define ROOTFS_RESCUE_END (ROOTFS_RESCUE_START + ROOTFS_RESCUE_SIZE)
/* 0x02600000 ~ 0x02bfffff */
#define MEM_SLOT_PHYS_1 (0x02600000)
#define MEM_SLOT_SIZE_1	 (0x00c00000) /* Max : 12M*/
#define MEM_SLOT_FLAG_1 (RTK_FLAG_SCPUACC | RTK_FLAG_ACPUACC | \
		RTK_FLAG_HWIPACC)
/* 0x03200000 ~ 0x0f8fffff */
#define MEM_SLOT_PHYS_0 (0x03200000)
#define MEM_SLOT_SIZE_0	 (0x0c700000) /* Max : 199M*/
#define MEM_SLOT_FLAG_0 (RTK_FLAG_SCPUACC | RTK_FLAG_ACPUACC | \
		RTK_FLAG_HWIPACC)
#endif

#define ACPU_FIREWARE_PHYS (0x01b00000)
#define ACPU_FIREWARE_SIZE (0x00400000)

#if 0
/* 0x10000000 ~ 0x10013fff */ /* (X) ALL*/
#define ACPU_IDMEM_PHYS (0x10000000)
#define ACPU_IDMEM_SIZE (0x00014000)
/* 0x10100000 ~ 0x141fffff */ /* (X) ALL*/
/* Kernel will resrved memory for TEE OS if kernel config is for DRM */
#define TEE_OS_PHYS     (0x10100000)
#define TEE_OS_SIZE     (0x04100000)
/* Kernel will resrved memory for TEE OS if kernel config is for 1GB ATV w/ DRM */
#define TEE_OS_30MB_PHYS   (0x10100000)
#define TEE_OS_30MB_SIZE   (0x01E00000)
/* For memtester tool */
#define MEMTESTER_RSV_PHYS (0x22000000)
#define MEMTESTER_RSV_SIZE (0x04000000)

/* 0x14200000 ~ 0x1e7fffff */
#define MEM_SLOT_PHYS_2 (0x14200000)
#define MEM_SLOT_SIZE_2	(0x0a600000) /* Max : 166M*/
#define MEM_SLOT_FLAG_2 (RTK_FLAG_SCPUACC | RTK_FLAG_ACPUACC | \
		RTK_FLAG_HWIPACC)
/* 0x1e800000 ~ 0x1effffff */
#define MEM_SLOT_PHYS_3 (0x1e800000)
#define MEM_SLOT_SIZE_3	 (0x00800000) /* Max : 8M*/
#define MEM_SLOT_FLAG_3 (RTK_FLAG_SCPUACC | RTK_FLAG_ACPUACC | \
		RTK_FLAG_HWIPACC)

/* 0x1fc00000 ~ 0x1fc00fff */ /* (X) ALL*/
#define ACPU_BOOTCODE_PHYS (0x1FC00000)
#define ACPU_BOOTCODE_SIZE (0x00001000)
/* 0x32800000 ~ 0x3effffff */
#define MEM_SLOT_PHYS_4 (0x32b00000)
#define MEM_SLOT_SIZE_4 (0x12c00000)
#define MEM_SLOT_FLAG_4 (RTK_FLAG_SCPUACC | RTK_FLAG_HWIPACC)
#endif

#define PLAT_SECURE_PHYS           (0x10000000)
#define PLAT_SECURE_SIZE           (0x00100000)

#ifdef CONFIG_ARM_NORMAL_WORLD_OS
#define PLAT_SECUREOS_BASE_PHYS	   (0x0C000000)
#define PLAT_SECUREOS_SIZE		   (0x00300000)
#endif

#define PLAT_NOR_PHYS (0x18100000)
#define PLAT_NOR_SIZE (0x01000000)

#define RBUS_BASE_PHYS                  (0x18000000)
#define RBUS_BASE_VIRT                  (0xFE000000)
#define RBUS_BASE_SIZE                  (0x00070000)

#if 0
#define ROOTFS_BIST_START (0x30000000)
#define ROOTFS_BIST_SIZE (0x00C00000) /*12MB*/
#define ROOTFS_BIST_END (ROOTFS_BIST_START + ROOTFS_BIST_SIZE)

#define HW_LIMITATION_PHYS (0x3FFFF000)
#define HW_LIMITATION_SIZE (0x00001000) /*4KB*/
#define HW_LIMITATION_START (HW_LIMITATION_PHYS)
#define HW_LIMITATION_END (HW_LIMITATION_START + HW_LIMITATION_SIZE)


#define MEM_SLOT_PHYS_BY(_nr, req_size) (MEM_SLOT_PHYS_##_nr##)
#define MEM_SLOT_SIZE_BY(_nr, req_size) ( \
		(req_size  > MEM_SLOT_SIZE_##_nr##) ? MEM_SLOT_SIZE_##_nr## : \
		req_size)
#define MEM_SLOT_FLAG_BY(_nr, req_size) (MEM_SLOT_FLAG_##_nr##)
#define MEM_SLOT(_nr, _type, req_size) \
	MEM_SLOT_##_type##_BY(_nr, req_size)
#endif

#define ION_MEDIA_HEAP_SIZE1    (ION_MEDIA_HEAP_SIZE   - ION_MEDIA_HEAP_SIZE2 - ION_MEDIA_HEAP_SIZE3 - ION_MEDIA_HEAP_SIZE4)
#define ION_MEDIA_HEAP_PHYS1    (PLAT_SECURE_PHYS - ION_MEDIA_HEAP_SIZE1)
#define ION_MEDIA_HEAP_FLAG1    (RTK_FLAG_DEAULT)

#define ION_AUDIO_HEAP_SIZE             (1024*1024*12)
#define ION_AUDIO_HEAP_PHYS             (PLAT_SECURE_PHYS  - ION_AUDIO_HEAP_SIZE)
#define ION_AUDIO_HEAP_FLAG     	(RTK_FLAG_DEAULT)

#define ION_MEDIA_HEAP_PHYS2    (PLAT_SECURE_PHYS + PLAT_SECURE_SIZE)
#define ION_MEDIA_HEAP_SIZE2    (0x18000000 - ION_MEDIA_HEAP_PHYS2)
#define ION_MEDIA_HEAP_FLAG2    (RTK_FLAG_DEAULT)

#define ION_MEDIA_HEAP_PHYS3    (0x1E600000)
#define ION_MEDIA_HEAP_SIZE3    (0x01A00000)
#define ION_MEDIA_HEAP_FLAG3    (RTK_FLAG_NONCACHED | RTK_FLAG_HWIPACC)

#define ION_MEDIA_HEAP_PHYS4    PLAT_NOR_PHYS
#define ION_MEDIA_HEAP_SIZE4    (PLAT_NOR_SIZE + 0x00A00000)
#define ION_MEDIA_HEAP_FLAG4    (RTK_FLAG_NONCACHED | RTK_FLAG_HWIPACC)

#if 0
/* legacy : 200 M */
#define ION_SECURE_HEAP_PHYS (MEM_SLOT(4, PHYS, 0x0c800000))
#define ION_SECURE_HEAP_SIZE (MEM_SLOT(4, SIZE, 0x0c800000))
#define ION_SECURE_HEAP_FLAG (RTK_FLAG_HWIPACC)
#endif

#define SYSTEM_GIC_BASE_PHYS            (0xff010000)
#define SYSTEM_GIC_BASE_VIRT            IOMEM(0xff010000)
#define SYSTEM_GIC_CPU_BASE             IOMEM(0xff012000)
#define SYSTEM_GIC_DIST_BASE            IOMEM(0xff011000)

#define SPI_RBUS_PHYS 0x18100000
#define SPI_RBUS_VIRT 0xfb000000
#define SPI_RBUS_SIZE 0x01000000

#define ION_MEDIA_HEAP_SIZE             (1024*1024*39 + VE_ION_SIZE + PLAT_FRAME_BUFFER_SIZE)
#define VE_ION_SIZE                     (1024*1024*169)
#define PLAT_FRAME_BUFFER_SIZE		(0x01800000)

#endif

