/*
 *  GRUB  --  GRand Unified Bootloader
 *  Copyright (C) 2002,2003,2007,2008  Free Software Foundation, Inc.
 *
 *  GRUB is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  GRUB is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GRUB.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef OFFSETS_HEADER
#define OFFSETS_HEADER	1

/* The offset of GRUB_TOTAL_MODULE_SIZE.  */
#define GRUB_KERNEL_I386_PC_TOTAL_MODULE_SIZE	0x8

/* The offset of GRUB_KERNEL_IMAGE_SIZE.  */
#define GRUB_KERNEL_I386_PC_KERNEL_IMAGE_SIZE	0xc

/* The offset of GRUB_COMPRESSED_SIZE.  */
#define GRUB_KERNEL_I386_PC_COMPRESSED_SIZE	0x10

/* The offset of GRUB_INSTALL_DOS_PART.  */
#define GRUB_KERNEL_I386_PC_INSTALL_DOS_PART	0x14

/* The offset of GRUB_INSTALL_BSD_PART.  */
#define GRUB_KERNEL_I386_PC_INSTALL_BSD_PART	0x18

/* The offset of multiboot signature.  */
#define GRUB_KERNEL_I386_PC_MULTIBOOT_SIGNATURE 0x1c

/* The size of the first region which won't be compressed.  */
#define GRUB_KERNEL_I386_PC_RAW_SIZE		0x5D8

/* The offset of GRUB_PREFIX.  */
#define GRUB_KERNEL_I386_PC_PREFIX		GRUB_KERNEL_I386_PC_RAW_SIZE

/* End of the data section. */
#define GRUB_KERNEL_I386_PC_PREFIX_END		(GRUB_KERNEL_I386_PC_PREFIX + 0x40)

/* The segment where the kernel is loaded.  */
#define GRUB_BOOT_I386_PC_KERNEL_SEG	0x800

#define GRUB_KERNEL_I386_PC_LINK_ADDR  0x8200

/* The upper memory area (starting at 640 kiB).  */
#define GRUB_MEMORY_I386_PC_UPPER		0xa0000
#define GRUB_MEMORY_I386_QEMU_UPPER		GRUB_MEMORY_I386_PC_UPPER

/* The offset of GRUB_CORE_ENTRY_ADDR.  */
#define GRUB_BOOT_I386_QEMU_CORE_ENTRY_ADDR	0x4

/* The offset of GRUB_CORE_ENTRY_ADDR.  */
#define GRUB_KERNEL_I386_QEMU_CORE_ENTRY_ADDR	0x8

/* The offset of GRUB_KERNEL_IMAGE_SIZE.  */
#define GRUB_KERNEL_I386_QEMU_KERNEL_IMAGE_SIZE	0xc

/* The offset of GRUB_PREFIX.  */
#define GRUB_KERNEL_I386_QEMU_PREFIX		0x10

/* End of the data section. */
#define GRUB_KERNEL_I386_QEMU_PREFIX_END		0x50

#define GRUB_KERNEL_I386_QEMU_LINK_ADDR         0x8200

/* The offset of GRUB_TOTAL_MODULE_SIZE.  */
#define GRUB_KERNEL_SPARC64_IEEE1275_TOTAL_MODULE_SIZE	0x8

/* The offset of GRUB_KERNEL_IMAGE_SIZE.  */
#define GRUB_KERNEL_SPARC64_IEEE1275_KERNEL_IMAGE_SIZE	0xc

/* The offset of GRUB_COMPRESSED_SIZE.  */
#define GRUB_KERNEL_SPARC64_IEEE1275_COMPRESSED_SIZE	0x10

/* The offset of GRUB_PREFIX.  */
#define GRUB_KERNEL_SPARC64_IEEE1275_PREFIX		0x14

/* End of the data section. */
#define GRUB_KERNEL_SPARC64_IEEE1275_PREFIX_END		0x114

#define GRUB_BOOT_SPARC64_IEEE1275_LIST_SIZE	12

#define GRUB_BOOT_SPARC64_IEEE1275_IMAGE_ADDRESS	0x4400
#define GRUB_KERNEL_SPARC64_IEEE1275_RAW_SIZE                   0
#define GRUB_KERNEL_SPARC64_IEEE1275_LINK_ADDR 0x4400

#define GRUB_KERNEL_POWERPC_IEEE1275_PREFIX		0x4
#define GRUB_KERNEL_POWERPC_IEEE1275_PREFIX_END	0x44
#define GRUB_KERNEL_POWERPC_IEEE1275_LINK_ALIGN 4
#define GRUB_KERNEL_POWERPC_IEEE1275_LINK_ADDR 0x200000

#define GRUB_KERNEL_MIPS_YEELOONG_LINK_ADDR         0x80200000

#define GRUB_KERNEL_MIPS_YEELOONG_LINK_ALIGN  32

#define GRUB_KERNEL_MIPS_YEELOONG_COMPRESSED_SIZE          0x8
#define GRUB_KERNEL_MIPS_YEELOONG_UNCOMPRESSED_SIZE        0xc

#define GRUB_KERNEL_MIPS_YEELOONG_TOTAL_MODULE_SIZE	0x08
#define GRUB_KERNEL_MIPS_YEELOONG_PREFIX	        0x0c
#define GRUB_KERNEL_MIPS_YEELOONG_PREFIX_END	        0x54

