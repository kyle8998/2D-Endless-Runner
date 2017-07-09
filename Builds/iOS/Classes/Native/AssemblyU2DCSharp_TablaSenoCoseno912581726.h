#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Single[]
struct SingleU5BU5D_t577127397;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TablaSenoCoseno
struct  TablaSenoCoseno_t912581726  : public Il2CppObject
{
public:

public:
};

struct TablaSenoCoseno_t912581726_StaticFields
{
public:
	// System.Boolean TablaSenoCoseno::hasInstanced
	bool ___hasInstanced_0;
	// System.Single[] TablaSenoCoseno::SenArray
	SingleU5BU5D_t577127397* ___SenArray_1;
	// System.Single[] TablaSenoCoseno::CosArray
	SingleU5BU5D_t577127397* ___CosArray_2;

public:
	inline static int32_t get_offset_of_hasInstanced_0() { return static_cast<int32_t>(offsetof(TablaSenoCoseno_t912581726_StaticFields, ___hasInstanced_0)); }
	inline bool get_hasInstanced_0() const { return ___hasInstanced_0; }
	inline bool* get_address_of_hasInstanced_0() { return &___hasInstanced_0; }
	inline void set_hasInstanced_0(bool value)
	{
		___hasInstanced_0 = value;
	}

	inline static int32_t get_offset_of_SenArray_1() { return static_cast<int32_t>(offsetof(TablaSenoCoseno_t912581726_StaticFields, ___SenArray_1)); }
	inline SingleU5BU5D_t577127397* get_SenArray_1() const { return ___SenArray_1; }
	inline SingleU5BU5D_t577127397** get_address_of_SenArray_1() { return &___SenArray_1; }
	inline void set_SenArray_1(SingleU5BU5D_t577127397* value)
	{
		___SenArray_1 = value;
		Il2CppCodeGenWriteBarrier(&___SenArray_1, value);
	}

	inline static int32_t get_offset_of_CosArray_2() { return static_cast<int32_t>(offsetof(TablaSenoCoseno_t912581726_StaticFields, ___CosArray_2)); }
	inline SingleU5BU5D_t577127397* get_CosArray_2() const { return ___CosArray_2; }
	inline SingleU5BU5D_t577127397** get_address_of_CosArray_2() { return &___CosArray_2; }
	inline void set_CosArray_2(SingleU5BU5D_t577127397* value)
	{
		___CosArray_2 = value;
		Il2CppCodeGenWriteBarrier(&___CosArray_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
