#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// fpsClass
struct  fpsClass_t850960813  : public MonoBehaviour_t1158329972
{
public:
	// System.Single fpsClass::updateInterval
	float ___updateInterval_2;
	// System.Single fpsClass::accum
	float ___accum_3;
	// System.Int32 fpsClass::frames
	int32_t ___frames_4;
	// System.Single fpsClass::timeleft
	float ___timeleft_5;

public:
	inline static int32_t get_offset_of_updateInterval_2() { return static_cast<int32_t>(offsetof(fpsClass_t850960813, ___updateInterval_2)); }
	inline float get_updateInterval_2() const { return ___updateInterval_2; }
	inline float* get_address_of_updateInterval_2() { return &___updateInterval_2; }
	inline void set_updateInterval_2(float value)
	{
		___updateInterval_2 = value;
	}

	inline static int32_t get_offset_of_accum_3() { return static_cast<int32_t>(offsetof(fpsClass_t850960813, ___accum_3)); }
	inline float get_accum_3() const { return ___accum_3; }
	inline float* get_address_of_accum_3() { return &___accum_3; }
	inline void set_accum_3(float value)
	{
		___accum_3 = value;
	}

	inline static int32_t get_offset_of_frames_4() { return static_cast<int32_t>(offsetof(fpsClass_t850960813, ___frames_4)); }
	inline int32_t get_frames_4() const { return ___frames_4; }
	inline int32_t* get_address_of_frames_4() { return &___frames_4; }
	inline void set_frames_4(int32_t value)
	{
		___frames_4 = value;
	}

	inline static int32_t get_offset_of_timeleft_5() { return static_cast<int32_t>(offsetof(fpsClass_t850960813, ___timeleft_5)); }
	inline float get_timeleft_5() const { return ___timeleft_5; }
	inline float* get_address_of_timeleft_5() { return &___timeleft_5; }
	inline void set_timeleft_5(float value)
	{
		___timeleft_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
