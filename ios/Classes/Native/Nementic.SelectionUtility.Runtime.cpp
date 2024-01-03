#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.IEnumerable`1<Nementic.SelectionUtility.DataFilter>
struct IEnumerable_1_t50535181C6ACF1D2C0BB3750F4CFBCAA601F9D80;
// System.Collections.Generic.List`1<Nementic.SelectionUtility.DataFilter>
struct List_1_tA190E671A1C6AB1395333818262C4BE34F8F893A;
// Nementic.SelectionUtility.DataFilter[]
struct DataFilterU5BU5D_t8A5FB1A0BBA415AAF9D12AC505A17A17C68A6D2D;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Nementic.SelectionUtility.DataFilter
struct DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Nementic.SelectionUtility.FilterFunction
struct FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5;
// Nementic.SelectionUtility.FilterModifier
struct FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Nementic.SelectionUtility.DataFilter/<>c
struct U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SelectionPopupExtensions_tBDB3CE28AC4E44ABB92EF4E5082592C64CD1DB89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0236347F6CDE9949C0D0203D96DBCF6970C5DB48;
IL2CPP_EXTERN_C String_t* _stringLiteral22A4D2F2420CFB4F64F7179C6A3414E5FB0C8046;
IL2CPP_EXTERN_C String_t* _stringLiteralCCDF22F0BA1FC534FC6656104D7D41A8D396BCE5;
IL2CPP_EXTERN_C const RuntimeMethod* DataFilter_set_Filter_m167BD5054DC2B2B68ECD549D3E60DAA756017A56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataFilter_set_ShortName_mA26F7E60BFDB5B0391AA50CCC360BCA2268BA30D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__11_0_mC91D09555A01C9E816A2D0F1B25CDF9504281685_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t565A3D1BA47A2A1C95BCCDC45BB1F2421E7F8CCA 
{
};

// System.Collections.Generic.List`1<Nementic.SelectionUtility.DataFilter>
struct List_1_tA190E671A1C6AB1395333818262C4BE34F8F893A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DataFilterU5BU5D_t8A5FB1A0BBA415AAF9D12AC505A17A17C68A6D2D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Nementic.SelectionUtility.DataFilter
struct DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6  : public RuntimeObject
{
	// System.String Nementic.SelectionUtility.DataFilter::shortName
	String_t* ___shortName_0;
	// Nementic.SelectionUtility.FilterFunction Nementic.SelectionUtility.DataFilter::filter
	FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* ___filter_1;
};

// Nementic.SelectionUtility.SelectionPopupExtensions
struct SelectionPopupExtensions_tBDB3CE28AC4E44ABB92EF4E5082592C64CD1DB89  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Nementic.SelectionUtility.DataFilter/<>c
struct U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C  : public RuntimeObject
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// Nementic.SelectionUtility.FilterFunction
struct FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5  : public MulticastDelegate_t
{
};

// Nementic.SelectionUtility.FilterModifier
struct FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<Nementic.SelectionUtility.DataFilter>
struct List_1_tA190E671A1C6AB1395333818262C4BE34F8F893A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DataFilterU5BU5D_t8A5FB1A0BBA415AAF9D12AC505A17A17C68A6D2D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Nementic.SelectionUtility.DataFilter>

// Nementic.SelectionUtility.DataFilter
struct DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6_StaticFields
{
	// Nementic.SelectionUtility.DataFilter Nementic.SelectionUtility.DataFilter::PassThrough
	DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6* ___PassThrough_2;
};

// Nementic.SelectionUtility.DataFilter

// Nementic.SelectionUtility.SelectionPopupExtensions
struct SelectionPopupExtensions_tBDB3CE28AC4E44ABB92EF4E5082592C64CD1DB89_StaticFields
{
	// Nementic.SelectionUtility.FilterModifier Nementic.SelectionUtility.SelectionPopupExtensions::<FilterModifier>k__BackingField
	FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1* ___U3CFilterModifierU3Ek__BackingField_0;
};

// Nementic.SelectionUtility.SelectionPopupExtensions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Nementic.SelectionUtility.DataFilter/<>c
struct U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C_StaticFields
{
	// Nementic.SelectionUtility.DataFilter/<>c Nementic.SelectionUtility.DataFilter/<>c::<>9
	U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C* ___U3CU3E9_0;
};

// Nementic.SelectionUtility.DataFilter/<>c

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// Nementic.SelectionUtility.FilterFunction

// Nementic.SelectionUtility.FilterFunction

// Nementic.SelectionUtility.FilterModifier

