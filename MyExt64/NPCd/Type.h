
#pragma once

#include <string>

class Type {
public:
	enum TypeID {
		TYPE_VOID = 1,
		TYPE_INT = 2,
		TYPE_FLOAT = 3,
		TYPE_STRING = 4,
		TYPE_DOUBLE = 5,
		TYPE_INT64 = 6,
		TYPE_POINTER = 7,
		TYPE_CREATURE = 8,
		TYPE_ITEMDATA = 9,
		TYPE_PLEDGEDATA = 10,
		TYPE_PARTY = 11,
		TYPE_STATICOBJECTDATA = 12,
		TYPE_NPCMAKER = 13,
		TYPE_NPC = 14,
		TYPE_HATEINFO = 15,
		TYPE_GLOBALOBJECT = 16,
		TYPE_SPAWNDEFINE = 17,
		TYPE_CODEINFO = 18,
		TYPE_CODEINFOLIST = 19,
		TYPE_DBNPCINFO = 20,
		TYPE_ATOMICVALUE = 21,
		TYPE_ROOMINFO = 22,
		TYPE_ROOMINFOLIST = 23,
		TYPE_POSITION = 24,
		TYPE_POSITIONLIST = 25,
		TYPE_FHTML = 26,
		TYPE_WAYPOINTS = 27,
		TYPE_WAYPOINTDELAYS = 28,
		TYPE_TELPOSLIST = 29,
		TYPE_BUYSELLLIST = 30,
		TYPE_ITEMINDEXLIST = 31,
		TYPE_INTLIST = 32,
		TYPE_CREATURE2 = 33,
		TYPE_STRLIST = 34,
		TYPE_NPCEVENT = 35,
		TYPE_MAKEREVENT = 36,
		TYPES_END
	};

	Type();

	virtual ~Type();

	virtual void* Factory() = 0;

	virtual bool IsClass() = 0;

	TypeID type;
	unsigned char padding0x000C[0x0010-0x000C];
	std::wstring name;
	unsigned char padding0x0038[0x50];
};

