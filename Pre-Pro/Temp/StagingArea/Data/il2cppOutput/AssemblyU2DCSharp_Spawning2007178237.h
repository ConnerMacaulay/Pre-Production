#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Score
struct Score_t1518975274;
// Health
struct Health_t2683907638;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// HandSwitch
struct HandSwitch_t1873529691;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spawning
struct  Spawning_t2007178237  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Spawning::range
	float ___range_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Spawning::badMicrobes
	List_1_t1125654279 * ___badMicrobes_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Spawning::goodMicrobes
	List_1_t1125654279 * ___goodMicrobes_4;
	// System.Int32 Spawning::noMicrobes
	int32_t ___noMicrobes_5;
	// System.Int32 Spawning::setMicrobes
	int32_t ___setMicrobes_6;
	// System.Int32 Spawning::dMicrobes
	int32_t ___dMicrobes_7;
	// System.Int32 Spawning::waveAmount
	int32_t ___waveAmount_8;
	// System.Int32 Spawning::nextWaveAmount
	int32_t ___nextWaveAmount_9;
	// System.Int32 Spawning::killScore
	int32_t ___killScore_10;
	// UnityEngine.GameObject Spawning::clockPrefab
	GameObject_t1756533147 * ___clockPrefab_11;
	// Score Spawning::scoreScript
	Score_t1518975274 * ___scoreScript_12;
	// Health Spawning::healthScript
	Health_t2683907638 * ___healthScript_13;
	// UnityEngine.AudioSource Spawning::bubbleSound
	AudioSource_t1135106623 * ___bubbleSound_14;
	// UnityEngine.AudioClip Spawning::bubble
	AudioClip_t1932558630 * ___bubble_15;
	// HandSwitch Spawning::handSwitch
	HandSwitch_t1873529691 * ___handSwitch_16;
	// System.Int32 Spawning::wave
	int32_t ___wave_17;

