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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerController::moveSpeed
	float ___moveSpeed_2;
	// System.Single PlayerController::moveSpeed2
	float ___moveSpeed2_3;
	// System.Single PlayerController::jumpForce
	float ___jumpForce_4;
	// System.Boolean PlayerController::trigger
	bool ___trigger_5;
	// UnityEngine.Rigidbody2D PlayerController::myRigidBody
	Rigidbody2D_t502193897 * ___myRigidBody_6;
	// System.Boolean PlayerController::collision
	bool ___collision_7;
	// UnityEngine.LayerMask PlayerController::whatIsWall
	LayerMask_t3188175821  ___whatIsWall_8;
	// UnityEngine.Collider2D PlayerController::myCollider
	Collider2D_t646061738 * ___myCollider_9;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_moveSpeed2_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___moveSpeed2_3)); }
	inline float get_moveSpeed2_3() const { return ___moveSpeed2_3; }
	inline float* get_address_of_moveSpeed2_3() { return &___moveSpeed2_3; }
	inline void set_moveSpeed2_3(float value)
	{
		___moveSpeed2_3 = value;
	}

	inline static int32_t get_offset_of_jumpForce_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___jumpForce_4)); }
	inline float get_jumpForce_4() const { return ___jumpForce_4; }
	inline float* get_address_of_jumpForce_4() { return &___jumpForce_4; }
	inline void set_jumpForce_4(float value)
	{
		___jumpForce_4 = value;
	}

	inline static int32_t get_offset_of_trigger_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___trigger_5)); }
	inline bool get_trigger_5() const { return ___trigger_5; }
	inline bool* get_address_of_trigger_5() { return &___trigger_5; }
	inline void set_trigger_5(bool value)
	{
		___trigger_5 = value;
	}

	inline static int32_t get_offset_of_myRigidBody_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___myRigidBody_6)); }
	inline Rigidbody2D_t502193897 * get_myRigidBody_6() const { return ___myRigidBody_6; }
	inline Rigidbody2D_t502193897 ** get_address_of_myRigidBody_6() { return &___myRigidBody_6; }
	inline void set_myRigidBody_6(Rigidbody2D_t502193897 * value)
	{
		___myRigidBody_6 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidBody_6, value);
	}

	inline static int32_t get_offset_of_collision_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___collision_7)); }
	inline bool get_collision_7() const { return ___collision_7; }
	inline bool* get_address_of_collision_7() { return &___collision_7; }
	inline void set_collision_7(bool value)
	{
		___collision_7 = value;
	}

	inline static int32_t get_offset_of_whatIsWall_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___whatIsWall_8)); }
	inline LayerMask_t3188175821  get_whatIsWall_8() const { return ___whatIsWall_8; }
	inline LayerMask_t3188175821 * get_address_of_whatIsWall_8() { return &___whatIsWall_8; }
	inline void set_whatIsWall_8(LayerMask_t3188175821  value)
	{
		___whatIsWall_8 = value;
	}

	inline static int32_t get_offset_of_myCollider_9() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___myCollider_9)); }
	inline Collider2D_t646061738 * get_myCollider_9() const { return ___myCollider_9; }
	inline Collider2D_t646061738 ** get_address_of_myCollider_9() { return &___myCollider_9; }
	inline void set_myCollider_9(Collider2D_t646061738 * value)
	{
		___myCollider_9 = value;
		Il2CppCodeGenWriteBarrier(&___myCollider_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
