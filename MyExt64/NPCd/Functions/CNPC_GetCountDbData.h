
#pragma once

#include <NPCd/NPCFunction.h>
#include <NPCd/CNPC.h>

class CNPC_GetCountDbData : public NPCFunction {
public:
	CNPC_GetCountDbData();
	virtual void* Call(void *caller, void **params);
	virtual void SetTypes();
	static int GetCountDbData(CNPC *npc, wchar_t *str1, wchar_t *str2, wchar_t *str3, wchar_t *str4, wchar_t *str5, wchar_t *str6, wchar_t *str7, wchar_t *str8, wchar_t *str9, wchar_t *str10);
};

