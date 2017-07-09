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
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectPooler
struct  ObjectPooler_t2787317638  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ObjectPooler::pooledObject
	GameObject_t1756533147 * ___pooledObject_2;
	// System.Int32 ObjectPooler::pooledAmount
	int32_t ___pooledAmount_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectPooler::pooledObjects
	List_1_t1125654279 * ___pooledObjects_4;

public:
	inline static int32_t get_offset_of_pooledObject_2() { return static_cast<int32_t>(offsetof(ObjectPooler_t2787317638, ___pooledObject_2)); }
	inline GameObject_t1756533147 * get_pooledObject_2() const { return ___pooledObject_2; }
	inline GameObject_t1756533147 ** get_address_of_pooledObject_2() { return &___pooledObject_2; }
	inline void set_pooledObject_2(GameObject_t1756533147 * value)
	{
		___pooledObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___pooledObject_2, value);
	}

	inline static int32_t get_offset_of_pooledAmount_3() { return static_cast<int32_t>(offsetof(ObjectPooler_t2787317638, ___pooledAmount_3)); }
	inline int32_t get_pooledAmount_3() const { return ___pooledAmount_3; }
	inline int32_t* get_address_of_pooledAmount_3() { return &___pooledAmount_3; }
	inline void set_pooledAmount_3(int32_t value)
	{
		___pooledAmount_3 = value;
	}

	inline static int32_t get_offset_of_pooledObjects_4() { return static_cast<int32_t>(offsetof(ObjectPooler_t2787317638, ___pooledObjects_4)); }
	inline List_1_t1125654279 * get_pooledObjects_4() const { return ___pooledObjects_4; }
	inline List_1_t1125654279 ** get_address_of_pooledObjects_4() { return &___pooledObjects_4; }
	inline void set_pooledObjects_4(List_1_t1125654279 * value)
	{
		___pooledObjects_4 = value;
		Il2CppCodeGenWriteBarrier(&___pooledObjects_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
