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

// CatchScript
struct  CatchScript_t3283469788  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CatchScript::healthManager
	GameObject_t1756533147 * ___healthManager_2;
	// Health CatchScript::healthScript
	Health_t2683907638 * ___healthScript_3;

public:
	inline static int32_t get_offset_of_healthManager_2() { return static_cast<int32_t>(offsetof(CatchScript_t3283469788, ___healthManager_2)); }
	inline GameObject_t1756533147 * get_healthManager_2() const { return ___healthManager_2; }
	inline GameObject_t1756533147 ** get_address_of_healthManager_2() { return &___healthManager_2; }
	inline void set_healthManager_2(GameObject_t1756533147 * value)
	{
		___healthManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___healthManager_2, value);
	}

	inline static int32_t get_offset_of_healthScript_3() { return static_cast<int32_t>(offsetof(CatchScript_t3283469788, ___healthScript_3)); }
	inline Health_t2683907638 * get_healthScript_3() const { return ___healthScript_3; }
	inline Health_t2683907638 ** get_address_of_healthScript_3() { return &___healthScript_3; }
	inline void set_healthScript_3(Health_t2683907638 * value)
	{
		___healthScript_3 = value;
		Il2CppCodeGenWriteBarrier(&___healthScript_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
