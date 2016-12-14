//
//
//      This file contains the user-defined type definitions.
//      To use it press F2 in IDA and enter the name of this file.
//

#include <idc.idc>

static main(void) {
        Enums();                // enumerations
        Structures();           // structure types
}

static Enums_0(id) {

	id = AddEnum(-1,"e_type",0x1100000);
	AddConstEx(id,"ET_NONE",	0X0,	-1);
	AddConstEx(id,"ET_REL",	0X1,	-1);
	AddConstEx(id,"ET_EXEC",	0X2,	-1);
	AddConstEx(id,"ET_DYN",	0X3,	-1);
	AddConstEx(id,"ET_CORE",	0X4,	-1);
	AddConstEx(id,"ET_LOPROC",	0XFF00,	-1);
	AddConstEx(id,"ET_HIPROC",	0XFFFF,	-1);
	id = AddEnum(-1,"e_machine",0x1100000);
	AddConstEx(id,"EM_I386",	0X3,	-1);
	id = AddEnum(-1,"e_version",0x1100000);
	AddConstEx(id,"EV_CURRENT",	0X1,	-1);
	id = AddEnum(-1,"ei_data",0x1100000);
	AddConstEx(id,"ELFDATA2LSB",	0X1,	-1);
	id = AddEnum(-1,"ei_class",0x1100000);
	AddConstEx(id,"ELFCLASS32",	0X1,	-1);
	id = AddEnum(-1,"p_type",0x1100000);
	AddConstEx(id,"PT_LOAD",	0X1,	-1);
	AddConstEx(id,"PT_DYNAMIC",	0X2,	-1);
	AddConstEx(id,"PT_INTERP",	0X3,	-1);
	AddConstEx(id,"PT_PHDR",	0X6,	-1);
	id = AddEnum(-1,"sh_type",0x1100000);
	AddConstEx(id,"SHT_NULL",	0X0,	-1);
	AddConstEx(id,"SHT_PROGBITS",	0X1,	-1);
	AddConstEx(id,"SHT_SYMTAB",	0X2,	-1);
	AddConstEx(id,"SHT_STRTAB",	0X3,	-1);
	AddConstEx(id,"SHT_RELA",	0X4,	-1);
	AddConstEx(id,"SHT_HASH",	0X5,	-1);
	AddConstEx(id,"SHT_DYNAMIC",	0X6,	-1);
	AddConstEx(id,"SHT_NOTE",	0X7,	-1);
	AddConstEx(id,"SHT_NOBITS",	0X8,	-1);
	AddConstEx(id,"SHT_REL",	0X9,	-1);
	AddConstEx(id,"SHT_SHLIB",	0XA,	-1);
	AddConstEx(id,"SHT_DYNSYM",	0XB,	-1);
	id = AddEnum(-1,"p_flags",0x6600000);
	SetEnumBf(id,1);
	AddConstEx(id,"PF_X",	0X1,	0x1);
	AddConstEx(id,"PF_W",	0X2,	0x2);
	AddConstEx(id,"PF_R",	0X4,	0x4);
	id = AddEnum(-1,"sh_flags",0x3300000);
	SetEnumBf(id,1);
	AddConstEx(id,"SHF_WRITE",	0X1,	0x1);
	AddConstEx(id,"SHF_ALLOC",	0X2,	0x2);
	AddConstEx(id,"SHF_EXECINSTR",	0X4,	0x4);
	id = AddEnum(-1,"st_info",0x1100000);
	SetEnumBf(id,1);
	AddConstEx(id,"STT_NOTYPE",	0X0,	0xF);
	AddConstEx(id,"STT_OBJECT",	0X1,	0xF);
	AddConstEx(id,"STT_FUNC",	0X2,	0xF);
	AddConstEx(id,"STT_SECTION",	0X3,	0xF);
	AddConstEx(id,"STT_FILE",	0X4,	0xF);
	AddConstEx(id,"STT_LOPROC",	0XD,	0xF);
	AddConstEx(id,"STT_HIPROC",	0XF,	0xF);
	AddConstEx(id,"STB_LOCAL",	0X0,	0xF0);
	AddConstEx(id,"STB_GLOBAL",	0X10,	0xF0);
	AddConstEx(id,"STB_WEAK",	0X20,	0xF0);
	AddConstEx(id,"STB_LOPROC",	0XD0,	0xF0);
	AddConstEx(id,"STB_HIPROC",	0XF0,	0xF0);
	id = AddEnum(-1,"st_shndx",0x1100000);
	AddConstEx(id,"SHN_UNDEF",	0X0,	-1);
	AddConstEx(id,"SHN_LORESERVE",	0XFF00,	-1);
	AddConstEx(id,"SHN_LOPROC",	0XFF00,	-1);
	AddConstEx(id,"SHN_HIPROC",	0XFF1F,	-1);
	AddConstEx(id,"SHN_ABS",	0XFFF1,	-1);
	AddConstEx(id,"SHN_COMMON",	0XFFF2,	-1);
	AddConstEx(id,"SHN_HIRESERVE",	0XFFFF,	-1);
	id = AddEnum(-1,"r_info",0x1100000);
	SetEnumBf(id,1);
	AddConstEx(id,"R_386_NONE",	0X0,	0xF);
	AddConstEx(id,"R_386_32",	0X1,	0xF);
	AddConstEx(id,"R_386_PC32",	0X2,	0xF);
	AddConstEx(id,"R_386_GOT32",	0X3,	0xF);
	AddConstEx(id,"R_386_PLT32",	0X4,	0xF);
	AddConstEx(id,"R_386_COPY",	0X5,	0xF);
	AddConstEx(id,"R_386_GLOB_DAT",	0X6,	0xF);
	AddConstEx(id,"R_386_JMP_SLOT",	0X7,	0xF);
	AddConstEx(id,"R_386_RELATIVE",	0X8,	0xF);
	AddConstEx(id,"R_386_GOTOFF",	0X9,	0xF);
	AddConstEx(id,"R_386_GOTPC",	0XA,	0xF);
	id = AddEnum(-1,"d_tag",0x1100000);
	AddConstEx(id,"DT_NULL",	0X0,	-1);
	AddConstEx(id,"DT_NEEDED",	0X1,	-1);
	AddConstEx(id,"DT_PLTRELSZ",	0X2,	-1);
	AddConstEx(id,"DT_PLTGOT",	0X3,	-1);
	AddConstEx(id,"DT_HASH",	0X4,	-1);
	AddConstEx(id,"DT_STRTAB",	0X5,	-1);
	AddConstEx(id,"DT_SYMTAB",	0X6,	-1);
	AddConstEx(id,"DT_RELA",	0X7,	-1);
	AddConstEx(id,"DT_RELASZ",	0X8,	-1);
	AddConstEx(id,"DT_RELAENT",	0X9,	-1);
	AddConstEx(id,"DT_STRSZ",	0XA,	-1);
	AddConstEx(id,"DT_SYMENT",	0XB,	-1);
	AddConstEx(id,"DT_INIT",	0XC,	-1);
	AddConstEx(id,"DT_FINI",	0XD,	-1);
	AddConstEx(id,"DT_SONAME",	0XE,	-1);
	AddConstEx(id,"DT_RPATH",	0XF,	-1);
	AddConstEx(id,"DT_SYMBOLIC",	0X10,	-1);
	AddConstEx(id,"DT_REL",	0X11,	-1);
	AddConstEx(id,"DT_RELSZ",	0X12,	-1);
	AddConstEx(id,"DT_RELENT",	0X13,	-1);
	AddConstEx(id,"DT_PLTREL",	0X14,	-1);
	AddConstEx(id,"DT_DEBUG",	0X15,	-1);
	AddConstEx(id,"DT_TEXTREL",	0X16,	-1);
	AddConstEx(id,"DT_JMPREL",	0X17,	-1);
	AddConstEx(id,"DT_LOPROC",	0X70000000,	-1);
	AddConstEx(id,"DT_HIPROC",	0X7FFFFFFF,	-1);
	id = AddEnum(-1,"i386_elf",0x1100000);
	AddConstEx(id,"ELF_386_MAXPGSZ",0X1000,		-1); /* maximum page size */
}

