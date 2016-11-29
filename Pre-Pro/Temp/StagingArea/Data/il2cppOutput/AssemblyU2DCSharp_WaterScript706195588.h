#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// HealthyHandsSpawner
struct HealthyHandsSpawner_t2116513843;
// Health
struct Health_t2683907638;
// Timer
struct Timer_t2917042437;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WaterScript
struct  WaterScript_t706195588  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject WaterScript::handObj
	GameObject_t1756533147 * ___handObj_2;
	// UnityEngine.GameObject WaterScript::healthManager
	GameObject_t1756533147 * ___healthManager_3;
	// HealthyHandsSpawner WaterScript::healthyHandsScript
	HealthyHandsSpawner_t2116513843 * ___healthyHandsScript_4;
	// Health WaterScript::healthScript
	Health_t2683907638 * ___healthScript_5;
	// Timer WaterScript::timerScript
	Timer_t2917042437 * ___timerScript_6;
	// System.Single WaterScript::speed
	float ___speed_7;
	// System.Single WaterScript::deathTime
	float ___deathTime_8;
	// System.Boolean WaterScript::hitBound
	bool ___hitBound_9;
	// System.Boolean WaterScript::hitBound2
	bool ___hitBound2_10;

public:
	inline static int32_t get_offset_of_handObj_2() { return static_cast<int32_t>(offsetof(WaterScript_t706195588, ___handObj_2)); }
	inline GameObject_t1756533147 * get_handObj_2() const { return ___handObj_2; }
	inline GameObject_t1756533147 ** get_address_of_handObj_2() { return &___handObj_2; }
	inline void set_handObj_2(GameObject_t1756533147 * value)
	{
		___handObj_2 = value;
		Il2CppCodeGenWriteBarrier(&___handObj_2, value);
	}

	inline static int32_t get_offset_of_healthManager_3() { return static_cast<int32_t>(offsetof(WaterScript_t706195588, ___healthManager_3)); }
	inline GameObject_t1756533147 * get_healthManager_3() const { return ___healthManager_3; }
	inline GameObject_t1756533147 ** get_address_of_healthManager_3() { return &___healthManager_3; }
	inline void set_healthManager_3(GameObject_t1756533147 * value)
	{
		___healthManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___healthManager_3, value);
	}

	inline static int32_t get_offset_of_healthyHandsScript_4() { return static_cast<int32_t>(offsetof(WaterScript_t706195588, ___healthyHandsScript_4)); }
	inline HealthyHandsSpawner_t2116513843 * get_healthyHandsScript_4() const { return ___healthyHandsScript_4; }
	inline HealthyHandsSpawner_t2116513843 ** get_address_of_healthyHandsScript_4() { return &___healthyHandsScript_4; }
	inline void set_healthyHandsScript_4(HealthyHandsSpawner_t2116513843 * value)
	{
		___healthyHandsScript_4 = value;
		Il2CppCodeGenWriteBarrier(&___healthyHandsScript_4, value);
	}

	inline static int32_t get_offset_of_healthScript_5() { return static_cast<int32_t>(offsetof(WaterScript_t706195588, ___healthScript_5)); }
	inline Health_t2683907638 * get_healthScript_5() const { return ___healthScript_5; }
	inline Health_t2683907638 ** get_address_of_healthScript_5() { return &___healthScript_5; }
	inline void set_healthScript_5(Health_t2683907638 * value)
	{
		___healthScript_5 = value;
		Il2CppCodeGenWriteBarrier(&___healthScript_5, value);
	}

	inline static int32_t get_offset_of_timerScript_6() { return static_cast<int32_t>(offsetof(WaterScript_t706195588, ___timerScript_6)); }
	inline Timer_t2917042437 * get_timerScript_6() const { return ___timerScript_6; }
	inline Timer_t2917042437 ** get_address_of_timerScript_6() { return &___timerScript_6; }
	inline void set_timerScript_6(Timer_t2917042437 * value)
	{
		___timerScript_6 = value;
		Il2CppCodeGenWriteBarrier(&___timerScript_6, value);
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(WaterScript_t706195588, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_deathTime_8() { return static_cast<int32_t>(offsetof(WaterScript_t706195588, ___deathTime_8)); }
	inline float get_deathTime_8() const { return ___deathTime_8; }
	inline float* get_address_of_deathTime_8() { return &___deathTime_8; }
	inline void set_deathTime_8(float value)
	{
		___deathTime_8 = value;
	}

	inline static int32_t get_offset_of_hitBound_9() { return static_cast<int32_t>(offsetof(WaterScript_t706195588, ___hitBound_9)); }
	inline bool get_hitBound_9() const { return ___hitBound_9; }
	inline bool* get_address_of_hitBound_9() { return &___hitBound_9; }
	inline void set_hitBound_9(bool value)
	{
		___hitBound_9 = value;
	}

	inline static int32_t get_offset_of_hitBound2_10() { return static_cast<int32_t>(offsetof(WaterScript_t706195588, ___hitBound2_10)); }
	inline bool get_hitBound2_10() const { return ___hitBound2_10; }
	inline bool* get_address_of_hitBound2_10() { return &___hitBound2_10; }
	inline void set_hitBound2_10(bool value)
	{
		___hitBound2_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
