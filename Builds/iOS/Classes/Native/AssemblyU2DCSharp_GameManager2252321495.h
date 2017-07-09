#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// PlayerController
struct PlayerController_t4148409433;
// ObstacleDestroyer[]
struct ObstacleDestroyerU5BU5D_t4122474607;
// ScoreManager
struct ScoreManager_t3573108141;
// DeathMenu
struct DeathMenu_t170324533;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform GameManager::obstacleGenerator
	Transform_t3275118058 * ___obstacleGenerator_2;
	// UnityEngine.Vector3 GameManager::obstacleStartPoint
	Vector3_t2243707580  ___obstacleStartPoint_3;
	// PlayerController GameManager::thePlayer
	PlayerController_t4148409433 * ___thePlayer_4;
	// UnityEngine.Vector3 GameManager::playerStartPoint
	Vector3_t2243707580  ___playerStartPoint_5;
	// ObstacleDestroyer[] GameManager::obstacleList
	ObstacleDestroyerU5BU5D_t4122474607* ___obstacleList_6;
	// ScoreManager GameManager::theScoreManager
	ScoreManager_t3573108141 * ___theScoreManager_7;
	// DeathMenu GameManager::theDeathScreen
	DeathMenu_t170324533 * ___theDeathScreen_8;

public:
	inline static int32_t get_offset_of_obstacleGenerator_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___obstacleGenerator_2)); }
	inline Transform_t3275118058 * get_obstacleGenerator_2() const { return ___obstacleGenerator_2; }
	inline Transform_t3275118058 ** get_address_of_obstacleGenerator_2() { return &___obstacleGenerator_2; }
	inline void set_obstacleGenerator_2(Transform_t3275118058 * value)
	{
		___obstacleGenerator_2 = value;
		Il2CppCodeGenWriteBarrier(&___obstacleGenerator_2, value);
	}

	inline static int32_t get_offset_of_obstacleStartPoint_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___obstacleStartPoint_3)); }
	inline Vector3_t2243707580  get_obstacleStartPoint_3() const { return ___obstacleStartPoint_3; }
	inline Vector3_t2243707580 * get_address_of_obstacleStartPoint_3() { return &___obstacleStartPoint_3; }
	inline void set_obstacleStartPoint_3(Vector3_t2243707580  value)
	{
		___obstacleStartPoint_3 = value;
	}

	inline static int32_t get_offset_of_thePlayer_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___thePlayer_4)); }
	inline PlayerController_t4148409433 * get_thePlayer_4() const { return ___thePlayer_4; }
	inline PlayerController_t4148409433 ** get_address_of_thePlayer_4() { return &___thePlayer_4; }
	inline void set_thePlayer_4(PlayerController_t4148409433 * value)
	{
		___thePlayer_4 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayer_4, value);
	}

	inline static int32_t get_offset_of_playerStartPoint_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playerStartPoint_5)); }
	inline Vector3_t2243707580  get_playerStartPoint_5() const { return ___playerStartPoint_5; }
	inline Vector3_t2243707580 * get_address_of_playerStartPoint_5() { return &___playerStartPoint_5; }
	inline void set_playerStartPoint_5(Vector3_t2243707580  value)
	{
		___playerStartPoint_5 = value;
	}

	inline static int32_t get_offset_of_obstacleList_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___obstacleList_6)); }
	inline ObstacleDestroyerU5BU5D_t4122474607* get_obstacleList_6() const { return ___obstacleList_6; }
	inline ObstacleDestroyerU5BU5D_t4122474607** get_address_of_obstacleList_6() { return &___obstacleList_6; }
	inline void set_obstacleList_6(ObstacleDestroyerU5BU5D_t4122474607* value)
	{
		___obstacleList_6 = value;
		Il2CppCodeGenWriteBarrier(&___obstacleList_6, value);
	}

	inline static int32_t get_offset_of_theScoreManager_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___theScoreManager_7)); }
	inline ScoreManager_t3573108141 * get_theScoreManager_7() const { return ___theScoreManager_7; }
	inline ScoreManager_t3573108141 ** get_address_of_theScoreManager_7() { return &___theScoreManager_7; }
	inline void set_theScoreManager_7(ScoreManager_t3573108141 * value)
	{
		___theScoreManager_7 = value;
		Il2CppCodeGenWriteBarrier(&___theScoreManager_7, value);
	}

	inline static int32_t get_offset_of_theDeathScreen_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___theDeathScreen_8)); }
	inline DeathMenu_t170324533 * get_theDeathScreen_8() const { return ___theDeathScreen_8; }
	inline DeathMenu_t170324533 ** get_address_of_theDeathScreen_8() { return &___theDeathScreen_8; }
	inline void set_theDeathScreen_8(DeathMenu_t170324533 * value)
	{
		___theDeathScreen_8 = value;
		Il2CppCodeGenWriteBarrier(&___theDeathScreen_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
