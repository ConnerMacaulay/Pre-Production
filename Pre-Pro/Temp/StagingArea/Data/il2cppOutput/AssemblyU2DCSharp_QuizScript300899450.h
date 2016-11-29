#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button
struct Button_t2872111280;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.String
struct String_t;
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

// QuizScript
struct  QuizScript_t300899450  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text QuizScript::questionObj
	Text_t356221433 * ___questionObj_2;
	// UnityEngine.UI.Button QuizScript::answer1
	Button_t2872111280 * ___answer1_3;
	// UnityEngine.UI.Button QuizScript::answer2
	Button_t2872111280 * ___answer2_4;
	// UnityEngine.UI.Button QuizScript::answer3
	Button_t2872111280 * ___answer3_5;
	// UnityEngine.UI.Button QuizScript::answer4
	Button_t2872111280 * ___answer4_6;
	// UnityEngine.UI.Text QuizScript::scoreText
	Text_t356221433 * ___scoreText_7;
	// System.Collections.Generic.List`1<System.String> QuizScript::questions
	List_1_t1398341365 * ___questions_8;
	// System.Int32 QuizScript::questionNumber
	int32_t ___questionNumber_9;
	// System.String QuizScript::correctAnswer
	String_t* ___correctAnswer_10;
	// UnityEngine.AudioSource QuizScript::winSound
	AudioSource_t1135106623 * ___winSound_11;
	// UnityEngine.AudioClip QuizScript::win
	AudioClip_t1932558630 * ___win_12;
	// UnityEngine.AudioSource QuizScript::wrongSound
	AudioSource_t1135106623 * ___wrongSound_13;
	// UnityEngine.AudioClip QuizScript::wrong
	AudioClip_t1932558630 * ___wrong_14;

