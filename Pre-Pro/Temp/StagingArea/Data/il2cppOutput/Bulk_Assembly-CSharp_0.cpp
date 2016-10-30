#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// DragObject
struct DragObject_t4073257439;
// MenuManager
struct MenuManager_t314201098;
// System.String
struct String_t;
// Music
struct Music_t799847391;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// System.Object
struct Il2CppObject;
// QuizScript
struct QuizScript_t300899450;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Image
struct Image_t2042527209;
// Score
struct Score_t1518975274;
// Spawning
struct Spawning_t2007178237;
// Timer
struct Timer_t2917042437;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_DragObject4073257439.h"
#include "AssemblyU2DCSharp_DragObject4073257439MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera189460977MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "mscorlib_System_Single2076509932.h"
#include "AssemblyU2DCSharp_MenuManager314201098.h"
#include "AssemblyU2DCSharp_MenuManager314201098MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Application354826772MethodDeclarations.h"
#include "AssemblyU2DCSharp_Music799847391.h"
#include "AssemblyU2DCSharp_Music799847391MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1021602117MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623MethodDeclarations.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "AssemblyU2DCSharp_QuizScript300899450.h"
#include "AssemblyU2DCSharp_QuizScript300899450MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1398341365MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1398341365.h"
#include "UnityEngine_UnityEngine_Random1170710517MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Button2872111280.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug1368543263MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UI_UnityEngine_UI_Image2042527209.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Color2020392075MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Graphic2426225576MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Graphic2426225576.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"
#include "AssemblyU2DCSharp_Score1518975274.h"
#include "AssemblyU2DCSharp_Score1518975274MethodDeclarations.h"
#include "mscorlib_System_Int322071877448MethodDeclarations.h"
#include "AssemblyU2DCSharp_Spawning2007178237.h"
#include "AssemblyU2DCSharp_Spawning2007178237MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Physics634932869MethodDeclarations.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "UnityEngine_UnityEngine_BoxCollider22920061.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "AssemblyU2DCSharp_Timer2917042437.h"
#include "AssemblyU2DCSharp_Timer2917042437MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time31991979MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf2336485820MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m2721246802_gshared (Component_t3819376471 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m2721246802(__this, method) ((  Il2CppObject * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m2721246802_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, method) ((  AudioSource_t1135106623 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m2721246802_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C"  Il2CppObject * Component_GetComponentInChildren_TisIl2CppObject_m2461586036_gshared (Component_t3819376471 * __this, const MethodInfo* method);
#define Component_GetComponentInChildren_TisIl2CppObject_m2461586036(__this, method) ((  Il2CppObject * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponentInChildren_TisIl2CppObject_m2461586036_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
#define Component_GetComponentInChildren_TisText_t356221433_m3065860595(__this, method) ((  Text_t356221433 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponentInChildren_TisIl2CppObject_m2461586036_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t2042527209_m2189462422(__this, method) ((  Image_t2042527209 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m2721246802_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m2812611596(__this, method) ((  Il2CppObject * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<Score>()
#define GameObject_GetComponent_TisScore_t1518975274_m280838835(__this, method) ((  Score_t1518975274 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DragObject::.ctor()
extern "C"  void DragObject__ctor_m2177710912 (DragObject_t4073257439 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DragObject::OnMouseDown()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern const uint32_t DragObject_OnMouseDown_m2919739184_MetadataUsageId;
extern "C"  void DragObject_OnMouseDown_m2919739184 (DragObject_t4073257439 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (DragObject_OnMouseDown_m2919739184_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Camera_t189460977 * L_0 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_2 = GameObject_get_transform_m909382139(L_1, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Camera_WorldToScreenPoint_m638747266(L_0, L_3, /*hidden argument*/NULL);
		__this->set_screenPoint_2(L_4);
		GameObject_t1756533147 * L_5 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_6 = GameObject_get_transform_m909382139(L_5, /*hidden argument*/NULL);
		Vector3_t2243707580  L_7 = Transform_get_position_m1104419803(L_6, /*hidden argument*/NULL);
		Camera_t189460977 * L_8 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_9 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_9;
		float L_10 = (&V_0)->get_x_1();
		Vector3_t2243707580  L_11 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_11;
		float L_12 = (&V_1)->get_y_2();
		Vector3_t2243707580 * L_13 = __this->get_address_of_screenPoint_2();
		float L_14 = L_13->get_z_3();
		Vector3_t2243707580  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector3__ctor_m2638739322(&L_15, L_10, L_12, L_14, /*hidden argument*/NULL);
		Vector3_t2243707580  L_16 = Camera_ScreenToWorldPoint_m929392728(L_8, L_15, /*hidden argument*/NULL);
		Vector3_t2243707580  L_17 = Vector3_op_Subtraction_m2407545601(NULL /*static, unused*/, L_7, L_16, /*hidden argument*/NULL);
		__this->set_offset_3(L_17);
		return;
	}
}
// System.Void DragObject::OnMouseDrag()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern const uint32_t DragObject_OnMouseDrag_m36376374_MetadataUsageId;
extern "C"  void DragObject_OnMouseDrag_m36376374 (DragObject_t4073257439 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (DragObject_OnMouseDrag_m36376374_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_0 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_0;
		float L_1 = (&V_2)->get_x_1();
		Vector3_t2243707580  L_2 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_2;
		float L_3 = (&V_3)->get_y_2();
		Vector3_t2243707580 * L_4 = __this->get_address_of_screenPoint_2();
		float L_5 = L_4->get_z_3();
		Vector3__ctor_m2638739322((&V_0), L_1, L_3, L_5, /*hidden argument*/NULL);
		Camera_t189460977 * L_6 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_7 = V_0;
		Vector3_t2243707580  L_8 = Camera_ScreenToWorldPoint_m929392728(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		Transform_t3275118058 * L_9 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_10 = V_1;
		Transform_set_position_m2469242620(L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuManager::.ctor()
extern "C"  void MenuManager__ctor_m573957227 (MenuManager_t314201098 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuManager::ChangeScene(System.String)
extern "C"  void MenuManager_ChangeScene_m1662973381 (MenuManager_t314201098 * __this, String_t* ___scenename0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___scenename0;
		Application_LoadLevel_m393995325(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Music::.ctor()
extern "C"  void Music__ctor_m2344753014 (Music_t799847391 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Music::Start()
extern "C"  void Music_Start_m547600378 (Music_t799847391 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Music::Update()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* Music_t799847391_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var;
extern const uint32_t Music_Update_m3419277411_MetadataUsageId;
extern "C"  void Music_Update_m3419277411 (Music_t799847391 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Music_Update_m3419277411_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = __this->get_musicPlaying_3();
		if (L_0)
		{
			goto IL_0065;
		}
	}
	{
		AudioSource_t1135106623 * L_1 = Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var);
		__this->set_mainMusic_4(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m2330762974(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		Music_t799847391 * L_2 = ((Music_t799847391_StaticFields*)Music_t799847391_il2cpp_TypeInfo_var->static_fields)->get_musicInstance_2();
		bool L_3 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_2, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		((Music_t799847391_StaticFields*)Music_t799847391_il2cpp_TypeInfo_var->static_fields)->set_musicInstance_2(__this);
		goto IL_0043;
	}

IL_0038:
	{
		GameObject_t1756533147 * L_4 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_DestroyObject_m2343493981(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0043:
	{
		AudioSource_t1135106623 * L_5 = __this->get_mainMusic_4();
		bool L_6 = AudioSource_get_isPlaying_m3677592677(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_005e;
		}
	}
	{
		AudioSource_t1135106623 * L_7 = __this->get_mainMusic_4();
		AudioSource_Play_m353744792(L_7, /*hidden argument*/NULL);
	}

IL_005e:
	{
		__this->set_musicPlaying_3((bool)1);
	}

IL_0065:
	{
		return;
	}
}
// System.Void QuizScript::.ctor()
extern Il2CppClass* List_1_t1398341365_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3854603248_MethodInfo_var;
extern const uint32_t QuizScript__ctor_m2649357263_MetadataUsageId;
extern "C"  void QuizScript__ctor_m2649357263 (QuizScript_t300899450 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QuizScript__ctor_m2649357263_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t1398341365 * L_0 = (List_1_t1398341365 *)il2cpp_codegen_object_new(List_1_t1398341365_il2cpp_TypeInfo_var);
		List_1__ctor_m3854603248(L_0, /*hidden argument*/List_1__ctor_m3854603248_MethodInfo_var);
		__this->set_questions_7(L_0);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void QuizScript::Start()
extern const MethodInfo* Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m780127360_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m566484697_MethodInfo_var;
extern const MethodInfo* Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral372029322;
extern Il2CppCodeGenString* _stringLiteral372029328;
extern Il2CppCodeGenString* _stringLiteral372029334;
extern Il2CppCodeGenString* _stringLiteral372029324;
extern Il2CppCodeGenString* _stringLiteral1864801799;
extern Il2CppCodeGenString* _stringLiteral3127748506;
extern Il2CppCodeGenString* _stringLiteral27833301;
extern Il2CppCodeGenString* _stringLiteral1372407406;
extern Il2CppCodeGenString* _stringLiteral3166763455;
extern Il2CppCodeGenString* _stringLiteral659536854;
extern Il2CppCodeGenString* _stringLiteral4102418154;
extern Il2CppCodeGenString* _stringLiteral459574194;
extern Il2CppCodeGenString* _stringLiteral3748858635;
extern Il2CppCodeGenString* _stringLiteral1783452145;
extern Il2CppCodeGenString* _stringLiteral2777675678;
extern Il2CppCodeGenString* _stringLiteral2309362720;
extern Il2CppCodeGenString* _stringLiteral259329236;
extern Il2CppCodeGenString* _stringLiteral3239050789;
extern Il2CppCodeGenString* _stringLiteral3339026183;
extern Il2CppCodeGenString* _stringLiteral3315858839;
extern Il2CppCodeGenString* _stringLiteral3166762463;
extern Il2CppCodeGenString* _stringLiteral3805670931;
extern const uint32_t QuizScript_Start_m2437461723_MetadataUsageId;
extern "C"  void QuizScript_Start_m2437461723 (QuizScript_t300899450 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QuizScript_Start_m2437461723_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioSource_t1135106623 * L_0 = Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var);
		__this->set_winSound_10(L_0);
		AudioSource_t1135106623 * L_1 = Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var);
		__this->set_wrongSound_12(L_1);
		List_1_t1398341365 * L_2 = __this->get_questions_7();
		int32_t L_3 = List_1_get_Count_m780127360(L_2, /*hidden argument*/List_1_get_Count_m780127360_MethodInfo_var);
		int32_t L_4 = Random_Range_m694320887(NULL /*static, unused*/, 0, L_3, /*hidden argument*/NULL);
		__this->set_questionNumber_8(L_4);
		Text_t356221433 * L_5 = __this->get_questionObj_2();
		List_1_t1398341365 * L_6 = __this->get_questions_7();
		int32_t L_7 = __this->get_questionNumber_8();
		String_t* L_8 = List_1_get_Item_m566484697(L_6, L_7, /*hidden argument*/List_1_get_Item_m566484697_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
		int32_t L_9 = __this->get_questionNumber_8();
		if (L_9)
		{
			goto IL_00ba;
		}
	}
	{
		Button_t2872111280 * L_10 = __this->get_answer1_3();
		Text_t356221433 * L_11 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_10, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteral372029322);
		Button_t2872111280 * L_12 = __this->get_answer2_4();
		Text_t356221433 * L_13 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_12, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteral372029328);
		Button_t2872111280 * L_14 = __this->get_answer3_5();
		Text_t356221433 * L_15 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_14, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, _stringLiteral372029334);
		Button_t2872111280 * L_16 = __this->get_answer4_6();
		Text_t356221433 * L_17 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_16, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, _stringLiteral372029324);
		__this->set_correctAnswer_9(_stringLiteral372029324);
		goto IL_02e5;
	}

IL_00ba:
	{
		int32_t L_18 = __this->get_questionNumber_8();
		if ((!(((uint32_t)L_18) == ((uint32_t)1))))
		{
			goto IL_012a;
		}
	}
	{
		Button_t2872111280 * L_19 = __this->get_answer1_3();
		Text_t356221433 * L_20 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_19, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, _stringLiteral1864801799);
		Button_t2872111280 * L_21 = __this->get_answer2_4();
		Text_t356221433 * L_22 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_21, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, _stringLiteral3127748506);
		Button_t2872111280 * L_23 = __this->get_answer3_5();
		Text_t356221433 * L_24 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_23, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, _stringLiteral27833301);
		Button_t2872111280 * L_25 = __this->get_answer4_6();
		Text_t356221433 * L_26 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_25, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, _stringLiteral1372407406);
		__this->set_correctAnswer_9(_stringLiteral3127748506);
		goto IL_02e5;
	}

IL_012a:
	{
		int32_t L_27 = __this->get_questionNumber_8();
		if ((!(((uint32_t)L_27) == ((uint32_t)2))))
		{
			goto IL_019a;
		}
	}
	{
		Button_t2872111280 * L_28 = __this->get_answer1_3();
		Text_t356221433 * L_29 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_28, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, _stringLiteral3166763455);
		Button_t2872111280 * L_30 = __this->get_answer2_4();
		Text_t356221433 * L_31 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_30, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, _stringLiteral659536854);
		Button_t2872111280 * L_32 = __this->get_answer3_5();
		Text_t356221433 * L_33 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_32, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, _stringLiteral4102418154);
		Button_t2872111280 * L_34 = __this->get_answer4_6();
		Text_t356221433 * L_35 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_34, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_35, _stringLiteral459574194);
		__this->set_correctAnswer_9(_stringLiteral3166763455);
		goto IL_02e5;
	}

IL_019a:
	{
		int32_t L_36 = __this->get_questionNumber_8();
		if ((!(((uint32_t)L_36) == ((uint32_t)3))))
		{
			goto IL_020a;
		}
	}
	{
		Button_t2872111280 * L_37 = __this->get_answer1_3();
		Text_t356221433 * L_38 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_37, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, _stringLiteral3748858635);
		Button_t2872111280 * L_39 = __this->get_answer2_4();
		Text_t356221433 * L_40 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_39, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_40, _stringLiteral1783452145);
		Button_t2872111280 * L_41 = __this->get_answer3_5();
		Text_t356221433 * L_42 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_41, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_42, _stringLiteral2777675678);
		Button_t2872111280 * L_43 = __this->get_answer4_6();
		Text_t356221433 * L_44 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_43, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_44, _stringLiteral2309362720);
		__this->set_correctAnswer_9(_stringLiteral1783452145);
		goto IL_02e5;
	}

