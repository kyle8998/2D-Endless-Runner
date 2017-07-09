#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreManager
struct  ScoreManager_t3573108141  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text ScoreManager::scoreText
	Text_t356221433 * ___scoreText_2;
	// UnityEngine.UI.Text ScoreManager::highScoreText
	Text_t356221433 * ___highScoreText_3;
	// System.Single ScoreManager::scoreCount
	float ___scoreCount_4;
	// System.Single ScoreManager::highScoreCount
	float ___highScoreCount_5;
	// System.Single ScoreManager::pointsPerSecond
	float ___pointsPerSecond_6;
	// System.Boolean ScoreManager::scoreIncreasing
	bool ___scoreIncreasing_7;

public:
	inline static int32_t get_offset_of_scoreText_2() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___scoreText_2)); }
	inline Text_t356221433 * get_scoreText_2() const { return ___scoreText_2; }
	inline Text_t356221433 ** get_address_of_scoreText_2() { return &___scoreText_2; }
	inline void set_scoreText_2(Text_t356221433 * value)
	{
		___scoreText_2 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_2, value);
	}

	inline static int32_t get_offset_of_highScoreText_3() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___highScoreText_3)); }
	inline Text_t356221433 * get_highScoreText_3() const { return ___highScoreText_3; }
	inline Text_t356221433 ** get_address_of_highScoreText_3() { return &___highScoreText_3; }
	inline void set_highScoreText_3(Text_t356221433 * value)
	{
		___highScoreText_3 = value;
		Il2CppCodeGenWriteBarrier(&___highScoreText_3, value);
	}

	inline static int32_t get_offset_of_scoreCount_4() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___scoreCount_4)); }
	inline float get_scoreCount_4() const { return ___scoreCount_4; }
	inline float* get_address_of_scoreCount_4() { return &___scoreCount_4; }
	inline void set_scoreCount_4(float value)
	{
		___scoreCount_4 = value;
	}

	inline static int32_t get_offset_of_highScoreCount_5() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___highScoreCount_5)); }
	inline float get_highScoreCount_5() const { return ___highScoreCount_5; }
	inline float* get_address_of_highScoreCount_5() { return &___highScoreCount_5; }
	inline void set_highScoreCount_5(float value)
	{
		___highScoreCount_5 = value;
	}

	inline static int32_t get_offset_of_pointsPerSecond_6() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___pointsPerSecond_6)); }
	inline float get_pointsPerSecond_6() const { return ___pointsPerSecond_6; }
	inline float* get_address_of_pointsPerSecond_6() { return &___pointsPerSecond_6; }
	inline void set_pointsPerSecond_6(float value)
	{
		___pointsPerSecond_6 = value;
	}

	inline static int32_t get_offset_of_scoreIncreasing_7() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___scoreIncreasing_7)); }
	inline bool get_scoreIncreasing_7() const { return ___scoreIncreasing_7; }
	inline bool* get_address_of_scoreIncreasing_7() { return &___scoreIncreasing_7; }
	inline void set_scoreIncreasing_7(bool value)
	{
		___scoreIncreasing_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
