#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragObject
struct  DragObject_t4073257439  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 DragObject::screenPoint
	Vector3_t2243707580  ___screenPoint_2;
	// UnityEngine.Vector3 DragObject::offset
	Vector3_t2243707580  ___offset_3;

public:
	inline static int32_t get_offset_of_screenPoint_2() { return static_cast<int32_t>(offsetof(DragObject_t4073257439, ___screenPoint_2)); }
	inline Vector3_t2243707580  get_screenPoint_2() const { return ___screenPoint_2; }
	inline Vector3_t2243707580 * get_address_of_screenPoint_2() { return &___screenPoint_2; }
	inline void set_screenPoint_2(Vector3_t2243707580  value)
	{
		___screenPoint_2 = value;
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(DragObject_t4073257439, ___offset_3)); }
	inline Vector3_t2243707580  get_offset_3() const { return ___offset_3; }
	inline Vector3_t2243707580 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector3_t2243707580  value)
	{
		___offset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
