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
// UnityEngine.Mesh
struct Mesh_t1356156583;

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WaterLinePart
struct  WaterLinePart_t3445064956 
{
public:
	// System.Single WaterLinePart::height
	float ___height_0;
	// System.Single WaterLinePart::velocity
	float ___velocity_1;
	// UnityEngine.GameObject WaterLinePart::gameObject
	GameObject_t1756533147 * ___gameObject_2;
	// UnityEngine.Mesh WaterLinePart::mesh
	Mesh_t1356156583 * ___mesh_3;
	// UnityEngine.Vector2 WaterLinePart::boundsMin
	Vector2_t2243707579  ___boundsMin_4;
	// UnityEngine.Vector2 WaterLinePart::boundsMax
	Vector2_t2243707579  ___boundsMax_5;

public:
	inline static int32_t get_offset_of_height_0() { return static_cast<int32_t>(offsetof(WaterLinePart_t3445064956, ___height_0)); }
	inline float get_height_0() const { return ___height_0; }
	inline float* get_address_of_height_0() { return &___height_0; }
	inline void set_height_0(float value)
	{
		___height_0 = value;
	}

	inline static int32_t get_offset_of_velocity_1() { return static_cast<int32_t>(offsetof(WaterLinePart_t3445064956, ___velocity_1)); }
	inline float get_velocity_1() const { return ___velocity_1; }
	inline float* get_address_of_velocity_1() { return &___velocity_1; }
	inline void set_velocity_1(float value)
	{
		___velocity_1 = value;
	}

	inline static int32_t get_offset_of_gameObject_2() { return static_cast<int32_t>(offsetof(WaterLinePart_t3445064956, ___gameObject_2)); }
	inline GameObject_t1756533147 * get_gameObject_2() const { return ___gameObject_2; }
	inline GameObject_t1756533147 ** get_address_of_gameObject_2() { return &___gameObject_2; }
	inline void set_gameObject_2(GameObject_t1756533147 * value)
	{
		___gameObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_2, value);
	}

	inline static int32_t get_offset_of_mesh_3() { return static_cast<int32_t>(offsetof(WaterLinePart_t3445064956, ___mesh_3)); }
	inline Mesh_t1356156583 * get_mesh_3() const { return ___mesh_3; }
	inline Mesh_t1356156583 ** get_address_of_mesh_3() { return &___mesh_3; }
	inline void set_mesh_3(Mesh_t1356156583 * value)
	{
		___mesh_3 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_3, value);
	}

	inline static int32_t get_offset_of_boundsMin_4() { return static_cast<int32_t>(offsetof(WaterLinePart_t3445064956, ___boundsMin_4)); }
	inline Vector2_t2243707579  get_boundsMin_4() const { return ___boundsMin_4; }
	inline Vector2_t2243707579 * get_address_of_boundsMin_4() { return &___boundsMin_4; }
	inline void set_boundsMin_4(Vector2_t2243707579  value)
	{
		___boundsMin_4 = value;
	}

	inline static int32_t get_offset_of_boundsMax_5() { return static_cast<int32_t>(offsetof(WaterLinePart_t3445064956, ___boundsMax_5)); }
	inline Vector2_t2243707579  get_boundsMax_5() const { return ___boundsMax_5; }
	inline Vector2_t2243707579 * get_address_of_boundsMax_5() { return &___boundsMax_5; }
	inline void set_boundsMax_5(Vector2_t2243707579  value)
	{
		___boundsMax_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: WaterLinePart
struct WaterLinePart_t3445064956_marshaled_pinvoke
{
	float ___height_0;
	float ___velocity_1;
	GameObject_t1756533147 * ___gameObject_2;
	Mesh_t1356156583 * ___mesh_3;
	Vector2_t2243707579_marshaled_pinvoke ___boundsMin_4;
	Vector2_t2243707579_marshaled_pinvoke ___boundsMax_5;
};
// Native definition for marshalling of: WaterLinePart
struct WaterLinePart_t3445064956_marshaled_com
{
	float ___height_0;
	float ___velocity_1;
	GameObject_t1756533147 * ___gameObject_2;
	Mesh_t1356156583 * ___mesh_3;
	Vector2_t2243707579_marshaled_com ___boundsMin_4;
	Vector2_t2243707579_marshaled_com ___boundsMax_5;
};
