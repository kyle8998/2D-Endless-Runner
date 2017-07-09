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
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseMenu
struct  PauseMenu_t2596728003  : public MonoBehaviour_t1158329972
{
public:
	// System.String PauseMenu::mainMenuLevel
	String_t* ___mainMenuLevel_2;
	// UnityEngine.GameObject PauseMenu::pauseMenu
	GameObject_t1756533147 * ___pauseMenu_3;

public:
	inline static int32_t get_offset_of_mainMenuLevel_2() { return static_cast<int32_t>(offsetof(PauseMenu_t2596728003, ___mainMenuLevel_2)); }
	inline String_t* get_mainMenuLevel_2() const { return ___mainMenuLevel_2; }
	inline String_t** get_address_of_mainMenuLevel_2() { return &___mainMenuLevel_2; }
	inline void set_mainMenuLevel_2(String_t* value)
	{
		___mainMenuLevel_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainMenuLevel_2, value);
	}

	inline static int32_t get_offset_of_pauseMenu_3() { return static_cast<int32_t>(offsetof(PauseMenu_t2596728003, ___pauseMenu_3)); }
	inline GameObject_t1756533147 * get_pauseMenu_3() const { return ___pauseMenu_3; }
	inline GameObject_t1756533147 ** get_address_of_pauseMenu_3() { return &___pauseMenu_3; }
	inline void set_pauseMenu_3(GameObject_t1756533147 * value)
	{
		___pauseMenu_3 = value;
		Il2CppCodeGenWriteBarrier(&___pauseMenu_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
