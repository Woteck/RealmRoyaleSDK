#pragma once

// RealmRoyale (0.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RL_BattleGame_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BattleGame.BattleObject
// 0x0000 (0x0060 - 0x0060)
class UBattleObject : public UTgObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleGame.BattleObject");
		return ptr;
	}

};


// Class BattleGame.BattlePlayerController
// 0x0000 (0x1614 - 0x1614)
class ABattlePlayerController : public ATgPlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleGame.BattlePlayerController");
		return ptr;
	}


	void BattlePlayerControllerFunction();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
