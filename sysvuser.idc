//
//
//      This file contains the user-defined type definitions.
//      To use it press F2 in IDA and enter the name of this file.
//	System V struct user (aka u)
//

#include <idc.idc>

static main(void) {
        auto id;
	id = Structures(id);           // structure types       
}

//------------------------------------------------------------------------
// Information about structure types


static Structures(id) {

	id = AddStrucEx(-1,"rem_ids",0);
	id = AddStrucEx(-1,"user",0);
	
	id = GetStrucIdByName("rem_ids");
	AddStrucMember(id,"ux_uid",	0X0,	0x10000400,	-1,	2);
	AddStrucMember(id,"ux_gid",	0X2,	0x10000400,	-1,	2);
	AddStrucMember(id,"ux_mode",	0X4,	0x10000400,	-1,	2);
	
	id = GetStrucIdByName("user");
	AddStrucMember(id,"u_stack",	0X0,	0x000400,	-1,	4096);
	AddStrucMember(id,"u_tss",	0X1000,	0x20000400,	-1,	4);
	AddStrucMember(id,"u_sztss",	0X1004,	0x10000400,	-1,	2);
	AddStrucMember(id,"u_sigfault",	0X1006,	0x000400,	-1,	1);
	AddStrucMember(id,"u_sigfailed",	0X1007,	0x000400,	-1,	1);
	AddStrucMember(id,"u_sub",	0X1008,	0x20000400,	-1,	4);
	AddStrucMember(id,"u_filler1",	0X100C,	0x000400,	-1,	40);
	AddStrucMember(id,"u_caddrflt",	0X1034,	0x20000400,	-1,	4);
	AddStrucMember(id,"u_nshmseg",	0X1038,	0x000400,	-1,	1);
	AddStrucMember(id,"u_pad1",	0X1039,	0x000400,	-1,	1);
	AddStrucMember(id,"u_exfile",	0X103A,	0x60000400,	GetStrucIdByName("rem_ids"),	6);
	AddStrucMember(id,"u_comp",	0X1040,	0x20000400,	-1,	4);
	AddStrucMember(id,"u_nextcp",	0X1044,	0x20000400,	-1,	4);
	AddStrucMember(id,"u_rflags",	0X1048,	0x10000400,	-1,	2);
	AddStrucMember(id,"u_pad2",	0X104A,	0x10000400,	-1,	2);
	AddStrucMember(id,"u_sysabort",	0X104C,	0x20000400,	-1,	4);
	AddStrucMember(id,"u_systrap",	0X1050,	0x20000400,	-1,	4);
	AddStrucMember(id,"u_syscall",	0X1054,	0x20000400,	-1,	4);
	AddStrucMember(id,"u_mntindx",	0X1058,	0x20000400,	-1,	4);
	AddStrucMember(id,"u_gift",	0X105C,	0x20000400,	-1,	4);
	AddStrucMember(id,"u_rcstat",	0X1060,	0x20000400,	-1,	4);
	AddStrucMember(id,"u_userstack",	0X1064,	0x20000400,	-1,	4);
	AddStrucMember(id,"u_copymsg",	0X1068,	0x20000400,	-1,	4);
	AddStrucMember(id,"u_copybp",	0X106C,	0x20000400,	-1,	4);
	AddStrucMember(id,"u_msgend",	0X1070,	0x20000400,	-1,	4);
	AddStrucMember(id,"u_bsize",	0X1074,	0x20000400,	-1,	4);
	AddStrucMember(id,"u_psargs",	0X1078,	0x000400,	-1,	80);
	AddStrucMember(id,"u_pgproc",	0X10C8,	0x20000400,	-1,	4);
	AddStrucMember(id,"u_ageinterval",	0X10CC,	0x20000400,	-1,	4);
	AddStrucMember(id,"u_qsav",	0X10D0,	0x20000400,	-1,	24);
	AddStrucMember(id,"u_segflg",	0X10E8,	0x000400,	-1,	1);
	AddStrucMember(id,"u_error",	0X10E9,	0x000400,	-1,	1);
	AddStrucMember(id,"u_uid",	0X10EA,	0x10000400,	-1,	2);
	AddStrucMember(id,"u_gid",	0X10EC,	0x10000400,	-1,	2);
	AddStrucMember(id,"u_ruid",	0X10EE,	0x10000400,	-1,	2);
	AddStrucMember(id,"u_rgid",	0X10F0,	0x10000400,	-1,	2);
	AddStrucMember(id,"u_pad4",	0X10F2,	0x10000400,	-1,	2);
	AddStrucMember(id,"u_procp",	0X10F4,	0x20000400,	-1,	4);
	AddStrucMember(id,"u_ap",	0X10F8,	0x20000400,	-1,	4);
	AddStrucMember(id,"u_base",	0X10FC,	0x20000400,	-1,	4);
}

// End of file.
