
#include <NPCd/Functions/CNPC_IsVipUser.h>
#include <Common/CLog.h>

CNPC_IsVipUser::CNPC_IsVipUser() :
	NPCFunction(L"IsVipUser", &IsVipUser)
{
}

void* CNPC_IsVipUser::Call(void *caller, void **params)
{
	return reinterpret_cast<void*(*)(void*, void*)>(functionPtr.functionPtr)(
		caller, params[0]);
}

void CNPC_IsVipUser::SetTypes()
{
	SetReturnType(Type::TYPE_INT);
	AddParameter(Type::TYPE_CREATURE);
}

int CNPC_IsVipUser::IsVipUser(CNPC *npc, CSharedCreatureData *c)
{
    CLog::Add(CLog::Blue, L"CNPC::IsVipUser stub");
	return 0;
}

