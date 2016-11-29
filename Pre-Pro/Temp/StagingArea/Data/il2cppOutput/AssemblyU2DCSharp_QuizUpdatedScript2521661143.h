#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// QuizListScript[]
struct QuizListScriptU5BU5D_t788700207;
// System.Collections.Generic.List`1<QuizListScript>
struct List_1_t552521302;
// QuizListScript
struct QuizListScript_t1183400170;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button
struct Button_t2872111280;
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

// QuizUpdatedScript
struct  QuizUpdatedScript_t2521661143  : public MonoBehaviour_t1158329972
{
public:
	// QuizListScript[] QuizUpdatedScript::quizScript
	QuizListScriptU5BU5D_t788700207* ___quizScript_2;
	// QuizListScript QuizUpdatedScript::currentQuestion
	QuizListScript_t1183400170 * ___currentQuestion_4;
	// UnityEngine.UI.Text QuizUpdatedScript::scoreText
	Text_t356221433 * ___scoreText_5;
	// UnityEngine.UI.Text QuizUpdatedScript::question
	Text_t356221433 * ___question_6;
	// UnityEngine.UI.Button QuizUpdatedScript::answer1Button
	Button_t2872111280 * ___answer1Button_7;
	// UnityEngine.UI.Button QuizUpdatedScript::answer2Button
	Button_t2872111280 * ___answer2Button_8;
	// UnityEngine.UI.Button QuizUpdatedScript::answer3Button
	Button_t2872111280 * ___answer3Button_9;
	// UnityEngine.UI.Button QuizUpdatedScript::answer4Button
	Button_t2872111280 * ___answer4Button_10;
	// UnityEngine.AudioSource QuizUpdatedScript::winSound
	AudioSource_t1135106623 * ___winSound_11;
	// UnityEngine.AudioClip QuizUpdatedScript::win
	AudioClip_t1932558630 * ___win_12;
	// UnityEngine.AudioSource QuizUpdatedScript::wrongSound
	AudioSource_t1135106623 * ___wrongSound_13;
	// UnityEngine.AudioClip QuizUpdatedScript::wrong
	AudioClip_t1932558630 * ___wrong_14;

public:
	inline static int32_t get_offset_of_quizScript_2() { return static_cast<int32_t>(offsetof(QuizUpdatedScript_t2521661143, ___quizScript_2)); }
	inline QuizListScriptU5BU5D_t788700207* get_quizScript_2() const { return ___quizScript_2; }
	inline QuizListScriptU5BU5D_t788700207** get_address_of_quizScript_2() { return &___quizScript_2; }
	inline void set_quizScript_2(QuizListScriptU5BU5D_t788700207* value)
	{
		___quizScript_2 = value;
		Il2CppCodeGenWriteBarrier(&___quizScript_2, value);
	}

