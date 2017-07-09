#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Boo.Lang.List`1<System.Reflection.MemberInfo>
struct List_1_t1414935582;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.ExtensionRegistry
struct  ExtensionRegistry_t1402255936  : public Il2CppObject
{
public:
	// Boo.Lang.List`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::_extensions
	List_1_t1414935582 * ____extensions_0;
	// System.Object Boo.Lang.Runtime.ExtensionRegistry::_classLock
	Il2CppObject * ____classLock_1;

public:
	inline static int32_t get_offset_of__extensions_0() { return static_cast<int32_t>(offsetof(ExtensionRegistry_t1402255936, ____extensions_0)); }
	inline List_1_t1414935582 * get__extensions_0() const { return ____extensions_0; }
	inline List_1_t1414935582 ** get_address_of__extensions_0() { return &____extensions_0; }
	inline void set__extensions_0(List_1_t1414935582 * value)
	{
		____extensions_0 = value;
		Il2CppCodeGenWriteBarrier(&____extensions_0, value);
	}

	inline static int32_t get_offset_of__classLock_1() { return static_cast<int32_t>(offsetof(ExtensionRegistry_t1402255936, ____classLock_1)); }
	inline Il2CppObject * get__classLock_1() const { return ____classLock_1; }
	inline Il2CppObject ** get_address_of__classLock_1() { return &____classLock_1; }
	inline void set__classLock_1(Il2CppObject * value)
	{
		____classLock_1 = value;
		Il2CppCodeGenWriteBarrier(&____classLock_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
