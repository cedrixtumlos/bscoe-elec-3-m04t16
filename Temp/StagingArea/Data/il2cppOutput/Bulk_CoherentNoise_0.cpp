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
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// CoherentNoise.Generation.Combination.Max
struct Max_t4197319588;
// CoherentNoise.Generator
struct Generator_t4036556772;
// CoherentNoise.Generation.Constant
struct Constant_t1823254730;
// CoherentNoise.Generation.Displacement.Scale
struct Scale_t3870492223;
// CoherentNoise.Generation.Fractal.FractalNoiseBase
struct FractalNoiseBase_t4077094137;
// CoherentNoise.Generation.GradientNoise
struct GradientNoise_t639380896;
// CoherentNoise.Generation.Fractal.PinkNoise
struct PinkNoise_t2031408553;
// CoherentNoise.Generation.Fractal.RidgeNoise
struct RidgeNoise_t608126379;
// CoherentNoise.Generation.Function
struct Function_t15557630;
// System.Func`4<System.Single,System.Single,System.Single,System.Single>
struct Func_4_t470802036;
// CoherentNoise.Interpolation.SCurve
struct SCurve_t667389360;
// CoherentNoise.Generation.Modification.Bias
struct Bias_t1434028717;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.String
struct String_t;
// CoherentNoise.Generator/<>c__DisplayClass1
struct U3CU3Ec__DisplayClass1_t4251175105;
// CoherentNoise.Generator/<>c__DisplayClass10
struct U3CU3Ec__DisplayClass10_t2889275538;
// CoherentNoise.Interpolation.CosineSCurve
struct CosineSCurve_t127591338;
// CoherentNoise.Interpolation.CubicSCurve
struct CubicSCurve_t2358206018;
// CoherentNoise.Interpolation.LinearSCurve
struct LinearSCurve_t1372510163;
// CoherentNoise.Interpolation.QuinticSCurve
struct QuinticSCurve_t3645776962;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;

extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t Max_GetValue_m3420840197_MetadataUsageId;
extern RuntimeClass* GradientNoise_t639380896_il2cpp_TypeInfo_var;
extern const uint32_t FractalNoiseBase__ctor_m1522018235_MetadataUsageId;
extern RuntimeClass* FractalNoiseBase_t4077094137_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const uint32_t FractalNoiseBase_GetValue_m2165057312_MetadataUsageId;
extern const uint32_t FractalNoiseBase__cctor_m113391988_MetadataUsageId;
extern const uint32_t PinkNoise__ctor_m2073610907_MetadataUsageId;
extern const uint32_t RidgeNoise__ctor_m355332379_MetadataUsageId;
extern const uint32_t RidgeNoise_CombineOctave_m139749334_MetadataUsageId;
extern RuntimeClass* SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var;
extern const uint32_t RidgeNoise_PrecalculateWeights_m3320982620_MetadataUsageId;
extern const RuntimeMethod* Func_4_Invoke_m2739791668_RuntimeMethod_var;
extern const uint32_t Function_GetValue_m2213728254_MetadataUsageId;
extern RuntimeClass* SCurve_t667389360_il2cpp_TypeInfo_var;
extern const uint32_t GradientNoise_get_SCurve_m1092237895_MetadataUsageId;
extern const uint32_t GradientNoise_GetValue_m3942597632_MetadataUsageId;
extern const uint32_t GradientNoise_GetRandomVector_m117061864_MetadataUsageId;
extern const uint32_t GradientNoise_GetNoise_m190726570_MetadataUsageId;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7B6E89E9EDU2D2A9EU2D4192U2DB810U2D6644386B5FF9U7D_t1993605181____U24U24method0x60000e7U2D1_0_FieldInfo_var;
extern const uint32_t GradientNoise__cctor_m507291083_MetadataUsageId;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral213142974;
extern const uint32_t Bias__ctor_m476027501_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__DisplayClass1_t4251175105_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_4_t470802036_il2cpp_TypeInfo_var;
extern RuntimeClass* Function_t15557630_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass1_U3Cop_AdditionU3Eb__0_m3486310383_RuntimeMethod_var;
extern const RuntimeMethod* Func_4__ctor_m1502640117_RuntimeMethod_var;
extern const uint32_t Generator_op_Addition_m1462983143_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__DisplayClass10_t2889275538_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass10_U3Cop_MultiplyU3Eb__f_m2832821486_RuntimeMethod_var;
extern const uint32_t Generator_op_Multiply_m2759838008_MetadataUsageId;
extern RuntimeClass* Constant_t1823254730_il2cpp_TypeInfo_var;
extern const uint32_t Generator_op_Implicit_m2618032474_MetadataUsageId;
extern const uint32_t CosineSCurve__ctor_m580333586_MetadataUsageId;
extern const uint32_t CubicSCurve__ctor_m3097235297_MetadataUsageId;
extern const uint32_t LinearSCurve__ctor_m3568124004_MetadataUsageId;
extern const uint32_t QuinticSCurve__ctor_m240326878_MetadataUsageId;
extern RuntimeClass* LinearSCurve_t1372510163_il2cpp_TypeInfo_var;
extern RuntimeClass* CubicSCurve_t2358206018_il2cpp_TypeInfo_var;
extern RuntimeClass* QuinticSCurve_t3645776962_il2cpp_TypeInfo_var;
extern RuntimeClass* CosineSCurve_t127591338_il2cpp_TypeInfo_var;
extern const uint32_t SCurve__cctor_m4055378972_MetadataUsageId;

struct SingleU5BU5D_t1444911251;


#ifndef U3CMODULEU3E_T692745544_H
#define U3CMODULEU3E_T692745544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745544 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745544_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef SCURVE_T667389360_H
#define SCURVE_T667389360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoherentNoise.Interpolation.SCurve
struct  SCurve_t667389360  : public RuntimeObject
{
public:

public:
};

struct SCurve_t667389360_StaticFields
{
public:
	// CoherentNoise.Interpolation.SCurve CoherentNoise.Interpolation.SCurve::Linear
	SCurve_t667389360 * ___Linear_0;
	// CoherentNoise.Interpolation.SCurve CoherentNoise.Interpolation.SCurve::Cubic
	SCurve_t667389360 * ___Cubic_1;
	// CoherentNoise.Interpolation.SCurve CoherentNoise.Interpolation.SCurve::Quintic
	SCurve_t667389360 * ___Quintic_2;
	// CoherentNoise.Interpolation.SCurve CoherentNoise.Interpolation.SCurve::Cosine
	SCurve_t667389360 * ___Cosine_3;
	// CoherentNoise.Interpolation.SCurve CoherentNoise.Interpolation.SCurve::Default
	SCurve_t667389360 * ___Default_4;

public:
	inline static int32_t get_offset_of_Linear_0() { return static_cast<int32_t>(offsetof(SCurve_t667389360_StaticFields, ___Linear_0)); }
	inline SCurve_t667389360 * get_Linear_0() const { return ___Linear_0; }
	inline SCurve_t667389360 ** get_address_of_Linear_0() { return &___Linear_0; }
	inline void set_Linear_0(SCurve_t667389360 * value)
	{
		___Linear_0 = value;
		Il2CppCodeGenWriteBarrier((&___Linear_0), value);
	}

	inline static int32_t get_offset_of_Cubic_1() { return static_cast<int32_t>(offsetof(SCurve_t667389360_StaticFields, ___Cubic_1)); }
	inline SCurve_t667389360 * get_Cubic_1() const { return ___Cubic_1; }
	inline SCurve_t667389360 ** get_address_of_Cubic_1() { return &___Cubic_1; }
	inline void set_Cubic_1(SCurve_t667389360 * value)
	{
		___Cubic_1 = value;
		Il2CppCodeGenWriteBarrier((&___Cubic_1), value);
	}

	inline static int32_t get_offset_of_Quintic_2() { return static_cast<int32_t>(offsetof(SCurve_t667389360_StaticFields, ___Quintic_2)); }
	inline SCurve_t667389360 * get_Quintic_2() const { return ___Quintic_2; }
	inline SCurve_t667389360 ** get_address_of_Quintic_2() { return &___Quintic_2; }
	inline void set_Quintic_2(SCurve_t667389360 * value)
	{
		___Quintic_2 = value;
		Il2CppCodeGenWriteBarrier((&___Quintic_2), value);
	}

