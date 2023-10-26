/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
/*
 *
 * (C) COPYRIGHT 2023 ARM Limited. All rights reserved.
 *
 * This program is free software and is provided to you under the terms of the
 * GNU General Public License version 2 as published by the Free Software
 * Foundation, and any use by you of this program is subject to the terms
 * of such GNU license.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you can access it online at
 * http://www.gnu.org/licenses/gpl-2.0.html.
 *
 */

/*
 * This header is autogenerated. Avoid modifying this file unless absolutely
 * necessary.
 */

#ifndef _MALI_KBASE_REGMAP_CSF_ENUMS_H_
#define _MALI_KBASE_REGMAP_CSF_ENUMS_H_

#if !MALI_USE_CSF
#error "Cannot be compiled with JM"
#endif

enum kbase_regmap_enum_v10_8 {
	GPU_CONTROL__GPU_ID = 0, /* (RO) 32-bit 0x0 */
	GPU_CONTROL__L2_FEATURES, /* (RO) 32-bit 0x4 */
	GPU_CONTROL__TILER_FEATURES, /* (RO) 32-bit 0xC */
	GPU_CONTROL__MEM_FEATURES, /* (RO) 32-bit 0x10 */
	GPU_CONTROL__MMU_FEATURES, /* (RO) 32-bit 0x14 */
	GPU_CONTROL__AS_PRESENT, /* (RO) 32-bit 0x18 */
	GPU_CONTROL__CSF_ID, /* (RO) 32-bit 0x1C */
	GPU_CONTROL__GPU_IRQ_RAWSTAT, /* (RW) 32-bit 0x20 */
	GPU_CONTROL__GPU_IRQ_CLEAR, /* (WO) 32-bit 0x24 */
	GPU_CONTROL__GPU_IRQ_MASK, /* (RW) 32-bit 0x28 */
	GPU_CONTROL__GPU_IRQ_STATUS, /* (RO) 32-bit 0x2C */
	GPU_CONTROL__GPU_STATUS, /* (RO) 32-bit 0x34 */
	GPU_CONTROL__GPU_COMMAND, /* (WO) 32-bit 0x30 */
	GPU_CONTROL__GPU_FAULTSTATUS, /* (RO) 32-bit 0x3C */
	GPU_CONTROL__GPU_FAULTADDRESS, /* (RO) 64-bit 0x40 */
	GPU_CONTROL__L2_CONFIG, /* (RW) 32-bit 0x48 */
	GPU_CONTROL__PWR_KEY, /* (WO) 32-bit 0x50 */
	GPU_CONTROL__PWR_OVERRIDE0, /* (RW) 32-bit 0x54 */
	GPU_CONTROL__PWR_OVERRIDE1, /* (RW) 32-bit 0x58 */
	GPU_CONTROL__TIMESTAMP_OFFSET, /* (RW) 64-bit 0x88 */
	GPU_CONTROL__CYCLE_COUNT, /* (RO) 64-bit 0x90 */
	GPU_CONTROL__TIMESTAMP, /* (RO) 64-bit 0x98 */
	GPU_CONTROL__THREAD_MAX_THREADS, /* (RO) 32-bit 0xA0 */
	GPU_CONTROL__THREAD_MAX_WORKGROUP_SIZE, /* (RO) 32-bit 0xA4 */
	GPU_CONTROL__THREAD_MAX_BARRIER_SIZE, /* (RO) 32-bit 0xA8 */
	GPU_CONTROL__THREAD_FEATURES, /* (RO) 32-bit 0xAC */
	GPU_CONTROL__TEXTURE_FEATURES_0, /* (RO) 32-bit 0xB0 */
	GPU_CONTROL__TEXTURE_FEATURES_1, /* (RO) 32-bit 0xB4 */
	GPU_CONTROL__TEXTURE_FEATURES_2, /* (RO) 32-bit 0xB8 */
	GPU_CONTROL__TEXTURE_FEATURES_3, /* (RO) 32-bit 0xBC */
	GPU_CONTROL__SHADER_PRESENT, /* (RO) 64-bit 0x100 */
	GPU_CONTROL__TILER_PRESENT, /* (RO) 64-bit 0x110 */
	GPU_CONTROL__L2_PRESENT, /* (RO) 64-bit 0x120 */
	GPU_CONTROL__SHADER_READY, /* (RO) 64-bit 0x140 */
	GPU_CONTROL__TILER_READY, /* (RO) 64-bit 0x150 */
	GPU_CONTROL__L2_READY, /* (RO) 64-bit 0x160 */
	GPU_CONTROL__SHADER_PWRON, /* (WO) 64-bit 0x180 */
	GPU_CONTROL__TILER_PWRON, /* (WO) 64-bit 0x190 */
	GPU_CONTROL__L2_PWRON, /* (WO) 64-bit 0x1A0 */
	GPU_CONTROL__SHADER_PWROFF, /* (WO) 64-bit 0x1C0 */
	GPU_CONTROL__TILER_PWROFF, /* (WO) 64-bit 0x1D0 */
	GPU_CONTROL__L2_PWROFF, /* (WO) 64-bit 0x1E0 */
	GPU_CONTROL__SHADER_PWRTRANS, /* (RO) 64-bit 0x200 */
	GPU_CONTROL__TILER_PWRTRANS, /* (RO) 64-bit 0x210 */
	GPU_CONTROL__L2_PWRTRANS, /* (RO) 64-bit 0x220 */
	GPU_CONTROL__SHADER_PWRACTIVE, /* (RO) 64-bit 0x240 */
	GPU_CONTROL__TILER_PWRACTIVE, /* (RO) 64-bit 0x250 */
	GPU_CONTROL__L2_PWRACTIVE, /* (RO) 64-bit 0x260 */
	GPU_CONTROL__REVIDR, /* (RO) 32-bit 0x280 */
	GPU_CONTROL__COHERENCY_FEATURES, /* (RO) 32-bit 0x300 */
	GPU_CONTROL__COHERENCY_ENABLE, /* (RW) 32-bit 0x304 */
	GPU_CONTROL__MCU_CONTROL, /* (RW) 32-bit 0x700 */
	GPU_CONTROL__MCU_STATUS, /* (RO) 32-bit 0x704 */
	GPU_CONTROL__STACK_PRESENT, /* (RO) 64-bit 0xE00 */
	GPU_CONTROL__STACK_READY, /* (RO) 64-bit 0xE10 */
	GPU_CONTROL__STACK_PWRON, /* (WO) 64-bit 0xE20 */
	GPU_CONTROL__STACK_PWROFF, /* (WO) 64-bit 0xE30 */
	GPU_CONTROL__STACK_PWRTRANS, /* (RO) 64-bit 0xE40 */
	GPU_CONTROL__CSF_CONFIG, /* (RW) 32-bit 0xF00 */
	GPU_CONTROL__SHADER_CONFIG, /* (RW) 32-bit 0xF04 */
	GPU_CONTROL__TILER_CONFIG, /* (RW) 32-bit 0xF08 */
	GPU_CONTROL__L2_MMU_CONFIG, /* (RW) 32-bit 0xF0C */
	GPU_CONTROL__GPU_DBG, /* (RW) 64-bit 0xFE8 */
	JOB_CONTROL__JOB_IRQ_RAWSTAT, /* (RW) 32-bit 0x1000 */
	JOB_CONTROL__JOB_IRQ_CLEAR, /* (WO) 32-bit 0x1004 */
	JOB_CONTROL__JOB_IRQ_MASK, /* (RW) 32-bit 0x1008 */
	JOB_CONTROL__JOB_IRQ_STATUS, /* (RO) 32-bit 0x100C */
	MMU_CONTROL__IRQ_RAWSTAT, /* (RW) 32-bit 0x2000 */
	MMU_CONTROL__IRQ_CLEAR, /* (WO) 32-bit 0x2004 */
	MMU_CONTROL__IRQ_MASK, /* (RW) 32-bit 0x2008 */
	MMU_CONTROL__IRQ_STATUS, /* (RO) 32-bit 0x200C */
	MMU_CONTROL__AS0__TRANSTAB, /* (RW) 64-bit 0x2400 */
	MMU_CONTROL__AS0__MEMATTR, /* (RW) 64-bit 0x2408 */
	MMU_CONTROL__AS0__LOCKADDR, /* (RW) 64-bit 0x2410 */
	MMU_CONTROL__AS0__COMMAND, /* (WO) 32-bit 0x2418 */
	MMU_CONTROL__AS0__FAULTSTATUS, /* (RO) 32-bit 0x241C */
	MMU_CONTROL__AS0__FAULTADDRESS, /* (RO) 64-bit 0x2420 */
	MMU_CONTROL__AS0__STATUS, /* (RO) 32-bit 0x2428 */
	MMU_CONTROL__AS0__TRANSCFG, /* (RW) 64-bit 0x2430 */
	MMU_CONTROL__AS0__FAULTEXTRA, /* (RO) 64-bit 0x2438 */
	MMU_CONTROL__AS1__TRANSTAB, /* (RW) 64-bit 0x2440 */
	MMU_CONTROL__AS1__MEMATTR, /* (RW) 64-bit 0x2448 */
	MMU_CONTROL__AS1__LOCKADDR, /* (RW) 64-bit 0x2450 */
	MMU_CONTROL__AS1__COMMAND, /* (WO) 32-bit 0x2458 */
	MMU_CONTROL__AS1__FAULTSTATUS, /* (RO) 32-bit 0x245C */
	MMU_CONTROL__AS1__FAULTADDRESS, /* (RO) 64-bit 0x2460 */
	MMU_CONTROL__AS1__STATUS, /* (RO) 32-bit 0x2468 */
	MMU_CONTROL__AS1__TRANSCFG, /* (RW) 64-bit 0x2470 */
	MMU_CONTROL__AS1__FAULTEXTRA, /* (RO) 64-bit 0x2478 */
	MMU_CONTROL__AS2__TRANSTAB, /* (RW) 64-bit 0x2480 */
	MMU_CONTROL__AS2__MEMATTR, /* (RW) 64-bit 0x2488 */
	MMU_CONTROL__AS2__LOCKADDR, /* (RW) 64-bit 0x2490 */
	MMU_CONTROL__AS2__COMMAND, /* (WO) 32-bit 0x2498 */
	MMU_CONTROL__AS2__FAULTSTATUS, /* (RO) 32-bit 0x249C */
	MMU_CONTROL__AS2__FAULTADDRESS, /* (RO) 64-bit 0x24A0 */
	MMU_CONTROL__AS2__STATUS, /* (RO) 32-bit 0x24A8 */
	MMU_CONTROL__AS2__TRANSCFG, /* (RW) 64-bit 0x24B0 */
	MMU_CONTROL__AS2__FAULTEXTRA, /* (RO) 64-bit 0x24B8 */
	MMU_CONTROL__AS3__TRANSTAB, /* (RW) 64-bit 0x24C0 */
	MMU_CONTROL__AS3__MEMATTR, /* (RW) 64-bit 0x24C8 */
	MMU_CONTROL__AS3__LOCKADDR, /* (RW) 64-bit 0x24D0 */
	MMU_CONTROL__AS3__COMMAND, /* (WO) 32-bit 0x24D8 */
	MMU_CONTROL__AS3__FAULTSTATUS, /* (RO) 32-bit 0x24DC */
	MMU_CONTROL__AS3__FAULTADDRESS, /* (RO) 64-bit 0x24E0 */
	MMU_CONTROL__AS3__STATUS, /* (RO) 32-bit 0x24E8 */
	MMU_CONTROL__AS3__TRANSCFG, /* (RW) 64-bit 0x24F0 */
	MMU_CONTROL__AS3__FAULTEXTRA, /* (RO) 64-bit 0x24F8 */
	MMU_CONTROL__AS4__TRANSTAB, /* (RW) 64-bit 0x2500 */
	MMU_CONTROL__AS4__MEMATTR, /* (RW) 64-bit 0x2508 */
	MMU_CONTROL__AS4__LOCKADDR, /* (RW) 64-bit 0x2510 */
	MMU_CONTROL__AS4__COMMAND, /* (WO) 32-bit 0x2518 */
	MMU_CONTROL__AS4__FAULTSTATUS, /* (RO) 32-bit 0x251C */
	MMU_CONTROL__AS4__FAULTADDRESS, /* (RO) 64-bit 0x2520 */
	MMU_CONTROL__AS4__STATUS, /* (RO) 32-bit 0x2528 */
	MMU_CONTROL__AS4__TRANSCFG, /* (RW) 64-bit 0x2530 */
	MMU_CONTROL__AS4__FAULTEXTRA, /* (RO) 64-bit 0x2538 */
	MMU_CONTROL__AS5__TRANSTAB, /* (RW) 64-bit 0x2540 */
	MMU_CONTROL__AS5__MEMATTR, /* (RW) 64-bit 0x2548 */
	MMU_CONTROL__AS5__LOCKADDR, /* (RW) 64-bit 0x2550 */
	MMU_CONTROL__AS5__COMMAND, /* (WO) 32-bit 0x2558 */
	MMU_CONTROL__AS5__FAULTSTATUS, /* (RO) 32-bit 0x255C */
	MMU_CONTROL__AS5__FAULTADDRESS, /* (RO) 64-bit 0x2560 */
	MMU_CONTROL__AS5__STATUS, /* (RO) 32-bit 0x2568 */
	MMU_CONTROL__AS5__TRANSCFG, /* (RW) 64-bit 0x2570 */
	MMU_CONTROL__AS5__FAULTEXTRA, /* (RO) 64-bit 0x2578 */
	MMU_CONTROL__AS6__TRANSTAB, /* (RW) 64-bit 0x2580 */
	MMU_CONTROL__AS6__MEMATTR, /* (RW) 64-bit 0x2588 */
	MMU_CONTROL__AS6__LOCKADDR, /* (RW) 64-bit 0x2590 */
	MMU_CONTROL__AS6__COMMAND, /* (WO) 32-bit 0x2598 */
	MMU_CONTROL__AS6__FAULTSTATUS, /* (RO) 32-bit 0x259C */
	MMU_CONTROL__AS6__FAULTADDRESS, /* (RO) 64-bit 0x25A0 */
	MMU_CONTROL__AS6__STATUS, /* (RO) 32-bit 0x25A8 */
	MMU_CONTROL__AS6__TRANSCFG, /* (RW) 64-bit 0x25B0 */
	MMU_CONTROL__AS6__FAULTEXTRA, /* (RO) 64-bit 0x25B8 */
	MMU_CONTROL__AS7__TRANSTAB, /* (RW) 64-bit 0x25C0 */
	MMU_CONTROL__AS7__MEMATTR, /* (RW) 64-bit 0x25C8 */
	MMU_CONTROL__AS7__LOCKADDR, /* (RW) 64-bit 0x25D0 */
	MMU_CONTROL__AS7__COMMAND, /* (WO) 32-bit 0x25D8 */
	MMU_CONTROL__AS7__FAULTSTATUS, /* (RO) 32-bit 0x25DC */
	MMU_CONTROL__AS7__FAULTADDRESS, /* (RO) 64-bit 0x25E0 */
	MMU_CONTROL__AS7__STATUS, /* (RO) 32-bit 0x25E8 */
	MMU_CONTROL__AS7__TRANSCFG, /* (RW) 64-bit 0x25F0 */
	MMU_CONTROL__AS7__FAULTEXTRA, /* (RO) 64-bit 0x25F8 */
	MMU_CONTROL__AS8__TRANSTAB, /* (RW) 64-bit 0x2600 */
	MMU_CONTROL__AS8__MEMATTR, /* (RW) 64-bit 0x2608 */
	MMU_CONTROL__AS8__LOCKADDR, /* (RW) 64-bit 0x2610 */
	MMU_CONTROL__AS8__COMMAND, /* (WO) 32-bit 0x2618 */
	MMU_CONTROL__AS8__FAULTSTATUS, /* (RO) 32-bit 0x261C */
	MMU_CONTROL__AS8__FAULTADDRESS, /* (RO) 64-bit 0x2620 */
	MMU_CONTROL__AS8__STATUS, /* (RO) 32-bit 0x2628 */
	MMU_CONTROL__AS8__TRANSCFG, /* (RW) 64-bit 0x2630 */
	MMU_CONTROL__AS8__FAULTEXTRA, /* (RO) 64-bit 0x2638 */
	MMU_CONTROL__AS9__TRANSTAB, /* (RW) 64-bit 0x2640 */
	MMU_CONTROL__AS9__MEMATTR, /* (RW) 64-bit 0x2648 */
	MMU_CONTROL__AS9__LOCKADDR, /* (RW) 64-bit 0x2650 */
	MMU_CONTROL__AS9__COMMAND, /* (WO) 32-bit 0x2658 */
	MMU_CONTROL__AS9__FAULTSTATUS, /* (RO) 32-bit 0x265C */
	MMU_CONTROL__AS9__FAULTADDRESS, /* (RO) 64-bit 0x2660 */
	MMU_CONTROL__AS9__STATUS, /* (RO) 32-bit 0x2668 */
	MMU_CONTROL__AS9__TRANSCFG, /* (RW) 64-bit 0x2670 */
	MMU_CONTROL__AS9__FAULTEXTRA, /* (RO) 64-bit 0x2678 */
	MMU_CONTROL__AS10__TRANSTAB, /* (RW) 64-bit 0x2680 */
	MMU_CONTROL__AS10__MEMATTR, /* (RW) 64-bit 0x2688 */
	MMU_CONTROL__AS10__LOCKADDR, /* (RW) 64-bit 0x2690 */
	MMU_CONTROL__AS10__COMMAND, /* (WO) 32-bit 0x2698 */
	MMU_CONTROL__AS10__FAULTSTATUS, /* (RO) 32-bit 0x269C */
	MMU_CONTROL__AS10__FAULTADDRESS, /* (RO) 64-bit 0x26A0 */
	MMU_CONTROL__AS10__STATUS, /* (RO) 32-bit 0x26A8 */
	MMU_CONTROL__AS10__TRANSCFG, /* (RW) 64-bit 0x26B0 */
	MMU_CONTROL__AS10__FAULTEXTRA, /* (RO) 64-bit 0x26B8 */
	MMU_CONTROL__AS11__TRANSTAB, /* (RW) 64-bit 0x26C0 */
	MMU_CONTROL__AS11__MEMATTR, /* (RW) 64-bit 0x26C8 */
	MMU_CONTROL__AS11__LOCKADDR, /* (RW) 64-bit 0x26D0 */
	MMU_CONTROL__AS11__COMMAND, /* (WO) 32-bit 0x26D8 */
	MMU_CONTROL__AS11__FAULTSTATUS, /* (RO) 32-bit 0x26DC */
	MMU_CONTROL__AS11__FAULTADDRESS, /* (RO) 64-bit 0x26E0 */
	MMU_CONTROL__AS11__STATUS, /* (RO) 32-bit 0x26E8 */
	MMU_CONTROL__AS11__TRANSCFG, /* (RW) 64-bit 0x26F0 */
	MMU_CONTROL__AS11__FAULTEXTRA, /* (RO) 64-bit 0x26F8 */
	MMU_CONTROL__AS12__TRANSTAB, /* (RW) 64-bit 0x2700 */
	MMU_CONTROL__AS12__MEMATTR, /* (RW) 64-bit 0x2708 */
	MMU_CONTROL__AS12__LOCKADDR, /* (RW) 64-bit 0x2710 */
	MMU_CONTROL__AS12__COMMAND, /* (WO) 32-bit 0x2718 */
	MMU_CONTROL__AS12__FAULTSTATUS, /* (RO) 32-bit 0x271C */
	MMU_CONTROL__AS12__FAULTADDRESS, /* (RO) 64-bit 0x2720 */
	MMU_CONTROL__AS12__STATUS, /* (RO) 32-bit 0x2728 */
	MMU_CONTROL__AS12__TRANSCFG, /* (RW) 64-bit 0x2730 */
	MMU_CONTROL__AS12__FAULTEXTRA, /* (RO) 64-bit 0x2738 */
	MMU_CONTROL__AS13__TRANSTAB, /* (RW) 64-bit 0x2740 */
	MMU_CONTROL__AS13__MEMATTR, /* (RW) 64-bit 0x2748 */
	MMU_CONTROL__AS13__LOCKADDR, /* (RW) 64-bit 0x2750 */
	MMU_CONTROL__AS13__COMMAND, /* (WO) 32-bit 0x2758 */
	MMU_CONTROL__AS13__FAULTSTATUS, /* (RO) 32-bit 0x275C */
	MMU_CONTROL__AS13__FAULTADDRESS, /* (RO) 64-bit 0x2760 */
	MMU_CONTROL__AS13__STATUS, /* (RO) 32-bit 0x2768 */
	MMU_CONTROL__AS13__TRANSCFG, /* (RW) 64-bit 0x2770 */
	MMU_CONTROL__AS13__FAULTEXTRA, /* (RO) 64-bit 0x2778 */
	MMU_CONTROL__AS14__TRANSTAB, /* (RW) 64-bit 0x2780 */
	MMU_CONTROL__AS14__MEMATTR, /* (RW) 64-bit 0x2788 */
	MMU_CONTROL__AS14__LOCKADDR, /* (RW) 64-bit 0x2790 */
	MMU_CONTROL__AS14__COMMAND, /* (WO) 32-bit 0x2798 */
	MMU_CONTROL__AS14__FAULTSTATUS, /* (RO) 32-bit 0x279C */
	MMU_CONTROL__AS14__FAULTADDRESS, /* (RO) 64-bit 0x27A0 */
	MMU_CONTROL__AS14__STATUS, /* (RO) 32-bit 0x27A8 */
	MMU_CONTROL__AS14__TRANSCFG, /* (RW) 64-bit 0x27B0 */
	MMU_CONTROL__AS14__FAULTEXTRA, /* (RO) 64-bit 0x27B8 */
	MMU_CONTROL__AS15__TRANSTAB, /* (RW) 64-bit 0x27C0 */
	MMU_CONTROL__AS15__MEMATTR, /* (RW) 64-bit 0x27C8 */
	MMU_CONTROL__AS15__LOCKADDR, /* (RW) 64-bit 0x27D0 */
	MMU_CONTROL__AS15__COMMAND, /* (WO) 32-bit 0x27D8 */
	MMU_CONTROL__AS15__FAULTSTATUS, /* (RO) 32-bit 0x27DC */
	MMU_CONTROL__AS15__FAULTADDRESS, /* (RO) 64-bit 0x27E0 */
	MMU_CONTROL__AS15__STATUS, /* (RO) 32-bit 0x27E8 */
	MMU_CONTROL__AS15__TRANSCFG, /* (RW) 64-bit 0x27F0 */
	MMU_CONTROL__AS15__FAULTEXTRA, /* (RO) 64-bit 0x27F8 */
	USER__LATEST_FLUSH, /* (RO) 32-bit 0x10000 */
	IPA_CONTROL__COMMAND, /* (WO) 32-bit 0x40000 */
	IPA_CONTROL__STATUS, /* (RO) 32-bit 0x40004 */
	IPA_CONTROL__TIMER, /* (RW) 32-bit 0x40008 */
	IPA_CONTROL__SELECT_CSHW, /* (RW) 64-bit 0x40010 */
	IPA_CONTROL__SELECT_MEMSYS, /* (RW) 64-bit 0x40018 */
	IPA_CONTROL__SELECT_TILER, /* (RW) 64-bit 0x40020 */
	IPA_CONTROL__SELECT_SHADER, /* (RW) 64-bit 0x40028 */
	IPA_CONTROL__VALUE_CSHW_0, /* (RO) 64-bit 0x40100 */
	IPA_CONTROL__VALUE_CSHW_1, /* (RO) 64-bit 0x40108 */
	IPA_CONTROL__VALUE_CSHW_2, /* (RO) 64-bit 0x40110 */
	IPA_CONTROL__VALUE_CSHW_3, /* (RO) 64-bit 0x40118 */
	IPA_CONTROL__VALUE_CSHW_4, /* (RO) 64-bit 0x40120 */
	IPA_CONTROL__VALUE_CSHW_5, /* (RO) 64-bit 0x40128 */
	IPA_CONTROL__VALUE_CSHW_6, /* (RO) 64-bit 0x40130 */
	IPA_CONTROL__VALUE_CSHW_7, /* (RO) 64-bit 0x40138 */
	IPA_CONTROL__VALUE_MEMSYS_0, /* (RO) 64-bit 0x40140 */
	IPA_CONTROL__VALUE_MEMSYS_1, /* (RO) 64-bit 0x40148 */
	IPA_CONTROL__VALUE_MEMSYS_2, /* (RO) 64-bit 0x40150 */
	IPA_CONTROL__VALUE_MEMSYS_3, /* (RO) 64-bit 0x40158 */
	IPA_CONTROL__VALUE_MEMSYS_4, /* (RO) 64-bit 0x40160 */
	IPA_CONTROL__VALUE_MEMSYS_5, /* (RO) 64-bit 0x40168 */
	IPA_CONTROL__VALUE_MEMSYS_6, /* (RO) 64-bit 0x40170 */
	IPA_CONTROL__VALUE_MEMSYS_7, /* (RO) 64-bit 0x40178 */
	IPA_CONTROL__VALUE_TILER_0, /* (RO) 64-bit 0x40180 */
	IPA_CONTROL__VALUE_TILER_1, /* (RO) 64-bit 0x40188 */
	IPA_CONTROL__VALUE_TILER_2, /* (RO) 64-bit 0x40190 */
	IPA_CONTROL__VALUE_TILER_3, /* (RO) 64-bit 0x40198 */
	IPA_CONTROL__VALUE_TILER_4, /* (RO) 64-bit 0x401A0 */
	IPA_CONTROL__VALUE_TILER_5, /* (RO) 64-bit 0x401A8 */
	IPA_CONTROL__VALUE_TILER_6, /* (RO) 64-bit 0x401B0 */
	IPA_CONTROL__VALUE_TILER_7, /* (RO) 64-bit 0x401B8 */
	IPA_CONTROL__VALUE_SHADER_0, /* (RO) 64-bit 0x401C0 */
	IPA_CONTROL__VALUE_SHADER_1, /* (RO) 64-bit 0x401C8 */
	IPA_CONTROL__VALUE_SHADER_2, /* (RO) 64-bit 0x401D0 */
	IPA_CONTROL__VALUE_SHADER_3, /* (RO) 64-bit 0x401D8 */
	IPA_CONTROL__VALUE_SHADER_4, /* (RO) 64-bit 0x401E0 */
	IPA_CONTROL__VALUE_SHADER_5, /* (RO) 64-bit 0x401E8 */
	IPA_CONTROL__VALUE_SHADER_6, /* (RO) 64-bit 0x401F0 */
	IPA_CONTROL__VALUE_SHADER_7, /* (RO) 64-bit 0x401F8 */
	DOORBELL_BLOCK_0__DOORBELL, /* (WO) 32-bit 0x80000 */
	DOORBELL_BLOCK_1__DOORBELL, /* (WO) 32-bit 0x90000 */
	DOORBELL_BLOCK_2__DOORBELL, /* (WO) 32-bit 0xA0000 */
	DOORBELL_BLOCK_3__DOORBELL, /* (WO) 32-bit 0xB0000 */
	DOORBELL_BLOCK_4__DOORBELL, /* (WO) 32-bit 0xC0000 */
	DOORBELL_BLOCK_5__DOORBELL, /* (WO) 32-bit 0xD0000 */
	DOORBELL_BLOCK_6__DOORBELL, /* (WO) 32-bit 0xE0000 */
	DOORBELL_BLOCK_7__DOORBELL, /* (WO) 32-bit 0xF0000 */
	DOORBELL_BLOCK_8__DOORBELL, /* (WO) 32-bit 0x100000 */
	DOORBELL_BLOCK_9__DOORBELL, /* (WO) 32-bit 0x110000 */
	DOORBELL_BLOCK_10__DOORBELL, /* (WO) 32-bit 0x120000 */
	DOORBELL_BLOCK_11__DOORBELL, /* (WO) 32-bit 0x130000 */
	DOORBELL_BLOCK_12__DOORBELL, /* (WO) 32-bit 0x140000 */
	DOORBELL_BLOCK_13__DOORBELL, /* (WO) 32-bit 0x150000 */
	DOORBELL_BLOCK_14__DOORBELL, /* (WO) 32-bit 0x160000 */
	DOORBELL_BLOCK_15__DOORBELL, /* (WO) 32-bit 0x170000 */
	DOORBELL_BLOCK_16__DOORBELL, /* (WO) 32-bit 0x180000 */
	DOORBELL_BLOCK_17__DOORBELL, /* (WO) 32-bit 0x190000 */
	DOORBELL_BLOCK_18__DOORBELL, /* (WO) 32-bit 0x1A0000 */
	DOORBELL_BLOCK_19__DOORBELL, /* (WO) 32-bit 0x1B0000 */
	DOORBELL_BLOCK_20__DOORBELL, /* (WO) 32-bit 0x1C0000 */
	DOORBELL_BLOCK_21__DOORBELL, /* (WO) 32-bit 0x1D0000 */
	DOORBELL_BLOCK_22__DOORBELL, /* (WO) 32-bit 0x1E0000 */
	DOORBELL_BLOCK_23__DOORBELL, /* (WO) 32-bit 0x1F0000 */
	DOORBELL_BLOCK_24__DOORBELL, /* (WO) 32-bit 0x200000 */
	DOORBELL_BLOCK_25__DOORBELL, /* (WO) 32-bit 0x210000 */
	DOORBELL_BLOCK_26__DOORBELL, /* (WO) 32-bit 0x220000 */
	DOORBELL_BLOCK_27__DOORBELL, /* (WO) 32-bit 0x230000 */
	DOORBELL_BLOCK_28__DOORBELL, /* (WO) 32-bit 0x240000 */
	DOORBELL_BLOCK_29__DOORBELL, /* (WO) 32-bit 0x250000 */
	DOORBELL_BLOCK_30__DOORBELL, /* (WO) 32-bit 0x260000 */
	DOORBELL_BLOCK_31__DOORBELL, /* (WO) 32-bit 0x270000 */
	DOORBELL_BLOCK_32__DOORBELL, /* (WO) 32-bit 0x280000 */
	DOORBELL_BLOCK_33__DOORBELL, /* (WO) 32-bit 0x290000 */
	DOORBELL_BLOCK_34__DOORBELL, /* (WO) 32-bit 0x2A0000 */
	DOORBELL_BLOCK_35__DOORBELL, /* (WO) 32-bit 0x2B0000 */
	DOORBELL_BLOCK_36__DOORBELL, /* (WO) 32-bit 0x2C0000 */
	DOORBELL_BLOCK_37__DOORBELL, /* (WO) 32-bit 0x2D0000 */
	DOORBELL_BLOCK_38__DOORBELL, /* (WO) 32-bit 0x2E0000 */
	DOORBELL_BLOCK_39__DOORBELL, /* (WO) 32-bit 0x2F0000 */
	DOORBELL_BLOCK_40__DOORBELL, /* (WO) 32-bit 0x300000 */
	DOORBELL_BLOCK_41__DOORBELL, /* (WO) 32-bit 0x310000 */
	DOORBELL_BLOCK_42__DOORBELL, /* (WO) 32-bit 0x320000 */
	DOORBELL_BLOCK_43__DOORBELL, /* (WO) 32-bit 0x330000 */
	DOORBELL_BLOCK_44__DOORBELL, /* (WO) 32-bit 0x340000 */
	DOORBELL_BLOCK_45__DOORBELL, /* (WO) 32-bit 0x350000 */
	DOORBELL_BLOCK_46__DOORBELL, /* (WO) 32-bit 0x360000 */
	DOORBELL_BLOCK_47__DOORBELL, /* (WO) 32-bit 0x370000 */
	DOORBELL_BLOCK_48__DOORBELL, /* (WO) 32-bit 0x380000 */
	DOORBELL_BLOCK_49__DOORBELL, /* (WO) 32-bit 0x390000 */
	DOORBELL_BLOCK_50__DOORBELL, /* (WO) 32-bit 0x3A0000 */
	DOORBELL_BLOCK_51__DOORBELL, /* (WO) 32-bit 0x3B0000 */
	DOORBELL_BLOCK_52__DOORBELL, /* (WO) 32-bit 0x3C0000 */
	DOORBELL_BLOCK_53__DOORBELL, /* (WO) 32-bit 0x3D0000 */
	DOORBELL_BLOCK_54__DOORBELL, /* (WO) 32-bit 0x3E0000 */
	DOORBELL_BLOCK_55__DOORBELL, /* (WO) 32-bit 0x3F0000 */
	DOORBELL_BLOCK_56__DOORBELL, /* (WO) 32-bit 0x400000 */
	DOORBELL_BLOCK_57__DOORBELL, /* (WO) 32-bit 0x410000 */
	DOORBELL_BLOCK_58__DOORBELL, /* (WO) 32-bit 0x420000 */
	DOORBELL_BLOCK_59__DOORBELL, /* (WO) 32-bit 0x430000 */
	DOORBELL_BLOCK_60__DOORBELL, /* (WO) 32-bit 0x440000 */
	DOORBELL_BLOCK_61__DOORBELL, /* (WO) 32-bit 0x450000 */
	DOORBELL_BLOCK_62__DOORBELL, /* (WO) 32-bit 0x460000 */
	DOORBELL_BLOCK_63__DOORBELL, /* (WO) 32-bit 0x470000 */
	NR_V10_8_REGS,
};