IL_020a:
	{
		int32_t L_45 = __this->get_questionNumber_8();
		if ((!(((uint32_t)L_45) == ((uint32_t)4))))
		{
			goto IL_027a;
		}
	}
	{
		Button_t2872111280 * L_46 = __this->get_answer1_3();
		Text_t356221433 * L_47 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_46, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_47, _stringLiteral259329236);
		Button_t2872111280 * L_48 = __this->get_answer2_4();
		Text_t356221433 * L_49 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_48, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_49, _stringLiteral3239050789);
		Button_t2872111280 * L_50 = __this->get_answer3_5();
		Text_t356221433 * L_51 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_50, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_51, _stringLiteral3339026183);
		Button_t2872111280 * L_52 = __this->get_answer4_6();
		Text_t356221433 * L_53 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_52, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_53, _stringLiteral3315858839);
		__this->set_correctAnswer_9(_stringLiteral3239050789);
		goto IL_02e5;
	}

IL_027a:
	{
		int32_t L_54 = __this->get_questionNumber_8();
		if ((!(((uint32_t)L_54) == ((uint32_t)5))))
		{
			goto IL_02e5;
		}
	}
	{
		Button_t2872111280 * L_55 = __this->get_answer1_3();
		Text_t356221433 * L_56 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_55, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_56, _stringLiteral3166762463);
		Button_t2872111280 * L_57 = __this->get_answer2_4();
		Text_t356221433 * L_58 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_57, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_58, _stringLiteral659536854);
		Button_t2872111280 * L_59 = __this->get_answer3_5();
		Text_t356221433 * L_60 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_59, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_60, _stringLiteral3805670931);
		Button_t2872111280 * L_61 = __this->get_answer4_6();
		Text_t356221433 * L_62 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_61, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_62, _stringLiteral4102418154);
		__this->set_correctAnswer_9(_stringLiteral4102418154);
	}

