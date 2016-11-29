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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FallSpawn
struct  FallSpawn_t4030500872  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> FallSpawn::spawns
	List_1_t1125654279 * ___spawns_2;
	// UnityEngine.GameObject FallSpawn::goodMicrobe
	GameObject_t1756533147 * ___goodMicrobe_3;
	// UnityEngine.GameObject FallSpawn::badMicrobe
	GameObject_t1756533147 * ___badMicrobe_4;
	// UnityEngine.GameObject FallSpawn::nextMicrobe
	GameObject_t1756533147 * ___nextMicrobe_5;
	// System.Int32 FallSpawn::wave
	int32_t ___wave_6;
	// System.Int32 FallSpawn::microbesAmount
	int32_t ___microbesAmount_7;
	// System.Single FallSpawn::waveDelay
	float ___waveDelay_8;
	// System.Single FallSpawn::spawnDelay
	float ___spawnDelay_9;

public:
	inline static int32_t get_offset_of_spawns_2() { return static_cast<int32_t>(offsetof(FallSpawn_t4030500872, ___spawns_2)); }
	inline List_1_t1125654279 * get_spawns_2() const { return ___spawns_2; }
	inline List_1_t1125654279 ** get_address_of_spawns_2() { return &___spawns_2; }
	inline void set_spawns_2(List_1_t1125654279 * value)
	{
		___spawns_2 = value;
		Il2CppCodeGenWriteBarrier(&___spawns_2, value);
	}

	inline static int32_t get_offset_of_goodMicrobe_3() { return static_cast<int32_t>(offsetof(FallSpawn_t4030500872, ___goodMicrobe_3)); }
	inline GameObject_t1756533147 * get_goodMicrobe_3() const { return ___goodMicrobe_3; }
	inline GameObject_t1756533147 ** get_address_of_goodMicrobe_3() { return &___goodMicrobe_3; }
	inline void set_goodMicrobe_3(GameObject_t1756533147 * value)
	{
		___goodMicrobe_3 = value;
		Il2CppCodeGenWriteBarrier(&___goodMicrobe_3, value);
	}

	inline static int32_t get_offset_of_badMicrobe_4() { return static_cast<int32_t>(offsetof(FallSpawn_t4030500872, ___badMicrobe_4)); }
	inline GameObject_t1756533147 * get_badMicrobe_4() const { return ___badMicrobe_4; }
	inline GameObject_t1756533147 ** get_address_of_badMicrobe_4() { return &___badMicrobe_4; }
	inline void set_badMicrobe_4(GameObject_t1756533147 * value)
	{
		___badMicrobe_4 = value;
		Il2CppCodeGenWriteBarrier(&___badMicrobe_4, value);
	}

	inline static int32_t get_offset_of_nextMicrobe_5() { return static_cast<int32_t>(offsetof(FallSpawn_t4030500872, ___nextMicrobe_5)); }
	inline GameObject_t1756533147 * get_nextMicrobe_5() const { return ___nextMicrobe_5; }
	inline GameObject_t1756533147 ** get_address_of_nextMicrobe_5() { return &___nextMicrobe_5; }
	inline void set_nextMicrobe_5(GameObject_t1756533147 * value)
	{
		___nextMicrobe_5 = value;
		Il2CppCodeGenWriteBarrier(&___nextMicrobe_5, value);
	}

	inline static int32_t get_offset_of_wave_6() { return static_cast<int32_t>(offsetof(FallSpawn_t4030500872, ___wave_6)); }
	inline int32_t get_wave_6() const { return ___wave_6; }
	inline int32_t* get_address_of_wave_6() { return &___wave_6; }
	inline void set_wave_6(int32_t value)
	{
		___wave_6 = value;
	}

	inline static int32_t get_offset_of_microbesAmount_7() { return static_cast<int32_t>(offsetof(FallSpawn_t4030500872, ___microbesAmount_7)); }
	inline int32_t get_microbesAmount_7() const { return ___microbesAmount_7; }
	inline int32_t* get_address_of_microbesAmount_7() { return &___microbesAmount_7; }
	inline void set_microbesAmount_7(int32_t value)
	{
		___microbesAmount_7 = value;
	}

	inline static int32_t get_offset_of_waveDelay_8() { return static_cast<int32_t>(offsetof(FallSpawn_t4030500872, ___waveDelay_8)); }
	inline float get_waveDelay_8() const { return ___waveDelay_8; }
	inline float* get_address_of_waveDelay_8() { return &___waveDelay_8; }
	inline void set_waveDelay_8(float value)
	{
		___waveDelay_8 = value;
	}

	inline static int32_t get_offset_of_spawnDelay_9() { return static_cast<int32_t>(offsetof(FallSpawn_t4030500872, ___spawnDelay_9)); }
	inline float get_spawnDelay_9() const { return ___spawnDelay_9; }
	inline float* get_address_of_spawnDelay_9() { return &___spawnDelay_9; }
	inline void set_spawnDelay_9(float value)
	{
		___spawnDelay_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
