#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DeathMenu
struct  DeathMenu_t170324533  : public MonoBehaviour_t1158329972
{
public:
	// System.String DeathMenu::mainMenuLevel
	String_t* ___mainMenuLevel_2;

public:
	inline static int32_t get_offset_of_mainMenuLevel_2() { return static_cast<int32_t>(offsetof(DeathMenu_t170324533, ___mainMenuLevel_2)); }
	inline String_t* get_mainMenuLevel_2() const { return ___mainMenuLevel_2; }
	inline String_t** get_address_of_mainMenuLevel_2() { return &___mainMenuLevel_2; }
	inline void set_mainMenuLevel_2(String_t* value)
	{
		___mainMenuLevel_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainMenuLevel_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
