#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// GameManager
struct GameManager_t2252321495;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WallPlayer
struct  WallPlayer_t2177029631  : public MonoBehaviour_t1158329972
{
public:
	// System.Single WallPlayer::moveSpeedLeft
	float ___moveSpeedLeft_2;
	// System.Single WallPlayer::moveSpeedRight
	float ___moveSpeedRight_3;
	// System.Single WallPlayer::moveSpeedUp
	float ___moveSpeedUp_4;
	// System.Single WallPlayer::speedMultiplier
	float ___speedMultiplier_5;
	// System.Single WallPlayer::speedIncreaseMilestone
	float ___speedIncreaseMilestone_6;
	// System.Single WallPlayer::speedMilestoneCount
	float ___speedMilestoneCount_7;
	// System.Single WallPlayer::speedCap
	float ___speedCap_8;
	// System.Single WallPlayer::moveSpeedUpStore
	float ___moveSpeedUpStore_9;
	// System.Single WallPlayer::speedMilestoneCountStore
	float ___speedMilestoneCountStore_10;
	// System.Single WallPlayer::speedIncreaseMilestoneStore
	float ___speedIncreaseMilestoneStore_11;
	// System.Single WallPlayer::maxSpeed
	float ___maxSpeed_12;
	// System.Boolean WallPlayer::trigger
	bool ___trigger_13;
	// UnityEngine.Rigidbody2D WallPlayer::myRigidBody
	Rigidbody2D_t502193897 * ___myRigidBody_14;
	// System.Boolean WallPlayer::collision
	bool ___collision_15;
	// System.Boolean WallPlayer::hit
	bool ___hit_16;
	// UnityEngine.LayerMask WallPlayer::whatIsWall
	LayerMask_t3188175821  ___whatIsWall_17;
	// UnityEngine.LayerMask WallPlayer::whatIsObstacle
	LayerMask_t3188175821  ___whatIsObstacle_18;
	// UnityEngine.Collider2D WallPlayer::myCollider
	Collider2D_t646061738 * ___myCollider_19;
	// GameManager WallPlayer::theGameManager
	GameManager_t2252321495 * ___theGameManager_20;
	// UnityEngine.AudioSource WallPlayer::tapSound
	AudioSource_t1135106623 * ___tapSound_21;
	// UnityEngine.AudioSource WallPlayer::deathSound
	AudioSource_t1135106623 * ___deathSound_22;

public:
	inline static int32_t get_offset_of_moveSpeedLeft_2() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___moveSpeedLeft_2)); }
	inline float get_moveSpeedLeft_2() const { return ___moveSpeedLeft_2; }
	inline float* get_address_of_moveSpeedLeft_2() { return &___moveSpeedLeft_2; }
	inline void set_moveSpeedLeft_2(float value)
	{
		___moveSpeedLeft_2 = value;
	}

	inline static int32_t get_offset_of_moveSpeedRight_3() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___moveSpeedRight_3)); }
	inline float get_moveSpeedRight_3() const { return ___moveSpeedRight_3; }
	inline float* get_address_of_moveSpeedRight_3() { return &___moveSpeedRight_3; }
	inline void set_moveSpeedRight_3(float value)
	{
		___moveSpeedRight_3 = value;
	}

	inline static int32_t get_offset_of_moveSpeedUp_4() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___moveSpeedUp_4)); }
	inline float get_moveSpeedUp_4() const { return ___moveSpeedUp_4; }
	inline float* get_address_of_moveSpeedUp_4() { return &___moveSpeedUp_4; }
	inline void set_moveSpeedUp_4(float value)
	{
		___moveSpeedUp_4 = value;
	}

	inline static int32_t get_offset_of_speedMultiplier_5() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___speedMultiplier_5)); }
	inline float get_speedMultiplier_5() const { return ___speedMultiplier_5; }
	inline float* get_address_of_speedMultiplier_5() { return &___speedMultiplier_5; }
	inline void set_speedMultiplier_5(float value)
	{
		___speedMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_speedIncreaseMilestone_6() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___speedIncreaseMilestone_6)); }
	inline float get_speedIncreaseMilestone_6() const { return ___speedIncreaseMilestone_6; }
	inline float* get_address_of_speedIncreaseMilestone_6() { return &___speedIncreaseMilestone_6; }
	inline void set_speedIncreaseMilestone_6(float value)
	{
		___speedIncreaseMilestone_6 = value;
	}

	inline static int32_t get_offset_of_speedMilestoneCount_7() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___speedMilestoneCount_7)); }
	inline float get_speedMilestoneCount_7() const { return ___speedMilestoneCount_7; }
	inline float* get_address_of_speedMilestoneCount_7() { return &___speedMilestoneCount_7; }
	inline void set_speedMilestoneCount_7(float value)
	{
		___speedMilestoneCount_7 = value;
	}

	inline static int32_t get_offset_of_speedCap_8() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___speedCap_8)); }
	inline float get_speedCap_8() const { return ___speedCap_8; }
	inline float* get_address_of_speedCap_8() { return &___speedCap_8; }
	inline void set_speedCap_8(float value)
	{
		___speedCap_8 = value;
	}

	inline static int32_t get_offset_of_moveSpeedUpStore_9() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___moveSpeedUpStore_9)); }
	inline float get_moveSpeedUpStore_9() const { return ___moveSpeedUpStore_9; }
	inline float* get_address_of_moveSpeedUpStore_9() { return &___moveSpeedUpStore_9; }
	inline void set_moveSpeedUpStore_9(float value)
	{
		___moveSpeedUpStore_9 = value;
	}

	inline static int32_t get_offset_of_speedMilestoneCountStore_10() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___speedMilestoneCountStore_10)); }
	inline float get_speedMilestoneCountStore_10() const { return ___speedMilestoneCountStore_10; }
	inline float* get_address_of_speedMilestoneCountStore_10() { return &___speedMilestoneCountStore_10; }
	inline void set_speedMilestoneCountStore_10(float value)
	{
		___speedMilestoneCountStore_10 = value;
	}

	inline static int32_t get_offset_of_speedIncreaseMilestoneStore_11() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___speedIncreaseMilestoneStore_11)); }
	inline float get_speedIncreaseMilestoneStore_11() const { return ___speedIncreaseMilestoneStore_11; }
	inline float* get_address_of_speedIncreaseMilestoneStore_11() { return &___speedIncreaseMilestoneStore_11; }
	inline void set_speedIncreaseMilestoneStore_11(float value)
	{
		___speedIncreaseMilestoneStore_11 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_12() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___maxSpeed_12)); }
	inline float get_maxSpeed_12() const { return ___maxSpeed_12; }
	inline float* get_address_of_maxSpeed_12() { return &___maxSpeed_12; }
	inline void set_maxSpeed_12(float value)
	{
		___maxSpeed_12 = value;
	}

	inline static int32_t get_offset_of_trigger_13() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___trigger_13)); }
	inline bool get_trigger_13() const { return ___trigger_13; }
	inline bool* get_address_of_trigger_13() { return &___trigger_13; }
	inline void set_trigger_13(bool value)
	{
		___trigger_13 = value;
	}

	inline static int32_t get_offset_of_myRigidBody_14() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___myRigidBody_14)); }
	inline Rigidbody2D_t502193897 * get_myRigidBody_14() const { return ___myRigidBody_14; }
	inline Rigidbody2D_t502193897 ** get_address_of_myRigidBody_14() { return &___myRigidBody_14; }
	inline void set_myRigidBody_14(Rigidbody2D_t502193897 * value)
	{
		___myRigidBody_14 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidBody_14, value);
	}

	inline static int32_t get_offset_of_collision_15() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___collision_15)); }
	inline bool get_collision_15() const { return ___collision_15; }
	inline bool* get_address_of_collision_15() { return &___collision_15; }
	inline void set_collision_15(bool value)
	{
		___collision_15 = value;
	}

	inline static int32_t get_offset_of_hit_16() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___hit_16)); }
	inline bool get_hit_16() const { return ___hit_16; }
	inline bool* get_address_of_hit_16() { return &___hit_16; }
	inline void set_hit_16(bool value)
	{
		___hit_16 = value;
	}

	inline static int32_t get_offset_of_whatIsWall_17() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___whatIsWall_17)); }
	inline LayerMask_t3188175821  get_whatIsWall_17() const { return ___whatIsWall_17; }
	inline LayerMask_t3188175821 * get_address_of_whatIsWall_17() { return &___whatIsWall_17; }
	inline void set_whatIsWall_17(LayerMask_t3188175821  value)
	{
		___whatIsWall_17 = value;
	}

	inline static int32_t get_offset_of_whatIsObstacle_18() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___whatIsObstacle_18)); }
	inline LayerMask_t3188175821  get_whatIsObstacle_18() const { return ___whatIsObstacle_18; }
	inline LayerMask_t3188175821 * get_address_of_whatIsObstacle_18() { return &___whatIsObstacle_18; }
	inline void set_whatIsObstacle_18(LayerMask_t3188175821  value)
	{
		___whatIsObstacle_18 = value;
	}

	inline static int32_t get_offset_of_myCollider_19() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___myCollider_19)); }
	inline Collider2D_t646061738 * get_myCollider_19() const { return ___myCollider_19; }
	inline Collider2D_t646061738 ** get_address_of_myCollider_19() { return &___myCollider_19; }
	inline void set_myCollider_19(Collider2D_t646061738 * value)
	{
		___myCollider_19 = value;
		Il2CppCodeGenWriteBarrier(&___myCollider_19, value);
	}

	inline static int32_t get_offset_of_theGameManager_20() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___theGameManager_20)); }
	inline GameManager_t2252321495 * get_theGameManager_20() const { return ___theGameManager_20; }
	inline GameManager_t2252321495 ** get_address_of_theGameManager_20() { return &___theGameManager_20; }
	inline void set_theGameManager_20(GameManager_t2252321495 * value)
	{
		___theGameManager_20 = value;
		Il2CppCodeGenWriteBarrier(&___theGameManager_20, value);
	}

	inline static int32_t get_offset_of_tapSound_21() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___tapSound_21)); }
	inline AudioSource_t1135106623 * get_tapSound_21() const { return ___tapSound_21; }
	inline AudioSource_t1135106623 ** get_address_of_tapSound_21() { return &___tapSound_21; }
	inline void set_tapSound_21(AudioSource_t1135106623 * value)
	{
		___tapSound_21 = value;
		Il2CppCodeGenWriteBarrier(&___tapSound_21, value);
	}

	inline static int32_t get_offset_of_deathSound_22() { return static_cast<int32_t>(offsetof(WallPlayer_t2177029631, ___deathSound_22)); }
	inline AudioSource_t1135106623 * get_deathSound_22() const { return ___deathSound_22; }
	inline AudioSource_t1135106623 ** get_address_of_deathSound_22() { return &___deathSound_22; }
	inline void set_deathSound_22(AudioSource_t1135106623 * value)
	{
		___deathSound_22 = value;
		Il2CppCodeGenWriteBarrier(&___deathSound_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
