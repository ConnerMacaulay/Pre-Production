#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.BoxCollider2D
struct BoxCollider2D_t948534547;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HealthyHandsSpawner
struct  HealthyHandsSpawner_t2116513843  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 HealthyHandsSpawner::wave
	int32_t ___wave_2;
	// System.Single HealthyHandsSpawner::range
	float ___range_3;
	// UnityEngine.BoxCollider2D HealthyHandsSpawner::bocCollider
	BoxCollider2D_t948534547 * ___bocCollider_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HealthyHandsSpawner::badMicrobes
	List_1_t1125654279 * ___badMicrobes_5;
	// UnityEngine.GameObject HealthyHandsSpawner::goodMicrobe
	GameObject_t1756533147 * ___goodMicrobe_6;
	// UnityEngine.GameObject HealthyHandsSpawner::clockObject
	GameObject_t1756533147 * ___clockObject_7;
	// System.Int32 HealthyHandsSpawner::noMicrobes
	int32_t ___noMicrobes_8;
	// System.Int32 HealthyHandsSpawner::waveAmount
	int32_t ___waveAmount_9;
	// System.Int32 HealthyHandsSpawner::nextWaveAmount
	int32_t ___nextWaveAmount_10;
	// System.Int32 HealthyHandsSpawner::dMicrobes
	int32_t ___dMicrobes_11;

public:
	inline static int32_t get_offset_of_wave_2() { return static_cast<int32_t>(offsetof(HealthyHandsSpawner_t2116513843, ___wave_2)); }
	inline int32_t get_wave_2() const { return ___wave_2; }
	inline int32_t* get_address_of_wave_2() { return &___wave_2; }
	inline void set_wave_2(int32_t value)
	{
		___wave_2 = value;
	}

	inline static int32_t get_offset_of_range_3() { return static_cast<int32_t>(offsetof(HealthyHandsSpawner_t2116513843, ___range_3)); }
	inline float get_range_3() const { return ___range_3; }
	inline float* get_address_of_range_3() { return &___range_3; }
	inline void set_range_3(float value)
	{
		___range_3 = value;
	}

	inline static int32_t get_offset_of_bocCollider_4() { return static_cast<int32_t>(offsetof(HealthyHandsSpawner_t2116513843, ___bocCollider_4)); }
	inline BoxCollider2D_t948534547 * get_bocCollider_4() const { return ___bocCollider_4; }
	inline BoxCollider2D_t948534547 ** get_address_of_bocCollider_4() { return &___bocCollider_4; }
	inline void set_bocCollider_4(BoxCollider2D_t948534547 * value)
	{
		___bocCollider_4 = value;
		Il2CppCodeGenWriteBarrier(&___bocCollider_4, value);
	}

	inline static int32_t get_offset_of_badMicrobes_5() { return static_cast<int32_t>(offsetof(HealthyHandsSpawner_t2116513843, ___badMicrobes_5)); }
	inline List_1_t1125654279 * get_badMicrobes_5() const { return ___badMicrobes_5; }
	inline List_1_t1125654279 ** get_address_of_badMicrobes_5() { return &___badMicrobes_5; }
	inline void set_badMicrobes_5(List_1_t1125654279 * value)
	{
		___badMicrobes_5 = value;
		Il2CppCodeGenWriteBarrier(&___badMicrobes_5, value);
	}

	inline static int32_t get_offset_of_goodMicrobe_6() { return static_cast<int32_t>(offsetof(HealthyHandsSpawner_t2116513843, ___goodMicrobe_6)); }
	inline GameObject_t1756533147 * get_goodMicrobe_6() const { return ___goodMicrobe_6; }
	inline GameObject_t1756533147 ** get_address_of_goodMicrobe_6() { return &___goodMicrobe_6; }
	inline void set_goodMicrobe_6(GameObject_t1756533147 * value)
	{
		___goodMicrobe_6 = value;
		Il2CppCodeGenWriteBarrier(&___goodMicrobe_6, value);
	}

	inline static int32_t get_offset_of_clockObject_7() { return static_cast<int32_t>(offsetof(HealthyHandsSpawner_t2116513843, ___clockObject_7)); }
	inline GameObject_t1756533147 * get_clockObject_7() const { return ___clockObject_7; }
	inline GameObject_t1756533147 ** get_address_of_clockObject_7() { return &___clockObject_7; }
	inline void set_clockObject_7(GameObject_t1756533147 * value)
	{
		___clockObject_7 = value;
		Il2CppCodeGenWriteBarrier(&___clockObject_7, value);
	}

	inline static int32_t get_offset_of_noMicrobes_8() { return static_cast<int32_t>(offsetof(HealthyHandsSpawner_t2116513843, ___noMicrobes_8)); }
	inline int32_t get_noMicrobes_8() const { return ___noMicrobes_8; }
	inline int32_t* get_address_of_noMicrobes_8() { return &___noMicrobes_8; }
	inline void set_noMicrobes_8(int32_t value)
	{
		___noMicrobes_8 = value;
	}

	inline static int32_t get_offset_of_waveAmount_9() { return static_cast<int32_t>(offsetof(HealthyHandsSpawner_t2116513843, ___waveAmount_9)); }
	inline int32_t get_waveAmount_9() const { return ___waveAmount_9; }
	inline int32_t* get_address_of_waveAmount_9() { return &___waveAmount_9; }
	inline void set_waveAmount_9(int32_t value)
	{
		___waveAmount_9 = value;
	}

	inline static int32_t get_offset_of_nextWaveAmount_10() { return static_cast<int32_t>(offsetof(HealthyHandsSpawner_t2116513843, ___nextWaveAmount_10)); }
	inline int32_t get_nextWaveAmount_10() const { return ___nextWaveAmount_10; }
	inline int32_t* get_address_of_nextWaveAmount_10() { return &___nextWaveAmount_10; }
	inline void set_nextWaveAmount_10(int32_t value)
	{
		___nextWaveAmount_10 = value;
	}

	inline static int32_t get_offset_of_dMicrobes_11() { return static_cast<int32_t>(offsetof(HealthyHandsSpawner_t2116513843, ___dMicrobes_11)); }
	inline int32_t get_dMicrobes_11() const { return ___dMicrobes_11; }
	inline int32_t* get_address_of_dMicrobes_11() { return &___dMicrobes_11; }
	inline void set_dMicrobes_11(int32_t value)
	{
		___dMicrobes_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