enum kbase_regmap_enum_v10_10 {
	GPU_CONTROL__CORE_FEATURES = NR_V10_8_REGS, /* (RO) 32-bit 0x8 */
	NR_V10_10_REGS,
};

enum kbase_regmap_enum_v11 {
	GPU_CONTROL__ASN_HASH_0 = NR_V10_10_REGS, /* (RW) 32-bit 0x2C0 */
	GPU_CONTROL__ASN_HASH_1, /* (RW) 32-bit 0x2C4 */
	GPU_CONTROL__ASN_HASH_2, /* (RW) 32-bit 0x2C8 */
	GPU_CONTROL__DOORBELL_FEATURES, /* (RO) 32-bit 0xC0 */
	GPU_CONTROL__GPU_FEATURES, /* (RO) 64-bit 0x60 */
	GPU_CONTROL__PRFCNT_FEATURES, /* (RO) 32-bit 0x68 */
	GPU_CONTROL__SYSC_ALLOC0, /* (RW) 32-bit 0x340 */
	GPU_CONTROL__SYSC_ALLOC1, /* (RW) 32-bit 0x344 */
	GPU_CONTROL__SYSC_ALLOC2, /* (RW) 32-bit 0x348 */
	GPU_CONTROL__SYSC_ALLOC3, /* (RW) 32-bit 0x34C */
	GPU_CONTROL__SYSC_ALLOC4, /* (RW) 32-bit 0x350 */
	GPU_CONTROL__SYSC_ALLOC5, /* (RW) 32-bit 0x354 */
	GPU_CONTROL__SYSC_ALLOC6, /* (RW) 32-bit 0x358 */
	GPU_CONTROL__SYSC_ALLOC7, /* (RW) 32-bit 0x35C */
	GPU_CONTROL__SYSC_PBHA_OVERRIDE0, /* (RW) 32-bit 0x320 */
	GPU_CONTROL__SYSC_PBHA_OVERRIDE1, /* (RW) 32-bit 0x324 */
	GPU_CONTROL__SYSC_PBHA_OVERRIDE2, /* (RW) 32-bit 0x328 */
	GPU_CONTROL__SYSC_PBHA_OVERRIDE3, /* (RW) 32-bit 0x32C */
	NR_V11_REGS,
};

/*
 * V11_MODIFIED_REGS:
 * USER__LATEST_FLUSH  (RO) -> (RW)
 */

enum kbase_regmap_enum_v12 {
	GPU_CONTROL__GPU_COMMAND_ARG0 = NR_V11_REGS, /* (RW) 64-bit 0xD0 */
	GPU_CONTROL__GPU_COMMAND_ARG1, /* (RW) 64-bit 0xD8 */
	GPU_CONTROL__MCU_FEATURES, /* (RO) 32-bit 0x708 */
	GPU_CONTROL__SHADER_PWRFEATURES, /* (RW) 32-bit 0x188 */
	NR_V12_REGS,
};

enum kbase_regmap_enum_v12_remap {
	GPU_CONTROL__AMBA_ENABLE = GPU_CONTROL__COHERENCY_ENABLE, /* (RW) 32-bit 0x304 */
	GPU_CONTROL__AMBA_FEATURES = GPU_CONTROL__COHERENCY_FEATURES, /* (RO) 32-bit 0x300 */
};


#endif /* _MALI_KBASE_REGMAP_CSF_ENUMS_H_ */