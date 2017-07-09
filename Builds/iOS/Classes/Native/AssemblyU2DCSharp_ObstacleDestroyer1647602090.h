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

// ObstacleDestroyer
struct  ObstacleDestroyer_t1647602090  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ObstacleDestroyer::obstacleDestructionPoint
	GameObject_t1756533147 * ___obstacleDestructionPoint_2;

public:
	inline static int32_t get_offset_of_obstacleDestructionPoint_2() { return static_cast<int32_t>(offsetof(ObstacleDestroyer_t1647602090, ___obstacleDestructionPoint_2)); }
	inline GameObject_t1756533147 * get_obstacleDestructionPoint_2() const { return ___obstacleDestructionPoint_2; }
	inline GameObject_t1756533147 ** get_address_of_obstacleDestructionPoint_2() { return &___obstacleDestructionPoint_2; }
	inline void set_obstacleDestructionPoint_2(GameObject_t1756533147 * value)
	{
		___obstacleDestructionPoint_2 = value;
		Il2CppCodeGenWriteBarrier(&___obstacleDestructionPoint_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