/* The offset of GRUB_PREFIX.  */
#define GRUB_KERNEL_I386_EFI_PREFIX		0x8

/* End of the data section. */
#define GRUB_KERNEL_I386_EFI_PREFIX_END		0x50

/* The offset of GRUB_PREFIX.  */
#define GRUB_KERNEL_X86_64_EFI_PREFIX		0x8

/* End of the data section. */
#define GRUB_KERNEL_X86_64_EFI_PREFIX_END		0x50

#define GRUB_KERNEL_I386_COREBOOT_PREFIX	0x2
#define GRUB_KERNEL_I386_COREBOOT_PREFIX_END	0x42
#define GRUB_KERNEL_I386_COREBOOT_LINK_ADDR	0x8200

#define GRUB_KERNEL_I386_MULTIBOOT_PREFIX	GRUB_KERNEL_I386_COREBOOT_PREFIX
#define GRUB_KERNEL_I386_MULTIBOOT_PREFIX_END	GRUB_KERNEL_I386_COREBOOT_PREFIX_END

#define GRUB_KERNEL_I386_IEEE1275_PREFIX	0x2
#define GRUB_KERNEL_I386_IEEE1275_PREFIX_END	0x42
#define GRUB_KERNEL_I386_IEEE1275_LINK_ADDR	0x10000

#define GRUB_KERNEL_I386_IEEE1275_MOD_ALIGN	0x1000
#define GRUB_KERNEL_I386_COREBOOT_MOD_ALIGN	0x1
#define GRUB_KERNEL_I386_MULTIBOOT_MOD_ALIGN	GRUB_KERNEL_I386_COREBOOT_MOD_ALIGN

/* Non-zero value is only needed for PowerMacs.  */
#define GRUB_KERNEL_I386_IEEE1275_MOD_GAP 0x0
#define GRUB_KERNEL_I386_COREBOOT_MOD_GAP 0x0

#define GRUB_KERNEL_POWERPC_IEEE1275_MOD_ALIGN 0x1000

#define GRUB_KERNEL_MIPS_YEELOONG_MOD_ALIGN 0x1

/* Minimal gap between _end and the start of the modules.  It's a hack
   for PowerMac to prevent "CLAIM failed" error.  The real fix is to
   rewrite grub-mkimage to generate valid ELF files.  */
#define GRUB_KERNEL_POWERPC_IEEE1275_MOD_GAP 0x8000

#ifdef MACHINE
#define GRUB_OFFSETS_CONCAT_(a,b,c) a ## b ## c
#define GRUB_OFFSETS_CONCAT(a,b,c) GRUB_OFFSETS_CONCAT_(a,b,c)
#define GRUB_KERNEL_MACHINE_MOD_ALIGN GRUB_OFFSETS_CONCAT (GRUB_KERNEL_, MACHINE, _MOD_ALIGN)
#define GRUB_KERNEL_MACHINE_MOD_GAP GRUB_OFFSETS_CONCAT (GRUB_KERNEL_, MACHINE, _MOD_GAP)
#define GRUB_KERNEL_MACHINE_TOTAL_MODULE_SIZE GRUB_OFFSETS_CONCAT (GRUB_KERNEL_, MACHINE, _TOTAL_MODULE_SIZE)
#define GRUB_KERNEL_MACHINE_KERNEL_IMAGE_SIZE GRUB_OFFSETS_CONCAT (GRUB_KERNEL_, MACHINE, _KERNEL_IMAGE_SIZE)
#define GRUB_KERNEL_MACHINE_COMPRESSED_SIZE GRUB_OFFSETS_CONCAT (GRUB_KERNEL_, MACHINE, _COMPRESSED_SIZE)
#define GRUB_KERNEL_MACHINE_UNCOMPRESSED_SIZE GRUB_OFFSETS_CONCAT (GRUB_KERNEL_, MACHINE, _UNCOMPRESSED_SIZE)

#define GRUB_KERNEL_MACHINE_PREFIX GRUB_OFFSETS_CONCAT (GRUB_KERNEL_, MACHINE, _PREFIX)
#define GRUB_KERNEL_MACHINE_PREFIX_END GRUB_OFFSETS_CONCAT (GRUB_KERNEL_, MACHINE, _PREFIX_END)
#define GRUB_BOOT_MACHINE_KERNEL_SEG GRUB_OFFSETS_CONCAT (GRUB_BOOT_, MACHINE, _KERNEL_SEG)
#define GRUB_MEMORY_MACHINE_UPPER GRUB_OFFSETS_CONCAT (GRUB_MEMORY_, MACHINE, _UPPER)
#define GRUB_KERNEL_MACHINE_RAW_SIZE GRUB_OFFSETS_CONCAT (GRUB_KERNEL_, MACHINE, _RAW_SIZE)
#define GRUB_KERNEL_MACHINE_INSTALL_BSD_PART GRUB_OFFSETS_CONCAT (GRUB_KERNEL_, MACHINE, _INSTALL_BSD_PART)
#define GRUB_KERNEL_MACHINE_INSTALL_DOS_PART GRUB_OFFSETS_CONCAT (GRUB_KERNEL_, MACHINE, _INSTALL_DOS_PART)
#endif

#ifndef ASM_FILE
struct grub_pc_bios_boot_blocklist
{
  grub_uint64_t start;
  grub_uint16_t len;
  grub_uint16_t segment;
} __attribute__ ((packed));
#endif

#endif
