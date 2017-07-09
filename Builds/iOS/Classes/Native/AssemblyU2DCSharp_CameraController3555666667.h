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

// WallPlayer
struct WallPlayer_t2177029631;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3555666667  : public MonoBehaviour_t1158329972
{
public:
	// WallPlayer CameraController::thePlayer
	WallPlayer_t2177029631 * ___thePlayer_2;
	// UnityEngine.Vector3 CameraController::lastPlayerPosition
	Vector3_t2243707580  ___lastPlayerPosition_3;
	// System.Single CameraController::distanceToMove
	float ___distanceToMove_4;

public:
	inline static int32_t get_offset_of_thePlayer_2() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___thePlayer_2)); }
	inline WallPlayer_t2177029631 * get_thePlayer_2() const { return ___thePlayer_2; }
	inline WallPlayer_t2177029631 ** get_address_of_thePlayer_2() { return &___thePlayer_2; }
	inline void set_thePlayer_2(WallPlayer_t2177029631 * value)
	{
		___thePlayer_2 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayer_2, value);
	}

	inline static int32_t get_offset_of_lastPlayerPosition_3() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___lastPlayerPosition_3)); }
	inline Vector3_t2243707580  get_lastPlayerPosition_3() const { return ___lastPlayerPosition_3; }
	inline Vector3_t2243707580 * get_address_of_lastPlayerPosition_3() { return &___lastPlayerPosition_3; }
	inline void set_lastPlayerPosition_3(Vector3_t2243707580  value)
	{
		___lastPlayerPosition_3 = value;
	}

	inline static int32_t get_offset_of_distanceToMove_4() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___distanceToMove_4)); }
	inline float get_distanceToMove_4() const { return ___distanceToMove_4; }
	inline float* get_address_of_distanceToMove_4() { return &___distanceToMove_4; }
	inline void set_distanceToMove_4(float value)
	{
		___distanceToMove_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
