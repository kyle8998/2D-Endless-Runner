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

// MainMenu
struct  MainMenu_t4009084430  : public MonoBehaviour_t1158329972
{
public:
	// System.String MainMenu::playGameLevel
	String_t* ___playGameLevel_2;
	// System.String MainMenu::playExperimentalLevel
	String_t* ___playExperimentalLevel_3;

public:
	inline static int32_t get_offset_of_playGameLevel_2() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___playGameLevel_2)); }
	inline String_t* get_playGameLevel_2() const { return ___playGameLevel_2; }
	inline String_t** get_address_of_playGameLevel_2() { return &___playGameLevel_2; }
	inline void set_playGameLevel_2(String_t* value)
	{
		___playGameLevel_2 = value;
		Il2CppCodeGenWriteBarrier(&___playGameLevel_2, value);
	}

	inline static int32_t get_offset_of_playExperimentalLevel_3() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___playExperimentalLevel_3)); }
	inline String_t* get_playExperimentalLevel_3() const { return ___playExperimentalLevel_3; }
	inline String_t** get_address_of_playExperimentalLevel_3() { return &___playExperimentalLevel_3; }
	inline void set_playExperimentalLevel_3(String_t* value)
	{
		___playExperimentalLevel_3 = value;
		Il2CppCodeGenWriteBarrier(&___playExperimentalLevel_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