public:
	inline static int32_t get_offset_of_range_2() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___range_2)); }
	inline float get_range_2() const { return ___range_2; }
	inline float* get_address_of_range_2() { return &___range_2; }
	inline void set_range_2(float value)
	{
		___range_2 = value;
	}

	inline static int32_t get_offset_of_badMicrobes_3() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___badMicrobes_3)); }
	inline List_1_t1125654279 * get_badMicrobes_3() const { return ___badMicrobes_3; }
	inline List_1_t1125654279 ** get_address_of_badMicrobes_3() { return &___badMicrobes_3; }
	inline void set_badMicrobes_3(List_1_t1125654279 * value)
	{
		___badMicrobes_3 = value;
		Il2CppCodeGenWriteBarrier(&___badMicrobes_3, value);
	}

	inline static int32_t get_offset_of_goodMicrobes_4() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___goodMicrobes_4)); }
	inline List_1_t1125654279 * get_goodMicrobes_4() const { return ___goodMicrobes_4; }
	inline List_1_t1125654279 ** get_address_of_goodMicrobes_4() { return &___goodMicrobes_4; }
	inline void set_goodMicrobes_4(List_1_t1125654279 * value)
	{
		___goodMicrobes_4 = value;
		Il2CppCodeGenWriteBarrier(&___goodMicrobes_4, value);
	}

	inline static int32_t get_offset_of_noMicrobes_5() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___noMicrobes_5)); }
	inline int32_t get_noMicrobes_5() const { return ___noMicrobes_5; }
	inline int32_t* get_address_of_noMicrobes_5() { return &___noMicrobes_5; }
	inline void set_noMicrobes_5(int32_t value)
	{
		___noMicrobes_5 = value;
	}

	inline static int32_t get_offset_of_setMicrobes_6() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___setMicrobes_6)); }
	inline int32_t get_setMicrobes_6() const { return ___setMicrobes_6; }
	inline int32_t* get_address_of_setMicrobes_6() { return &___setMicrobes_6; }
	inline void set_setMicrobes_6(int32_t value)
	{
		___setMicrobes_6 = value;
	}

	inline static int32_t get_offset_of_dMicrobes_7() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___dMicrobes_7)); }
	inline int32_t get_dMicrobes_7() const { return ___dMicrobes_7; }
	inline int32_t* get_address_of_dMicrobes_7() { return &___dMicrobes_7; }
	inline void set_dMicrobes_7(int32_t value)
	{
		___dMicrobes_7 = value;
	}

	inline static int32_t get_offset_of_waveAmount_8() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___waveAmount_8)); }
	inline int32_t get_waveAmount_8() const { return ___waveAmount_8; }
	inline int32_t* get_address_of_waveAmount_8() { return &___waveAmount_8; }
	inline void set_waveAmount_8(int32_t value)
	{
		___waveAmount_8 = value;
	}

	inline static int32_t get_offset_of_nextWaveAmount_9() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___nextWaveAmount_9)); }
	inline int32_t get_nextWaveAmount_9() const { return ___nextWaveAmount_9; }
	inline int32_t* get_address_of_nextWaveAmount_9() { return &___nextWaveAmount_9; }
	inline void set_nextWaveAmount_9(int32_t value)
	{
		___nextWaveAmount_9 = value;
	}

	inline static int32_t get_offset_of_killScore_10() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___killScore_10)); }
	inline int32_t get_killScore_10() const { return ___killScore_10; }
	inline int32_t* get_address_of_killScore_10() { return &___killScore_10; }
	inline void set_killScore_10(int32_t value)
	{
		___killScore_10 = value;
	}

	inline static int32_t get_offset_of_clockPrefab_11() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___clockPrefab_11)); }
	inline GameObject_t1756533147 * get_clockPrefab_11() const { return ___clockPrefab_11; }
	inline GameObject_t1756533147 ** get_address_of_clockPrefab_11() { return &___clockPrefab_11; }
	inline void set_clockPrefab_11(GameObject_t1756533147 * value)
	{
		___clockPrefab_11 = value;
		Il2CppCodeGenWriteBarrier(&___clockPrefab_11, value);
	}

	inline static int32_t get_offset_of_scoreScript_12() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___scoreScript_12)); }
	inline Score_t1518975274 * get_scoreScript_12() const { return ___scoreScript_12; }
	inline Score_t1518975274 ** get_address_of_scoreScript_12() { return &___scoreScript_12; }
	inline void set_scoreScript_12(Score_t1518975274 * value)
	{
		___scoreScript_12 = value;
		Il2CppCodeGenWriteBarrier(&___scoreScript_12, value);
	}

	inline static int32_t get_offset_of_healthScript_13() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___healthScript_13)); }
	inline Health_t2683907638 * get_healthScript_13() const { return ___healthScript_13; }
	inline Health_t2683907638 ** get_address_of_healthScript_13() { return &___healthScript_13; }
	inline void set_healthScript_13(Health_t2683907638 * value)
	{
		___healthScript_13 = value;
		Il2CppCodeGenWriteBarrier(&___healthScript_13, value);
	}

	inline static int32_t get_offset_of_bubbleSound_14() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___bubbleSound_14)); }
	inline AudioSource_t1135106623 * get_bubbleSound_14() const { return ___bubbleSound_14; }
	inline AudioSource_t1135106623 ** get_address_of_bubbleSound_14() { return &___bubbleSound_14; }
	inline void set_bubbleSound_14(AudioSource_t1135106623 * value)
	{
		___bubbleSound_14 = value;
		Il2CppCodeGenWriteBarrier(&___bubbleSound_14, value);
	}

	inline static int32_t get_offset_of_bubble_15() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___bubble_15)); }
	inline AudioClip_t1932558630 * get_bubble_15() const { return ___bubble_15; }
	inline AudioClip_t1932558630 ** get_address_of_bubble_15() { return &___bubble_15; }
	inline void set_bubble_15(AudioClip_t1932558630 * value)
	{
		___bubble_15 = value;
		Il2CppCodeGenWriteBarrier(&___bubble_15, value);
	}

	inline static int32_t get_offset_of_handSwitch_16() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___handSwitch_16)); }
	inline HandSwitch_t1873529691 * get_handSwitch_16() const { return ___handSwitch_16; }
	inline HandSwitch_t1873529691 ** get_address_of_handSwitch_16() { return &___handSwitch_16; }
	inline void set_handSwitch_16(HandSwitch_t1873529691 * value)
	{
		___handSwitch_16 = value;
		Il2CppCodeGenWriteBarrier(&___handSwitch_16, value);
	}

	inline static int32_t get_offset_of_wave_17() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___wave_17)); }
	inline int32_t get_wave_17() const { return ___wave_17; }
	inline int32_t* get_address_of_wave_17() { return &___wave_17; }
	inline void set_wave_17(int32_t value)
	{
		___wave_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
