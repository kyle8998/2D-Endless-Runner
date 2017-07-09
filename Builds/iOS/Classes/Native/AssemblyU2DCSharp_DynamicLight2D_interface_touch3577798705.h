#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DynamicLight2D.interface_touch
struct  interface_touch_t3577798705  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject DynamicLight2D.interface_touch::cLight
	GameObject_t1756533147 * ___cLight_2;
	// UnityEngine.GameObject DynamicLight2D.interface_touch::cubeL
	GameObject_t1756533147 * ___cubeL_3;

public:
	inline static int32_t get_offset_of_cLight_2() { return static_cast<int32_t>(offsetof(interface_touch_t3577798705, ___cLight_2)); }
	inline GameObject_t1756533147 * get_cLight_2() const { return ___cLight_2; }
	inline GameObject_t1756533147 ** get_address_of_cLight_2() { return &___cLight_2; }
	inline void set_cLight_2(GameObject_t1756533147 * value)
	{
		___cLight_2 = value;
		Il2CppCodeGenWriteBarrier(&___cLight_2, value);
	}

	inline static int32_t get_offset_of_cubeL_3() { return static_cast<int32_t>(offsetof(interface_touch_t3577798705, ___cubeL_3)); }
	inline GameObject_t1756533147 * get_cubeL_3() const { return ___cubeL_3; }
	inline GameObject_t1756533147 ** get_address_of_cubeL_3() { return &___cubeL_3; }
	inline void set_cubeL_3(GameObject_t1756533147 * value)
	{
		___cubeL_3 = value;
		Il2CppCodeGenWriteBarrier(&___cubeL_3, value);
	}
};

struct interface_touch_t3577798705_StaticFields
{
public:
	// System.Int32 DynamicLight2D.interface_touch::vertexCount
	int32_t ___vertexCount_4;

public:
	inline static int32_t get_offset_of_vertexCount_4() { return static_cast<int32_t>(offsetof(interface_touch_t3577798705_StaticFields, ___vertexCount_4)); }
	inline int32_t get_vertexCount_4() const { return ___vertexCount_4; }
	inline int32_t* get_address_of_vertexCount_4() { return &___vertexCount_4; }
	inline void set_vertexCount_4(int32_t value)
	{
		___vertexCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
