#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;
// WaterLinePart[]
struct WaterLinePartU5BU5D_t2048801685;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Test
struct  Test_t2695684016  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Test::velocityDamping
	float ___velocityDamping_2;
	// System.Single Test::timeScale
	float ___timeScale_3;
	// System.Int32 Test::Width
	int32_t ___Width_4;
	// System.Single Test::Height
	float ___Height_5;
	// UnityEngine.Material Test::material
	Material_t193706927 * ___material_6;
	// UnityEngine.Color Test::color
	Color_t2020392075  ___color_7;
	// WaterLinePart[] Test::parts
	WaterLinePartU5BU5D_t2048801685* ___parts_8;
	// System.Int32 Test::size
	int32_t ___size_9;
	// System.Single Test::currentHeight
	float ___currentHeight_10;

public:
	inline static int32_t get_offset_of_velocityDamping_2() { return static_cast<int32_t>(offsetof(Test_t2695684016, ___velocityDamping_2)); }
	inline float get_velocityDamping_2() const { return ___velocityDamping_2; }
	inline float* get_address_of_velocityDamping_2() { return &___velocityDamping_2; }
	inline void set_velocityDamping_2(float value)
	{
		___velocityDamping_2 = value;
	}

	inline static int32_t get_offset_of_timeScale_3() { return static_cast<int32_t>(offsetof(Test_t2695684016, ___timeScale_3)); }
	inline float get_timeScale_3() const { return ___timeScale_3; }
	inline float* get_address_of_timeScale_3() { return &___timeScale_3; }
	inline void set_timeScale_3(float value)
	{
		___timeScale_3 = value;
	}

	inline static int32_t get_offset_of_Width_4() { return static_cast<int32_t>(offsetof(Test_t2695684016, ___Width_4)); }
	inline int32_t get_Width_4() const { return ___Width_4; }
	inline int32_t* get_address_of_Width_4() { return &___Width_4; }
	inline void set_Width_4(int32_t value)
	{
		___Width_4 = value;
	}

	inline static int32_t get_offset_of_Height_5() { return static_cast<int32_t>(offsetof(Test_t2695684016, ___Height_5)); }
	inline float get_Height_5() const { return ___Height_5; }
	inline float* get_address_of_Height_5() { return &___Height_5; }
	inline void set_Height_5(float value)
	{
		___Height_5 = value;
	}

	inline static int32_t get_offset_of_material_6() { return static_cast<int32_t>(offsetof(Test_t2695684016, ___material_6)); }
	inline Material_t193706927 * get_material_6() const { return ___material_6; }
	inline Material_t193706927 ** get_address_of_material_6() { return &___material_6; }
	inline void set_material_6(Material_t193706927 * value)
	{
		___material_6 = value;
		Il2CppCodeGenWriteBarrier(&___material_6, value);
	}

	inline static int32_t get_offset_of_color_7() { return static_cast<int32_t>(offsetof(Test_t2695684016, ___color_7)); }
	inline Color_t2020392075  get_color_7() const { return ___color_7; }
	inline Color_t2020392075 * get_address_of_color_7() { return &___color_7; }
	inline void set_color_7(Color_t2020392075  value)
	{
		___color_7 = value;
	}

	inline static int32_t get_offset_of_parts_8() { return static_cast<int32_t>(offsetof(Test_t2695684016, ___parts_8)); }
	inline WaterLinePartU5BU5D_t2048801685* get_parts_8() const { return ___parts_8; }
	inline WaterLinePartU5BU5D_t2048801685** get_address_of_parts_8() { return &___parts_8; }
	inline void set_parts_8(WaterLinePartU5BU5D_t2048801685* value)
	{
		___parts_8 = value;
		Il2CppCodeGenWriteBarrier(&___parts_8, value);
	}

	inline static int32_t get_offset_of_size_9() { return static_cast<int32_t>(offsetof(Test_t2695684016, ___size_9)); }
	inline int32_t get_size_9() const { return ___size_9; }
	inline int32_t* get_address_of_size_9() { return &___size_9; }
	inline void set_size_9(int32_t value)
	{
		___size_9 = value;
	}

	inline static int32_t get_offset_of_currentHeight_10() { return static_cast<int32_t>(offsetof(Test_t2695684016, ___currentHeight_10)); }
	inline float get_currentHeight_10() const { return ___currentHeight_10; }
	inline float* get_address_of_currentHeight_10() { return &___currentHeight_10; }
	inline void set_currentHeight_10(float value)
	{
		___currentHeight_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
