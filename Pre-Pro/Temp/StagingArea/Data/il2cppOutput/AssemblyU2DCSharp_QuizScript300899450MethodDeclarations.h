#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// QuizScript
struct QuizScript_t300899450;
// UnityEngine.UI.Button
struct Button_t2872111280;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Button2872111280.h"

// System.Void QuizScript::.ctor()
extern "C"  void QuizScript__ctor_m2649357263 (QuizScript_t300899450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuizScript::Start()
extern "C"  void QuizScript_Start_m2437461723 (QuizScript_t300899450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuizScript::Update()
extern "C"  void QuizScript_Update_m3297378280 (QuizScript_t300899450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuizScript::CheckAnswer(UnityEngine.UI.Button)
extern "C"  void QuizScript_CheckAnswer_m2333704184 (QuizScript_t300899450 * __this, Button_t2872111280 * ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator QuizScript::WaitAndLoadLevel(System.Single)
extern "C"  Il2CppObject * QuizScript_WaitAndLoadLevel_m2115346866 (QuizScript_t300899450 * __this, float ___audioTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
