#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Timer
struct  Timer_t2917042437  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Timer::timeLeft
	float ___timeLeft_2;
	// System.Int32 Timer::timeLeftInt
	int32_t ___timeLeftInt_3;
	// UnityEngine.UI.Text Timer::timer
	Text_t356221433 * ___timer_4;
	// UnityEngine.GameObject[] Timer::activeGoods
	GameObjectU5BU5D_t3057952154* ___activeGoods_5;
	// UnityEngine.GameObject[] Timer::activeBads
	GameObjectU5BU5D_t3057952154* ___activeBads_6;

public:
	inline static int32_t get_offset_of_timeLeft_2() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___timeLeft_2)); }
	inline float get_timeLeft_2() const { return ___timeLeft_2; }
	inline float* get_address_of_timeLeft_2() { return &___timeLeft_2; }
	inline void set_timeLeft_2(float value)
	{
		___timeLeft_2 = value;
	}

	inline static int32_t get_offset_of_timeLeftInt_3() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___timeLeftInt_3)); }
	inline int32_t get_timeLeftInt_3() const { return ___timeLeftInt_3; }
	inline int32_t* get_address_of_timeLeftInt_3() { return &___timeLeftInt_3; }
	inline void set_timeLeftInt_3(int32_t value)
	{
		___timeLeftInt_3 = value;
	}

	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___timer_4)); }
	inline Text_t356221433 * get_timer_4() const { return ___timer_4; }
	inline Text_t356221433 ** get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(Text_t356221433 * value)
	{
		___timer_4 = value;
		Il2CppCodeGenWriteBarrier(&___timer_4, value);
	}

	inline static int32_t get_offset_of_activeGoods_5() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___activeGoods_5)); }
	inline GameObjectU5BU5D_t3057952154* get_activeGoods_5() const { return ___activeGoods_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_activeGoods_5() { return &___activeGoods_5; }
	inline void set_activeGoods_5(GameObjectU5BU5D_t3057952154* value)
	{
		___activeGoods_5 = value;
		Il2CppCodeGenWriteBarrier(&___activeGoods_5, value);
	}

	inline static int32_t get_offset_of_activeBads_6() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___activeBads_6)); }
	inline GameObjectU5BU5D_t3057952154* get_activeBads_6() const { return ___activeBads_6; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_activeBads_6() { return &___activeBads_6; }
	inline void set_activeBads_6(GameObjectU5BU5D_t3057952154* value)
	{
		___activeBads_6 = value;
		Il2CppCodeGenWriteBarrier(&___activeBads_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
