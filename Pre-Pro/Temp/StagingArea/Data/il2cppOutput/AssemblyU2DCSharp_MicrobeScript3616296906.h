#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HandSwitch
struct HandSwitch_t1873529691;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MicrobeScript
struct  MicrobeScript_t3616296906  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean MicrobeScript::frontMicrobe
	bool ___frontMicrobe_2;
	// HandSwitch MicrobeScript::handSwitch
	HandSwitch_t1873529691 * ___handSwitch_3;

public:
	inline static int32_t get_offset_of_frontMicrobe_2() { return static_cast<int32_t>(offsetof(MicrobeScript_t3616296906, ___frontMicrobe_2)); }
	inline bool get_frontMicrobe_2() const { return ___frontMicrobe_2; }
	inline bool* get_address_of_frontMicrobe_2() { return &___frontMicrobe_2; }
	inline void set_frontMicrobe_2(bool value)
	{
		___frontMicrobe_2 = value;
	}

	inline static int32_t get_offset_of_handSwitch_3() { return static_cast<int32_t>(offsetof(MicrobeScript_t3616296906, ___handSwitch_3)); }
	inline HandSwitch_t1873529691 * get_handSwitch_3() const { return ___handSwitch_3; }
	inline HandSwitch_t1873529691 ** get_address_of_handSwitch_3() { return &___handSwitch_3; }
	inline void set_handSwitch_3(HandSwitch_t1873529691 * value)
	{
		___handSwitch_3 = value;
		Il2CppCodeGenWriteBarrier(&___handSwitch_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