	inline static int32_t get_offset_of_currentQuestion_4() { return static_cast<int32_t>(offsetof(QuizUpdatedScript_t2521661143, ___currentQuestion_4)); }
	inline QuizListScript_t1183400170 * get_currentQuestion_4() const { return ___currentQuestion_4; }
	inline QuizListScript_t1183400170 ** get_address_of_currentQuestion_4() { return &___currentQuestion_4; }
	inline void set_currentQuestion_4(QuizListScript_t1183400170 * value)
	{
		___currentQuestion_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentQuestion_4, value);
	}

	inline static int32_t get_offset_of_scoreText_5() { return static_cast<int32_t>(offsetof(QuizUpdatedScript_t2521661143, ___scoreText_5)); }
	inline Text_t356221433 * get_scoreText_5() const { return ___scoreText_5; }
	inline Text_t356221433 ** get_address_of_scoreText_5() { return &___scoreText_5; }
	inline void set_scoreText_5(Text_t356221433 * value)
	{
		___scoreText_5 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_5, value);
	}

	inline static int32_t get_offset_of_question_6() { return static_cast<int32_t>(offsetof(QuizUpdatedScript_t2521661143, ___question_6)); }
	inline Text_t356221433 * get_question_6() const { return ___question_6; }
	inline Text_t356221433 ** get_address_of_question_6() { return &___question_6; }
	inline void set_question_6(Text_t356221433 * value)
	{
		___question_6 = value;
		Il2CppCodeGenWriteBarrier(&___question_6, value);
	}

	inline static int32_t get_offset_of_answer1Button_7() { return static_cast<int32_t>(offsetof(QuizUpdatedScript_t2521661143, ___answer1Button_7)); }
	inline Button_t2872111280 * get_answer1Button_7() const { return ___answer1Button_7; }
	inline Button_t2872111280 ** get_address_of_answer1Button_7() { return &___answer1Button_7; }
	inline void set_answer1Button_7(Button_t2872111280 * value)
	{
		___answer1Button_7 = value;
		Il2CppCodeGenWriteBarrier(&___answer1Button_7, value);
	}

	inline static int32_t get_offset_of_answer2Button_8() { return static_cast<int32_t>(offsetof(QuizUpdatedScript_t2521661143, ___answer2Button_8)); }
	inline Button_t2872111280 * get_answer2Button_8() const { return ___answer2Button_8; }
	inline Button_t2872111280 ** get_address_of_answer2Button_8() { return &___answer2Button_8; }
	inline void set_answer2Button_8(Button_t2872111280 * value)
	{
		___answer2Button_8 = value;
		Il2CppCodeGenWriteBarrier(&___answer2Button_8, value);
	}

	inline static int32_t get_offset_of_answer3Button_9() { return static_cast<int32_t>(offsetof(QuizUpdatedScript_t2521661143, ___answer3Button_9)); }
	inline Button_t2872111280 * get_answer3Button_9() const { return ___answer3Button_9; }
	inline Button_t2872111280 ** get_address_of_answer3Button_9() { return &___answer3Button_9; }
	inline void set_answer3Button_9(Button_t2872111280 * value)
	{
		___answer3Button_9 = value;
		Il2CppCodeGenWriteBarrier(&___answer3Button_9, value);
	}

	inline static int32_t get_offset_of_answer4Button_10() { return static_cast<int32_t>(offsetof(QuizUpdatedScript_t2521661143, ___answer4Button_10)); }
	inline Button_t2872111280 * get_answer4Button_10() const { return ___answer4Button_10; }
	inline Button_t2872111280 ** get_address_of_answer4Button_10() { return &___answer4Button_10; }
	inline void set_answer4Button_10(Button_t2872111280 * value)
	{
		___answer4Button_10 = value;
		Il2CppCodeGenWriteBarrier(&___answer4Button_10, value);
	}

	inline static int32_t get_offset_of_winSound_11() { return static_cast<int32_t>(offsetof(QuizUpdatedScript_t2521661143, ___winSound_11)); }
	inline AudioSource_t1135106623 * get_winSound_11() const { return ___winSound_11; }
	inline AudioSource_t1135106623 ** get_address_of_winSound_11() { return &___winSound_11; }
	inline void set_winSound_11(AudioSource_t1135106623 * value)
	{
		___winSound_11 = value;
		Il2CppCodeGenWriteBarrier(&___winSound_11, value);
	}

	inline static int32_t get_offset_of_win_12() { return static_cast<int32_t>(offsetof(QuizUpdatedScript_t2521661143, ___win_12)); }
	inline AudioClip_t1932558630 * get_win_12() const { return ___win_12; }
	inline AudioClip_t1932558630 ** get_address_of_win_12() { return &___win_12; }
	inline void set_win_12(AudioClip_t1932558630 * value)
	{
		___win_12 = value;
		Il2CppCodeGenWriteBarrier(&___win_12, value);
	}

	inline static int32_t get_offset_of_wrongSound_13() { return static_cast<int32_t>(offsetof(QuizUpdatedScript_t2521661143, ___wrongSound_13)); }
	inline AudioSource_t1135106623 * get_wrongSound_13() const { return ___wrongSound_13; }
	inline AudioSource_t1135106623 ** get_address_of_wrongSound_13() { return &___wrongSound_13; }
	inline void set_wrongSound_13(AudioSource_t1135106623 * value)
	{
		___wrongSound_13 = value;
		Il2CppCodeGenWriteBarrier(&___wrongSound_13, value);
	}

	inline static int32_t get_offset_of_wrong_14() { return static_cast<int32_t>(offsetof(QuizUpdatedScript_t2521661143, ___wrong_14)); }
	inline AudioClip_t1932558630 * get_wrong_14() const { return ___wrong_14; }
	inline AudioClip_t1932558630 ** get_address_of_wrong_14() { return &___wrong_14; }
	inline void set_wrong_14(AudioClip_t1932558630 * value)
	{
		___wrong_14 = value;
		Il2CppCodeGenWriteBarrier(&___wrong_14, value);
	}
};

struct QuizUpdatedScript_t2521661143_StaticFields
{
public:
	// System.Collections.Generic.List`1<QuizListScript> QuizUpdatedScript::unseenQuestion
	List_1_t552521302 * ___unseenQuestion_3;

public:
	inline static int32_t get_offset_of_unseenQuestion_3() { return static_cast<int32_t>(offsetof(QuizUpdatedScript_t2521661143_StaticFields, ___unseenQuestion_3)); }
	inline List_1_t552521302 * get_unseenQuestion_3() const { return ___unseenQuestion_3; }
	inline List_1_t552521302 ** get_address_of_unseenQuestion_3() { return &___unseenQuestion_3; }
	inline void set_unseenQuestion_3(List_1_t552521302 * value)
	{
		___unseenQuestion_3 = value;
		Il2CppCodeGenWriteBarrier(&___unseenQuestion_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
