#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4238939941;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.List`1<System.Reflection.MemberInfo>
struct  List_1_t1414935582  : public Il2CppObject
{
public:
	// T[] Boo.Lang.List`1::_items
	MemberInfoU5BU5D_t4238939941* ____items_1;
	// System.Int32 Boo.Lang.List`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1414935582, ____items_1)); }
	inline MemberInfoU5BU5D_t4238939941* get__items_1() const { return ____items_1; }
	inline MemberInfoU5BU5D_t4238939941** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MemberInfoU5BU5D_t4238939941* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier(&____items_1, value);
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(List_1_t1414935582, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};

struct List_1_t1414935582_StaticFields
{
public:
	// T[] Boo.Lang.List`1::EmptyArray
	MemberInfoU5BU5D_t4238939941* ___EmptyArray_0;

public:
	inline static int32_t get_offset_of_EmptyArray_0() { return static_cast<int32_t>(offsetof(List_1_t1414935582_StaticFields, ___EmptyArray_0)); }
	inline MemberInfoU5BU5D_t4238939941* get_EmptyArray_0() const { return ___EmptyArray_0; }
	inline MemberInfoU5BU5D_t4238939941** get_address_of_EmptyArray_0() { return &___EmptyArray_0; }
	inline void set_EmptyArray_0(MemberInfoU5BU5D_t4238939941* value)
	{
		___EmptyArray_0 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyArray_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