IL_02e5:
	{
		return;
	}
}
// System.Void QuizScript::CheckAnswer(UnityEngine.UI.Button)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisImage_t2042527209_m2189462422_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1511157735;
extern Il2CppCodeGenString* _stringLiteral694878703;
extern Il2CppCodeGenString* _stringLiteral1995888299;
extern const uint32_t QuizScript_CheckAnswer_m2333704184_MetadataUsageId;
extern "C"  void QuizScript_CheckAnswer_m2333704184 (QuizScript_t300899450 * __this, Button_t2872111280 * ___button0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (QuizScript_CheckAnswer_m2333704184_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Button_t2872111280 * L_0 = ___button0;
		Text_t356221433 * L_1 = Component_GetComponentInChildren_TisText_t356221433_m3065860595(L_0, /*hidden argument*/Component_GetComponentInChildren_TisText_t356221433_m3065860595_MethodInfo_var);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		String_t* L_3 = __this->get_correctAnswer_9();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral1511157735, /*hidden argument*/NULL);
		Button_t2872111280 * L_5 = ___button0;
		Image_t2042527209 * L_6 = Component_GetComponent_TisImage_t2042527209_m2189462422(L_5, /*hidden argument*/Component_GetComponent_TisImage_t2042527209_m2189462422_MethodInfo_var);
		Color_t2020392075  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Color__ctor_m1909920690(&L_7, (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2020392075  >::Invoke(22 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		AudioSource_t1135106623 * L_8 = __this->get_winSound_10();
		AudioClip_t1932558630 * L_9 = __this->get_win_11();
		AudioSource_PlayOneShot_m4118899740(L_8, L_9, (0.8f), /*hidden argument*/NULL);
		Application_LoadLevel_m393995325(NULL /*static, unused*/, _stringLiteral694878703, /*hidden argument*/NULL);
		goto IL_00b2;
	}

IL_006e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral1995888299, /*hidden argument*/NULL);
		Button_t2872111280 * L_10 = ___button0;
		Image_t2042527209 * L_11 = Component_GetComponent_TisImage_t2042527209_m2189462422(L_10, /*hidden argument*/Component_GetComponent_TisImage_t2042527209_m2189462422_MethodInfo_var);
		Color_t2020392075  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Color__ctor_m1909920690(&L_12, (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2020392075  >::Invoke(22 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		AudioSource_t1135106623 * L_13 = __this->get_wrongSound_12();
		AudioClip_t1932558630 * L_14 = __this->get_wrong_13();
		AudioSource_PlayOneShot_m4118899740(L_13, L_14, (0.8f), /*hidden argument*/NULL);
	}

IL_00b2:
	{
		return;
	}
}
// System.Void Score::.ctor()
extern "C"  void Score__ctor_m797864275 (Score_t1518975274 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Score::Start()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const uint32_t Score_Start_m1559619439_MetadataUsageId;
extern "C"  void Score_Start_m1559619439 (Score_t1518975274 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Score_Start_m1559619439_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_scoreText_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m2330762974(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_score_2(0);
		return;
	}
}
// System.Void Score::Update()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1756683522;
extern const uint32_t Score_Update_m3052312664_MetadataUsageId;
extern "C"  void Score_Update_m3052312664 (Score_t1518975274 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Score_Update_m3052312664_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_scoreText_3();
		int32_t* L_1 = __this->get_address_of_score_2();
		String_t* L_2 = Int32_ToString_m2960866144(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral1756683522, L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		return;
	}
}
// System.Void Score::AddScore(System.Int32)
extern "C"  void Score_AddScore_m2903901959 (Score_t1518975274 * __this, int32_t ___amount0, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_score_2();
		int32_t L_1 = ___amount0;
		__this->set_score_2(((int32_t)((int32_t)L_0+(int32_t)L_1)));
		return;
	}
}
// System.Void Spawning::.ctor()
extern "C"  void Spawning__ctor_m3844824876 (Spawning_t2007178237 * __this, const MethodInfo* method)
{
	{
		__this->set_range_2((10.0f));
		__this->set_killScore_7(((int32_t)10));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spawning::Start()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisScore_t1518975274_m280838835_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral4166254675;
extern const uint32_t Spawning_Start_m2767299580_MetadataUsageId;
extern "C"  void Spawning_Start_m2767299580 (Spawning_t2007178237 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Spawning_Start_m2767299580_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t1756533147 * V_0 = NULL;
	{
		AudioSource_t1135106623 * L_0 = Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var);
		__this->set_bubbleSound_9(L_0);
		int32_t L_1 = __this->get_noMicrobes_4();
		__this->set_setMicrobes_5(L_1);
		GameObject_t1756533147 * L_2 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral4166254675, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_t1756533147 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_3, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		GameObject_t1756533147 * L_5 = V_0;
		Score_t1518975274 * L_6 = GameObject_GetComponent_TisScore_t1518975274_m280838835(L_5, /*hidden argument*/GameObject_GetComponent_TisScore_t1518975274_m280838835_MethodInfo_var);
		__this->set_scoreScript_8(L_6);
	}

IL_003b:
	{
		return;
	}
}
// System.Void Spawning::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppClass* BoxCollider_t22920061_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral339800437;
extern Il2CppCodeGenString* _stringLiteral1594942057;
extern const uint32_t Spawning_Update_m6433317_MetadataUsageId;
extern "C"  void Spawning_Update_m6433317 (Spawning_t2007178237 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Spawning_Update_m6433317_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	RaycastHit_t87180320  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Ray_t2469606224  V_1;
	memset(&V_1, 0, sizeof(V_1));
	BoxCollider_t22920061 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m47917805(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_008b;
		}
	}
	{
		Camera_t189460977 * L_1 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_2 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray_t2469606224  L_3 = Camera_ScreenPointToRay_m614889538(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Ray_t2469606224  L_4 = V_1;
		bool L_5 = Physics_Raycast_m2736931691(NULL /*static, unused*/, L_4, (&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_008b;
		}
	}
	{
		Collider_t3497673348 * L_6 = RaycastHit_get_collider_m301198172((&V_0), /*hidden argument*/NULL);
		V_2 = ((BoxCollider_t22920061 *)IsInstSealed(L_6, BoxCollider_t22920061_il2cpp_TypeInfo_var));
		BoxCollider_t22920061 * L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_7, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_008b;
		}
	}
	{
		BoxCollider_t22920061 * L_9 = V_2;
		GameObject_t1756533147 * L_10 = Component_get_gameObject_m3105766835(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_dMicrobes_6();
		__this->set_dMicrobes_6(((int32_t)((int32_t)L_11+(int32_t)1)));
		Score_t1518975274 * L_12 = __this->get_scoreScript_8();
		int32_t L_13 = __this->get_killScore_7();
		Score_AddScore_m2903901959(L_12, L_13, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_14 = __this->get_bubbleSound_9();
		AudioClip_t1932558630 * L_15 = __this->get_bubble_10();
		AudioSource_PlayOneShot_m4118899740(L_14, L_15, (0.8f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral339800437, /*hidden argument*/NULL);
	}

IL_008b:
	{
		int32_t L_16 = __this->get_noMicrobes_4();
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00ab;
		}
	}
	{
		Spawning_Spawn_m574405879(__this, /*hidden argument*/NULL);
		int32_t L_17 = __this->get_noMicrobes_4();
		__this->set_noMicrobes_4(((int32_t)((int32_t)L_17-(int32_t)1)));
	}

IL_00ab:
	{
		int32_t L_18 = __this->get_dMicrobes_6();
		if ((!(((uint32_t)L_18) == ((uint32_t)5))))
		{
			goto IL_00c5;
		}
	}
	{
		__this->set_dMicrobes_6(0);
		__this->set_noMicrobes_4(5);
	}

IL_00c5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_19 = Input_GetMouseButtonDown_m47917805(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00e1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral1594942057, /*hidden argument*/NULL);
		__this->set_noMicrobes_4(5);
	}

IL_00e1:
	{
		return;
	}
}
// System.Void Spawning::Spawn()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const uint32_t Spawning_Spawn_m574405879_MetadataUsageId;
extern "C"  void Spawning_Spawn_m574405879 (Spawning_t2007178237 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Spawning_Spawn_m574405879_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t2243707580  L_0 = Random_get_insideUnitSphere_m4012327022(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = __this->get_range_2();
		Vector3_t2243707580  L_2 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		(&V_0)->set_z_3((-1.0f));
		GameObject_t1756533147 * L_3 = __this->get_microbe_3();
		Transform_t3275118058 * L_4 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = Transform_get_position_m1104419803(L_4, /*hidden argument*/NULL);
		Vector3_t2243707580  L_6 = V_0;
		Vector3_t2243707580  L_7 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_8 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Instantiate_m938141395(NULL /*static, unused*/, L_3, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Timer::.ctor()
extern "C"  void Timer__ctor_m128890648 (Timer_t2917042437 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Timer::Start()
extern "C"  void Timer_Start_m1081319840 (Timer_t2917042437 * __this, const MethodInfo* method)
{
	{
		__this->set_timeLeft_2((10.0f));
		Timer_TimerCount_m3945292234(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Timer::Update()
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3618885679;
extern const uint32_t Timer_Update_m1869297125_MetadataUsageId;
extern "C"  void Timer_Update_m1869297125 (Timer_t2917042437 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Timer_Update_m1869297125_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = __this->get_timeLeft_2();
		if ((!(((float)L_0) > ((float)(1.0f)))))
		{
			goto IL_0049;
		}
	}
	{
		float L_1 = __this->get_timeLeft_2();
		float L_2 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timeLeft_2(((float)((float)L_1-(float)L_2)));
		float L_3 = __this->get_timeLeft_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		int32_t L_4 = Mathf_FloorToInt_m4005035722(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->set_timeLeftInt_3(L_4);
		Timer_TimerCount_m3945292234(__this, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_timeLeftInt_3();
		int32_t L_6 = L_5;
		Il2CppObject * L_7 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0049:
	{
		int32_t L_8 = __this->get_timeLeftInt_3();
		if (L_8)
		{
			goto IL_005e;
		}
	}
	{
		Application_LoadLevel_m393995325(NULL /*static, unused*/, _stringLiteral3618885679, /*hidden argument*/NULL);
	}

IL_005e:
	{
		return;
	}
}
// System.Void Timer::TimerCount()
extern "C"  void Timer_TimerCount_m3945292234 (Timer_t2917042437 * __this, const MethodInfo* method)
{
	{
		Text_t356221433 * L_0 = __this->get_timer_4();
		int32_t* L_1 = __this->get_address_of_timeLeftInt_3();
		String_t* L_2 = Int32_ToString_m2960866144(L_1, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