	inline static int32_t get_offset_of_Cosine_3() { return static_cast<int32_t>(offsetof(SCurve_t667389360_StaticFields, ___Cosine_3)); }
	inline SCurve_t667389360 * get_Cosine_3() const { return ___Cosine_3; }
	inline SCurve_t667389360 ** get_address_of_Cosine_3() { return &___Cosine_3; }
	inline void set_Cosine_3(SCurve_t667389360 * value)
	{
		___Cosine_3 = value;
		Il2CppCodeGenWriteBarrier((&___Cosine_3), value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(SCurve_t667389360_StaticFields, ___Default_4)); }
	inline SCurve_t667389360 * get_Default_4() const { return ___Default_4; }
	inline SCurve_t667389360 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(SCurve_t667389360 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCURVE_T667389360_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U3CU3EC__DISPLAYCLASS10_T2889275538_H
#define U3CU3EC__DISPLAYCLASS10_T2889275538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoherentNoise.Generator/<>c__DisplayClass10
struct  U3CU3Ec__DisplayClass10_t2889275538  : public RuntimeObject
{
public:
	// CoherentNoise.Generator CoherentNoise.Generator/<>c__DisplayClass10::g1
	Generator_t4036556772 * ___g1_0;
	// CoherentNoise.Generator CoherentNoise.Generator/<>c__DisplayClass10::g2
	Generator_t4036556772 * ___g2_1;

public:
	inline static int32_t get_offset_of_g1_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_t2889275538, ___g1_0)); }
	inline Generator_t4036556772 * get_g1_0() const { return ___g1_0; }
	inline Generator_t4036556772 ** get_address_of_g1_0() { return &___g1_0; }
	inline void set_g1_0(Generator_t4036556772 * value)
	{
		___g1_0 = value;
		Il2CppCodeGenWriteBarrier((&___g1_0), value);
	}

	inline static int32_t get_offset_of_g2_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_t2889275538, ___g2_1)); }
	inline Generator_t4036556772 * get_g2_1() const { return ___g2_1; }
	inline Generator_t4036556772 ** get_address_of_g2_1() { return &___g2_1; }
	inline void set_g2_1(Generator_t4036556772 * value)
	{
		___g2_1 = value;
		Il2CppCodeGenWriteBarrier((&___g2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS10_T2889275538_H
#ifndef U3CU3EC__DISPLAYCLASS1_T4251175105_H
#define U3CU3EC__DISPLAYCLASS1_T4251175105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoherentNoise.Generator/<>c__DisplayClass1
struct  U3CU3Ec__DisplayClass1_t4251175105  : public RuntimeObject
{
public:
	// CoherentNoise.Generator CoherentNoise.Generator/<>c__DisplayClass1::g1
	Generator_t4036556772 * ___g1_0;
	// CoherentNoise.Generator CoherentNoise.Generator/<>c__DisplayClass1::g2
	Generator_t4036556772 * ___g2_1;

public:
	inline static int32_t get_offset_of_g1_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_t4251175105, ___g1_0)); }
	inline Generator_t4036556772 * get_g1_0() const { return ___g1_0; }
	inline Generator_t4036556772 ** get_address_of_g1_0() { return &___g1_0; }
	inline void set_g1_0(Generator_t4036556772 * value)
	{
		___g1_0 = value;
		Il2CppCodeGenWriteBarrier((&___g1_0), value);
	}

	inline static int32_t get_offset_of_g2_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_t4251175105, ___g2_1)); }
	inline Generator_t4036556772 * get_g2_1() const { return ___g2_1; }
	inline Generator_t4036556772 ** get_address_of_g2_1() { return &___g2_1; }
	inline void set_g2_1(Generator_t4036556772 * value)
	{
		___g2_1 = value;
		Il2CppCodeGenWriteBarrier((&___g2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS1_T4251175105_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef GENERATOR_T4036556772_H
#define GENERATOR_T4036556772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoherentNoise.Generator
struct  Generator_t4036556772  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERATOR_T4036556772_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef __STATICARRAYINITTYPESIZEU3D3072_T1245311061_H
#define __STATICARRAYINITTYPESIZEU3D3072_T1245311061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{6E89E9ED-2A9E-4192-B810-6644386B5FF9}/__StaticArrayInitTypeSize=3072
struct  __StaticArrayInitTypeSizeU3D3072_t1245311061 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3072_t1245311061__padding[3072];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D3072_T1245311061_H
#ifndef MAX_T4197319588_H
#define MAX_T4197319588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoherentNoise.Generation.Combination.Max
struct  Max_t4197319588  : public Generator_t4036556772
{
public:
	// CoherentNoise.Generator CoherentNoise.Generation.Combination.Max::m_A
	Generator_t4036556772 * ___m_A_0;
	// CoherentNoise.Generator CoherentNoise.Generation.Combination.Max::m_B
	Generator_t4036556772 * ___m_B_1;

public:
	inline static int32_t get_offset_of_m_A_0() { return static_cast<int32_t>(offsetof(Max_t4197319588, ___m_A_0)); }
	inline Generator_t4036556772 * get_m_A_0() const { return ___m_A_0; }
	inline Generator_t4036556772 ** get_address_of_m_A_0() { return &___m_A_0; }
	inline void set_m_A_0(Generator_t4036556772 * value)
	{
		___m_A_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_A_0), value);
	}

	inline static int32_t get_offset_of_m_B_1() { return static_cast<int32_t>(offsetof(Max_t4197319588, ___m_B_1)); }
	inline Generator_t4036556772 * get_m_B_1() const { return ___m_B_1; }
	inline Generator_t4036556772 ** get_address_of_m_B_1() { return &___m_B_1; }
	inline void set_m_B_1(Generator_t4036556772 * value)
	{
		___m_B_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_B_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAX_T4197319588_H
#ifndef BIAS_T1434028717_H
#define BIAS_T1434028717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoherentNoise.Generation.Modification.Bias
struct  Bias_t1434028717  : public Generator_t4036556772
{
public:
	// System.Single CoherentNoise.Generation.Modification.Bias::m_Bias
	float ___m_Bias_0;
	// CoherentNoise.Generator CoherentNoise.Generation.Modification.Bias::m_Source
	Generator_t4036556772 * ___m_Source_1;

public:
	inline static int32_t get_offset_of_m_Bias_0() { return static_cast<int32_t>(offsetof(Bias_t1434028717, ___m_Bias_0)); }
	inline float get_m_Bias_0() const { return ___m_Bias_0; }
	inline float* get_address_of_m_Bias_0() { return &___m_Bias_0; }
	inline void set_m_Bias_0(float value)
	{
		___m_Bias_0 = value;
	}

	inline static int32_t get_offset_of_m_Source_1() { return static_cast<int32_t>(offsetof(Bias_t1434028717, ___m_Source_1)); }
	inline Generator_t4036556772 * get_m_Source_1() const { return ___m_Source_1; }
	inline Generator_t4036556772 ** get_address_of_m_Source_1() { return &___m_Source_1; }
	inline void set_m_Source_1(Generator_t4036556772 * value)
	{
		___m_Source_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Source_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIAS_T1434028717_H
#ifndef CONSTANT_T1823254730_H
#define CONSTANT_T1823254730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoherentNoise.Generation.Constant
struct  Constant_t1823254730  : public Generator_t4036556772
{
public:
	// System.Single CoherentNoise.Generation.Constant::m_Value
	float ___m_Value_0;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(Constant_t1823254730, ___m_Value_0)); }
	inline float get_m_Value_0() const { return ___m_Value_0; }
	inline float* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(float value)
	{
		___m_Value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANT_T1823254730_H
#ifndef COSINESCURVE_T127591338_H
#define COSINESCURVE_T127591338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoherentNoise.Interpolation.CosineSCurve
struct  CosineSCurve_t127591338  : public SCurve_t667389360
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COSINESCURVE_T127591338_H
#ifndef QUINTICSCURVE_T3645776962_H
#define QUINTICSCURVE_T3645776962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoherentNoise.Interpolation.QuinticSCurve
struct  QuinticSCurve_t3645776962  : public SCurve_t667389360
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUINTICSCURVE_T3645776962_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef LINEARSCURVE_T1372510163_H
#define LINEARSCURVE_T1372510163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoherentNoise.Interpolation.LinearSCurve
struct  LinearSCurve_t1372510163  : public SCurve_t667389360
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINEARSCURVE_T1372510163_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef CUBICSCURVE_T2358206018_H
#define CUBICSCURVE_T2358206018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoherentNoise.Interpolation.CubicSCurve
struct  CubicSCurve_t2358206018  : public SCurve_t667389360
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUBICSCURVE_T2358206018_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef SCALE_T3870492223_H
#define SCALE_T3870492223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoherentNoise.Generation.Displacement.Scale
struct  Scale_t3870492223  : public Generator_t4036556772
{
public:
	// CoherentNoise.Generator CoherentNoise.Generation.Displacement.Scale::m_Source
	Generator_t4036556772 * ___m_Source_0;
	// System.Single CoherentNoise.Generation.Displacement.Scale::m_X
	float ___m_X_1;
	// System.Single CoherentNoise.Generation.Displacement.Scale::m_Y
	float ___m_Y_2;
	// System.Single CoherentNoise.Generation.Displacement.Scale::m_Z
	float ___m_Z_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(Scale_t3870492223, ___m_Source_0)); }
	inline Generator_t4036556772 * get_m_Source_0() const { return ___m_Source_0; }
	inline Generator_t4036556772 ** get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(Generator_t4036556772 * value)
	{
		___m_Source_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Source_0), value);
	}

	inline static int32_t get_offset_of_m_X_1() { return static_cast<int32_t>(offsetof(Scale_t3870492223, ___m_X_1)); }
	inline float get_m_X_1() const { return ___m_X_1; }
	inline float* get_address_of_m_X_1() { return &___m_X_1; }
	inline void set_m_X_1(float value)
	{
		___m_X_1 = value;
	}

	inline static int32_t get_offset_of_m_Y_2() { return static_cast<int32_t>(offsetof(Scale_t3870492223, ___m_Y_2)); }
	inline float get_m_Y_2() const { return ___m_Y_2; }
	inline float* get_address_of_m_Y_2() { return &___m_Y_2; }
	inline void set_m_Y_2(float value)
	{
		___m_Y_2 = value;
	}

	inline static int32_t get_offset_of_m_Z_3() { return static_cast<int32_t>(offsetof(Scale_t3870492223, ___m_Z_3)); }
	inline float get_m_Z_3() const { return ___m_Z_3; }
	inline float* get_address_of_m_Z_3() { return &___m_Z_3; }
	inline void set_m_Z_3(float value)
	{
		___m_Z_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCALE_T3870492223_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef GRADIENTNOISE_T639380896_H
#define GRADIENTNOISE_T639380896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoherentNoise.Generation.GradientNoise
struct  GradientNoise_t639380896  : public Generator_t4036556772
{
public:
	// System.Int32 CoherentNoise.Generation.GradientNoise::m_Seed
	int32_t ___m_Seed_1;
	// CoherentNoise.Interpolation.SCurve CoherentNoise.Generation.GradientNoise::m_SCurve
	SCurve_t667389360 * ___m_SCurve_2;
	// System.Int32 CoherentNoise.Generation.GradientNoise::<Period>k__BackingField
	int32_t ___U3CPeriodU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Seed_1() { return static_cast<int32_t>(offsetof(GradientNoise_t639380896, ___m_Seed_1)); }
	inline int32_t get_m_Seed_1() const { return ___m_Seed_1; }
	inline int32_t* get_address_of_m_Seed_1() { return &___m_Seed_1; }
	inline void set_m_Seed_1(int32_t value)
	{
		___m_Seed_1 = value;
	}

	inline static int32_t get_offset_of_m_SCurve_2() { return static_cast<int32_t>(offsetof(GradientNoise_t639380896, ___m_SCurve_2)); }
	inline SCurve_t667389360 * get_m_SCurve_2() const { return ___m_SCurve_2; }
	inline SCurve_t667389360 ** get_address_of_m_SCurve_2() { return &___m_SCurve_2; }
	inline void set_m_SCurve_2(SCurve_t667389360 * value)
	{
		___m_SCurve_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SCurve_2), value);
	}

	inline static int32_t get_offset_of_U3CPeriodU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GradientNoise_t639380896, ___U3CPeriodU3Ek__BackingField_3)); }
	inline int32_t get_U3CPeriodU3Ek__BackingField_3() const { return ___U3CPeriodU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CPeriodU3Ek__BackingField_3() { return &___U3CPeriodU3Ek__BackingField_3; }
	inline void set_U3CPeriodU3Ek__BackingField_3(int32_t value)
	{
		___U3CPeriodU3Ek__BackingField_3 = value;
	}
};

