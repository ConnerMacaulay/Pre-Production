#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Health
struct  Health_t2683907638  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Health::currentHealth
	int32_t ___currentHealth_2;
	// System.Int32 Health::maxHealth
	int32_t ___maxHealth_3;

public:
	inline static int32_t get_offset_of_currentHealth_2() { return static_cast<int32_t>(offsetof(Health_t2683907638, ___currentHealth_2)); }
	inline int32_t get_currentHealth_2() const { return ___currentHealth_2; }
	inline int32_t* get_address_of_currentHealth_2() { return &___currentHealth_2; }
	inline void set_currentHealth_2(int32_t value)
	{
		___currentHealth_2 = value;
	}

	inline static int32_t get_offset_of_maxHealth_3() { return static_cast<int32_t>(offsetof(Health_t2683907638, ___maxHealth_3)); }
	inline int32_t get_maxHealth_3() const { return ___maxHealth_3; }
	inline int32_t* get_address_of_maxHealth_3() { return &___maxHealth_3; }
	inline void set_maxHealth_3(int32_t value)
	{
		___maxHealth_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
