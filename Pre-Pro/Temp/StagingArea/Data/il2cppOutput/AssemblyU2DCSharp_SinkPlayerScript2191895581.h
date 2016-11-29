#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SinkPlayerScript
struct  SinkPlayerScript_t2191895581  : public MonoBehaviour_t1158329972
{
public:
	// System.Single SinkPlayerScript::movementSpeed
	float ___movementSpeed_2;
	// System.Boolean SinkPlayerScript::jump
	bool ___jump_3;
	// System.Single SinkPlayerScript::jumpHeight
	float ___jumpHeight_4;
	// System.Boolean SinkPlayerScript::isGrounded
	bool ___isGrounded_5;
	// UnityEngine.LayerMask SinkPlayerScript::ground
	LayerMask_t3188175821  ___ground_6;
	// UnityEngine.Transform SinkPlayerScript::groundCheck
	Transform_t3275118058 * ___groundCheck_7;
	// System.Single SinkPlayerScript::groundRadius
	float ___groundRadius_8;
	// UnityEngine.UI.Text SinkPlayerScript::scoreText
	Text_t356221433 * ___scoreText_9;

public:
	inline static int32_t get_offset_of_movementSpeed_2() { return static_cast<int32_t>(offsetof(SinkPlayerScript_t2191895581, ___movementSpeed_2)); }
	inline float get_movementSpeed_2() const { return ___movementSpeed_2; }
	inline float* get_address_of_movementSpeed_2() { return &___movementSpeed_2; }
	inline void set_movementSpeed_2(float value)
	{
		___movementSpeed_2 = value;
	}

	inline static int32_t get_offset_of_jump_3() { return static_cast<int32_t>(offsetof(SinkPlayerScript_t2191895581, ___jump_3)); }
	inline bool get_jump_3() const { return ___jump_3; }
	inline bool* get_address_of_jump_3() { return &___jump_3; }
	inline void set_jump_3(bool value)
	{
		___jump_3 = value;
	}

	inline static int32_t get_offset_of_jumpHeight_4() { return static_cast<int32_t>(offsetof(SinkPlayerScript_t2191895581, ___jumpHeight_4)); }
	inline float get_jumpHeight_4() const { return ___jumpHeight_4; }
	inline float* get_address_of_jumpHeight_4() { return &___jumpHeight_4; }
	inline void set_jumpHeight_4(float value)
	{
		___jumpHeight_4 = value;
	}

	inline static int32_t get_offset_of_isGrounded_5() { return static_cast<int32_t>(offsetof(SinkPlayerScript_t2191895581, ___isGrounded_5)); }
	inline bool get_isGrounded_5() const { return ___isGrounded_5; }
	inline bool* get_address_of_isGrounded_5() { return &___isGrounded_5; }
	inline void set_isGrounded_5(bool value)
	{
		___isGrounded_5 = value;
	}

	inline static int32_t get_offset_of_ground_6() { return static_cast<int32_t>(offsetof(SinkPlayerScript_t2191895581, ___ground_6)); }
	inline LayerMask_t3188175821  get_ground_6() const { return ___ground_6; }
	inline LayerMask_t3188175821 * get_address_of_ground_6() { return &___ground_6; }
	inline void set_ground_6(LayerMask_t3188175821  value)
	{
		___ground_6 = value;
	}

	inline static int32_t get_offset_of_groundCheck_7() { return static_cast<int32_t>(offsetof(SinkPlayerScript_t2191895581, ___groundCheck_7)); }
	inline Transform_t3275118058 * get_groundCheck_7() const { return ___groundCheck_7; }
	inline Transform_t3275118058 ** get_address_of_groundCheck_7() { return &___groundCheck_7; }
	inline void set_groundCheck_7(Transform_t3275118058 * value)
	{
		___groundCheck_7 = value;
		Il2CppCodeGenWriteBarrier(&___groundCheck_7, value);
	}

	inline static int32_t get_offset_of_groundRadius_8() { return static_cast<int32_t>(offsetof(SinkPlayerScript_t2191895581, ___groundRadius_8)); }
	inline float get_groundRadius_8() const { return ___groundRadius_8; }
	inline float* get_address_of_groundRadius_8() { return &___groundRadius_8; }
	inline void set_groundRadius_8(float value)
	{
		___groundRadius_8 = value;
	}

	inline static int32_t get_offset_of_scoreText_9() { return static_cast<int32_t>(offsetof(SinkPlayerScript_t2191895581, ___scoreText_9)); }
	inline Text_t356221433 * get_scoreText_9() const { return ___scoreText_9; }
	inline Text_t356221433 ** get_address_of_scoreText_9() { return &___scoreText_9; }
	inline void set_scoreText_9(Text_t356221433 * value)
	{
		___scoreText_9 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
