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
// Score
struct Score_t1518975274;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

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
	// UnityEngine.GameObject Spawning::microbe
	GameObject_t1756533147 * ___microbe_3;
	// System.Int32 Spawning::noMicrobes
	int32_t ___noMicrobes_4;
	// System.Int32 Spawning::setMicrobes
	int32_t ___setMicrobes_5;
	// System.Int32 Spawning::dMicrobes
	int32_t ___dMicrobes_6;
	// System.Int32 Spawning::killScore
	int32_t ___killScore_7;
	// Score Spawning::scoreScript
	Score_t1518975274 * ___scoreScript_8;
	// UnityEngine.AudioSource Spawning::bubbleSound
	AudioSource_t1135106623 * ___bubbleSound_9;
	// UnityEngine.AudioClip Spawning::bubble
	AudioClip_t1932558630 * ___bubble_10;

public:
	inline static int32_t get_offset_of_range_2() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___range_2)); }
	inline float get_range_2() const { return ___range_2; }
	inline float* get_address_of_range_2() { return &___range_2; }
	inline void set_range_2(float value)
	{
		___range_2 = value;
	}

	inline static int32_t get_offset_of_microbe_3() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___microbe_3)); }
	inline GameObject_t1756533147 * get_microbe_3() const { return ___microbe_3; }
	inline GameObject_t1756533147 ** get_address_of_microbe_3() { return &___microbe_3; }
	inline void set_microbe_3(GameObject_t1756533147 * value)
	{
		___microbe_3 = value;
		Il2CppCodeGenWriteBarrier(&___microbe_3, value);
	}

	inline static int32_t get_offset_of_noMicrobes_4() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___noMicrobes_4)); }
	inline int32_t get_noMicrobes_4() const { return ___noMicrobes_4; }
	inline int32_t* get_address_of_noMicrobes_4() { return &___noMicrobes_4; }
	inline void set_noMicrobes_4(int32_t value)
	{
		___noMicrobes_4 = value;
	}

	inline static int32_t get_offset_of_setMicrobes_5() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___setMicrobes_5)); }
	inline int32_t get_setMicrobes_5() const { return ___setMicrobes_5; }
	inline int32_t* get_address_of_setMicrobes_5() { return &___setMicrobes_5; }
	inline void set_setMicrobes_5(int32_t value)
	{
		___setMicrobes_5 = value;
	}

	inline static int32_t get_offset_of_dMicrobes_6() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___dMicrobes_6)); }
	inline int32_t get_dMicrobes_6() const { return ___dMicrobes_6; }
	inline int32_t* get_address_of_dMicrobes_6() { return &___dMicrobes_6; }
	inline void set_dMicrobes_6(int32_t value)
	{
		___dMicrobes_6 = value;
	}

	inline static int32_t get_offset_of_killScore_7() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___killScore_7)); }
	inline int32_t get_killScore_7() const { return ___killScore_7; }
	inline int32_t* get_address_of_killScore_7() { return &___killScore_7; }
	inline void set_killScore_7(int32_t value)
	{
		___killScore_7 = value;
	}

	inline static int32_t get_offset_of_scoreScript_8() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___scoreScript_8)); }
	inline Score_t1518975274 * get_scoreScript_8() const { return ___scoreScript_8; }
	inline Score_t1518975274 ** get_address_of_scoreScript_8() { return &___scoreScript_8; }
	inline void set_scoreScript_8(Score_t1518975274 * value)
	{
		___scoreScript_8 = value;
		Il2CppCodeGenWriteBarrier(&___scoreScript_8, value);
	}

	inline static int32_t get_offset_of_bubbleSound_9() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___bubbleSound_9)); }
	inline AudioSource_t1135106623 * get_bubbleSound_9() const { return ___bubbleSound_9; }
	inline AudioSource_t1135106623 ** get_address_of_bubbleSound_9() { return &___bubbleSound_9; }
	inline void set_bubbleSound_9(AudioSource_t1135106623 * value)
	{
		___bubbleSound_9 = value;
		Il2CppCodeGenWriteBarrier(&___bubbleSound_9, value);
	}

	inline static int32_t get_offset_of_bubble_10() { return static_cast<int32_t>(offsetof(Spawning_t2007178237, ___bubble_10)); }
	inline AudioClip_t1932558630 * get_bubble_10() const { return ___bubble_10; }
	inline AudioClip_t1932558630 ** get_address_of_bubble_10() { return &___bubble_10; }
	inline void set_bubble_10(AudioClip_t1932558630 * value)
	{
		___bubble_10 = value;
		Il2CppCodeGenWriteBarrier(&___bubble_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
