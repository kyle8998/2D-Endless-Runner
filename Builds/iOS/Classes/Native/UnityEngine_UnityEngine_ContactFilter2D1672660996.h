#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactFilter2D
struct  ContactFilter2D_t1672660996 
{
public:
	// System.Boolean UnityEngine.ContactFilter2D::useTriggers
	bool ___useTriggers_0;
	// System.Boolean UnityEngine.ContactFilter2D::useLayerMask
	bool ___useLayerMask_1;
	// System.Boolean UnityEngine.ContactFilter2D::useDepth
	bool ___useDepth_2;
	// System.Boolean UnityEngine.ContactFilter2D::useNormalAngle
	bool ___useNormalAngle_3;
	// UnityEngine.LayerMask UnityEngine.ContactFilter2D::layerMask
	LayerMask_t3188175821  ___layerMask_4;
	// System.Single UnityEngine.ContactFilter2D::minDepth
	float ___minDepth_5;
	// System.Single UnityEngine.ContactFilter2D::maxDepth
	float ___maxDepth_6;
	// System.Single UnityEngine.ContactFilter2D::minNormalAngle
	float ___minNormalAngle_7;
	// System.Single UnityEngine.ContactFilter2D::maxNormalAngle
	float ___maxNormalAngle_8;

public:
	inline static int32_t get_offset_of_useTriggers_0() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1672660996, ___useTriggers_0)); }
	inline bool get_useTriggers_0() const { return ___useTriggers_0; }
	inline bool* get_address_of_useTriggers_0() { return &___useTriggers_0; }
	inline void set_useTriggers_0(bool value)
	{
		___useTriggers_0 = value;
	}

	inline static int32_t get_offset_of_useLayerMask_1() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1672660996, ___useLayerMask_1)); }
	inline bool get_useLayerMask_1() const { return ___useLayerMask_1; }
	inline bool* get_address_of_useLayerMask_1() { return &___useLayerMask_1; }
	inline void set_useLayerMask_1(bool value)
	{
		___useLayerMask_1 = value;
	}

	inline static int32_t get_offset_of_useDepth_2() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1672660996, ___useDepth_2)); }
	inline bool get_useDepth_2() const { return ___useDepth_2; }
	inline bool* get_address_of_useDepth_2() { return &___useDepth_2; }
	inline void set_useDepth_2(bool value)
	{
		___useDepth_2 = value;
	}

	inline static int32_t get_offset_of_useNormalAngle_3() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1672660996, ___useNormalAngle_3)); }
	inline bool get_useNormalAngle_3() const { return ___useNormalAngle_3; }
	inline bool* get_address_of_useNormalAngle_3() { return &___useNormalAngle_3; }
	inline void set_useNormalAngle_3(bool value)
	{
		___useNormalAngle_3 = value;
	}

	inline static int32_t get_offset_of_layerMask_4() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1672660996, ___layerMask_4)); }
	inline LayerMask_t3188175821  get_layerMask_4() const { return ___layerMask_4; }
	inline LayerMask_t3188175821 * get_address_of_layerMask_4() { return &___layerMask_4; }
	inline void set_layerMask_4(LayerMask_t3188175821  value)
	{
		___layerMask_4 = value;
	}

	inline static int32_t get_offset_of_minDepth_5() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1672660996, ___minDepth_5)); }
	inline float get_minDepth_5() const { return ___minDepth_5; }
	inline float* get_address_of_minDepth_5() { return &___minDepth_5; }
	inline void set_minDepth_5(float value)
	{
		___minDepth_5 = value;
	}

	inline static int32_t get_offset_of_maxDepth_6() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1672660996, ___maxDepth_6)); }
	inline float get_maxDepth_6() const { return ___maxDepth_6; }
	inline float* get_address_of_maxDepth_6() { return &___maxDepth_6; }
	inline void set_maxDepth_6(float value)
	{
		___maxDepth_6 = value;
	}

	inline static int32_t get_offset_of_minNormalAngle_7() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1672660996, ___minNormalAngle_7)); }
	inline float get_minNormalAngle_7() const { return ___minNormalAngle_7; }
	inline float* get_address_of_minNormalAngle_7() { return &___minNormalAngle_7; }
	inline void set_minNormalAngle_7(float value)
	{
		___minNormalAngle_7 = value;
	}

	inline static int32_t get_offset_of_maxNormalAngle_8() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1672660996, ___maxNormalAngle_8)); }
	inline float get_maxNormalAngle_8() const { return ___maxNormalAngle_8; }
	inline float* get_address_of_maxNormalAngle_8() { return &___maxNormalAngle_8; }
	inline void set_maxNormalAngle_8(float value)
	{
		___maxNormalAngle_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ContactFilter2D
struct ContactFilter2D_t1672660996_marshaled_pinvoke
{
	int32_t ___useTriggers_0;
	int32_t ___useLayerMask_1;
	int32_t ___useDepth_2;
	int32_t ___useNormalAngle_3;
	LayerMask_t3188175821  ___layerMask_4;
	float ___minDepth_5;
	float ___maxDepth_6;
	float ___minNormalAngle_7;
	float ___maxNormalAngle_8;
};
// Native definition for COM marshalling of UnityEngine.ContactFilter2D
struct ContactFilter2D_t1672660996_marshaled_com
{
	int32_t ___useTriggers_0;
	int32_t ___useLayerMask_1;
	int32_t ___useDepth_2;
	int32_t ___useNormalAngle_3;
	LayerMask_t3188175821  ___layerMask_4;
	float ___minDepth_5;
	float ___maxDepth_6;
	float ___minNormalAngle_7;
	float ___maxNormalAngle_8;
};