public:
	inline static int32_t get_offset_of_questionObj_2() { return static_cast<int32_t>(offsetof(QuizScript_t300899450, ___questionObj_2)); }
	inline Text_t356221433 * get_questionObj_2() const { return ___questionObj_2; }
	inline Text_t356221433 ** get_address_of_questionObj_2() { return &___questionObj_2; }
	inline void set_questionObj_2(Text_t356221433 * value)
	{
		___questionObj_2 = value;
		Il2CppCodeGenWriteBarrier(&___questionObj_2, value);
	}

	inline static int32_t get_offset_of_answer1_3() { return static_cast<int32_t>(offsetof(QuizScript_t300899450, ___answer1_3)); }
	inline Button_t2872111280 * get_answer1_3() const { return ___answer1_3; }
	inline Button_t2872111280 ** get_address_of_answer1_3() { return &___answer1_3; }
	inline void set_answer1_3(Button_t2872111280 * value)
	{
		___answer1_3 = value;
		Il2CppCodeGenWriteBarrier(&___answer1_3, value);
	}

	inline static int32_t get_offset_of_answer2_4() { return static_cast<int32_t>(offsetof(QuizScript_t300899450, ___answer2_4)); }
	inline Button_t2872111280 * get_answer2_4() const { return ___answer2_4; }
	inline Button_t2872111280 ** get_address_of_answer2_4() { return &___answer2_4; }
	inline void set_answer2_4(Button_t2872111280 * value)
	{
		___answer2_4 = value;
		Il2CppCodeGenWriteBarrier(&___answer2_4, value);
	}

	inline static int32_t get_offset_of_answer3_5() { return static_cast<int32_t>(offsetof(QuizScript_t300899450, ___answer3_5)); }
	inline Button_t2872111280 * get_answer3_5() const { return ___answer3_5; }
	inline Button_t2872111280 ** get_address_of_answer3_5() { return &___answer3_5; }
	inline void set_answer3_5(Button_t2872111280 * value)
	{
		___answer3_5 = value;
		Il2CppCodeGenWriteBarrier(&___answer3_5, value);
	}

	inline static int32_t get_offset_of_answer4_6() { return static_cast<int32_t>(offsetof(QuizScript_t300899450, ___answer4_6)); }
	inline Button_t2872111280 * get_answer4_6() const { return ___answer4_6; }
	inline Button_t2872111280 ** get_address_of_answer4_6() { return &___answer4_6; }
	inline void set_answer4_6(Button_t2872111280 * value)
	{
		___answer4_6 = value;
		Il2CppCodeGenWriteBarrier(&___answer4_6, value);
	}

	inline static int32_t get_offset_of_scoreText_7() { return static_cast<int32_t>(offsetof(QuizScript_t300899450, ___scoreText_7)); }
	inline Text_t356221433 * get_scoreText_7() const { return ___scoreText_7; }
	inline Text_t356221433 ** get_address_of_scoreText_7() { return &___scoreText_7; }
	inline void set_scoreText_7(Text_t356221433 * value)
	{
		___scoreText_7 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_7, value);
	}

	inline static int32_t get_offset_of_questions_8() { return static_cast<int32_t>(offsetof(QuizScript_t300899450, ___questions_8)); }
	inline List_1_t1398341365 * get_questions_8() const { return ___questions_8; }
	inline List_1_t1398341365 ** get_address_of_questions_8() { return &___questions_8; }
	inline void set_questions_8(List_1_t1398341365 * value)
	{
		___questions_8 = value;
		Il2CppCodeGenWriteBarrier(&___questions_8, value);
	}

	inline static int32_t get_offset_of_questionNumber_9() { return static_cast<int32_t>(offsetof(QuizScript_t300899450, ___questionNumber_9)); }
	inline int32_t get_questionNumber_9() const { return ___questionNumber_9; }
	inline int32_t* get_address_of_questionNumber_9() { return &___questionNumber_9; }
	inline void set_questionNumber_9(int32_t value)
	{
		___questionNumber_9 = value;
	}

	inline static int32_t get_offset_of_correctAnswer_10() { return static_cast<int32_t>(offsetof(QuizScript_t300899450, ___correctAnswer_10)); }
	inline String_t* get_correctAnswer_10() const { return ___correctAnswer_10; }
	inline String_t** get_address_of_correctAnswer_10() { return &___correctAnswer_10; }
	inline void set_correctAnswer_10(String_t* value)
	{
		___correctAnswer_10 = value;
		Il2CppCodeGenWriteBarrier(&___correctAnswer_10, value);
	}

	inline static int32_t get_offset_of_winSound_11() { return static_cast<int32_t>(offsetof(QuizScript_t300899450, ___winSound_11)); }
	inline AudioSource_t1135106623 * get_winSound_11() const { return ___winSound_11; }
	inline AudioSource_t1135106623 ** get_address_of_winSound_11() { return &___winSound_11; }
	inline void set_winSound_11(AudioSource_t1135106623 * value)
	{
		___winSound_11 = value;
		Il2CppCodeGenWriteBarrier(&___winSound_11, value);
	}

	inline static int32_t get_offset_of_win_12() { return static_cast<int32_t>(offsetof(QuizScript_t300899450, ___win_12)); }
	inline AudioClip_t1932558630 * get_win_12() const { return ___win_12; }
	inline AudioClip_t1932558630 ** get_address_of_win_12() { return &___win_12; }
	inline void set_win_12(AudioClip_t1932558630 * value)
	{
		___win_12 = value;
		Il2CppCodeGenWriteBarrier(&___win_12, value);
	}

	inline static int32_t get_offset_of_wrongSound_13() { return static_cast<int32_t>(offsetof(QuizScript_t300899450, ___wrongSound_13)); }
	inline AudioSource_t1135106623 * get_wrongSound_13() const { return ___wrongSound_13; }
	inline AudioSource_t1135106623 ** get_address_of_wrongSound_13() { return &___wrongSound_13; }
	inline void set_wrongSound_13(AudioSource_t1135106623 * value)
	{
		___wrongSound_13 = value;
		Il2CppCodeGenWriteBarrier(&___wrongSound_13, value);
	}

	inline static int32_t get_offset_of_wrong_14() { return static_cast<int32_t>(offsetof(QuizScript_t300899450, ___wrong_14)); }
	inline AudioClip_t1932558630 * get_wrong_14() const { return ___wrong_14; }
	inline AudioClip_t1932558630 ** get_address_of_wrong_14() { return &___wrong_14; }
	inline void set_wrong_14(AudioClip_t1932558630 * value)
	{
		___wrong_14 = value;
		Il2CppCodeGenWriteBarrier(&___wrong_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
