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
// UnityEngine.Camera
struct Camera_t189460977;
// DynamicLight2D.DynamicLight
struct DynamicLight_t1346119475;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DynamicLight2D.interface_touch2
struct  interface_touch2_t3046590531  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject DynamicLight2D.interface_touch2::cLight
	GameObject_t1756533147 * ___cLight_2;
	// UnityEngine.GameObject DynamicLight2D.interface_touch2::cubeL
	GameObject_t1756533147 * ___cubeL_3;
	// UnityEngine.Camera DynamicLight2D.interface_touch2::cam
	Camera_t189460977 * ___cam_4;
	// DynamicLight2D.DynamicLight DynamicLight2D.interface_touch2::_2ddl
	DynamicLight_t1346119475 * ____2ddl_5;
	// System.Int32 DynamicLight2D.interface_touch2::__layer
	int32_t _____layer_6;
	// System.Int32 DynamicLight2D.interface_touch2::lightCount
	int32_t ___lightCount_8;
	// System.Boolean DynamicLight2D.interface_touch2::_mouseClick
	bool ____mouseClick_9;
	// System.Boolean DynamicLight2D.interface_touch2::_ctrlDown
	bool ____ctrlDown_10;

public:
	inline static int32_t get_offset_of_cLight_2() { return static_cast<int32_t>(offsetof(interface_touch2_t3046590531, ___cLight_2)); }
	inline GameObject_t1756533147 * get_cLight_2() const { return ___cLight_2; }
	inline GameObject_t1756533147 ** get_address_of_cLight_2() { return &___cLight_2; }
	inline void set_cLight_2(GameObject_t1756533147 * value)
	{
		___cLight_2 = value;
		Il2CppCodeGenWriteBarrier(&___cLight_2, value);
	}

	inline static int32_t get_offset_of_cubeL_3() { return static_cast<int32_t>(offsetof(interface_touch2_t3046590531, ___cubeL_3)); }
	inline GameObject_t1756533147 * get_cubeL_3() const { return ___cubeL_3; }
	inline GameObject_t1756533147 ** get_address_of_cubeL_3() { return &___cubeL_3; }
	inline void set_cubeL_3(GameObject_t1756533147 * value)
	{
		___cubeL_3 = value;
		Il2CppCodeGenWriteBarrier(&___cubeL_3, value);
	}

	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(interface_touch2_t3046590531, ___cam_4)); }
	inline Camera_t189460977 * get_cam_4() const { return ___cam_4; }
	inline Camera_t189460977 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(Camera_t189460977 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier(&___cam_4, value);
	}

	inline static int32_t get_offset_of__2ddl_5() { return static_cast<int32_t>(offsetof(interface_touch2_t3046590531, ____2ddl_5)); }
	inline DynamicLight_t1346119475 * get__2ddl_5() const { return ____2ddl_5; }
	inline DynamicLight_t1346119475 ** get_address_of__2ddl_5() { return &____2ddl_5; }
	inline void set__2ddl_5(DynamicLight_t1346119475 * value)
	{
		____2ddl_5 = value;
		Il2CppCodeGenWriteBarrier(&____2ddl_5, value);
	}

	inline static int32_t get_offset_of___layer_6() { return static_cast<int32_t>(offsetof(interface_touch2_t3046590531, _____layer_6)); }
	inline int32_t get___layer_6() const { return _____layer_6; }
	inline int32_t* get_address_of___layer_6() { return &_____layer_6; }
	inline void set___layer_6(int32_t value)
	{
		_____layer_6 = value;
	}

	inline static int32_t get_offset_of_lightCount_8() { return static_cast<int32_t>(offsetof(interface_touch2_t3046590531, ___lightCount_8)); }
	inline int32_t get_lightCount_8() const { return ___lightCount_8; }
	inline int32_t* get_address_of_lightCount_8() { return &___lightCount_8; }
	inline void set_lightCount_8(int32_t value)
	{
		___lightCount_8 = value;
	}

	inline static int32_t get_offset_of__mouseClick_9() { return static_cast<int32_t>(offsetof(interface_touch2_t3046590531, ____mouseClick_9)); }
	inline bool get__mouseClick_9() const { return ____mouseClick_9; }
	inline bool* get_address_of__mouseClick_9() { return &____mouseClick_9; }
	inline void set__mouseClick_9(bool value)
	{
		____mouseClick_9 = value;
	}

	inline static int32_t get_offset_of__ctrlDown_10() { return static_cast<int32_t>(offsetof(interface_touch2_t3046590531, ____ctrlDown_10)); }
	inline bool get__ctrlDown_10() const { return ____ctrlDown_10; }
	inline bool* get_address_of__ctrlDown_10() { return &____ctrlDown_10; }
	inline void set__ctrlDown_10(bool value)
	{
		____ctrlDown_10 = value;
	}
};

struct interface_touch2_t3046590531_StaticFields
{
public:
	// System.Int32 DynamicLight2D.interface_touch2::vertexCount
	int32_t ___vertexCount_7;

public:
	inline static int32_t get_offset_of_vertexCount_7() { return static_cast<int32_t>(offsetof(interface_touch2_t3046590531_StaticFields, ___vertexCount_7)); }
	inline int32_t get_vertexCount_7() const { return ___vertexCount_7; }
	inline int32_t* get_address_of_vertexCount_7() { return &___vertexCount_7; }
	inline void set_vertexCount_7(int32_t value)
	{
		___vertexCount_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
