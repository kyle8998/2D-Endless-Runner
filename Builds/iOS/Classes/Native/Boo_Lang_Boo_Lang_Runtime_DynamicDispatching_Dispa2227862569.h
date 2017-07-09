#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct Dictionary_2_t1794457568;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
struct  DispatcherCache_t2227862569  : public Il2CppObject
{
public:

public:
};

struct DispatcherCache_t2227862569_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher> Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::_cache
	Dictionary_2_t1794457568 * ____cache_0;

public:
	inline static int32_t get_offset_of__cache_0() { return static_cast<int32_t>(offsetof(DispatcherCache_t2227862569_StaticFields, ____cache_0)); }
	inline Dictionary_2_t1794457568 * get__cache_0() const { return ____cache_0; }
	inline Dictionary_2_t1794457568 ** get_address_of__cache_0() { return &____cache_0; }
	inline void set__cache_0(Dictionary_2_t1794457568 * value)
	{
		____cache_0 = value;
		Il2CppCodeGenWriteBarrier(&____cache_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
