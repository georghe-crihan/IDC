//
// System V Streams structures
//

#include <idc.idc>

static main(void) {
        auto id;

	id = AddStrucEx(-1,"llcparam",0);
	id = AddStrucEx(-1,"queue",0);
	
	id = GetStrucIdByName("llcparam");
	AddStrucMember(id,"llcp_index",	0X0,	0x10000400,	-1,	2);
	AddStrucMember(id,"llcp_int",	0X2,	0x10000400,	-1,	2);
	AddStrucMember(id,"llcp_port",	0X4,	0x10000400,	-1,	2);
	AddStrucMember(id,"llcp_portsize",	0X6,	0x10000400,	-1,	2);
	AddStrucMember(id,"llcp_base",	0X8,	0x20000400,	-1,	4);
	AddStrucMember(id,"llcp_memsize",	0XC,	0x20000400,	-1,	4);
	AddStrucMember(id,"llcp_memp",	0X10,	0x20000400,	-1,	4);
	AddStrucMember(id,"llcp_running",	0X14,	0x20000400,	-1,	4);
	AddStrucMember(id,"llcp_state",	0X18,	0x20000400,	-1,	4);
	AddStrucMember(id,"llcp_major",	0X1C,	0x10000400,	-1,	2);
	AddStrucMember(id,"llcp_minors",	0X1E,	0x10000400,	-1,	2);
	AddStrucMember(id,"llcp_maxpkt",	0X20,	0x10000400,	-1,	2);
	AddStrucMember(id,"llcp_maxpktllc",	0X22,	0x10000400,	-1,	2);
	AddStrucMember(id,"llcp_nextq",	0X24,	0x20000400,	-1,	4);
	AddStrucMember(id,"llcp_ncount",	0X28,	0x20000400,	-1,	4);
	AddStrucMember(id,"llcp_proms",	0X2C,	0x20000400,	-1,	4);
	
	id = GetStrucIdByName("queue");
	AddStrucMember(id,"q_qinfo",	0X0,	0x20000400,	-1,	4);
	AddStrucMember(id,"g_first",	0X4,	0x20000400,	-1,	4);
	AddStrucMember(id,"q_last",	0X8,	0x20000400,	-1,	4);
	AddStrucMember(id,"q_next",	0XC,	0x20000400,	-1,	4);
	AddStrucMember(id,"q_link",	0X10,	0x20000400,	-1,	4);
	AddStrucMember(id,"q_ptr",	0X14,	0x20100400,	-1,	4);
	AddStrucMember(id,"q_count",	0X18,	0x10000400,	-1,	2);
	AddStrucMember(id,"q_flag",	0X1A,	0x10000400,	-1,	2);
	AddStrucMember(id,"q_minpsz",	0X1C,	0x10000400,	-1,	2);
	AddStrucMember(id,"q_maxpsz",	0X1E,	0x10000400,	-1,	2);
	AddStrucMember(id,"q_hiwat",	0X20,	0x10000400,	-1,	2);
	AddStrucMember(id,"q_lowat",	0X22,	0x10000400,	-1,	2);
}