// Nementic.SelectionUtility.FilterModifier
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Nementic.SelectionUtility.DataFilter::set_ShortName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataFilter_set_ShortName_mA26F7E60BFDB5B0391AA50CCC360BCA2268BA30D (DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Nementic.SelectionUtility.DataFilter::set_Filter(Nementic.SelectionUtility.FilterFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataFilter_set_Filter_m167BD5054DC2B2B68ECD549D3E60DAA756017A56 (DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6* __this, FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* ___0_value, const RuntimeMethod* method) ;
// Nementic.SelectionUtility.FilterFunction Nementic.SelectionUtility.DataFilter::get_Filter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* DataFilter_get_Filter_m6D39C1D2FB3F0892F36E3B75818DA1A4E019D926_inline (DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6* __this, const RuntimeMethod* method) ;
// System.Boolean Nementic.SelectionUtility.FilterFunction::Invoke(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FilterFunction_Invoke_mDBD6878B916C13166CC2B3CEB9C9843F243052CC_inline (FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method) ;
// System.Void Nementic.SelectionUtility.FilterFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterFunction__ctor_m583C31E9E336A90E857D86EB4E302AE033126840 (FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Nementic.SelectionUtility.DataFilter::.ctor(System.String,Nementic.SelectionUtility.FilterFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataFilter__ctor_m89687B8D65A6E7F2613AB69402335104C78F1F20 (DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6* __this, String_t* ___0_name, FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* ___1_filter, const RuntimeMethod* method) ;
// System.Void Nementic.SelectionUtility.DataFilter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2E43696D778E22A540C7D556BE11E7DC773F79F4 (U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C* __this, const RuntimeMethod* method) ;
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
// System.String Nementic.SelectionUtility.DataFilter::get_ShortName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataFilter_get_ShortName_m3D5D62F159E1B999F621FFBA420FE0316D5FA7AC (DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6* __this, const RuntimeMethod* method) 
{
	{
		// get { return shortName; }
		String_t* L_0 = __this->___shortName_0;
		return L_0;
	}
}
// System.Void Nementic.SelectionUtility.DataFilter::set_ShortName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataFilter_set_ShortName_mA26F7E60BFDB5B0391AA50CCC360BCA2268BA30D (DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// if (string.IsNullOrEmpty(value))
		String_t* L_0 = ___0_value;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentException("DataFilter must have a name.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0236347F6CDE9949C0D0203D96DBCF6970C5DB48)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataFilter_set_ShortName_mA26F7E60BFDB5B0391AA50CCC360BCA2268BA30D_RuntimeMethod_var)));
	}

IL_0013:
	{
		// shortName = value;
		String_t* L_3 = ___0_value;
		__this->___shortName_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shortName_0), (void*)L_3);
		// }
		return;
	}
}
// Nementic.SelectionUtility.FilterFunction Nementic.SelectionUtility.DataFilter::get_Filter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* DataFilter_get_Filter_m6D39C1D2FB3F0892F36E3B75818DA1A4E019D926 (DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6* __this, const RuntimeMethod* method) 
{
	{
		// get { return filter; }
		FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* L_0 = __this->___filter_1;
		return L_0;
	}
}
// System.Void Nementic.SelectionUtility.DataFilter::set_Filter(Nementic.SelectionUtility.FilterFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataFilter_set_Filter_m167BD5054DC2B2B68ECD549D3E60DAA756017A56 (DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6* __this, FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* ___0_value, const RuntimeMethod* method) 
{
	{
		// if (value == null)
		FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentException(
		//     "DataFilter function cannot be null. Use a no-op implementation instead.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral22A4D2F2420CFB4F64F7179C6A3414E5FB0C8046)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataFilter_set_Filter_m167BD5054DC2B2B68ECD549D3E60DAA756017A56_RuntimeMethod_var)));
	}

IL_000e:
	{
		// filter = value;
		FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* L_2 = ___0_value;
		__this->___filter_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___filter_1), (void*)L_2);
		// }
		return;
	}
}
// System.Void Nementic.SelectionUtility.DataFilter::.ctor(System.String,Nementic.SelectionUtility.FilterFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataFilter__ctor_m89687B8D65A6E7F2613AB69402335104C78F1F20 (DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6* __this, String_t* ___0_name, FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* ___1_filter, const RuntimeMethod* method) 
{
	{
		// public DataFilter(string name, FilterFunction filter)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.ShortName = name;
		String_t* L_0 = ___0_name;
		DataFilter_set_ShortName_mA26F7E60BFDB5B0391AA50CCC360BCA2268BA30D(__this, L_0, NULL);
		// this.Filter = filter;
		FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* L_1 = ___1_filter;
		DataFilter_set_Filter_m167BD5054DC2B2B68ECD549D3E60DAA756017A56(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Boolean Nementic.SelectionUtility.DataFilter::IsAllowed(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataFilter_IsAllowed_m939F5FAE96125A88C5F3425B0C9C45D8CA7AEFE7 (DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method) 
{
	{
		// return Filter.Invoke(go);
		FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* L_0;
		L_0 = DataFilter_get_Filter_m6D39C1D2FB3F0892F36E3B75818DA1A4E019D926_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_go;
		NullCheck(L_0);
		bool L_2;
		L_2 = FilterFunction_Invoke_mDBD6878B916C13166CC2B3CEB9C9843F243052CC_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Nementic.SelectionUtility.DataFilter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataFilter__cctor_mCE90F5362D7C8594459C27B3BFE8BCDCD5946340 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__11_0_mC91D09555A01C9E816A2D0F1B25CDF9504281685_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCDF22F0BA1FC534FC6656104D7D41A8D396BCE5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly DataFilter PassThrough = new DataFilter("All", go => true);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C_il2cpp_TypeInfo_var);
		U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C* L_0 = ((U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* L_1 = (FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5*)il2cpp_codegen_object_new(FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FilterFunction__ctor_m583C31E9E336A90E857D86EB4E302AE033126840(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__11_0_mC91D09555A01C9E816A2D0F1B25CDF9504281685_RuntimeMethod_var), NULL);
		DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6* L_2 = (DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6*)il2cpp_codegen_object_new(DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DataFilter__ctor_m89687B8D65A6E7F2613AB69402335104C78F1F20(L_2, _stringLiteralCCDF22F0BA1FC534FC6656104D7D41A8D396BCE5, L_1, NULL);
		((DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6_StaticFields*)il2cpp_codegen_static_fields_for(DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6_il2cpp_TypeInfo_var))->___PassThrough_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6_StaticFields*)il2cpp_codegen_static_fields_for(DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6_il2cpp_TypeInfo_var))->___PassThrough_2), (void*)L_2);
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
// System.Void Nementic.SelectionUtility.DataFilter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5D7D27DE90C8F2FFA1837DB74501997407F77708 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C* L_0 = (U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C*)il2cpp_codegen_object_new(U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m2E43696D778E22A540C7D556BE11E7DC773F79F4(L_0, NULL);
		((U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Nementic.SelectionUtility.DataFilter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2E43696D778E22A540C7D556BE11E7DC773F79F4 (U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Nementic.SelectionUtility.DataFilter/<>c::<.cctor>b__11_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_cctorU3Eb__11_0_mC91D09555A01C9E816A2D0F1B25CDF9504281685 (U3CU3Ec_t16080E03C29E149382C187B974B9EE628C7BF84C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method) 
{
	{
		// public static readonly DataFilter PassThrough = new DataFilter("All", go => true);
		return (bool)1;
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
// Nementic.SelectionUtility.FilterModifier Nementic.SelectionUtility.SelectionPopupExtensions::get_FilterModifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1* SelectionPopupExtensions_get_FilterModifier_m505CD844EEFFD4AA45EC63E417FDE984696DAD41 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectionPopupExtensions_tBDB3CE28AC4E44ABB92EF4E5082592C64CD1DB89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static FilterModifier FilterModifier { get; set; }
		FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1* L_0 = ((SelectionPopupExtensions_tBDB3CE28AC4E44ABB92EF4E5082592C64CD1DB89_StaticFields*)il2cpp_codegen_static_fields_for(SelectionPopupExtensions_tBDB3CE28AC4E44ABB92EF4E5082592C64CD1DB89_il2cpp_TypeInfo_var))->___U3CFilterModifierU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nementic.SelectionUtility.SelectionPopupExtensions::set_FilterModifier(Nementic.SelectionUtility.FilterModifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionPopupExtensions_set_FilterModifier_mF0C6351207B010A3FAAE81A501C8C2E96E323493 (FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectionPopupExtensions_tBDB3CE28AC4E44ABB92EF4E5082592C64CD1DB89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static FilterModifier FilterModifier { get; set; }
		FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1* L_0 = ___0_value;
		((SelectionPopupExtensions_tBDB3CE28AC4E44ABB92EF4E5082592C64CD1DB89_StaticFields*)il2cpp_codegen_static_fields_for(SelectionPopupExtensions_tBDB3CE28AC4E44ABB92EF4E5082592C64CD1DB89_il2cpp_TypeInfo_var))->___U3CFilterModifierU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SelectionPopupExtensions_tBDB3CE28AC4E44ABB92EF4E5082592C64CD1DB89_StaticFields*)il2cpp_codegen_static_fields_for(SelectionPopupExtensions_tBDB3CE28AC4E44ABB92EF4E5082592C64CD1DB89_il2cpp_TypeInfo_var))->___U3CFilterModifierU3Ek__BackingField_0), (void*)L_0);
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
RuntimeObject* FilterModifier_Invoke_m9D8166CE2A8586B92B3DB166B59C7CF394EA3BF9_Multicast(FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1* __this, List_1_tA190E671A1C6AB1395333818262C4BE34F8F893A* ___0_defaultFilters, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1* currentDelegate = reinterpret_cast<FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, List_1_tA190E671A1C6AB1395333818262C4BE34F8F893A*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_defaultFilters, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* FilterModifier_Invoke_m9D8166CE2A8586B92B3DB166B59C7CF394EA3BF9_OpenInst(FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1* __this, List_1_tA190E671A1C6AB1395333818262C4BE34F8F893A* ___0_defaultFilters, const RuntimeMethod* method)
{
	NullCheck(___0_defaultFilters);
	typedef RuntimeObject* (*FunctionPointerType) (List_1_tA190E671A1C6AB1395333818262C4BE34F8F893A*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_defaultFilters, method);
}
RuntimeObject* FilterModifier_Invoke_m9D8166CE2A8586B92B3DB166B59C7CF394EA3BF9_OpenStatic(FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1* __this, List_1_tA190E671A1C6AB1395333818262C4BE34F8F893A* ___0_defaultFilters, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (List_1_tA190E671A1C6AB1395333818262C4BE34F8F893A*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_defaultFilters, method);
}
RuntimeObject* FilterModifier_Invoke_m9D8166CE2A8586B92B3DB166B59C7CF394EA3BF9_OpenStaticInvoker(FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1* __this, List_1_tA190E671A1C6AB1395333818262C4BE34F8F893A* ___0_defaultFilters, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< RuntimeObject*, List_1_tA190E671A1C6AB1395333818262C4BE34F8F893A* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_defaultFilters);
}
RuntimeObject* FilterModifier_Invoke_m9D8166CE2A8586B92B3DB166B59C7CF394EA3BF9_ClosedStaticInvoker(FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1* __this, List_1_tA190E671A1C6AB1395333818262C4BE34F8F893A* ___0_defaultFilters, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, List_1_tA190E671A1C6AB1395333818262C4BE34F8F893A* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_defaultFilters);
}
RuntimeObject* FilterModifier_Invoke_m9D8166CE2A8586B92B3DB166B59C7CF394EA3BF9_OpenVirtual(FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1* __this, List_1_tA190E671A1C6AB1395333818262C4BE34F8F893A* ___0_defaultFilters, const RuntimeMethod* method)
{
	NullCheck(___0_defaultFilters);
	return VirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_defaultFilters);
}
RuntimeObject* FilterModifier_Invoke_m9D8166CE2A8586B92B3DB166B59C7CF394EA3BF9_OpenInterface(FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1* __this, List_1_tA190E671A1C6AB1395333818262C4BE34F8F893A* ___0_defaultFilters, const RuntimeMethod* method)
{
	NullCheck(___0_defaultFilters);
	return InterfaceFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_defaultFilters);
}
RuntimeObject* FilterModifier_Invoke_m9D8166CE2A8586B92B3DB166B59C7CF394EA3BF9_OpenGenericVirtual(FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1* __this, List_1_tA190E671A1C6AB1395333818262C4BE34F8F893A* ___0_defaultFilters, const RuntimeMethod* method)
{
	NullCheck(___0_defaultFilters);
	return GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(method, ___0_defaultFilters);
}
RuntimeObject* FilterModifier_Invoke_m9D8166CE2A8586B92B3DB166B59C7CF394EA3BF9_OpenGenericInterface(FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1* __this, List_1_tA190E671A1C6AB1395333818262C4BE34F8F893A* ___0_defaultFilters, const RuntimeMethod* method)
{
	NullCheck(___0_defaultFilters);
	return GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(method, ___0_defaultFilters);
}
// System.Void Nementic.SelectionUtility.FilterModifier::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterModifier__ctor_mF5036328709CE8FFC67A70F472420732F33562AC (FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FilterModifier_Invoke_m9D8166CE2A8586B92B3DB166B59C7CF394EA3BF9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FilterModifier_Invoke_m9D8166CE2A8586B92B3DB166B59C7CF394EA3BF9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FilterModifier_Invoke_m9D8166CE2A8586B92B3DB166B59C7CF394EA3BF9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&FilterModifier_Invoke_m9D8166CE2A8586B92B3DB166B59C7CF394EA3BF9_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FilterModifier_Invoke_m9D8166CE2A8586B92B3DB166B59C7CF394EA3BF9_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&FilterModifier_Invoke_m9D8166CE2A8586B92B3DB166B59C7CF394EA3BF9_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FilterModifier_Invoke_m9D8166CE2A8586B92B3DB166B59C7CF394EA3BF9_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&FilterModifier_Invoke_m9D8166CE2A8586B92B3DB166B59C7CF394EA3BF9_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&FilterModifier_Invoke_m9D8166CE2A8586B92B3DB166B59C7CF394EA3BF9_Multicast;
}
// System.Collections.Generic.IEnumerable`1<Nementic.SelectionUtility.DataFilter> Nementic.SelectionUtility.FilterModifier::Invoke(System.Collections.Generic.List`1<Nementic.SelectionUtility.DataFilter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FilterModifier_Invoke_m9D8166CE2A8586B92B3DB166B59C7CF394EA3BF9 (FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1* __this, List_1_tA190E671A1C6AB1395333818262C4BE34F8F893A* ___0_defaultFilters, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, List_1_tA190E671A1C6AB1395333818262C4BE34F8F893A*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_defaultFilters, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Nementic.SelectionUtility.FilterModifier::BeginInvoke(System.Collections.Generic.List`1<Nementic.SelectionUtility.DataFilter>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FilterModifier_BeginInvoke_m7BF740DCE754CEA2BDCB2CA34B494F3723EB2F9D (FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1* __this, List_1_tA190E671A1C6AB1395333818262C4BE34F8F893A* ___0_defaultFilters, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_defaultFilters;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Collections.Generic.IEnumerable`1<Nementic.SelectionUtility.DataFilter> Nementic.SelectionUtility.FilterModifier::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FilterModifier_EndInvoke_m051683144C482771EB2718D2A6DD36CE9C4AE23F (FilterModifier_tDBC74CF9BEDF5B68B133C78756C772D2B1548FB1* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool FilterFunction_Invoke_mDBD6878B916C13166CC2B3CEB9C9843F243052CC_Multicast(FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* currentDelegate = reinterpret_cast<FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_go, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool FilterFunction_Invoke_mDBD6878B916C13166CC2B3CEB9C9843F243052CC_OpenInst(FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method)
{
	NullCheck(___0_go);
	typedef bool (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_go, method);
}
bool FilterFunction_Invoke_mDBD6878B916C13166CC2B3CEB9C9843F243052CC_OpenStatic(FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_go, method);
}
bool FilterFunction_Invoke_mDBD6878B916C13166CC2B3CEB9C9843F243052CC_OpenStaticInvoker(FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_go);
}
bool FilterFunction_Invoke_mDBD6878B916C13166CC2B3CEB9C9843F243052CC_ClosedStaticInvoker(FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_go);
}
// System.Void Nementic.SelectionUtility.FilterFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterFunction__ctor_m583C31E9E336A90E857D86EB4E302AE033126840 (FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FilterFunction_Invoke_mDBD6878B916C13166CC2B3CEB9C9843F243052CC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FilterFunction_Invoke_mDBD6878B916C13166CC2B3CEB9C9843F243052CC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FilterFunction_Invoke_mDBD6878B916C13166CC2B3CEB9C9843F243052CC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&FilterFunction_Invoke_mDBD6878B916C13166CC2B3CEB9C9843F243052CC_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&FilterFunction_Invoke_mDBD6878B916C13166CC2B3CEB9C9843F243052CC_Multicast;
}
// System.Boolean Nementic.SelectionUtility.FilterFunction::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FilterFunction_Invoke_mDBD6878B916C13166CC2B3CEB9C9843F243052CC (FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_go, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Nementic.SelectionUtility.FilterFunction::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FilterFunction_BeginInvoke_m63E6D291171A9D88DE43C504E7E7F120FF6CC2FE (FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_go;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Boolean Nementic.SelectionUtility.FilterFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FilterFunction_EndInvoke_m4A7897F9CE885607AA3E6EC98535AB553BD134F3 (FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* DataFilter_get_Filter_m6D39C1D2FB3F0892F36E3B75818DA1A4E019D926_inline (DataFilter_t0942605483A41C864B701EB7A2847B3150286EA6* __this, const RuntimeMethod* method) 
{
	{
		// get { return filter; }
		FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* L_0 = __this->___filter_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FilterFunction_Invoke_mDBD6878B916C13166CC2B3CEB9C9843F243052CC_inline (FilterFunction_t5733C6545B824CD6695E13740981EBAFCB213AF5* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_go, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