struct GradientNoise_t639380896_StaticFields
{
public:
	// System.Single[] CoherentNoise.Generation.GradientNoise::Vectors
	SingleU5BU5D_t1444911251* ___Vectors_0;

public:
	inline static int32_t get_offset_of_Vectors_0() { return static_cast<int32_t>(offsetof(GradientNoise_t639380896_StaticFields, ___Vectors_0)); }
	inline SingleU5BU5D_t1444911251* get_Vectors_0() const { return ___Vectors_0; }
	inline SingleU5BU5D_t1444911251** get_address_of_Vectors_0() { return &___Vectors_0; }
	inline void set_Vectors_0(SingleU5BU5D_t1444911251* value)
	{
		___Vectors_0 = value;
		Il2CppCodeGenWriteBarrier((&___Vectors_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRADIENTNOISE_T639380896_H
#ifndef FUNCTION_T15557630_H
#define FUNCTION_T15557630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoherentNoise.Generation.Function
struct  Function_t15557630  : public Generator_t4036556772
{
public:
	// System.Func`4<System.Single,System.Single,System.Single,System.Single> CoherentNoise.Generation.Function::m_Func
	Func_4_t470802036 * ___m_Func_0;

public:
	inline static int32_t get_offset_of_m_Func_0() { return static_cast<int32_t>(offsetof(Function_t15557630, ___m_Func_0)); }
	inline Func_4_t470802036 * get_m_Func_0() const { return ___m_Func_0; }
	inline Func_4_t470802036 ** get_address_of_m_Func_0() { return &___m_Func_0; }
	inline void set_m_Func_0(Func_4_t470802036 * value)
	{
		___m_Func_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Func_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNCTION_T15557630_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef FRACTALNOISEBASE_T4077094137_H
#define FRACTALNOISEBASE_T4077094137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoherentNoise.Generation.Fractal.FractalNoiseBase
struct  FractalNoiseBase_t4077094137  : public Generator_t4036556772
{
public:
	// CoherentNoise.Generator CoherentNoise.Generation.Fractal.FractalNoiseBase::m_Noise
	Generator_t4036556772 * ___m_Noise_1;
	// System.Single CoherentNoise.Generation.Fractal.FractalNoiseBase::m_Frequency
	float ___m_Frequency_2;
	// System.Single CoherentNoise.Generation.Fractal.FractalNoiseBase::m_Lacunarity
	float ___m_Lacunarity_3;
	// System.Int32 CoherentNoise.Generation.Fractal.FractalNoiseBase::m_OctaveCount
	int32_t ___m_OctaveCount_4;

public:
	inline static int32_t get_offset_of_m_Noise_1() { return static_cast<int32_t>(offsetof(FractalNoiseBase_t4077094137, ___m_Noise_1)); }
	inline Generator_t4036556772 * get_m_Noise_1() const { return ___m_Noise_1; }
	inline Generator_t4036556772 ** get_address_of_m_Noise_1() { return &___m_Noise_1; }
	inline void set_m_Noise_1(Generator_t4036556772 * value)
	{
		___m_Noise_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Noise_1), value);
	}

	inline static int32_t get_offset_of_m_Frequency_2() { return static_cast<int32_t>(offsetof(FractalNoiseBase_t4077094137, ___m_Frequency_2)); }
	inline float get_m_Frequency_2() const { return ___m_Frequency_2; }
	inline float* get_address_of_m_Frequency_2() { return &___m_Frequency_2; }
	inline void set_m_Frequency_2(float value)
	{
		___m_Frequency_2 = value;
	}

	inline static int32_t get_offset_of_m_Lacunarity_3() { return static_cast<int32_t>(offsetof(FractalNoiseBase_t4077094137, ___m_Lacunarity_3)); }
	inline float get_m_Lacunarity_3() const { return ___m_Lacunarity_3; }
	inline float* get_address_of_m_Lacunarity_3() { return &___m_Lacunarity_3; }
	inline void set_m_Lacunarity_3(float value)
	{
		___m_Lacunarity_3 = value;
	}

	inline static int32_t get_offset_of_m_OctaveCount_4() { return static_cast<int32_t>(offsetof(FractalNoiseBase_t4077094137, ___m_OctaveCount_4)); }
	inline int32_t get_m_OctaveCount_4() const { return ___m_OctaveCount_4; }
	inline int32_t* get_address_of_m_OctaveCount_4() { return &___m_OctaveCount_4; }
	inline void set_m_OctaveCount_4(int32_t value)
	{
		___m_OctaveCount_4 = value;
	}
};

struct FractalNoiseBase_t4077094137_StaticFields
{
public:
	// UnityEngine.Quaternion CoherentNoise.Generation.Fractal.FractalNoiseBase::s_Rotation
	Quaternion_t2301928331  ___s_Rotation_0;

public:
	inline static int32_t get_offset_of_s_Rotation_0() { return static_cast<int32_t>(offsetof(FractalNoiseBase_t4077094137_StaticFields, ___s_Rotation_0)); }
	inline Quaternion_t2301928331  get_s_Rotation_0() const { return ___s_Rotation_0; }
	inline Quaternion_t2301928331 * get_address_of_s_Rotation_0() { return &___s_Rotation_0; }
	inline void set_s_Rotation_0(Quaternion_t2301928331  value)
	{
		___s_Rotation_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRACTALNOISEBASE_T4077094137_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3EU7B6E89E9EDU2D2A9EU2D4192U2DB810U2D6644386B5FF9U7D_T1993605181_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3EU7B6E89E9EDU2D2A9EU2D4192U2DB810U2D6644386B5FF9U7D_T1993605181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{6E89E9ED-2A9E-4192-B810-6644386B5FF9}
struct  U3CPrivateImplementationDetailsU3EU7B6E89E9EDU2D2A9EU2D4192U2DB810U2D6644386B5FF9U7D_t1993605181  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3EU7B6E89E9EDU2D2A9EU2D4192U2DB810U2D6644386B5FF9U7D_t1993605181_StaticFields
{
public:
	// <PrivateImplementationDetails>{6E89E9ED-2A9E-4192-B810-6644386B5FF9}/__StaticArrayInitTypeSize=3072 <PrivateImplementationDetails>{6E89E9ED-2A9E-4192-B810-6644386B5FF9}::$$method0x60000e7-1
	__StaticArrayInitTypeSizeU3D3072_t1245311061  ___U24U24method0x60000e7U2D1_0;

public:
	inline static int32_t get_offset_of_U24U24method0x60000e7U2D1_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B6E89E9EDU2D2A9EU2D4192U2DB810U2D6644386B5FF9U7D_t1993605181_StaticFields, ___U24U24method0x60000e7U2D1_0)); }
	inline __StaticArrayInitTypeSizeU3D3072_t1245311061  get_U24U24method0x60000e7U2D1_0() const { return ___U24U24method0x60000e7U2D1_0; }
	inline __StaticArrayInitTypeSizeU3D3072_t1245311061 * get_address_of_U24U24method0x60000e7U2D1_0() { return &___U24U24method0x60000e7U2D1_0; }
	inline void set_U24U24method0x60000e7U2D1_0(__StaticArrayInitTypeSizeU3D3072_t1245311061  value)
	{
		___U24U24method0x60000e7U2D1_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3EU7B6E89E9EDU2D2A9EU2D4192U2DB810U2D6644386B5FF9U7D_T1993605181_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef RIDGENOISE_T608126379_H
#define RIDGENOISE_T608126379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoherentNoise.Generation.Fractal.RidgeNoise
struct  RidgeNoise_t608126379  : public FractalNoiseBase_t4077094137
{
public:
	// System.Single CoherentNoise.Generation.Fractal.RidgeNoise::m_Exponent
	float ___m_Exponent_5;
	// System.Single[] CoherentNoise.Generation.Fractal.RidgeNoise::m_SpectralWeights
	SingleU5BU5D_t1444911251* ___m_SpectralWeights_6;
	// System.Single CoherentNoise.Generation.Fractal.RidgeNoise::m_Weight
	float ___m_Weight_7;
	// System.Single CoherentNoise.Generation.Fractal.RidgeNoise::<Offset>k__BackingField
	float ___U3COffsetU3Ek__BackingField_8;
	// System.Single CoherentNoise.Generation.Fractal.RidgeNoise::<Gain>k__BackingField
	float ___U3CGainU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_m_Exponent_5() { return static_cast<int32_t>(offsetof(RidgeNoise_t608126379, ___m_Exponent_5)); }
	inline float get_m_Exponent_5() const { return ___m_Exponent_5; }
	inline float* get_address_of_m_Exponent_5() { return &___m_Exponent_5; }
	inline void set_m_Exponent_5(float value)
	{
		___m_Exponent_5 = value;
	}

	inline static int32_t get_offset_of_m_SpectralWeights_6() { return static_cast<int32_t>(offsetof(RidgeNoise_t608126379, ___m_SpectralWeights_6)); }
	inline SingleU5BU5D_t1444911251* get_m_SpectralWeights_6() const { return ___m_SpectralWeights_6; }
	inline SingleU5BU5D_t1444911251** get_address_of_m_SpectralWeights_6() { return &___m_SpectralWeights_6; }
	inline void set_m_SpectralWeights_6(SingleU5BU5D_t1444911251* value)
	{
		___m_SpectralWeights_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_SpectralWeights_6), value);
	}

	inline static int32_t get_offset_of_m_Weight_7() { return static_cast<int32_t>(offsetof(RidgeNoise_t608126379, ___m_Weight_7)); }
	inline float get_m_Weight_7() const { return ___m_Weight_7; }
	inline float* get_address_of_m_Weight_7() { return &___m_Weight_7; }
	inline void set_m_Weight_7(float value)
	{
		___m_Weight_7 = value;
	}

	inline static int32_t get_offset_of_U3COffsetU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(RidgeNoise_t608126379, ___U3COffsetU3Ek__BackingField_8)); }
	inline float get_U3COffsetU3Ek__BackingField_8() const { return ___U3COffsetU3Ek__BackingField_8; }
	inline float* get_address_of_U3COffsetU3Ek__BackingField_8() { return &___U3COffsetU3Ek__BackingField_8; }
	inline void set_U3COffsetU3Ek__BackingField_8(float value)
	{
		___U3COffsetU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CGainU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RidgeNoise_t608126379, ___U3CGainU3Ek__BackingField_9)); }
	inline float get_U3CGainU3Ek__BackingField_9() const { return ___U3CGainU3Ek__BackingField_9; }
	inline float* get_address_of_U3CGainU3Ek__BackingField_9() { return &___U3CGainU3Ek__BackingField_9; }
	inline void set_U3CGainU3Ek__BackingField_9(float value)
	{
		___U3CGainU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIDGENOISE_T608126379_H
#ifndef PINKNOISE_T2031408553_H
#define PINKNOISE_T2031408553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoherentNoise.Generation.Fractal.PinkNoise
struct  PinkNoise_t2031408553  : public FractalNoiseBase_t4077094137
{
public:
	// System.Single CoherentNoise.Generation.Fractal.PinkNoise::m_CurPersistence
	float ___m_CurPersistence_5;
	// System.Single CoherentNoise.Generation.Fractal.PinkNoise::<Persistence>k__BackingField
	float ___U3CPersistenceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_CurPersistence_5() { return static_cast<int32_t>(offsetof(PinkNoise_t2031408553, ___m_CurPersistence_5)); }
	inline float get_m_CurPersistence_5() const { return ___m_CurPersistence_5; }
	inline float* get_address_of_m_CurPersistence_5() { return &___m_CurPersistence_5; }
	inline void set_m_CurPersistence_5(float value)
	{
		___m_CurPersistence_5 = value;
	}

	inline static int32_t get_offset_of_U3CPersistenceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PinkNoise_t2031408553, ___U3CPersistenceU3Ek__BackingField_6)); }
	inline float get_U3CPersistenceU3Ek__BackingField_6() const { return ___U3CPersistenceU3Ek__BackingField_6; }
	inline float* get_address_of_U3CPersistenceU3Ek__BackingField_6() { return &___U3CPersistenceU3Ek__BackingField_6; }
	inline void set_U3CPersistenceU3Ek__BackingField_6(float value)
	{
		___U3CPersistenceU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PINKNOISE_T2031408553_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef FUNC_4_T470802036_H
#define FUNC_4_T470802036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`4<System.Single,System.Single,System.Single,System.Single>
struct  Func_4_t470802036  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_4_T470802036_H
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// !3 System.Func`4<System.Single,System.Single,System.Single,System.Single>::Invoke(!0,!1,!2)
extern "C"  float Func_4_Invoke_m2739791668_gshared (Func_4_t470802036 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void System.Func`4<System.Single,System.Single,System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_4__ctor_m1502640117_gshared (Func_4_t470802036 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);

// System.Void CoherentNoise.Generator::.ctor()
extern "C"  void Generator__ctor_m3652262062 (Generator_t4036556772 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C"  float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CoherentNoise.Generation.GradientNoise::.ctor(System.Int32)
extern "C"  void GradientNoise__ctor_m1490394370 (GradientNoise_t639380896 * __this, int32_t ___seed0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CoherentNoise.Generation.Fractal.FractalNoiseBase::set_Lacunarity(System.Single)
extern "C"  void FractalNoiseBase_set_Lacunarity_m2004034925 (FractalNoiseBase_t4077094137 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CoherentNoise.Generation.Fractal.FractalNoiseBase::set_OctaveCount(System.Int32)
extern "C"  void FractalNoiseBase_set_OctaveCount_m292022702 (FractalNoiseBase_t4077094137 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CoherentNoise.Generation.Fractal.FractalNoiseBase::set_Frequency(System.Single)
extern "C"  void FractalNoiseBase_set_Frequency_m3212021585 (FractalNoiseBase_t4077094137 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single CoherentNoise.Generation.Fractal.FractalNoiseBase::get_Frequency()
extern "C"  float FractalNoiseBase_get_Frequency_m3931102500 (FractalNoiseBase_t4077094137 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single CoherentNoise.Generation.Fractal.FractalNoiseBase::get_Lacunarity()
extern "C"  float FractalNoiseBase_get_Lacunarity_m837504296 (FractalNoiseBase_t4077094137 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Quaternion_op_Multiply_m2607404835 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 CoherentNoise.Generation.Fractal.FractalNoiseBase::get_OctaveCount()
extern "C"  int32_t FractalNoiseBase_get_OctaveCount_m2494358631 (FractalNoiseBase_t4077094137 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C"  Quaternion_t2301928331  Quaternion_Euler_m3049309462 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CoherentNoise.Generation.Fractal.FractalNoiseBase::.ctor(System.Int32)
extern "C"  void FractalNoiseBase__ctor_m1522018235 (FractalNoiseBase_t4077094137 * __this, int32_t ___seed0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CoherentNoise.Generation.Fractal.PinkNoise::set_Persistence(System.Single)
extern "C"  void PinkNoise_set_Persistence_m651126308 (PinkNoise_t2031408553 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single CoherentNoise.Generation.Fractal.PinkNoise::get_Persistence()
extern "C"  float PinkNoise_get_Persistence_m1538822954 (PinkNoise_t2031408553 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CoherentNoise.Generation.Fractal.RidgeNoise::set_Offset(System.Single)
extern "C"  void RidgeNoise_set_Offset_m1221160009 (RidgeNoise_t608126379 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CoherentNoise.Generation.Fractal.RidgeNoise::set_Gain(System.Single)
extern "C"  void RidgeNoise_set_Gain_m593435921 (RidgeNoise_t608126379 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CoherentNoise.Generation.Fractal.RidgeNoise::set_Exponent(System.Single)
extern "C"  void RidgeNoise_set_Exponent_m3517178769 (RidgeNoise_t608126379 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single CoherentNoise.Generation.Fractal.RidgeNoise::get_Offset()
extern "C"  float RidgeNoise_get_Offset_m2205891945 (RidgeNoise_t608126379 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single CoherentNoise.Generation.Fractal.RidgeNoise::get_Gain()
extern "C"  float RidgeNoise_get_Gain_m2536188568 (RidgeNoise_t608126379 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CoherentNoise.Generation.Fractal.RidgeNoise::PrecalculateWeights()
extern "C"  void RidgeNoise_PrecalculateWeights_m3320982620 (RidgeNoise_t608126379 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single CoherentNoise.Generation.Fractal.RidgeNoise::get_Exponent()
extern "C"  float RidgeNoise_get_Exponent_m1326721807 (RidgeNoise_t608126379 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !3 System.Func`4<System.Single,System.Single,System.Single,System.Single>::Invoke(!0,!1,!2)
#define Func_4_Invoke_m2739791668(__this, p0, p1, p2, method) ((  float (*) (Func_4_t470802036 *, float, float, float, const RuntimeMethod*))Func_4_Invoke_m2739791668_gshared)(__this, p0, p1, p2, method)
// System.Void CoherentNoise.Generation.GradientNoise::.ctor(System.Int32,CoherentNoise.Interpolation.SCurve)
extern "C"  void GradientNoise__ctor_m1898490744 (GradientNoise_t639380896 * __this, int32_t ___seed0, SCurve_t667389360 * ___sCurve1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C"  int32_t Mathf_FloorToInt_m1870542928 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// CoherentNoise.Interpolation.SCurve CoherentNoise.Generation.GradientNoise::get_SCurve()
extern "C"  SCurve_t667389360 * GradientNoise_get_SCurve_m1092237895 (GradientNoise_t639380896 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single CoherentNoise.Generation.GradientNoise::GetNoise(System.Single,System.Single,System.Single,System.Int32,System.Int32,System.Int32)
extern "C"  float GradientNoise_GetNoise_m190726570 (GradientNoise_t639380896 * __this, float ___x0, float ___y1, float ___z2, int32_t ___ix3, int32_t ___iy4, int32_t ___iz5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Lerp_m1004423579 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 CoherentNoise.Generation.GradientNoise::get_Period()
extern "C"  int32_t GradientNoise_get_Period_m2138397398 (GradientNoise_t639380896 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CoherentNoise.Generation.GradientNoise::GetRandomVector(System.Int32,System.Int32,System.Int32)
extern "C"  Vector3_t3722313464  GradientNoise_GetRandomVector_m117061864 (GradientNoise_t639380896 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Dot_m606404487 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CoherentNoise.Generator/<>c__DisplayClass1::.ctor()
extern "C"  void U3CU3Ec__DisplayClass1__ctor_m1207232968 (U3CU3Ec__DisplayClass1_t4251175105 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`4<System.Single,System.Single,System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
#define Func_4__ctor_m1502640117(__this, p0, p1, method) ((  void (*) (Func_4_t470802036 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_4__ctor_m1502640117_gshared)(__this, p0, p1, method)
// System.Void CoherentNoise.Generation.Function::.ctor(System.Func`4<System.Single,System.Single,System.Single,System.Single>)
extern "C"  void Function__ctor_m901273256 (Function_t15557630 * __this, Func_4_t470802036 * ___func0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CoherentNoise.Generator/<>c__DisplayClass10::.ctor()
extern "C"  void U3CU3Ec__DisplayClass10__ctor_m4047271035 (U3CU3Ec__DisplayClass10_t2889275538 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CoherentNoise.Generation.Constant::.ctor(System.Single)
extern "C"  void Constant__ctor_m2845412620 (Constant_t1823254730 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CoherentNoise.Interpolation.SCurve::.ctor()
extern "C"  void SCurve__ctor_m152210331 (SCurve_t667389360 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CoherentNoise.Interpolation.LinearSCurve::.ctor()
extern "C"  void LinearSCurve__ctor_m3568124004 (LinearSCurve_t1372510163 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CoherentNoise.Interpolation.CubicSCurve::.ctor()
extern "C"  void CubicSCurve__ctor_m3097235297 (CubicSCurve_t2358206018 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CoherentNoise.Interpolation.QuinticSCurve::.ctor()
extern "C"  void QuinticSCurve__ctor_m240326878 (QuinticSCurve_t3645776962 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CoherentNoise.Interpolation.CosineSCurve::.ctor()
extern "C"  void CosineSCurve__ctor_m580333586 (CosineSCurve_t127591338 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CoherentNoise.Generation.Combination.Max::.ctor(CoherentNoise.Generator,CoherentNoise.Generator)
extern "C"  void Max__ctor_m2633372728 (Max_t4197319588 * __this, Generator_t4036556772 * ___a0, Generator_t4036556772 * ___b1, const RuntimeMethod* method)
{
	{
		Generator__ctor_m3652262062(__this, /*hidden argument*/NULL);
		Generator_t4036556772 * L_0 = ___a0;
		__this->set_m_A_0(L_0);
		Generator_t4036556772 * L_1 = ___b1;
		__this->set_m_B_1(L_1);
		return;
	}
}
// System.Single CoherentNoise.Generation.Combination.Max::GetValue(System.Single,System.Single,System.Single)
extern "C"  float Max_GetValue_m3420840197 (Max_t4197319588 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Max_GetValue_m3420840197_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Generator_t4036556772 * L_0 = __this->get_m_A_0();
		float L_1 = ___x0;
		float L_2 = ___y1;
		float L_3 = ___z2;
		float L_4 = VirtFuncInvoker3< float, float, float, float >::Invoke(4 /* System.Single CoherentNoise.Generator::GetValue(System.Single,System.Single,System.Single) */, L_0, L_1, L_2, L_3);
		Generator_t4036556772 * L_5 = __this->get_m_B_1();
		float L_6 = ___x0;
		float L_7 = ___y1;
		float L_8 = ___z2;
		float L_9 = VirtFuncInvoker3< float, float, float, float >::Invoke(4 /* System.Single CoherentNoise.Generator::GetValue(System.Single,System.Single,System.Single) */, L_5, L_6, L_7, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_10 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_4, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CoherentNoise.Generation.Constant::.ctor(System.Single)
extern "C"  void Constant__ctor_m2845412620 (Constant_t1823254730 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		Generator__ctor_m3652262062(__this, /*hidden argument*/NULL);
		float L_0 = ___value0;
		__this->set_m_Value_0(L_0);
		return;
	}
}
// System.Single CoherentNoise.Generation.Constant::GetValue(System.Single,System.Single,System.Single)
extern "C"  float Constant_GetValue_m2681483602 (Constant_t1823254730 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Value_0();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CoherentNoise.Generation.Displacement.Scale::.ctor(CoherentNoise.Generator,System.Single,System.Single,System.Single)
extern "C"  void Scale__ctor_m493108824 (Scale_t3870492223 * __this, Generator_t4036556772 * ___source0, float ___x1, float ___y2, float ___z3, const RuntimeMethod* method)
{
	{
		Generator__ctor_m3652262062(__this, /*hidden argument*/NULL);
		Generator_t4036556772 * L_0 = ___source0;
		__this->set_m_Source_0(L_0);
		float L_1 = ___z3;
		__this->set_m_Z_3(L_1);
		float L_2 = ___y2;
		__this->set_m_Y_2(L_2);
		float L_3 = ___x1;
		__this->set_m_X_1(L_3);
		return;
	}
}
// System.Single CoherentNoise.Generation.Displacement.Scale::GetValue(System.Single,System.Single,System.Single)
extern "C"  float Scale_GetValue_m1641055237 (Scale_t3870492223 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		Generator_t4036556772 * L_0 = __this->get_m_Source_0();
		float L_1 = ___x0;
		float L_2 = __this->get_m_X_1();
		float L_3 = ___y1;
		float L_4 = __this->get_m_Y_2();
		float L_5 = ___z2;
		float L_6 = __this->get_m_Z_3();
		float L_7 = VirtFuncInvoker3< float, float, float, float >::Invoke(4 /* System.Single CoherentNoise.Generator::GetValue(System.Single,System.Single,System.Single) */, L_0, ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)));
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CoherentNoise.Generation.Fractal.FractalNoiseBase::.ctor(System.Int32)
extern "C"  void FractalNoiseBase__ctor_m1522018235 (FractalNoiseBase_t4077094137 * __this, int32_t ___seed0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FractalNoiseBase__ctor_m1522018235_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Generator__ctor_m3652262062(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___seed0;
		GradientNoise_t639380896 * L_1 = (GradientNoise_t639380896 *)il2cpp_codegen_object_new(GradientNoise_t639380896_il2cpp_TypeInfo_var);
		GradientNoise__ctor_m1490394370(L_1, L_0, /*hidden argument*/NULL);
		__this->set_m_Noise_1(L_1);
		FractalNoiseBase_set_Lacunarity_m2004034925(__this, (2.17f), /*hidden argument*/NULL);
		FractalNoiseBase_set_OctaveCount_m292022702(__this, 6, /*hidden argument*/NULL);
		FractalNoiseBase_set_Frequency_m3212021585(__this, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Single CoherentNoise.Generation.Fractal.FractalNoiseBase::get_Lacunarity()
extern "C"  float FractalNoiseBase_get_Lacunarity_m837504296 (FractalNoiseBase_t4077094137 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Lacunarity_3();
		return L_0;
	}
}
// System.Void CoherentNoise.Generation.Fractal.FractalNoiseBase::set_Lacunarity(System.Single)
extern "C"  void FractalNoiseBase_set_Lacunarity_m2004034925 (FractalNoiseBase_t4077094137 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_Lacunarity_3(L_0);
		VirtActionInvoker0::Invoke(6 /* System.Void CoherentNoise.Generation.Fractal.FractalNoiseBase::OnParamsChanged() */, __this);
		return;
	}
}
// System.Int32 CoherentNoise.Generation.Fractal.FractalNoiseBase::get_OctaveCount()
extern "C"  int32_t FractalNoiseBase_get_OctaveCount_m2494358631 (FractalNoiseBase_t4077094137 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_OctaveCount_4();
		return L_0;
	}
}
// System.Void CoherentNoise.Generation.Fractal.FractalNoiseBase::set_OctaveCount(System.Int32)
extern "C"  void FractalNoiseBase_set_OctaveCount_m292022702 (FractalNoiseBase_t4077094137 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_OctaveCount_4(L_0);
		VirtActionInvoker0::Invoke(6 /* System.Void CoherentNoise.Generation.Fractal.FractalNoiseBase::OnParamsChanged() */, __this);
		return;
	}
}
// System.Single CoherentNoise.Generation.Fractal.FractalNoiseBase::get_Frequency()
extern "C"  float FractalNoiseBase_get_Frequency_m3931102500 (FractalNoiseBase_t4077094137 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Frequency_2();
		return L_0;
	}
}
// System.Void CoherentNoise.Generation.Fractal.FractalNoiseBase::set_Frequency(System.Single)
extern "C"  void FractalNoiseBase_set_Frequency_m3212021585 (FractalNoiseBase_t4077094137 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_Frequency_2(L_0);
		VirtActionInvoker0::Invoke(6 /* System.Void CoherentNoise.Generation.Fractal.FractalNoiseBase::OnParamsChanged() */, __this);
		return;
	}
}
// System.Single CoherentNoise.Generation.Fractal.FractalNoiseBase::GetValue(System.Single,System.Single,System.Single)
extern "C"  float FractalNoiseBase_GetValue_m2165057312 (FractalNoiseBase_t4077094137 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FractalNoiseBase_GetValue_m2165057312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		float L_0 = ___x0;
		float L_1 = FractalNoiseBase_get_Frequency_m3931102500(__this, /*hidden argument*/NULL);
		___x0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		float L_2 = ___y1;
		float L_3 = FractalNoiseBase_get_Frequency_m3931102500(__this, /*hidden argument*/NULL);
		___y1 = ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3));
		float L_4 = ___z2;
		float L_5 = FractalNoiseBase_get_Frequency_m3931102500(__this, /*hidden argument*/NULL);
		___z2 = ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5));
		V_2 = 0;
		goto IL_0084;
	}

IL_002e:
	{
		Generator_t4036556772 * L_6 = __this->get_m_Noise_1();
		float L_7 = ___x0;
		float L_8 = ___y1;
		float L_9 = ___z2;
		float L_10 = VirtFuncInvoker3< float, float, float, float >::Invoke(4 /* System.Single CoherentNoise.Generator::GetValue(System.Single,System.Single,System.Single) */, L_6, L_7, L_8, L_9);
		V_1 = L_10;
		int32_t L_11 = V_2;
		float L_12 = V_1;
		float L_13 = V_0;
		float L_14 = VirtFuncInvoker3< float, int32_t, float, float >::Invoke(5 /* System.Single CoherentNoise.Generation.Fractal.FractalNoiseBase::CombineOctave(System.Int32,System.Single,System.Single) */, __this, L_11, L_12, L_13);
		V_0 = L_14;
		IL2CPP_RUNTIME_CLASS_INIT(FractalNoiseBase_t4077094137_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_15 = ((FractalNoiseBase_t4077094137_StaticFields*)il2cpp_codegen_static_fields_for(FractalNoiseBase_t4077094137_il2cpp_TypeInfo_var))->get_s_Rotation_0();
		float L_16 = ___x0;
		float L_17 = ___y1;
		float L_18 = ___z2;
		Vector3_t3722313464  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector3__ctor_m3353183577((&L_19), L_16, L_17, L_18, /*hidden argument*/NULL);
		float L_20 = FractalNoiseBase_get_Lacunarity_m837504296(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_21 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_22 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_15, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		float L_23 = (&V_3)->get_x_1();
		___x0 = L_23;
		float L_24 = (&V_3)->get_y_2();
		___y1 = L_24;
		float L_25 = (&V_3)->get_z_3();
		___z2 = L_25;
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0084:
	{
		int32_t L_27 = V_2;
		int32_t L_28 = FractalNoiseBase_get_OctaveCount_m2494358631(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_002e;
		}
	}
	{
		float L_29 = V_0;
		return L_29;
	}
}
// System.Void CoherentNoise.Generation.Fractal.FractalNoiseBase::OnParamsChanged()
extern "C"  void FractalNoiseBase_OnParamsChanged_m1206285842 (FractalNoiseBase_t4077094137 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void CoherentNoise.Generation.Fractal.FractalNoiseBase::.cctor()
extern "C"  void FractalNoiseBase__cctor_m113391988 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FractalNoiseBase__cctor_m113391988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_0 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (30.0f), (30.0f), (30.0f), /*hidden argument*/NULL);
		((FractalNoiseBase_t4077094137_StaticFields*)il2cpp_codegen_static_fields_for(FractalNoiseBase_t4077094137_il2cpp_TypeInfo_var))->set_s_Rotation_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CoherentNoise.Generation.Fractal.PinkNoise::.ctor(System.Int32)
extern "C"  void PinkNoise__ctor_m2073610907 (PinkNoise_t2031408553 * __this, int32_t ___seed0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PinkNoise__ctor_m2073610907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___seed0;
		IL2CPP_RUNTIME_CLASS_INIT(FractalNoiseBase_t4077094137_il2cpp_TypeInfo_var);
		FractalNoiseBase__ctor_m1522018235(__this, L_0, /*hidden argument*/NULL);
		PinkNoise_set_Persistence_m651126308(__this, (0.5f), /*hidden argument*/NULL);
		return;
	}
}
// System.Single CoherentNoise.Generation.Fractal.PinkNoise::CombineOctave(System.Int32,System.Single,System.Single)
extern "C"  float PinkNoise_CombineOctave_m421218669 (PinkNoise_t2031408553 * __this, int32_t ___curOctave0, float ___signal1, float ___value2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___curOctave0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__this->set_m_CurPersistence_5((1.0f));
	}

IL_000e:
	{
		float L_1 = ___value2;
		float L_2 = ___signal1;
		float L_3 = __this->get_m_CurPersistence_5();
		___value2 = ((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3))));
		float L_4 = __this->get_m_CurPersistence_5();
		float L_5 = PinkNoise_get_Persistence_m1538822954(__this, /*hidden argument*/NULL);
		__this->set_m_CurPersistence_5(((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)));
		float L_6 = ___value2;
		return L_6;
	}
}
// System.Single CoherentNoise.Generation.Fractal.PinkNoise::get_Persistence()
extern "C"  float PinkNoise_get_Persistence_m1538822954 (PinkNoise_t2031408553 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CPersistenceU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void CoherentNoise.Generation.Fractal.PinkNoise::set_Persistence(System.Single)
extern "C"  void PinkNoise_set_Persistence_m651126308 (PinkNoise_t2031408553 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CPersistenceU3Ek__BackingField_6(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CoherentNoise.Generation.Fractal.RidgeNoise::.ctor(System.Int32)
extern "C"  void RidgeNoise__ctor_m355332379 (RidgeNoise_t608126379 * __this, int32_t ___seed0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RidgeNoise__ctor_m355332379_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___seed0;
		IL2CPP_RUNTIME_CLASS_INIT(FractalNoiseBase_t4077094137_il2cpp_TypeInfo_var);
		FractalNoiseBase__ctor_m1522018235(__this, L_0, /*hidden argument*/NULL);
		RidgeNoise_set_Offset_m1221160009(__this, (1.0f), /*hidden argument*/NULL);
		RidgeNoise_set_Gain_m593435921(__this, (2.0f), /*hidden argument*/NULL);
		RidgeNoise_set_Exponent_m3517178769(__this, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Single CoherentNoise.Generation.Fractal.RidgeNoise::get_Exponent()
extern "C"  float RidgeNoise_get_Exponent_m1326721807 (RidgeNoise_t608126379 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Exponent_5();
		return L_0;
	}
}
// System.Void CoherentNoise.Generation.Fractal.RidgeNoise::set_Exponent(System.Single)
extern "C"  void RidgeNoise_set_Exponent_m3517178769 (RidgeNoise_t608126379 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_Exponent_5(L_0);
		VirtActionInvoker0::Invoke(6 /* System.Void CoherentNoise.Generation.Fractal.FractalNoiseBase::OnParamsChanged() */, __this);
		return;
	}
}
// System.Single CoherentNoise.Generation.Fractal.RidgeNoise::get_Offset()
extern "C"  float RidgeNoise_get_Offset_m2205891945 (RidgeNoise_t608126379 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3COffsetU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void CoherentNoise.Generation.Fractal.RidgeNoise::set_Offset(System.Single)
extern "C"  void RidgeNoise_set_Offset_m1221160009 (RidgeNoise_t608126379 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3COffsetU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Single CoherentNoise.Generation.Fractal.RidgeNoise::get_Gain()
extern "C"  float RidgeNoise_get_Gain_m2536188568 (RidgeNoise_t608126379 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CGainU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void CoherentNoise.Generation.Fractal.RidgeNoise::set_Gain(System.Single)
extern "C"  void RidgeNoise_set_Gain_m593435921 (RidgeNoise_t608126379 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CGainU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Single CoherentNoise.Generation.Fractal.RidgeNoise::CombineOctave(System.Int32,System.Single,System.Single)
extern "C"  float RidgeNoise_CombineOctave_m139749334 (RidgeNoise_t608126379 * __this, int32_t ___curOctave0, float ___signal1, float ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RidgeNoise_CombineOctave_m139749334_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___curOctave0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__this->set_m_Weight_7((1.0f));
	}

IL_000e:
	{
		float L_1 = RidgeNoise_get_Offset_m2205891945(__this, /*hidden argument*/NULL);
		float L_2 = ___signal1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = fabsf(L_2);
		___signal1 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		float L_4 = ___signal1;
		float L_5 = ___signal1;
		___signal1 = ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5));
		float L_6 = ___signal1;
		float L_7 = __this->get_m_Weight_7();
		___signal1 = ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7));
		float L_8 = ___signal1;
		float L_9 = RidgeNoise_get_Gain_m2536188568(__this, /*hidden argument*/NULL);
		__this->set_m_Weight_7(((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)));
		float L_10 = __this->get_m_Weight_7();
		if ((!(((float)L_10) > ((float)(1.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		__this->set_m_Weight_7((1.0f));
	}

IL_0052:
	{
		float L_11 = __this->get_m_Weight_7();
		if ((!(((float)L_11) < ((float)(0.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		__this->set_m_Weight_7((0.0f));
	}

IL_006a:
	{
		float L_12 = ___value2;
		float L_13 = ___signal1;
		SingleU5BU5D_t1444911251* L_14 = __this->get_m_SpectralWeights_6();
		int32_t L_15 = ___curOctave0;
		int32_t L_16 = L_15;
		float L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		return ((float)il2cpp_codegen_add((float)L_12, (float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_17))));
	}
}
// System.Void CoherentNoise.Generation.Fractal.RidgeNoise::OnParamsChanged()
extern "C"  void RidgeNoise_OnParamsChanged_m1808127243 (RidgeNoise_t608126379 * __this, const RuntimeMethod* method)
{
	{
		RidgeNoise_PrecalculateWeights_m3320982620(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CoherentNoise.Generation.Fractal.RidgeNoise::PrecalculateWeights()
extern "C"  void RidgeNoise_PrecalculateWeights_m3320982620 (RidgeNoise_t608126379 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RidgeNoise_PrecalculateWeights_m3320982620_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (1.0f);
		int32_t L_0 = FractalNoiseBase_get_OctaveCount_m2494358631(__this, /*hidden argument*/NULL);
		__this->set_m_SpectralWeights_6(((SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)L_0)));
		V_1 = 0;
		goto IL_003d;
	}

IL_001b:
	{
		SingleU5BU5D_t1444911251* L_1 = __this->get_m_SpectralWeights_6();
		int32_t L_2 = V_1;
		float L_3 = V_0;
		float L_4 = RidgeNoise_get_Exponent_m1326721807(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_5 = powf(L_3, ((-L_4)));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (float)L_5);
		float L_6 = V_0;
		float L_7 = FractalNoiseBase_get_Lacunarity_m837504296(__this, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003d:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = FractalNoiseBase_get_OctaveCount_m2494358631(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_001b;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CoherentNoise.Generation.Function::.ctor(System.Func`4<System.Single,System.Single,System.Single,System.Single>)
extern "C"  void Function__ctor_m901273256 (Function_t15557630 * __this, Func_4_t470802036 * ___func0, const RuntimeMethod* method)
{
	{
		Generator__ctor_m3652262062(__this, /*hidden argument*/NULL);
		Func_4_t470802036 * L_0 = ___func0;
		__this->set_m_Func_0(L_0);
		return;
	}
}
// System.Single CoherentNoise.Generation.Function::GetValue(System.Single,System.Single,System.Single)
extern "C"  float Function_GetValue_m2213728254 (Function_t15557630 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Function_GetValue_m2213728254_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_4_t470802036 * L_0 = __this->get_m_Func_0();
		float L_1 = ___x0;
		float L_2 = ___y1;
		float L_3 = ___z2;
		float L_4 = Func_4_Invoke_m2739791668(L_0, L_1, L_2, L_3, /*hidden argument*/Func_4_Invoke_m2739791668_RuntimeMethod_var);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CoherentNoise.Generation.GradientNoise::.ctor(System.Int32)
extern "C"  void GradientNoise__ctor_m1490394370 (GradientNoise_t639380896 * __this, int32_t ___seed0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___seed0;
		GradientNoise__ctor_m1898490744(__this, L_0, (SCurve_t667389360 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CoherentNoise.Generation.GradientNoise::.ctor(System.Int32,CoherentNoise.Interpolation.SCurve)
extern "C"  void GradientNoise__ctor_m1898490744 (GradientNoise_t639380896 * __this, int32_t ___seed0, SCurve_t667389360 * ___sCurve1, const RuntimeMethod* method)
{
	{
		Generator__ctor_m3652262062(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___seed0;
		__this->set_m_Seed_1(L_0);
		SCurve_t667389360 * L_1 = ___sCurve1;
		__this->set_m_SCurve_2(L_1);
		return;
	}
}
// System.Int32 CoherentNoise.Generation.GradientNoise::get_Period()
extern "C"  int32_t GradientNoise_get_Period_m2138397398 (GradientNoise_t639380896 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CPeriodU3Ek__BackingField_3();
		return L_0;
	}
}
// CoherentNoise.Interpolation.SCurve CoherentNoise.Generation.GradientNoise::get_SCurve()
extern "C"  SCurve_t667389360 * GradientNoise_get_SCurve_m1092237895 (GradientNoise_t639380896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GradientNoise_get_SCurve_m1092237895_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SCurve_t667389360 * G_B2_0 = NULL;
	SCurve_t667389360 * G_B1_0 = NULL;
	{
		SCurve_t667389360 * L_0 = __this->get_m_SCurve_2();
		SCurve_t667389360 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SCurve_t667389360_il2cpp_TypeInfo_var);
		SCurve_t667389360 * L_2 = ((SCurve_t667389360_StaticFields*)il2cpp_codegen_static_fields_for(SCurve_t667389360_il2cpp_TypeInfo_var))->get_Default_4();
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// System.Single CoherentNoise.Generation.GradientNoise::GetValue(System.Single,System.Single,System.Single)
extern "C"  float GradientNoise_GetValue_m3942597632 (GradientNoise_t639380896 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GradientNoise_GetValue_m3942597632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	{
		float L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_1 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = ___y1;
		int32_t L_3 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = ___z2;
		int32_t L_5 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		SCurve_t667389360 * L_6 = GradientNoise_get_SCurve_m1092237895(__this, /*hidden argument*/NULL);
		float L_7 = ___x0;
		int32_t L_8 = V_0;
		float L_9 = VirtFuncInvoker1< float, float >::Invoke(4 /* System.Single CoherentNoise.Interpolation.SCurve::Interpolate(System.Single) */, L_6, ((float)il2cpp_codegen_subtract((float)L_7, (float)(((float)((float)L_8))))));
		V_3 = L_9;
		SCurve_t667389360 * L_10 = GradientNoise_get_SCurve_m1092237895(__this, /*hidden argument*/NULL);
		float L_11 = ___y1;
		int32_t L_12 = V_1;
		float L_13 = VirtFuncInvoker1< float, float >::Invoke(4 /* System.Single CoherentNoise.Interpolation.SCurve::Interpolate(System.Single) */, L_10, ((float)il2cpp_codegen_subtract((float)L_11, (float)(((float)((float)L_12))))));
		V_4 = L_13;
		SCurve_t667389360 * L_14 = GradientNoise_get_SCurve_m1092237895(__this, /*hidden argument*/NULL);
		float L_15 = ___z2;
		int32_t L_16 = V_2;
		float L_17 = VirtFuncInvoker1< float, float >::Invoke(4 /* System.Single CoherentNoise.Interpolation.SCurve::Interpolate(System.Single) */, L_14, ((float)il2cpp_codegen_subtract((float)L_15, (float)(((float)((float)L_16))))));
		V_5 = L_17;
		float L_18 = ___x0;
		float L_19 = ___y1;
		float L_20 = ___z2;
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = V_2;
		float L_24 = GradientNoise_GetNoise_m190726570(__this, L_18, L_19, L_20, L_21, L_22, L_23, /*hidden argument*/NULL);
		V_6 = L_24;
		float L_25 = ___x0;
		float L_26 = ___y1;
		float L_27 = ___z2;
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		float L_31 = GradientNoise_GetNoise_m190726570(__this, L_25, L_26, L_27, ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)), L_29, L_30, /*hidden argument*/NULL);
		V_7 = L_31;
		float L_32 = V_6;
		float L_33 = V_7;
		float L_34 = V_3;
		float L_35 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_32, L_33, L_34, /*hidden argument*/NULL);
		V_8 = L_35;
		float L_36 = ___x0;
		float L_37 = ___y1;
		float L_38 = ___z2;
		int32_t L_39 = V_0;
		int32_t L_40 = V_1;
		int32_t L_41 = V_2;
		float L_42 = GradientNoise_GetNoise_m190726570(__this, L_36, L_37, L_38, L_39, ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1)), L_41, /*hidden argument*/NULL);
		V_6 = L_42;
		float L_43 = ___x0;
		float L_44 = ___y1;
		float L_45 = ___z2;
		int32_t L_46 = V_0;
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		float L_49 = GradientNoise_GetNoise_m190726570(__this, L_43, L_44, L_45, ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1)), L_48, /*hidden argument*/NULL);
		V_7 = L_49;
		float L_50 = V_6;
		float L_51 = V_7;
		float L_52 = V_3;
		float L_53 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_50, L_51, L_52, /*hidden argument*/NULL);
		V_9 = L_53;
		float L_54 = V_8;
		float L_55 = V_9;
		float L_56 = V_4;
		float L_57 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_54, L_55, L_56, /*hidden argument*/NULL);
		V_10 = L_57;
		float L_58 = ___x0;
		float L_59 = ___y1;
		float L_60 = ___z2;
		int32_t L_61 = V_0;
		int32_t L_62 = V_1;
		int32_t L_63 = V_2;
		float L_64 = GradientNoise_GetNoise_m190726570(__this, L_58, L_59, L_60, L_61, L_62, ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1)), /*hidden argument*/NULL);
		V_6 = L_64;
		float L_65 = ___x0;
		float L_66 = ___y1;
		float L_67 = ___z2;
		int32_t L_68 = V_0;
		int32_t L_69 = V_1;
		int32_t L_70 = V_2;
		float L_71 = GradientNoise_GetNoise_m190726570(__this, L_65, L_66, L_67, ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1)), L_69, ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1)), /*hidden argument*/NULL);
		V_7 = L_71;
		float L_72 = V_6;
		float L_73 = V_7;
		float L_74 = V_3;
		float L_75 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_72, L_73, L_74, /*hidden argument*/NULL);
		V_8 = L_75;
		float L_76 = ___x0;
		float L_77 = ___y1;
		float L_78 = ___z2;
		int32_t L_79 = V_0;
		int32_t L_80 = V_1;
		int32_t L_81 = V_2;
		float L_82 = GradientNoise_GetNoise_m190726570(__this, L_76, L_77, L_78, L_79, ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1)), /*hidden argument*/NULL);
		V_6 = L_82;
		float L_83 = ___x0;
		float L_84 = ___y1;
		float L_85 = ___z2;
		int32_t L_86 = V_0;
		int32_t L_87 = V_1;
		int32_t L_88 = V_2;
		float L_89 = GradientNoise_GetNoise_m190726570(__this, L_83, L_84, L_85, ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1)), /*hidden argument*/NULL);
		V_7 = L_89;
		float L_90 = V_6;
		float L_91 = V_7;
		float L_92 = V_3;
		float L_93 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_90, L_91, L_92, /*hidden argument*/NULL);
		V_9 = L_93;
		float L_94 = V_8;
		float L_95 = V_9;
		float L_96 = V_4;
		float L_97 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_94, L_95, L_96, /*hidden argument*/NULL);
		V_11 = L_97;
		float L_98 = V_10;
		float L_99 = V_11;
		float L_100 = V_5;
		float L_101 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_98, L_99, L_100, /*hidden argument*/NULL);
		return L_101;
	}
}
// UnityEngine.Vector3 CoherentNoise.Generation.GradientNoise::GetRandomVector(System.Int32,System.Int32,System.Int32)
extern "C"  Vector3_t3722313464  GradientNoise_GetRandomVector_m117061864 (GradientNoise_t639380896 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GradientNoise_GetRandomVector_m117061864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = GradientNoise_get_Period_m2138397398(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_1 = ___x0;
		int32_t L_2 = GradientNoise_get_Period_m2138397398(__this, /*hidden argument*/NULL);
		___x0 = ((int32_t)((int32_t)L_1%(int32_t)L_2));
		int32_t L_3 = ___x0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = ___x0;
		int32_t L_5 = GradientNoise_get_Period_m2138397398(__this, /*hidden argument*/NULL);
		___x0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5));
	}

IL_0021:
	{
		int32_t L_6 = ___y1;
		int32_t L_7 = GradientNoise_get_Period_m2138397398(__this, /*hidden argument*/NULL);
		___y1 = ((int32_t)((int32_t)L_6%(int32_t)L_7));
		int32_t L_8 = ___y1;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_9 = ___y1;
		int32_t L_10 = GradientNoise_get_Period_m2138397398(__this, /*hidden argument*/NULL);
		___y1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10));
	}

IL_0039:
	{
		int32_t L_11 = ___z2;
		int32_t L_12 = GradientNoise_get_Period_m2138397398(__this, /*hidden argument*/NULL);
		___z2 = ((int32_t)((int32_t)L_11%(int32_t)L_12));
		int32_t L_13 = ___z2;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_14 = ___z2;
		int32_t L_15 = GradientNoise_get_Period_m2138397398(__this, /*hidden argument*/NULL);
		___z2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15));
	}

IL_0051:
	{
		int32_t L_16 = ___x0;
		int32_t L_17 = ___y1;
		int32_t L_18 = ___z2;
		int32_t L_19 = __this->get_m_Seed_1();
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)1619), (int32_t)L_16)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)31337), (int32_t)L_17)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)6971), (int32_t)L_18)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)1013), (int32_t)L_19))))&(int32_t)((int32_t)2147483647LL)));
		int32_t L_20 = V_0;
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_20>>(int32_t)8))^(int32_t)L_21))&(int32_t)((int32_t)255))), (int32_t)3));
		IL2CPP_RUNTIME_CLASS_INIT(GradientNoise_t639380896_il2cpp_TypeInfo_var);
		SingleU5BU5D_t1444911251* L_22 = ((GradientNoise_t639380896_StaticFields*)il2cpp_codegen_static_fields_for(GradientNoise_t639380896_il2cpp_TypeInfo_var))->get_Vectors_0();
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		float L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		SingleU5BU5D_t1444911251* L_26 = ((GradientNoise_t639380896_StaticFields*)il2cpp_codegen_static_fields_for(GradientNoise_t639380896_il2cpp_TypeInfo_var))->get_Vectors_0();
		int32_t L_27 = V_0;
		int32_t L_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		float L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		SingleU5BU5D_t1444911251* L_30 = ((GradientNoise_t639380896_StaticFields*)il2cpp_codegen_static_fields_for(GradientNoise_t639380896_il2cpp_TypeInfo_var))->get_Vectors_0();
		int32_t L_31 = V_0;
		int32_t L_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)2));
		float L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		Vector3_t3722313464  L_34;
		memset(&L_34, 0, sizeof(L_34));
		Vector3__ctor_m3353183577((&L_34), L_25, L_29, L_33, /*hidden argument*/NULL);
		return L_34;
	}
}
// System.Single CoherentNoise.Generation.GradientNoise::GetNoise(System.Single,System.Single,System.Single,System.Int32,System.Int32,System.Int32)
extern "C"  float GradientNoise_GetNoise_m190726570 (GradientNoise_t639380896 * __this, float ___x0, float ___y1, float ___z2, int32_t ___ix3, int32_t ___iy4, int32_t ___iz5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GradientNoise_GetNoise_m190726570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___ix3;
		int32_t L_1 = ___iy4;
		int32_t L_2 = ___iz5;
		Vector3_t3722313464  L_3 = GradientNoise_GetRandomVector_m117061864(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_t3722313464  L_4 = V_0;
		float L_5 = ___x0;
		int32_t L_6 = ___ix3;
		float L_7 = ___y1;
		int32_t L_8 = ___iy4;
		float L_9 = ___z2;
		int32_t L_10 = ___iz5;
		Vector3_t3722313464  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m3353183577((&L_11), ((float)il2cpp_codegen_subtract((float)L_5, (float)(((float)((float)L_6))))), ((float)il2cpp_codegen_subtract((float)L_7, (float)(((float)((float)L_8))))), ((float)il2cpp_codegen_subtract((float)L_9, (float)(((float)((float)L_10))))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_12 = Vector3_Dot_m606404487(NULL /*static, unused*/, L_4, L_11, /*hidden argument*/NULL);
		return ((float)il2cpp_codegen_multiply((float)L_12, (float)(2.12f)));
	}
}
// System.Void CoherentNoise.Generation.GradientNoise::.cctor()
extern "C"  void GradientNoise__cctor_m507291083 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GradientNoise__cctor_m507291083_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingleU5BU5D_t1444911251* L_0 = ((SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)((int32_t)768)));
		RuntimeFieldHandle_t1871169219  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B6E89E9EDU2D2A9EU2D4192U2DB810U2D6644386B5FF9U7D_t1993605181____U24U24method0x60000e7U2D1_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		((GradientNoise_t639380896_StaticFields*)il2cpp_codegen_static_fields_for(GradientNoise_t639380896_il2cpp_TypeInfo_var))->set_Vectors_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CoherentNoise.Generation.Modification.Bias::.ctor(CoherentNoise.Generator,System.Single)
extern "C"  void Bias__ctor_m476027501 (Bias_t1434028717 * __this, Generator_t4036556772 * ___source0, float ___bias1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bias__ctor_m476027501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Generator__ctor_m3652262062(__this, /*hidden argument*/NULL);
		float L_0 = __this->get_m_Bias_0();
		if ((((float)L_0) <= ((float)(-1.0f))))
		{
			goto IL_0020;
		}
	}
	{
		float L_1 = __this->get_m_Bias_0();
		if ((!(((float)L_1) >= ((float)(1.0f)))))
		{
			goto IL_002b;
		}
	}

IL_0020:
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral213142974, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_002b:
	{
		Generator_t4036556772 * L_3 = ___source0;
		__this->set_m_Source_1(L_3);
		float L_4 = ___bias1;
		float L_5 = ___bias1;
		__this->set_m_Bias_0(((float)((float)L_4/(float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_5)))));
		return;
	}
}
// System.Single CoherentNoise.Generation.Modification.Bias::GetValue(System.Single,System.Single,System.Single)
extern "C"  float Bias_GetValue_m2417638632 (Bias_t1434028717 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Generator_t4036556772 * L_0 = __this->get_m_Source_1();
		float L_1 = ___x0;
		float L_2 = ___y1;
		float L_3 = ___z2;
		float L_4 = VirtFuncInvoker3< float, float, float, float >::Invoke(4 /* System.Single CoherentNoise.Generator::GetValue(System.Single,System.Single,System.Single) */, L_0, L_1, L_2, L_3);
		V_0 = L_4;
		float L_5 = V_0;
		if ((!(((float)L_5) < ((float)(-1.0f)))))
		{
			goto IL_001d;
		}
	}
	{
		V_0 = (-1.0f);
	}

IL_001d:
	{
		float L_6 = V_0;
		if ((!(((float)L_6) > ((float)(1.0f)))))
		{
			goto IL_002b;
		}
	}
	{
		V_0 = (1.0f);
	}

IL_002b:
	{
		float L_7 = V_0;
		float L_8 = __this->get_m_Bias_0();
		float L_9 = V_0;
		return ((float)il2cpp_codegen_subtract((float)((float)((float)((float)il2cpp_codegen_add((float)L_7, (float)(1.0f)))/(float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_9)))), (float)(0.5f))))))), (float)(1.0f)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single CoherentNoise.Generator::GetValue(UnityEngine.Vector3)
extern "C"  float Generator_GetValue_m2335788628 (Generator_t4036556772 * __this, Vector3_t3722313464  ___v0, const RuntimeMethod* method)
{
	{
		float L_0 = (&___v0)->get_x_1();
		float L_1 = (&___v0)->get_y_2();
		float L_2 = (&___v0)->get_z_3();
		float L_3 = VirtFuncInvoker3< float, float, float, float >::Invoke(4 /* System.Single CoherentNoise.Generator::GetValue(System.Single,System.Single,System.Single) */, __this, L_0, L_1, L_2);
		return L_3;
	}
}
// CoherentNoise.Generator CoherentNoise.Generator::op_Addition(CoherentNoise.Generator,CoherentNoise.Generator)
extern "C"  Generator_t4036556772 * Generator_op_Addition_m1462983143 (RuntimeObject * __this /* static, unused */, Generator_t4036556772 * ___g10, Generator_t4036556772 * ___g21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Generator_op_Addition_m1462983143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_t4251175105 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_t4251175105 * L_0 = (U3CU3Ec__DisplayClass1_t4251175105 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_t4251175105_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1__ctor_m1207232968(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_t4251175105 * L_1 = V_0;
		Generator_t4036556772 * L_2 = ___g10;
		L_1->set_g1_0(L_2);
		U3CU3Ec__DisplayClass1_t4251175105 * L_3 = V_0;
		Generator_t4036556772 * L_4 = ___g21;
		L_3->set_g2_1(L_4);
		U3CU3Ec__DisplayClass1_t4251175105 * L_5 = V_0;
		intptr_t L_6 = (intptr_t)U3CU3Ec__DisplayClass1_U3Cop_AdditionU3Eb__0_m3486310383_RuntimeMethod_var;
		Func_4_t470802036 * L_7 = (Func_4_t470802036 *)il2cpp_codegen_object_new(Func_4_t470802036_il2cpp_TypeInfo_var);
		Func_4__ctor_m1502640117(L_7, L_5, L_6, /*hidden argument*/Func_4__ctor_m1502640117_RuntimeMethod_var);
		Function_t15557630 * L_8 = (Function_t15557630 *)il2cpp_codegen_object_new(Function_t15557630_il2cpp_TypeInfo_var);
		Function__ctor_m901273256(L_8, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// CoherentNoise.Generator CoherentNoise.Generator::op_Multiply(CoherentNoise.Generator,CoherentNoise.Generator)
extern "C"  Generator_t4036556772 * Generator_op_Multiply_m2759838008 (RuntimeObject * __this /* static, unused */, Generator_t4036556772 * ___g10, Generator_t4036556772 * ___g21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Generator_op_Multiply_m2759838008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_t2889275538 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass10_t2889275538 * L_0 = (U3CU3Ec__DisplayClass10_t2889275538 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_t2889275538_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass10__ctor_m4047271035(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass10_t2889275538 * L_1 = V_0;
		Generator_t4036556772 * L_2 = ___g10;
		L_1->set_g1_0(L_2);
		U3CU3Ec__DisplayClass10_t2889275538 * L_3 = V_0;
		Generator_t4036556772 * L_4 = ___g21;
		L_3->set_g2_1(L_4);
		U3CU3Ec__DisplayClass10_t2889275538 * L_5 = V_0;
		intptr_t L_6 = (intptr_t)U3CU3Ec__DisplayClass10_U3Cop_MultiplyU3Eb__f_m2832821486_RuntimeMethod_var;
		Func_4_t470802036 * L_7 = (Func_4_t470802036 *)il2cpp_codegen_object_new(Func_4_t470802036_il2cpp_TypeInfo_var);
		Func_4__ctor_m1502640117(L_7, L_5, L_6, /*hidden argument*/Func_4__ctor_m1502640117_RuntimeMethod_var);
		Function_t15557630 * L_8 = (Function_t15557630 *)il2cpp_codegen_object_new(Function_t15557630_il2cpp_TypeInfo_var);
		Function__ctor_m901273256(L_8, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// CoherentNoise.Generator CoherentNoise.Generator::op_Implicit(System.Single)
extern "C"  Generator_t4036556772 * Generator_op_Implicit_m2618032474 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Generator_op_Implicit_m2618032474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___f0;
		Constant_t1823254730 * L_1 = (Constant_t1823254730 *)il2cpp_codegen_object_new(Constant_t1823254730_il2cpp_TypeInfo_var);
		Constant__ctor_m2845412620(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void CoherentNoise.Generator::.ctor()
extern "C"  void Generator__ctor_m3652262062 (Generator_t4036556772 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CoherentNoise.Generator/<>c__DisplayClass1::.ctor()
extern "C"  void U3CU3Ec__DisplayClass1__ctor_m1207232968 (U3CU3Ec__DisplayClass1_t4251175105 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single CoherentNoise.Generator/<>c__DisplayClass1::<op_Addition>b__0(System.Single,System.Single,System.Single)
extern "C"  float U3CU3Ec__DisplayClass1_U3Cop_AdditionU3Eb__0_m3486310383 (U3CU3Ec__DisplayClass1_t4251175105 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		Generator_t4036556772 * L_0 = __this->get_g1_0();
		float L_1 = ___x0;
		float L_2 = ___y1;
		float L_3 = ___z2;
		float L_4 = VirtFuncInvoker3< float, float, float, float >::Invoke(4 /* System.Single CoherentNoise.Generator::GetValue(System.Single,System.Single,System.Single) */, L_0, L_1, L_2, L_3);
		Generator_t4036556772 * L_5 = __this->get_g2_1();
		float L_6 = ___x0;
		float L_7 = ___y1;
		float L_8 = ___z2;
		float L_9 = VirtFuncInvoker3< float, float, float, float >::Invoke(4 /* System.Single CoherentNoise.Generator::GetValue(System.Single,System.Single,System.Single) */, L_5, L_6, L_7, L_8);
		return ((float)il2cpp_codegen_add((float)L_4, (float)L_9));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CoherentNoise.Generator/<>c__DisplayClass10::.ctor()
extern "C"  void U3CU3Ec__DisplayClass10__ctor_m4047271035 (U3CU3Ec__DisplayClass10_t2889275538 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single CoherentNoise.Generator/<>c__DisplayClass10::<op_Multiply>b__f(System.Single,System.Single,System.Single)
extern "C"  float U3CU3Ec__DisplayClass10_U3Cop_MultiplyU3Eb__f_m2832821486 (U3CU3Ec__DisplayClass10_t2889275538 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		Generator_t4036556772 * L_0 = __this->get_g1_0();
		float L_1 = ___x0;
		float L_2 = ___y1;
		float L_3 = ___z2;
		float L_4 = VirtFuncInvoker3< float, float, float, float >::Invoke(4 /* System.Single CoherentNoise.Generator::GetValue(System.Single,System.Single,System.Single) */, L_0, L_1, L_2, L_3);
		Generator_t4036556772 * L_5 = __this->get_g2_1();
		float L_6 = ___x0;
		float L_7 = ___y1;
		float L_8 = ___z2;
		float L_9 = VirtFuncInvoker3< float, float, float, float >::Invoke(4 /* System.Single CoherentNoise.Generator::GetValue(System.Single,System.Single,System.Single) */, L_5, L_6, L_7, L_8);
		return ((float)il2cpp_codegen_multiply((float)L_4, (float)L_9));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single CoherentNoise.Interpolation.CosineSCurve::Interpolate(System.Single)
extern "C"  float CosineSCurve_Interpolate_m4118786039 (CosineSCurve_t127591338 * __this, float ___t0, const RuntimeMethod* method)
{
	{
		float L_0 = ___t0;
		double L_1 = cos(((double)il2cpp_codegen_multiply((double)(((double)((double)L_0))), (double)(3.1415927))));
		return (((float)((float)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)(1.0), (double)L_1)), (double)(0.5))))));
	}
}
// System.Void CoherentNoise.Interpolation.CosineSCurve::.ctor()
extern "C"  void CosineSCurve__ctor_m580333586 (CosineSCurve_t127591338 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CosineSCurve__ctor_m580333586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SCurve_t667389360_il2cpp_TypeInfo_var);
		SCurve__ctor_m152210331(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single CoherentNoise.Interpolation.CubicSCurve::Interpolate(System.Single)
extern "C"  float CubicSCurve_Interpolate_m3318234436 (CubicSCurve_t2358206018 * __this, float ___t0, const RuntimeMethod* method)
{
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___t0;
		return ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_subtract((float)(3.0f), (float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_2))))));
	}
}
// System.Void CoherentNoise.Interpolation.CubicSCurve::.ctor()
extern "C"  void CubicSCurve__ctor_m3097235297 (CubicSCurve_t2358206018 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CubicSCurve__ctor_m3097235297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SCurve_t667389360_il2cpp_TypeInfo_var);
		SCurve__ctor_m152210331(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single CoherentNoise.Interpolation.LinearSCurve::Interpolate(System.Single)
extern "C"  float LinearSCurve_Interpolate_m2628158550 (LinearSCurve_t1372510163 * __this, float ___t0, const RuntimeMethod* method)
{
	{
		float L_0 = ___t0;
		return L_0;
	}
}
// System.Void CoherentNoise.Interpolation.LinearSCurve::.ctor()
extern "C"  void LinearSCurve__ctor_m3568124004 (LinearSCurve_t1372510163 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LinearSCurve__ctor_m3568124004_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SCurve_t667389360_il2cpp_TypeInfo_var);
		SCurve__ctor_m152210331(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single CoherentNoise.Interpolation.QuinticSCurve::Interpolate(System.Single)
extern "C"  float QuinticSCurve_Interpolate_m4179024221 (QuinticSCurve_t3645776962 * __this, float ___t0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___t0;
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)L_2));
		float L_3 = V_0;
		float L_4 = ___t0;
		V_1 = ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4));
		float L_5 = V_1;
		float L_6 = ___t0;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6));
		float L_7 = V_2;
		float L_8 = V_1;
		float L_9 = V_0;
		return ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(6.0f), (float)L_7)), (float)((float)il2cpp_codegen_multiply((float)(15.0f), (float)L_8)))), (float)((float)il2cpp_codegen_multiply((float)(10.0f), (float)L_9))));
	}
}
// System.Void CoherentNoise.Interpolation.QuinticSCurve::.ctor()
extern "C"  void QuinticSCurve__ctor_m240326878 (QuinticSCurve_t3645776962 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QuinticSCurve__ctor_m240326878_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SCurve_t667389360_il2cpp_TypeInfo_var);
		SCurve__ctor_m152210331(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CoherentNoise.Interpolation.SCurve::.ctor()
extern "C"  void SCurve__ctor_m152210331 (SCurve_t667389360 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CoherentNoise.Interpolation.SCurve::.cctor()
extern "C"  void SCurve__cctor_m4055378972 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SCurve__cctor_m4055378972_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LinearSCurve_t1372510163 * L_0 = (LinearSCurve_t1372510163 *)il2cpp_codegen_object_new(LinearSCurve_t1372510163_il2cpp_TypeInfo_var);
		LinearSCurve__ctor_m3568124004(L_0, /*hidden argument*/NULL);
		((SCurve_t667389360_StaticFields*)il2cpp_codegen_static_fields_for(SCurve_t667389360_il2cpp_TypeInfo_var))->set_Linear_0(L_0);
		CubicSCurve_t2358206018 * L_1 = (CubicSCurve_t2358206018 *)il2cpp_codegen_object_new(CubicSCurve_t2358206018_il2cpp_TypeInfo_var);
		CubicSCurve__ctor_m3097235297(L_1, /*hidden argument*/NULL);
		((SCurve_t667389360_StaticFields*)il2cpp_codegen_static_fields_for(SCurve_t667389360_il2cpp_TypeInfo_var))->set_Cubic_1(L_1);
		QuinticSCurve_t3645776962 * L_2 = (QuinticSCurve_t3645776962 *)il2cpp_codegen_object_new(QuinticSCurve_t3645776962_il2cpp_TypeInfo_var);
		QuinticSCurve__ctor_m240326878(L_2, /*hidden argument*/NULL);
		((SCurve_t667389360_StaticFields*)il2cpp_codegen_static_fields_for(SCurve_t667389360_il2cpp_TypeInfo_var))->set_Quintic_2(L_2);
		CosineSCurve_t127591338 * L_3 = (CosineSCurve_t127591338 *)il2cpp_codegen_object_new(CosineSCurve_t127591338_il2cpp_TypeInfo_var);
		CosineSCurve__ctor_m580333586(L_3, /*hidden argument*/NULL);
		((SCurve_t667389360_StaticFields*)il2cpp_codegen_static_fields_for(SCurve_t667389360_il2cpp_TypeInfo_var))->set_Cosine_3(L_3);
		SCurve_t667389360 * L_4 = ((SCurve_t667389360_StaticFields*)il2cpp_codegen_static_fields_for(SCurve_t667389360_il2cpp_TypeInfo_var))->get_Cubic_1();
		((SCurve_t667389360_StaticFields*)il2cpp_codegen_static_fields_for(SCurve_t667389360_il2cpp_TypeInfo_var))->set_Default_4(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
