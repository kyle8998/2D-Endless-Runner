#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t708950850;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t2240407071;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct  KeyValuePair_2_t3846770086 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	DispatcherKey_t708950850 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Dispatcher_t2240407071 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3846770086, ___key_0)); }
	inline DispatcherKey_t708950850 * get_key_0() const { return ___key_0; }
	inline DispatcherKey_t708950850 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(DispatcherKey_t708950850 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3846770086, ___value_1)); }
	inline Dispatcher_t2240407071 * get_value_1() const { return ___value_1; }
	inline Dispatcher_t2240407071 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Dispatcher_t2240407071 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