//------------------------------------------------------------------------
// Information about enum types

static Enums(void) {
        auto id;
	id = Enums_0(id);
}

static Structures_0(id) {

	id = AddStrucEx(-1,"e_ident",0);
	id = AddStrucEx(-1,"Elf32_Ehdr",0);
	id = AddStrucEx(-1,"Elf32_Phdr",0);
	id = AddStrucEx(-1,"Elf32_Shdr",0);
	id = AddStrucEx(-1,"Elf32_Rel",0);
	id = AddStrucEx(-1,"Elf32_Sym",0);
	id = AddStrucEx(-1,"Elf32_Dyn",0);
	
	id = GetStrucIdByName("e_ident");
	AddStrucMember(id,"EI_MAG0",	0X0,	0x000400,	-1,	1);
	AddStrucMember(id,"EI_MAG1",	0X1,	0x300400,	-1,	1);
	AddStrucMember(id,"EI_MAG2",	0X2,	0x300400,	-1,	1);
	AddStrucMember(id,"EI_MAG3",	0X3,	0x300400,	-1,	1);
	AddStrucMember(id,"EI_CLASS",	0X4,	0x800400,	GetEnum("ei_class"),	1);
	AddStrucMember(id,"EI_DATA",	0X5,	0x800400,	GetEnum("ei_data"),	1);
	AddStrucMember(id,"EI_VERSION",	0X6,	0x800400,	GetEnum("e_version"),	1);
	AddStrucMember(id,"EI_PAD",	0X7,	0x000400,	-1,	9);
	
	id = GetStrucIdByName("Elf32_Ehdr");
	AddStrucMember(id,"e_ident",	0X0,	0x60000400,	GetStrucIdByName("e_ident"),	16);
	AddStrucMember(id,"e_type",	0X10,	0x10800400,	GetEnum("e_type"),	2);
	AddStrucMember(id,"e_machine",	0X12,	0x10800400,	GetEnum("e_machine"),	2);
	AddStrucMember(id,"e_version",	0X14,	0x20800400,	GetEnum("e_version"),	4);
	AddStrucMember(id,"e_entry",	0X18,	0x20000400,	-1,	4);
	AddStrucMember(id,"e_phoff",	0X1C,	0x20500400,	0X0,	4);
	AddStrucMember(id,"e_shoff",	0X20,	0x20500400,	0X0,	4);
	AddStrucMember(id,"e_flags",	0X24,	0x20000400,	-1,	4);
	AddStrucMember(id,"e_hsize",	0X28,	0x10000400,	-1,	2);
	AddStrucMember(id,"e_phentsize",	0X2A,	0x10000400,	-1,	2);
	AddStrucMember(id,"e_phnum",	0X2C,	0x10200400,	-1,	2);
	AddStrucMember(id,"e_shentsize",	0X2E,	0x10000400,	-1,	2);
	AddStrucMember(id,"e_shnum",	0X30,	0x10200400,	-1,	2);
	AddStrucMember(id,"e_shstrndx",	0X32,	0x10000400,	-1,	2);
	
	id = GetStrucIdByName("Elf32_Phdr");
	AddStrucMember(id,"p_type",	0X0,	0x20800400,	GetEnum("p_type"),	4);
	AddStrucMember(id,"p_offset",	0X4,	0x20500400,	0X0,	4);
	AddStrucMember(id,"p_vaddr",	0X8,	0x20000400,	-1,	4);
	AddStrucMember(id,"p_paddr",	0XC,	0x20000400,	-1,	4);
	AddStrucMember(id,"p_filesz",	0X10,	0x20000400,	-1,	4);
	AddStrucMember(id,"p_memsz",	0X14,	0x20000400,	-1,	4);
	AddStrucMember(id,"p_flags",	0X18,	0x20800400,	GetEnum("p_flags"),	4);
	AddStrucMember(id,"p_align",	0X1C,	0x20000400,	-1,	4);
	
	id = GetStrucIdByName("Elf32_Shdr");
	AddStrucMember(id,"sh_name",	0X0,	0x20000400,	-1,	4);
	AddStrucMember(id,"sh_type",	0X4,	0x20800400,	GetEnum("sh_type"),	4);
	AddStrucMember(id,"sh_flags",	0X8,	0x20800400,	GetEnum("sh_flags"),	4);
	AddStrucMember(id,"sh_addr",	0XC,	0x20000400,	-1,	4);
	AddStrucMember(id,"sh_offset",	0X10,	0x20500400,	0X0,	4);
	AddStrucMember(id,"sh_size",	0X14,	0x20000400,	-1,	4);
	AddStrucMember(id,"sh_link",	0X18,	0x20000400,	-1,	4);
	AddStrucMember(id,"sh_info",	0X1C,	0x20000400,	-1,	4);
	AddStrucMember(id,"sh_addralign",	0X20,	0x20000400,	-1,	4);
	AddStrucMember(id,"sh_entsize",	0X24,	0x20000400,	-1,	4);
	
	id = GetStrucIdByName("Elf32_Rel");
	AddStrucMember(id,"r_offset",	0X0,	0x20000400,	-1,	4);
	AddStrucMember(id,"r_info",	0X4,	0x20800400,	GetEnum("r_info"),	4);
	
	id = GetStrucIdByName("Elf32_Sym");
	AddStrucMember(id,"st_name",	0X0,	0x20000400,	-1,	4);
	AddStrucMember(id,"st_value",	0X4,	0x20000400,	-1,	4);
	AddStrucMember(id,"st_size",	0X8,	0x20000400,	-1,	4);
	AddStrucMember(id,"st_info",	0XC,	0x800400,	GetEnum("st_info"),	1);
	AddStrucMember(id,"st_other",	0XD,	0x000400,	-1,	1);
	AddStrucMember(id,"st_shndx",	0XE,	0x10800400,	GetEnum("st_shndx"),	2);
	
	id = GetStrucIdByName("Elf32_Dyn");
	AddStrucMember(id,"d_tag",	0X0,	0x20800400,	GetEnum("d_tag"),	4);
	AddStrucMember(id,"d_val_d_ptr",	0X4,	0x20000400,	-1,	4);
}

//------------------------------------------------------------------------
// Information about structure types

static Structures(void) {
        auto id;
	id = Structures_0(id);
}

// End of file.
