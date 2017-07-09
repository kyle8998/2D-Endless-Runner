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
// UnityEngine.Transform
struct Transform_t3275118058;
// ObjectPooler[]
struct ObjectPoolerU5BU5D_t4123257763;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObstacleGenerator
struct  ObstacleGenerator_t3932683066  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ObstacleGenerator::theObstacle
	GameObject_t1756533147 * ___theObstacle_2;
	// UnityEngine.Transform ObstacleGenerator::generationPoint
	Transform_t3275118058 * ___generationPoint_3;
	// System.Single ObstacleGenerator::distanceBetween
	float ___distanceBetween_4;
	// System.Single ObstacleGenerator::distanceBetweenX
	float ___distanceBetweenX_5;
	// System.Single ObstacleGenerator::distanceBetweenMin
	float ___distanceBetweenMin_6;
	// System.Single ObstacleGenerator::distanceBetweenMax
	float ___distanceBetweenMax_7;
	// System.Single ObstacleGenerator::distanceBetweenMinX
	float ___distanceBetweenMinX_8;
	// System.Single ObstacleGenerator::distanceBetweenMaxX
	float ___distanceBetweenMaxX_9;
	// System.Int32 ObstacleGenerator::obstacleSelector
	int32_t ___obstacleSelector_10;
	// ObjectPooler[] ObstacleGenerator::theObjectPools
	ObjectPoolerU5BU5D_t4123257763* ___theObjectPools_11;

public:
	inline static int32_t get_offset_of_theObstacle_2() { return static_cast<int32_t>(offsetof(ObstacleGenerator_t3932683066, ___theObstacle_2)); }
	inline GameObject_t1756533147 * get_theObstacle_2() const { return ___theObstacle_2; }
	inline GameObject_t1756533147 ** get_address_of_theObstacle_2() { return &___theObstacle_2; }
	inline void set_theObstacle_2(GameObject_t1756533147 * value)
	{
		___theObstacle_2 = value;
		Il2CppCodeGenWriteBarrier(&___theObstacle_2, value);
	}

	inline static int32_t get_offset_of_generationPoint_3() { return static_cast<int32_t>(offsetof(ObstacleGenerator_t3932683066, ___generationPoint_3)); }
	inline Transform_t3275118058 * get_generationPoint_3() const { return ___generationPoint_3; }
	inline Transform_t3275118058 ** get_address_of_generationPoint_3() { return &___generationPoint_3; }
	inline void set_generationPoint_3(Transform_t3275118058 * value)
	{
		___generationPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___generationPoint_3, value);
	}

	inline static int32_t get_offset_of_distanceBetween_4() { return static_cast<int32_t>(offsetof(ObstacleGenerator_t3932683066, ___distanceBetween_4)); }
	inline float get_distanceBetween_4() const { return ___distanceBetween_4; }
	inline float* get_address_of_distanceBetween_4() { return &___distanceBetween_4; }
	inline void set_distanceBetween_4(float value)
	{
		___distanceBetween_4 = value;
	}

	inline static int32_t get_offset_of_distanceBetweenX_5() { return static_cast<int32_t>(offsetof(ObstacleGenerator_t3932683066, ___distanceBetweenX_5)); }
	inline float get_distanceBetweenX_5() const { return ___distanceBetweenX_5; }
	inline float* get_address_of_distanceBetweenX_5() { return &___distanceBetweenX_5; }
	inline void set_distanceBetweenX_5(float value)
	{
		___distanceBetweenX_5 = value;
	}

	inline static int32_t get_offset_of_distanceBetweenMin_6() { return static_cast<int32_t>(offsetof(ObstacleGenerator_t3932683066, ___distanceBetweenMin_6)); }
	inline float get_distanceBetweenMin_6() const { return ___distanceBetweenMin_6; }
	inline float* get_address_of_distanceBetweenMin_6() { return &___distanceBetweenMin_6; }
	inline void set_distanceBetweenMin_6(float value)
	{
		___distanceBetweenMin_6 = value;
	}

	inline static int32_t get_offset_of_distanceBetweenMax_7() { return static_cast<int32_t>(offsetof(ObstacleGenerator_t3932683066, ___distanceBetweenMax_7)); }
	inline float get_distanceBetweenMax_7() const { return ___distanceBetweenMax_7; }
	inline float* get_address_of_distanceBetweenMax_7() { return &___distanceBetweenMax_7; }
	inline void set_distanceBetweenMax_7(float value)
	{
		___distanceBetweenMax_7 = value;
	}

	inline static int32_t get_offset_of_distanceBetweenMinX_8() { return static_cast<int32_t>(offsetof(ObstacleGenerator_t3932683066, ___distanceBetweenMinX_8)); }
	inline float get_distanceBetweenMinX_8() const { return ___distanceBetweenMinX_8; }
	inline float* get_address_of_distanceBetweenMinX_8() { return &___distanceBetweenMinX_8; }
	inline void set_distanceBetweenMinX_8(float value)
	{
		___distanceBetweenMinX_8 = value;
	}

	inline static int32_t get_offset_of_distanceBetweenMaxX_9() { return static_cast<int32_t>(offsetof(ObstacleGenerator_t3932683066, ___distanceBetweenMaxX_9)); }
	inline float get_distanceBetweenMaxX_9() const { return ___distanceBetweenMaxX_9; }
	inline float* get_address_of_distanceBetweenMaxX_9() { return &___distanceBetweenMaxX_9; }
	inline void set_distanceBetweenMaxX_9(float value)
	{
		___distanceBetweenMaxX_9 = value;
	}

	inline static int32_t get_offset_of_obstacleSelector_10() { return static_cast<int32_t>(offsetof(ObstacleGenerator_t3932683066, ___obstacleSelector_10)); }
	inline int32_t get_obstacleSelector_10() const { return ___obstacleSelector_10; }
	inline int32_t* get_address_of_obstacleSelector_10() { return &___obstacleSelector_10; }
	inline void set_obstacleSelector_10(int32_t value)
	{
		___obstacleSelector_10 = value;
	}

	inline static int32_t get_offset_of_theObjectPools_11() { return static_cast<int32_t>(offsetof(ObstacleGenerator_t3932683066, ___theObjectPools_11)); }
	inline ObjectPoolerU5BU5D_t4123257763* get_theObjectPools_11() const { return ___theObjectPools_11; }
	inline ObjectPoolerU5BU5D_t4123257763** get_address_of_theObjectPools_11() { return &___theObjectPools_11; }
	inline void set_theObjectPools_11(ObjectPoolerU5BU5D_t4123257763* value)
	{
		___theObjectPools_11 = value;
		Il2CppCodeGenWriteBarrier(&___theObjectPools_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
