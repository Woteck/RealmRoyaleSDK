// RealmRoyale (0.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RL_BattleGame_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BattleGame.BattlePlayerController.BattlePlayerControllerFunction
// (Final, NetReliable, Exec, Const)

void ABattlePlayerController::BattlePlayerControllerFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleGame.BattlePlayerController.BattlePlayerControllerFunction");

	ABattlePlayerController_BattlePlayerControllerFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
