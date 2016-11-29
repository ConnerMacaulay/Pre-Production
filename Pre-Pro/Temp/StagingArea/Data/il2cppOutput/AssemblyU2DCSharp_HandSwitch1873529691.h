#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t3973682211;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HandSwitch
struct  HandSwitch_t1873529691  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Sprite> HandSwitch::handSprites
	List_1_t3973682211 * ___handSprites_2;
	// UnityEngine.GameObject HandSwitch::left
	GameObject_t1756533147 * ___left_3;
	// UnityEngine.GameObject HandSwitch::right
	GameObject_t1756533147 * ___right_4;
	// System.Boolean HandSwitch::front
	bool ___front_5;

public:
	inline static int32_t get_offset_of_handSprites_2() { return static_cast<int32_t>(offsetof(HandSwitch_t1873529691, ___handSprites_2)); }
	inline List_1_t3973682211 * get_handSprites_2() const { return ___handSprites_2; }
	inline List_1_t3973682211 ** get_address_of_handSprites_2() { return &___handSprites_2; }
	inline void set_handSprites_2(List_1_t3973682211 * value)
	{
		___handSprites_2 = value;
		Il2CppCodeGenWriteBarrier(&___handSprites_2, value);
	}

	inline static int32_t get_offset_of_left_3() { return static_cast<int32_t>(offsetof(HandSwitch_t1873529691, ___left_3)); }
	inline GameObject_t1756533147 * get_left_3() const { return ___left_3; }
	inline GameObject_t1756533147 ** get_address_of_left_3() { return &___left_3; }
	inline void set_left_3(GameObject_t1756533147 * value)
	{
		___left_3 = value;
		Il2CppCodeGenWriteBarrier(&___left_3, value);
	}

	inline static int32_t get_offset_of_right_4() { return static_cast<int32_t>(offsetof(HandSwitch_t1873529691, ___right_4)); }
	inline GameObject_t1756533147 * get_right_4() const { return ___right_4; }
	inline GameObject_t1756533147 ** get_address_of_right_4() { return &___right_4; }
	inline void set_right_4(GameObject_t1756533147 * value)
	{
		___right_4 = value;
		Il2CppCodeGenWriteBarrier(&___right_4, value);
	}

	inline static int32_t get_offset_of_front_5() { return static_cast<int32_t>(offsetof(HandSwitch_t1873529691, ___front_5)); }
	inline bool get_front_5() const { return ___front_5; }
	inline bool* get_address_of_front_5() { return &___front_5; }
	inline void set_front_5(bool value)
	{
		___front_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
