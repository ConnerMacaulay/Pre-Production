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

// Timer
struct Timer_t2917042437;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Timer::.ctor()
extern "C"  void Timer__ctor_m128890648 (Timer_t2917042437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::Start()
extern "C"  void Timer_Start_m1081319840 (Timer_t2917042437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::Update()
extern "C"  void Timer_Update_m1869297125 (Timer_t2917042437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::TimerCount()
extern "C"  void Timer_TimerCount_m3945292234 (Timer_t2917042437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::AddTime(System.Single)
extern "C"  void Timer_AddTime_m1397157161 (Timer_t2917042437 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Timer::WaitAndLoadLevel(System.String,System.Single)
extern "C"  Il2CppObject * Timer_WaitAndLoadLevel_m2931469005 (Timer_t2917042437 * __this, String_t* ___name0, float ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
