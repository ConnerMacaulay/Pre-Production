#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// QuizListScript
struct QuizListScript_t1183400170;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_QuizListScript1183400170.h"
#include "AssemblyU2DCSharp_WaterLinePart3445064956.h"

#pragma once
// QuizListScript[]
struct QuizListScriptU5BU5D_t788700207  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) QuizListScript_t1183400170 * m_Items[1];

public:
	inline QuizListScript_t1183400170 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline QuizListScript_t1183400170 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, QuizListScript_t1183400170 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// WaterLinePart[]
struct WaterLinePartU5BU5D_t2048801685  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) WaterLinePart_t3445064956  m_Items[1];

public:
	inline WaterLinePart_t3445064956  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline WaterLinePart_t3445064956 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, WaterLinePart_t3445064956  value)
	{
		m_Items[index] = value;
	}
};
