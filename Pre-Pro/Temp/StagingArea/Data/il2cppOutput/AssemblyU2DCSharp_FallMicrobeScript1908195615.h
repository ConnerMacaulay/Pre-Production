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
// Health
struct Health_t2683907638;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FallMicrobeScript
struct  FallMicrobeScript_t1908195615  : public MonoBehaviour_t1158329972
{
public:
	// System.Single FallMicrobeScript::lifetime
	float ___lifetime_2;
	// UnityEngine.GameObject FallMicrobeScript::healthManager
	GameObject_t1756533147 * ___healthManager_3;
	// Health FallMicrobeScript::healthScript
	Health_t2683907638 * ___healthScript_4;

public:
	inline static int32_t get_offset_of_lifetime_2() { return static_cast<int32_t>(offsetof(FallMicrobeScript_t1908195615, ___lifetime_2)); }
	inline float get_lifetime_2() const { return ___lifetime_2; }
	inline float* get_address_of_lifetime_2() { return &___lifetime_2; }
	inline void set_lifetime_2(float value)
	{
		___lifetime_2 = value;
	}

	inline static int32_t get_offset_of_healthManager_3() { return static_cast<int32_t>(offsetof(FallMicrobeScript_t1908195615, ___healthManager_3)); }
	inline GameObject_t1756533147 * get_healthManager_3() const { return ___healthManager_3; }
	inline GameObject_t1756533147 ** get_address_of_healthManager_3() { return &___healthManager_3; }
	inline void set_healthManager_3(GameObject_t1756533147 * value)
	{
		___healthManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___healthManager_3, value);
	}

	inline static int32_t get_offset_of_healthScript_4() { return static_cast<int32_t>(offsetof(FallMicrobeScript_t1908195615, ___healthScript_4)); }
	inline Health_t2683907638 * get_healthScript_4() const { return ___healthScript_4; }
	inline Health_t2683907638 ** get_address_of_healthScript_4() { return &___healthScript_4; }
	inline void set_healthScript_4(Health_t2683907638 * value)
	{
		___healthScript_4 = value;
		Il2CppCodeGenWriteBarrier(&___healthScript_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
