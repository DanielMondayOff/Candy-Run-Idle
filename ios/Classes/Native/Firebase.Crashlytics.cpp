#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct IEnumerable_1_tBB99AF9544626908B7F394A8B9680A03D15400ED;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C;
// System.Collections.Generic.List`1<Firebase.Crashlytics.Frame>
struct List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12;
// System.Collections.Generic.List`1<System.Text.RegularExpressions.Match>
struct List_1_t425196350A2888B269895DE1C865A3E7E4E2C9B6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2<System.String,System.String>[]
struct Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Firebase.Crashlytics.Frame[]
struct FrameU5BU5D_t3D1B3D3390EA2FB2AC2CC5C7F91F63B72B45FD9C;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Firebase.Crashlytics.AndroidImpl
struct AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// Firebase.Crashlytics.ExceptionHandler
struct ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B;
// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t5AD8517EA34467536BAC8C7C6EB4D4B6880312A2;
// Firebase.Crashlytics.Frame
struct Frame_t2D1277096973249B7867E50EF96B8364B1C46009;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Firebase.Crashlytics.IOSImpl
struct IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD;
// Firebase.Crashlytics.Impl
struct Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF;
// Firebase.Crashlytics.LoggedException
struct LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Firebase.Crashlytics.Metadata
struct Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;

IL2CPP_EXTERN_C RuntimeClass* AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C6D64B7A0CDB6E3207FA23727AD41AA18ED8FF5;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral295135142B09D162981C567F1D15A5ED78CAAE14;
IL2CPP_EXTERN_C String_t* _stringLiteral31589BBA58A25664603E1D2DC687F87365BA9CFB;
IL2CPP_EXTERN_C String_t* _stringLiteral4765970D0D7133F1C1A69C95B203411B88124CF0;
IL2CPP_EXTERN_C String_t* _stringLiteral57A5B9F3116ECBC21D1419A60997CB549020FC53;
IL2CPP_EXTERN_C String_t* _stringLiteral5A4CFF02A93B9B578AEFBB165D5837F2A3B4A9F3;
IL2CPP_EXTERN_C String_t* _stringLiteral614B501556B12B5890C878B29FB23C1807F2B680;
IL2CPP_EXTERN_C String_t* _stringLiteral6D33B14DB067EECF8C3B3E9865F06820B6E0FE56;
IL2CPP_EXTERN_C String_t* _stringLiteral6F58E55899F98AFC5E1E6EA30DD8C9C5B9EC984E;
IL2CPP_EXTERN_C String_t* _stringLiteral73CFB0B100DCFB0240F5F961DCC32569C0D22AED;
IL2CPP_EXTERN_C String_t* _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF;
IL2CPP_EXTERN_C String_t* _stringLiteral9084C0AE5B471F4073C715BDAC3F750C32FE483A;
IL2CPP_EXTERN_C String_t* _stringLiteral918DADB10CAA24134994433C2D451F166C4F7B0D;
IL2CPP_EXTERN_C String_t* _stringLiteral94638D7F4A43B841B52AF845739D3C73F4D2A8BB;
IL2CPP_EXTERN_C String_t* _stringLiteral94EFF030C9A3F8836D2235E04B3792B04BC2F807;
IL2CPP_EXTERN_C String_t* _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A;
IL2CPP_EXTERN_C String_t* _stringLiteral9F9B4EE95D601BB0BC08F3411BA88D91604FD8F9;
IL2CPP_EXTERN_C String_t* _stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D;
IL2CPP_EXTERN_C String_t* _stringLiteralBE84FE8ECE4A6DB8454F274D15DECBFFE3DE403F;
IL2CPP_EXTERN_C String_t* _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E;
IL2CPP_EXTERN_C String_t* _stringLiteralC5D8AF07339C92C1C8A544FB0AED646C001200E8;
IL2CPP_EXTERN_C String_t* _stringLiteralD36337CE50D01489EBB3C0651FFACABE7674F341;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE5FCE0B9BAB969557C9E40E4FB4EFF9C00C5F242;
IL2CPP_EXTERN_C String_t* _stringLiteralF2BFAE70197C0E422760DF3A996C13C7A418B318;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Skip_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_mF95EB107F9B1D2AEF1A34FA4D682DAF1954BDE96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Take_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_mBB883D0427D32B9BDF80D680BC69EC474F874258_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_m274B6528560C1E1DE5B74049843690753D75F9FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExceptionHandler_HandleException_m019C3CCDB0E4A56D7EF1D613A92A9405985D8DD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExceptionHandler_HandleLog_mB827A404BA118DF75799C14138B7AD36C9E4F80F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m468CC11F68E7B1323DBC33BC15634AA8C520224A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m609FB9DF294CC037F5A6B400A2FE0D54A6268704_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m9E06DB4CA8D1508D73839BB47732C5FECFD88E5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mAAE18D3A341FF02393197A2C0BB884A1F5377B35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4AA6E535BC1DD1E1308FD2D14FFE0E6A75A63207_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5ADB72DB206F3693C6549785C2447F914D44BBAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE185CEB74541D006CC213D7E4B4EA0C1CBF91785_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Frame_t2D1277096973249B7867E50EF96B8364B1C46009;;
struct Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshaled_pinvoke;
struct Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshaled_pinvoke;;

struct Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct FrameU5BU5D_t3D1B3D3390EA2FB2AC2CC5C7F91F63B72B45FD9C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD72281B98D15D89CD09C70337AAA4E4E93D2A64E 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Firebase.Crashlytics.Frame>
struct List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FrameU5BU5D_t3D1B3D3390EA2FB2AC2CC5C7F91F63B72B45FD9C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};

// Firebase.Crashlytics.Crashlytics
struct Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// Firebase.Crashlytics.ExceptionHandler
struct ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B  : public RuntimeObject
{
	// System.Boolean Firebase.Crashlytics.ExceptionHandler::isRegistered
	bool ___isRegistered_0;
};

// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E  : public RuntimeObject
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.GroupCollection::_match
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ____match_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.GroupCollection::_captureMap
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____captureMap_1;
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::_groups
	GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9* ____groups_2;
};

// Firebase.Crashlytics.Impl
struct Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC  : public RuntimeObject
{
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.MatchCollection::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_0;
	// System.Collections.Generic.List`1<System.Text.RegularExpressions.Match> System.Text.RegularExpressions.MatchCollection::_matches
	List_1_t425196350A2888B269895DE1C865A3E7E4E2C9B6* ____matches_1;
	// System.Boolean System.Text.RegularExpressions.MatchCollection::_done
	bool ____done_2;
	// System.String System.Text.RegularExpressions.MatchCollection::_input
	String_t* ____input_3;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_beginning
	int32_t ____beginning_4;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_length
	int32_t ____length_5;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_startat
	int32_t ____startat_6;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_prevlen
	int32_t ____prevlen_7;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Firebase.Crashlytics.Metadata
struct Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094  : public RuntimeObject
{
	// System.String Firebase.Crashlytics.Metadata::uv
	String_t* ___uv_0;
	// System.Boolean Firebase.Crashlytics.Metadata::idb
	bool ___idb_1;
	// System.String Firebase.Crashlytics.Metadata::pt
	String_t* ___pt_2;
	// System.Int32 Firebase.Crashlytics.Metadata::pc
	int32_t ___pc_3;
	// System.Int32 Firebase.Crashlytics.Metadata::pf
	int32_t ___pf_4;
	// System.Int32 Firebase.Crashlytics.Metadata::sms
	int32_t ___sms_5;
	// System.Int32 Firebase.Crashlytics.Metadata::gms
	int32_t ___gms_6;
	// System.Int32 Firebase.Crashlytics.Metadata::gdid
	int32_t ___gdid_7;
	// System.Int32 Firebase.Crashlytics.Metadata::gdvid
	int32_t ___gdvid_8;
	// System.String Firebase.Crashlytics.Metadata::gdn
	String_t* ___gdn_9;
	// System.String Firebase.Crashlytics.Metadata::gdv
	String_t* ___gdv_10;
	// System.String Firebase.Crashlytics.Metadata::gdver
	String_t* ___gdver_11;
	// UnityEngine.Rendering.GraphicsDeviceType Firebase.Crashlytics.Metadata::gdt
	int32_t ___gdt_12;
	// System.Int32 Firebase.Crashlytics.Metadata::gsl
	int32_t ___gsl_13;
	// System.Int32 Firebase.Crashlytics.Metadata::grtc
	int32_t ___grtc_14;
	// UnityEngine.Rendering.CopyTextureSupport Firebase.Crashlytics.Metadata::gcts
	int32_t ___gcts_15;
	// System.Int32 Firebase.Crashlytics.Metadata::gmts
	int32_t ___gmts_16;
	// System.String Firebase.Crashlytics.Metadata::ss
	String_t* ___ss_17;
	// System.Single Firebase.Crashlytics.Metadata::sdpi
	float ___sdpi_18;
	// System.Int32 Firebase.Crashlytics.Metadata::srr
	int32_t ___srr_19;
};

// Firebase.Crashlytics.MetadataBuilder
struct MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9  : public RuntimeObject
{
};

// Firebase.Crashlytics.StackTraceParser
struct StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D  : public RuntimeObject
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

// Firebase.Crashlytics.Crashlytics/PlatformAccessor
struct PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D  : public RuntimeObject
{
};

// Firebase.Crashlytics.AndroidImpl
struct AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76  : public Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// Firebase.Crashlytics.Frame
struct Frame_t2D1277096973249B7867E50EF96B8364B1C46009 
{
	// System.String Firebase.Crashlytics.Frame::library
	String_t* ___library_0;
	// System.String Firebase.Crashlytics.Frame::symbol
	String_t* ___symbol_1;
	// System.String Firebase.Crashlytics.Frame::fileName
	String_t* ___fileName_2;
	// System.String Firebase.Crashlytics.Frame::lineNumber
	String_t* ___lineNumber_3;
};
// Native definition for P/Invoke marshalling of Firebase.Crashlytics.Frame
struct Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshaled_pinvoke
{
	char* ___library_0;
	char* ___symbol_1;
	char* ___fileName_2;
	char* ___lineNumber_3;
};
// Native definition for COM marshalling of Firebase.Crashlytics.Frame
struct Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshaled_com
{
	Il2CppChar* ___library_0;
	Il2CppChar* ___symbol_1;
	Il2CppChar* ___fileName_2;
	Il2CppChar* ___lineNumber_3;
};

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
};

// Firebase.Crashlytics.IOSImpl
struct IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD  : public Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Resolution
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 
{
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Object System.UnhandledExceptionEventArgs::_exception
	RuntimeObject* ____exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::_isTerminating
	bool ____isTerminating_2;
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

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
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

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___AppDisposed_4;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_t5AD8517EA34467536BAC8C7C6EB4D4B6880312A2* ___appPlatform_14;
};

// Firebase.Crashlytics.LoggedException
struct LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887  : public Exception_t
{
	// System.String Firebase.Crashlytics.LoggedException::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_18;
	// System.String Firebase.Crashlytics.LoggedException::<CustomStackTrace>k__BackingField
	String_t* ___U3CCustomStackTraceU3Ek__BackingField_19;
	// System.Collections.Generic.Dictionary`2<System.String,System.String>[] Firebase.Crashlytics.LoggedException::<ParsedStackTrace>k__BackingField
	Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* ___U3CParsedStackTraceU3Ek__BackingField_20;
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C  : public MulticastDelegate_t
{
};

// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.Collections.Generic.List`1<Firebase.Crashlytics.Frame>
struct List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FrameU5BU5D_t3D1B3D3390EA2FB2AC2CC5C7F91F63B72B45FD9C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Firebase.Crashlytics.Frame>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Text.RegularExpressions.Capture

// System.Text.RegularExpressions.Capture

// Firebase.Crashlytics.Crashlytics
struct Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_StaticFields
{
	// System.Boolean Firebase.Crashlytics.Crashlytics::<ReportUncaughtExceptionsAsFatal>k__BackingField
	bool ___U3CReportUncaughtExceptionsAsFatalU3Ek__BackingField_0;
};

// Firebase.Crashlytics.Crashlytics

// Firebase.Crashlytics.ExceptionHandler

// Firebase.Crashlytics.ExceptionHandler

// System.Text.RegularExpressions.GroupCollection

// System.Text.RegularExpressions.GroupCollection

// Firebase.Crashlytics.Impl
struct Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields
{
	// System.String Firebase.Crashlytics.Impl::LogString
	String_t* ___LogString_0;
	// System.String Firebase.Crashlytics.Impl::SetKeyValueString
	String_t* ___SetKeyValueString_1;
	// System.String Firebase.Crashlytics.Impl::SetUserIdentifierString
	String_t* ___SetUserIdentifierString_2;
	// System.String Firebase.Crashlytics.Impl::LogExceptionString
	String_t* ___LogExceptionString_3;
	// System.String Firebase.Crashlytics.Impl::LogExceptionAsFatalString
	String_t* ___LogExceptionAsFatalString_4;
	// System.String Firebase.Crashlytics.Impl::IsCrashlyticsCollectionEnabledString
	String_t* ___IsCrashlyticsCollectionEnabledString_5;
	// System.String Firebase.Crashlytics.Impl::SetCrashlyticsCollectionEnabledString
	String_t* ___SetCrashlyticsCollectionEnabledString_6;
};

// Firebase.Crashlytics.Impl

// System.Text.RegularExpressions.MatchCollection

// System.Text.RegularExpressions.MatchCollection

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// Firebase.Crashlytics.Metadata

// Firebase.Crashlytics.Metadata

// Firebase.Crashlytics.MetadataBuilder
struct MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_StaticFields
{
	// System.String Firebase.Crashlytics.MetadataBuilder::METADATA_KEY
	String_t* ___METADATA_KEY_0;
};

// Firebase.Crashlytics.MetadataBuilder

// Firebase.Crashlytics.StackTraceParser
struct StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields
{
	// System.String Firebase.Crashlytics.StackTraceParser::FrameArgsRegex
	String_t* ___FrameArgsRegex_0;
	// System.String Firebase.Crashlytics.StackTraceParser::FrameRegexWithoutFileInfo
	String_t* ___FrameRegexWithoutFileInfo_1;
	// System.String Firebase.Crashlytics.StackTraceParser::FrameRegexWithFileInfo
	String_t* ___FrameRegexWithFileInfo_2;
	// System.String Firebase.Crashlytics.StackTraceParser::MonoFilenameUnknownString
	String_t* ___MonoFilenameUnknownString_3;
	// System.String[] Firebase.Crashlytics.StackTraceParser::StringDelimiters
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___StringDelimiters_4;
};

// Firebase.Crashlytics.StackTraceParser

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Firebase.Crashlytics.Crashlytics/PlatformAccessor
struct PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields
{
	// Firebase.Crashlytics.ExceptionHandler Firebase.Crashlytics.Crashlytics/PlatformAccessor::_exceptionHandler
	ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* ____exceptionHandler_0;
	// Firebase.Crashlytics.Impl Firebase.Crashlytics.Crashlytics/PlatformAccessor::_impl
	Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* ____impl_1;
	// Firebase.FirebaseApp Firebase.Crashlytics.Crashlytics/PlatformAccessor::_app
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ____app_2;
};

// Firebase.Crashlytics.Crashlytics/PlatformAccessor

// Firebase.Crashlytics.AndroidImpl

// Firebase.Crashlytics.AndroidImpl

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// Firebase.Crashlytics.Frame

// Firebase.Crashlytics.Frame

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
};

// System.Text.RegularExpressions.Group

// Firebase.Crashlytics.IOSImpl

// Firebase.Crashlytics.IOSImpl

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Resolution

// UnityEngine.Resolution

// System.Single

// System.Single

// System.UnhandledExceptionEventArgs

// System.UnhandledExceptionEventArgs

// System.Void

// System.Void

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// System.Text.RegularExpressions.Match

// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields
{
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject* ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3* ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject* ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Boolean Firebase.FirebaseApp::userAgentRegistered
	bool ___userAgentRegistered_11;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_12;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject* ___CheckDependenciesThreadLock_13;
};

// Firebase.FirebaseApp

// Firebase.Crashlytics.LoggedException

// Firebase.Crashlytics.LoggedException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.UnhandledExceptionEventHandler

// System.UnhandledExceptionEventHandler

// UnityEngine.Application/LogCallback

// UnityEngine.Application/LogCallback
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2<System.String,System.String>[]
struct Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418  : public RuntimeArray
{
	ALIGN_FIELD (8) Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* m_Items[1];

	inline Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Firebase.Crashlytics.Frame[]
struct FrameU5BU5D_t3D1B3D3390EA2FB2AC2CC5C7F91F63B72B45FD9C  : public RuntimeArray
{
	ALIGN_FIELD (8) Frame_t2D1277096973249B7867E50EF96B8364B1C46009 m_Items[1];

	inline Frame_t2D1277096973249B7867E50EF96B8364B1C46009 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Frame_t2D1277096973249B7867E50EF96B8364B1C46009* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Frame_t2D1277096973249B7867E50EF96B8364B1C46009 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___library_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___symbol_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fileName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___lineNumber_3), (void*)NULL);
		#endif
	}
	inline Frame_t2D1277096973249B7867E50EF96B8364B1C46009 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Frame_t2D1277096973249B7867E50EF96B8364B1C46009* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Frame_t2D1277096973249B7867E50EF96B8364B1C46009 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___library_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___symbol_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fileName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___lineNumber_3), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshal_pinvoke(const Frame_t2D1277096973249B7867E50EF96B8364B1C46009& unmarshaled, Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshal_pinvoke_back(const Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshaled_pinvoke& marshaled, Frame_t2D1277096973249B7867E50EF96B8364B1C46009& unmarshaled);
IL2CPP_EXTERN_C void Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshal_pinvoke_cleanup(Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshaled_pinvoke& marshaled);

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Skip_TisRuntimeObject_mC63F7758979C7B3D3C94A57B8BCD63C5237EA697_gshared (RuntimeObject* ___0_source, int32_t ___1_count, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Take_TisRuntimeObject_m0D329A9F9B3CB4DFDA8FC9F35FFBFE45804B32D5_gshared (RuntimeObject* ___0_source, int32_t ___1_count, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Firebase.Crashlytics.Frame>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m5ADB72DB206F3693C6549785C2447F914D44BBAF_gshared (List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Firebase.Crashlytics.Frame>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m609FB9DF294CC037F5A6B400A2FE0D54A6268704_gshared_inline (List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12* __this, Frame_t2D1277096973249B7867E50EF96B8364B1C46009 ___0_item, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<Firebase.Crashlytics.Frame>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameU5BU5D_t3D1B3D3390EA2FB2AC2CC5C7F91F63B72B45FD9C* List_1_ToArray_mAAE18D3A341FF02393197A2C0BB884A1F5377B35_gshared (List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Firebase.Crashlytics.Frame>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE185CEB74541D006CC213D7E4B4EA0C1CBF91785_gshared_inline (List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12* __this, const RuntimeMethod* method) ;

// Firebase.Crashlytics.Impl Firebase.Crashlytics.Crashlytics/PlatformAccessor::get_Impl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* PlatformAccessor_get_Impl_m54C83B529355CC79F44F1A4EA8BFD5277E2083E0 (const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.ExceptionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler__ctor_m58A8415C857D6D2BE34A4E3AAAB1B825F9A0E268 (ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* __this, const RuntimeMethod* method) ;
// Firebase.Crashlytics.Impl Firebase.Crashlytics.Impl::Make()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* Impl_Make_mFFEA30C47F99C9779D5EDCD228396DD73243FF36 (const RuntimeMethod* method) ;
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0 (const RuntimeMethod* method) ;
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49 (int32_t ___0_logLevel, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.ExceptionHandler::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler_Register_mE30C7CB413E2A8E667406AA948E71D01F086AB6A (ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* __this, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler__ctor_m97305729C8FD4CB2370169FBEB8E4364A9EE803A (UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.AppDomain::add_UnhandledException(System.UnhandledExceptionEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_add_UnhandledException_m14767641F2904E88E142CA76D4EAD955E67354C7 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264 (String_t* __this, String_t* ___0_value, int32_t ___1_comparisonType, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::RegisterLogCallback(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_RegisterLogCallback_mE0FF6CCC29725C4B7FDA75AF48B8522A585335E6 (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___0_handler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___0_value, const RuntimeMethod* method) ;
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline (UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* __this, const RuntimeMethod* method) ;
// Firebase.Crashlytics.LoggedException Firebase.Crashlytics.LoggedException::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* LoggedException_FromException_mB66098F5B3617FE9C23C100DB4C1DE21B5704E6E (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.String[] Firebase.Crashlytics.ExceptionHandler::getMessageParts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ExceptionHandler_getMessageParts_mC1066AD48D7CF0C8E1A8CCEBD4E70F5F559EA04C (ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.LoggedException::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggedException__ctor_m36E35A2257C4C4E77F61E97CDDF654E2E6B81A07 (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, String_t* ___0_name, String_t* ___1_message, String_t* ___2_stackTrace, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[],System.Int32,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m2BE72C065A76F6655308BAB67057CD03FED80D56 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_separator, int32_t ___1_count, int32_t ___2_options, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Boolean Firebase.Crashlytics.Crashlytics::get_ReportUncaughtExceptionsAsFatal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Crashlytics_get_ReportUncaughtExceptionsAsFatal_mDE723695962FC10E3F0E20C673B668E7D73D4F11_inline (const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.Crashlytics::LogExceptionAsFatal(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashlytics_LogExceptionAsFatal_m8B0E15D37EFA76ADC82898B12275228D952BFF6D (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.Crashlytics::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashlytics_LogException_mACA1BB2ED2669E632854AB55478710EC0C281618 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean Firebase.Platform.PlatformInformation::get_IsIOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsIOS_mC19E79F4C15D4B8B2CF22DE2517074235DCF7082 (const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.IOSImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSImpl__ctor_mB8C8A9D9B5516E0F464BFD962656ED87ACA6E70E (IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD* __this, const RuntimeMethod* method) ;
// System.Boolean Firebase.Platform.PlatformInformation::get_IsAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsAndroid_mA671D9472B9FDCE9060CD79409611B524ACEB61B (const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.AndroidImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidImpl__ctor_m94EE2C86B032B1858535A88AE69EBCF297634EDD (AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.Impl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl__ctor_m761BF52C0FBB4326D40254285021B9E3F67404C6 (Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.LoggedException::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoggedException_set_Name_m1896D9976E235E316D5E9942212844B5A70830B0_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.LoggedException::set_CustomStackTrace(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoggedException_set_CustomStackTrace_m96C1F56677E625D1E964AE5EE6657BC51DACB08B_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Firebase.Crashlytics.LoggedException::get_CustomStackTrace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoggedException_get_CustomStackTrace_m09CFBAE4B46B47D83C10DD64462E13C250A83289_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String>[] Firebase.Crashlytics.StackTraceParser::ParseStackTraceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* StackTraceParser_ParseStackTraceString_m8C1BCC3D040CAA6827E0EFFE408EC500E0A485D0 (String_t* ___0_stackTrace, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.LoggedException::set_ParsedStackTrace(System.Collections.Generic.Dictionary`2<System.String,System.String>[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoggedException_set_ParsedStackTrace_m3B96F287A2952EC305C06EE0D55A8C6F002FDF20_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* ___0_value, const RuntimeMethod* method) ;
// System.Type System.Exception::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09 (Exception_t* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_processorType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_processorType_m985AB6C66E69918DF641BC1A589A3F9B4CE76FBE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_processorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_processorCount_m6B20AC11AEA09CA06278FBC47BAAEAA01BC7DB55 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_processorFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_processorFrequency_mC3B994657AC07ECDFFF09E2B67AA90F5ED7F39E8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_systemMemorySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_systemMemorySize_m3BFE40CF5A43FEAB94F5C552A47D04ECD88B771E (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_graphicsMemorySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsMemorySize_m05C833741F5F5C06FE9B4B9F50078A21E9E71ACF (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_graphicsDeviceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceID_m9CB876E71515AF035A36AF3185992D10AE2ED646 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_graphicsDeviceVendorID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceVendorID_m9806D2F3459612C9FFE1A152BEB6BFB9D02C3309 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_graphicsDeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceName_mA3F2E2CA587AD5E212A38AD7D28559FD017451A2 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_graphicsDeviceVendor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceVendor_mE2D7A85437C820636639ADC124C965DB37B52204 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_graphicsDeviceVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceVersion_m8A157C76206F3CF7D9A3DA6F4BE188A6FEC0769C (const RuntimeMethod* method) ;
// UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::get_graphicsDeviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_graphicsShaderLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsShaderLevel_m9E6B001FA80EFBFC92EF4E7440AE64828B15070F (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_supportedRenderTargetCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_supportedRenderTargetCount_mA8696B2D9AB343F9D04B0F4F14A4A1F7098DBC34 (const RuntimeMethod* method) ;
// UnityEngine.Rendering.CopyTextureSupport UnityEngine.SystemInfo::get_copyTextureSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_copyTextureSupport_m35C5E2D749B53757DD6F05492B5D79F364F466C2 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_maxTextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Screen::get_dpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Screen_get_dpi_mEEDAA2189F84A47BD69D62A611E031D5C59CFE8E (const RuntimeMethod* method) ;
// UnityEngine.Resolution UnityEngine.Screen::get_currentResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 Screen_get_currentResolution_m8FE4C43E4F6EF28E0B85EB94B6C69D1EC5687CCD (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Resolution::get_refreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_refreshRate_mBA65C6BC920F0045E798C9F096E830C135F37870 (Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.Metadata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metadata__ctor_m152B834D7423AF0ED2D3A500786662C4350BEE92 (Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>::.ctor()
inline void List_1__ctor_m4AA6E535BC1DD1E1308FD2D14FFE0E6A75A63207 (List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4 (String_t* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>::ToArray()
inline Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* List_1_ToArray_m9E06DB4CA8D1508D73839BB47732C5FECFD88E5E (List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C* __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* (*) (List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* Regex_Matches_m6173BAB925E8664D3E962C59D780625528CAC22F (String_t* ___0_input, String_t* ___1_pattern, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MatchCollection_get_Count_mF9D979B5B9D3835CC61977CBFB4110173B1CC926 (MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Firebase.Crashlytics.StackTraceParser::ParseFrameString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* StackTraceParser_ParseFrameString_m4A987A4B13FCA52A4B510B4FB7A1C7C0E85B62C2 (String_t* ___0_regex, String_t* ___1_frameString, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>::Add(T)
inline void List_1_Add_m468CC11F68E7B1323DBC33BC15634AA8C520224A_inline (List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Group_t26371E9136D6F43782C487B63C67C5FC4F472881* GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A (GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* __this, String_t* ___0_groupname, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.IOSImpl::CLUSetDevelopmentPlatform(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSImpl_CLUSetDevelopmentPlatform_m05529D4E43F95724E595C656D549FD81B3DC3BC0 (String_t* ___0_name, String_t* ___1_version, const RuntimeMethod* method) ;
// System.String Firebase.Crashlytics.MetadataBuilder::GenerateMetadataJSON()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetadataBuilder_GenerateMetadataJSON_m9C53E7A4FEE2F79806EE7A176AC1FADA1080CBFC (const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.IOSImpl::CLUSetInternalKeyValue(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSImpl_CLUSetInternalKeyValue_mE9289DCF4A2B44EC7A099C8CF69D42C75596F712 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean Firebase.Crashlytics.IOSImpl::CLUIsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSImpl_CLUIsInitialized_mFA11BDA300C37D9DD09992F2AFCD62BECF337737 (const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.IOSImpl::RecordCustomException(Firebase.Crashlytics.LoggedException,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSImpl_RecordCustomException_mE9382238D98984FE15AA2A82215BFBB46DD84BB2 (IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD* __this, LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* ___0_loggedException, bool ___1_isOnDemand, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String>[] Firebase.Crashlytics.LoggedException::get_ParsedStackTrace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* LoggedException_get_ParsedStackTrace_m672B6D6A5AFFA99DAB7C4001BCCB7E2B5B4B7E56_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, const RuntimeMethod* method) ;
// System.String System.Environment::get_StackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_StackTrace_mE8E276A919C9C9D59220E6D2BA867FABFD9B011D (const RuntimeMethod* method) ;
// System.String Firebase.Crashlytics.LoggedException::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoggedException_get_Name_mDF6DE03566F5AF6854F272676AAFF9CCA93709E7_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.Collections.Generic.Dictionary`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Skip_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_mF95EB107F9B1D2AEF1A34FA4D682DAF1954BDE96 (RuntimeObject* ___0_source, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Skip_TisRuntimeObject_mC63F7758979C7B3D3C94A57B8BCD63C5237EA697_gshared)(___0_source, ___1_count, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take<System.Collections.Generic.Dictionary`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Take_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_mBB883D0427D32B9BDF80D680BC69EC474F874258 (RuntimeObject* ___0_source, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisRuntimeObject_m0D329A9F9B3CB4DFDA8FC9F35FFBFE45804B32D5_gshared)(___0_source, ___1_count, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Collections.Generic.Dictionary`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* Enumerable_ToArray_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_m274B6528560C1E1DE5B74049843690753D75F9FD (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.Void System.Collections.Generic.List`1<Firebase.Crashlytics.Frame>::.ctor()
inline void List_1__ctor_m5ADB72DB206F3693C6549785C2447F914D44BBAF (List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12*, const RuntimeMethod*))List_1__ctor_m5ADB72DB206F3693C6549785C2447F914D44BBAF_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.List`1<Firebase.Crashlytics.Frame>::Add(T)
inline void List_1_Add_m609FB9DF294CC037F5A6B400A2FE0D54A6268704_inline (List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12* __this, Frame_t2D1277096973249B7867E50EF96B8364B1C46009 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12*, Frame_t2D1277096973249B7867E50EF96B8364B1C46009, const RuntimeMethod*))List_1_Add_m609FB9DF294CC037F5A6B400A2FE0D54A6268704_gshared_inline)(__this, ___0_item, method);
}
// T[] System.Collections.Generic.List`1<Firebase.Crashlytics.Frame>::ToArray()
inline FrameU5BU5D_t3D1B3D3390EA2FB2AC2CC5C7F91F63B72B45FD9C* List_1_ToArray_mAAE18D3A341FF02393197A2C0BB884A1F5377B35 (List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12* __this, const RuntimeMethod* method)
{
	return ((  FrameU5BU5D_t3D1B3D3390EA2FB2AC2CC5C7F91F63B72B45FD9C* (*) (List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12*, const RuntimeMethod*))List_1_ToArray_mAAE18D3A341FF02393197A2C0BB884A1F5377B35_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Firebase.Crashlytics.Frame>::get_Count()
inline int32_t List_1_get_Count_mE185CEB74541D006CC213D7E4B4EA0C1CBF91785_inline (List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12*, const RuntimeMethod*))List_1_get_Count_mE185CEB74541D006CC213D7E4B4EA0C1CBF91785_gshared_inline)(__this, method);
}
// System.Void Firebase.Crashlytics.IOSImpl::CLURecordCustomException(System.String,System.String,Firebase.Crashlytics.Frame[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSImpl_CLURecordCustomException_mF617BD1C3FC4522DB9862690F462D115A951C613 (String_t* ___0_name, String_t* ___1_reason, FrameU5BU5D_t3D1B3D3390EA2FB2AC2CC5C7F91F63B72B45FD9C* ___2_frames, int32_t ___3_frameCount, bool ___4_isOnDemand, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CLUIsInitialized();
IL2CPP_EXTERN_C void DEFAULT_CALL CLUSetInternalKeyValue(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL CLUSetDevelopmentPlatform(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL CLURecordCustomException(char*, char*, Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshaled_pinvoke*, int32_t, int32_t);
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
// System.Boolean Firebase.Crashlytics.Crashlytics::get_ReportUncaughtExceptionsAsFatal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Crashlytics_get_ReportUncaughtExceptionsAsFatal_mDE723695962FC10E3F0E20C673B668E7D73D4F11 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var);
		bool L_0 = ((Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_StaticFields*)il2cpp_codegen_static_fields_for(Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var))->___U3CReportUncaughtExceptionsAsFatalU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Firebase.Crashlytics.Crashlytics::set_ReportUncaughtExceptionsAsFatal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashlytics_set_ReportUncaughtExceptionsAsFatal_m8B83B6BBD60CC82B39613CB649427C170E70C345 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var);
		((Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_StaticFields*)il2cpp_codegen_static_fields_for(Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var))->___U3CReportUncaughtExceptionsAsFatalU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void Firebase.Crashlytics.Crashlytics::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashlytics_Initialize_m6CF4D2B9E6FC44184E71739DD67A918222A0B79B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* L_0;
		L_0 = PlatformAccessor_get_Impl_m54C83B529355CC79F44F1A4EA8BFD5277E2083E0(NULL);
		V_0 = L_0;
		return;
	}
}
// System.Void Firebase.Crashlytics.Crashlytics::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashlytics_LogException_mACA1BB2ED2669E632854AB55478710EC0C281618 (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* L_0;
		L_0 = PlatformAccessor_get_Impl_m54C83B529355CC79F44F1A4EA8BFD5277E2083E0(NULL);
		Exception_t* L_1 = ___0_exception;
		NullCheck(L_0);
		VirtualActionInvoker1< Exception_t* >::Invoke(5 /* System.Void Firebase.Crashlytics.Impl::LogException(System.Exception) */, L_0, L_1);
		return;
	}
}
// System.Void Firebase.Crashlytics.Crashlytics::LogExceptionAsFatal(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashlytics_LogExceptionAsFatal_m8B0E15D37EFA76ADC82898B12275228D952BFF6D (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* L_0;
		L_0 = PlatformAccessor_get_Impl_m54C83B529355CC79F44F1A4EA8BFD5277E2083E0(NULL);
		Exception_t* L_1 = ___0_exception;
		NullCheck(L_0);
		VirtualActionInvoker1< Exception_t* >::Invoke(6 /* System.Void Firebase.Crashlytics.Impl::LogExceptionAsFatal(System.Exception) */, L_0, L_1);
		return;
	}
}
// System.Void Firebase.Crashlytics.Crashlytics::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashlytics__cctor_m33D126C89E4ACBCA8B23B332B6E363955A1E11FD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_StaticFields*)il2cpp_codegen_static_fields_for(Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var))->___U3CReportUncaughtExceptionsAsFatalU3Ek__BackingField_0 = (bool)0;
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
// System.Void Firebase.Crashlytics.Crashlytics/PlatformAccessor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformAccessor__cctor_m06ED3208BB78889FAD2C364D3B12EA0498DF7941 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D33B14DB067EECF8C3B3E9865F06820B6E0FE56);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* L_0 = (ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B*)il2cpp_codegen_object_new(ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExceptionHandler__ctor_m58A8415C857D6D2BE34A4E3AAAB1B825F9A0E268(L_0, NULL);
		((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____exceptionHandler_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____exceptionHandler_0), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* L_1;
		L_1 = Impl_Make_mFFEA30C47F99C9779D5EDCD228396DD73243FF36(NULL);
		((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____impl_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____impl_1), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_2;
		L_2 = FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0(NULL);
		((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____app_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____app_2), (void*)L_2);
		Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* L_3 = ((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____impl_1;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean Firebase.Crashlytics.Impl::IsSDKInitialized() */, L_3);
		V_0 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(1, _stringLiteral6D33B14DB067EECF8C3B3E9865F06820B6E0FE56, NULL);
		goto IL_004a;
	}

IL_003f:
	{
		ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* L_6 = ((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____exceptionHandler_0;
		NullCheck(L_6);
		ExceptionHandler_Register_mE30C7CB413E2A8E667406AA948E71D01F086AB6A(L_6, NULL);
	}

IL_004a:
	{
		return;
	}
}
// Firebase.Crashlytics.ExceptionHandler Firebase.Crashlytics.Crashlytics/PlatformAccessor::get_ExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* PlatformAccessor_get_ExceptionHandler_m8AF8A9273B091E976CC694134BD4C6497EDF1D88 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* L_0 = ((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____exceptionHandler_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* L_1 = V_0;
		return L_1;
	}
}
// Firebase.Crashlytics.Impl Firebase.Crashlytics.Crashlytics/PlatformAccessor::get_Impl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* PlatformAccessor_get_Impl_m54C83B529355CC79F44F1A4EA8BFD5277E2083E0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* L_0 = ((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____impl_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* L_1 = V_0;
		return L_1;
	}
}
// Firebase.FirebaseApp Firebase.Crashlytics.Crashlytics/PlatformAccessor::get_App()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* PlatformAccessor_get_App_m5FE468924AC3D288FEB582C4C10DC12BAA2BDDE7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = ((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____app_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_1 = V_0;
		return L_1;
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
// System.Void Firebase.Crashlytics.ExceptionHandler::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler_Register_mE30C7CB413E2A8E667406AA948E71D01F086AB6A (ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionHandler_HandleException_m019C3CCDB0E4A56D7EF1D613A92A9405985D8DD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionHandler_HandleLog_mB827A404BA118DF75799C14138B7AD36C9E4F80F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A4CFF02A93B9B578AEFBB165D5837F2A3B4A9F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral918DADB10CAA24134994433C2D451F166C4F7B0D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = __this->___isRegistered_0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_0076;
	}

IL_000e:
	{
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(1, _stringLiteral5A4CFF02A93B9B578AEFBB165D5837F2A3B4A9F3, NULL);
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_2;
		L_2 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* L_3 = (UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C*)il2cpp_codegen_object_new(UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnhandledExceptionEventHandler__ctor_m97305729C8FD4CB2370169FBEB8E4364A9EE803A(L_3, __this, (intptr_t)((void*)ExceptionHandler_HandleException_m019C3CCDB0E4A56D7EF1D613A92A9405985D8DD1_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		AppDomain_add_UnhandledException_m14767641F2904E88E142CA76D4EAD955E67354C7(L_2, L_3, NULL);
		String_t* L_4;
		L_4 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264(L_4, _stringLiteral918DADB10CAA24134994433C2D451F166C4F7B0D, 5, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_7 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_7, __this, (intptr_t)((void*)ExceptionHandler_HandleLog_mB827A404BA118DF75799C14138B7AD36C9E4F80F_RuntimeMethod_var), NULL);
		Application_RegisterLogCallback_mE0FF6CCC29725C4B7FDA75AF48B8522A585335E6(L_7, NULL);
		goto IL_006f;
	}

IL_005b:
	{
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_8 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_8, __this, (intptr_t)((void*)ExceptionHandler_HandleLog_mB827A404BA118DF75799C14138B7AD36C9E4F80F_RuntimeMethod_var), NULL);
		Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C(L_8, NULL);
	}

IL_006f:
	{
		__this->___isRegistered_0 = (bool)1;
	}

IL_0076:
	{
		return;
	}
}
// System.Void Firebase.Crashlytics.ExceptionHandler::HandleException(System.Object,System.UnhandledExceptionEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler_HandleException_m019C3CCDB0E4A56D7EF1D613A92A9405985D8DD1 (ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* __this, RuntimeObject* ___0_sender, UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* ___1_eArgs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* V_1 = NULL;
	{
		UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* L_0 = ___1_eArgs;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline(L_0, NULL);
		V_0 = ((Exception_t*)CastclassClass((RuntimeObject*)L_1, Exception_t_il2cpp_TypeInfo_var));
		Exception_t* L_2 = V_0;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_3;
		L_3 = LoggedException_FromException_mB66098F5B3617FE9C23C100DB4C1DE21B5704E6E(L_2, NULL);
		V_1 = L_3;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_4 = V_1;
		VirtualActionInvoker1< LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* >::Invoke(4 /* System.Void Firebase.Crashlytics.ExceptionHandler::LogException(Firebase.Crashlytics.LoggedException) */, __this, L_4);
		return;
	}
}
// System.Void Firebase.Crashlytics.ExceptionHandler::HandleLog(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler_HandleLog_mB827A404BA118DF75799C14138B7AD36C9E4F80F (ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* __this, String_t* ___0_message, String_t* ___1_stackTraceString, int32_t ___2_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* V_2 = NULL;
	{
		int32_t L_0 = ___2_type;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)4))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_2 = ___0_message;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = ExceptionHandler_getMessageParts_mC1066AD48D7CF0C8E1A8CCEBD4E70F5F559EA04C(__this, L_2, NULL);
		V_1 = L_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = 1;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		String_t* L_10 = ___1_stackTraceString;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_11 = (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887*)il2cpp_codegen_object_new(LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		LoggedException__ctor_m36E35A2257C4C4E77F61E97CDDF654E2E6B81A07(L_11, L_6, L_9, L_10, NULL);
		V_2 = L_11;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_12 = V_2;
		VirtualActionInvoker1< LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* >::Invoke(4 /* System.Void Firebase.Crashlytics.ExceptionHandler::LogException(Firebase.Crashlytics.LoggedException) */, __this, L_12);
	}

IL_0028:
	{
		return;
	}
}
// System.String[] Firebase.Crashlytics.ExceptionHandler::getMessageParts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ExceptionHandler_getMessageParts_mC1066AD48D7CF0C8E1A8CCEBD4E70F5F559EA04C (ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57A5B9F3116ECBC21D1419A60997CB549020FC53);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	bool V_2 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_7 = NULL;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
		V_0 = L_1;
		String_t* L_2 = ___0_message;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = V_0;
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m2BE72C065A76F6655308BAB67057CD03FED80D56(L_2, L_3, 2, 0, NULL);
		V_1 = L_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_1;
		NullCheck(L_5);
		V_2 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) == ((int32_t)2))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		V_3 = L_7;
		V_4 = 0;
		goto IL_0043;
	}

IL_002e:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_3;
		int32_t L_9 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		String_t* L_14;
		L_14 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_13, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_14);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (String_t*)L_14);
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0043:
	{
		int32_t L_16 = V_4;
		V_5 = (bool)((((int32_t)L_16) < ((int32_t)2))? 1 : 0);
		bool L_17 = V_5;
		if (L_17)
		{
			goto IL_002e;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_3;
		NullCheck(L_18);
		int32_t L_19 = 0;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		bool L_21;
		L_21 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_20, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_6 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_006a;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_3;
		V_7 = L_23;
		goto IL_0081;
	}

IL_006a:
	{
	}

IL_006b:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral57A5B9F3116ECBC21D1419A60997CB549020FC53);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral57A5B9F3116ECBC21D1419A60997CB549020FC53);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		String_t* L_27 = ___0_message;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_27);
		V_7 = L_26;
		goto IL_0081;
	}

IL_0081:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_7;
		return L_28;
	}
}
// System.Void Firebase.Crashlytics.ExceptionHandler::LogException(Firebase.Crashlytics.LoggedException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler_LogException_m6F538C16D74EDF3EE2256312DF6C87ABAD5155B6 (ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* __this, LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73CFB0B100DCFB0240F5F961DCC32569C0D22AED);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_0 = ___0_e;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_0);
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_2 = ___0_e;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Exception::get_StackTrace() */, L_2);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral73CFB0B100DCFB0240F5F961DCC32569C0D22AED, L_1, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(1, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Crashlytics_get_ReportUncaughtExceptionsAsFatal_mDE723695962FC10E3F0E20C673B668E7D73D4F11_inline(NULL);
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_7 = ___0_e;
		il2cpp_codegen_runtime_class_init_inline(Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var);
		Crashlytics_LogExceptionAsFatal_m8B0E15D37EFA76ADC82898B12275228D952BFF6D(L_7, NULL);
		goto IL_003b;
	}

IL_0032:
	{
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_8 = ___0_e;
		il2cpp_codegen_runtime_class_init_inline(Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var);
		Crashlytics_LogException_mACA1BB2ED2669E632854AB55478710EC0C281618(L_8, NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void Firebase.Crashlytics.ExceptionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler__ctor_m58A8415C857D6D2BE34A4E3AAAB1B825F9A0E268 (ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* __this, const RuntimeMethod* method) 
{
	{
		__this->___isRegistered_0 = (bool)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Firebase.Crashlytics.Impl Firebase.Crashlytics.Impl::Make()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* Impl_Make_mFFEA30C47F99C9779D5EDCD228396DD73243FF36 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* V_1 = NULL;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = PlatformInformation_get_IsIOS_mC19E79F4C15D4B8B2CF22DE2517074235DCF7082(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD* L_2 = (IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD*)il2cpp_codegen_object_new(IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IOSImpl__ctor_mB8C8A9D9B5516E0F464BFD962656ED87ACA6E70E(L_2, NULL);
		V_1 = L_2;
		goto IL_002d;
	}

IL_0013:
	{
		bool L_3;
		L_3 = PlatformInformation_get_IsAndroid_mA671D9472B9FDCE9060CD79409611B524ACEB61B(NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* L_5 = (AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76*)il2cpp_codegen_object_new(AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AndroidImpl__ctor_m94EE2C86B032B1858535A88AE69EBCF297634EDD(L_5, NULL);
		V_1 = L_5;
		goto IL_002d;
	}

IL_0025:
	{
		Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* L_6 = (Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF*)il2cpp_codegen_object_new(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Impl__ctor_m761BF52C0FBB4326D40254285021B9E3F67404C6(L_6, NULL);
		V_1 = L_6;
		goto IL_002d;
	}

IL_002d:
	{
		Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* L_7 = V_1;
		return L_7;
	}
}
// System.Boolean Firebase.Crashlytics.Impl::IsSDKInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Impl_IsSDKInitialized_m908ADF3BBFDB0D9DBDBC0DD58BF892EA1721CEAD (Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void Firebase.Crashlytics.Impl::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl_LogException_mD43F6B4E311EE7D1E62F38AF096EBA19FD9130C0 (Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___LogExceptionString_3;
		Exception_t* L_1 = ___0_exception;
		String_t* L_2;
		L_2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(1, L_2, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.Impl::LogExceptionAsFatal(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl_LogExceptionAsFatal_mC4B598CB8D4F18B85F2084EF6E96B16CA0C349F7 (Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___LogExceptionAsFatalString_4;
		Exception_t* L_1 = ___0_exception;
		String_t* L_2;
		L_2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(1, L_2, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.Impl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl__ctor_m761BF52C0FBB4326D40254285021B9E3F67404C6 (Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.Impl::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl__cctor_mD41926AA62E73080BADB30857B67FDA73D83112D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral295135142B09D162981C567F1D15A5ED78CAAE14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31589BBA58A25664603E1D2DC687F87365BA9CFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4765970D0D7133F1C1A69C95B203411B88124CF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F58E55899F98AFC5E1E6EA30DD8C9C5B9EC984E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9084C0AE5B471F4073C715BDAC3F750C32FE483A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F9B4EE95D601BB0BC08F3411BA88D91604FD8F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5FCE0B9BAB969557C9E40E4FB4EFF9C00C5F242);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___LogString_0 = _stringLiteral31589BBA58A25664603E1D2DC687F87365BA9CFB;
		Il2CppCodeGenWriteBarrier((void**)(&((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___LogString_0), (void*)_stringLiteral31589BBA58A25664603E1D2DC687F87365BA9CFB);
		((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___SetKeyValueString_1 = _stringLiteral9084C0AE5B471F4073C715BDAC3F750C32FE483A;
		Il2CppCodeGenWriteBarrier((void**)(&((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___SetKeyValueString_1), (void*)_stringLiteral9084C0AE5B471F4073C715BDAC3F750C32FE483A);
		((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___SetUserIdentifierString_2 = _stringLiteralE5FCE0B9BAB969557C9E40E4FB4EFF9C00C5F242;
		Il2CppCodeGenWriteBarrier((void**)(&((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___SetUserIdentifierString_2), (void*)_stringLiteralE5FCE0B9BAB969557C9E40E4FB4EFF9C00C5F242);
		((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___LogExceptionString_3 = _stringLiteral6F58E55899F98AFC5E1E6EA30DD8C9C5B9EC984E;
		Il2CppCodeGenWriteBarrier((void**)(&((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___LogExceptionString_3), (void*)_stringLiteral6F58E55899F98AFC5E1E6EA30DD8C9C5B9EC984E);
		((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___LogExceptionAsFatalString_4 = _stringLiteral4765970D0D7133F1C1A69C95B203411B88124CF0;
		Il2CppCodeGenWriteBarrier((void**)(&((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___LogExceptionAsFatalString_4), (void*)_stringLiteral4765970D0D7133F1C1A69C95B203411B88124CF0);
		((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___IsCrashlyticsCollectionEnabledString_5 = _stringLiteral9F9B4EE95D601BB0BC08F3411BA88D91604FD8F9;
		Il2CppCodeGenWriteBarrier((void**)(&((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___IsCrashlyticsCollectionEnabledString_5), (void*)_stringLiteral9F9B4EE95D601BB0BC08F3411BA88D91604FD8F9);
		((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___SetCrashlyticsCollectionEnabledString_6 = _stringLiteral295135142B09D162981C567F1D15A5ED78CAAE14;
		Il2CppCodeGenWriteBarrier((void**)(&((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___SetCrashlyticsCollectionEnabledString_6), (void*)_stringLiteral295135142B09D162981C567F1D15A5ED78CAAE14);
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
// System.Void Firebase.Crashlytics.LoggedException::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggedException__ctor_m36E35A2257C4C4E77F61E97CDDF654E2E6B81A07 (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, String_t* ___0_name, String_t* ___1_message, String_t* ___2_stackTrace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		String_t* L_1 = ___0_name;
		LoggedException_set_Name_m1896D9976E235E316D5E9942212844B5A70830B0_inline(__this, L_1, NULL);
		String_t* L_2 = ___2_stackTrace;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		LoggedException_set_CustomStackTrace_m96C1F56677E625D1E964AE5EE6657BC51DACB08B_inline(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		goto IL_0033;
	}

IL_0029:
	{
		String_t* L_4 = ___2_stackTrace;
		LoggedException_set_CustomStackTrace_m96C1F56677E625D1E964AE5EE6657BC51DACB08B_inline(__this, L_4, NULL);
	}

IL_0033:
	{
		String_t* L_5;
		L_5 = LoggedException_get_CustomStackTrace_m09CFBAE4B46B47D83C10DD64462E13C250A83289_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_6;
		L_6 = StackTraceParser_ParseStackTraceString_m8C1BCC3D040CAA6827E0EFFE408EC500E0A485D0(L_5, NULL);
		LoggedException_set_ParsedStackTrace_m3B96F287A2952EC305C06EE0D55A8C6F002FDF20_inline(__this, L_6, NULL);
		return;
	}
}
// Firebase.Crashlytics.LoggedException Firebase.Crashlytics.LoggedException::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* LoggedException_FromException_mB66098F5B3617FE9C23C100DB4C1DE21B5704E6E (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* V_4 = NULL;
	{
		Exception_t* L_0 = ___0_exception;
		V_3 = (bool)((!(((RuntimeObject*)(LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887*)((LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887*)IsInstClass((RuntimeObject*)L_0, LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_2 = ___0_exception;
		V_4 = ((LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887*)CastclassClass((RuntimeObject*)L_2, LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887_il2cpp_TypeInfo_var));
		goto IL_003f;
	}

IL_0019:
	{
		Exception_t* L_3 = ___0_exception;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		V_0 = L_5;
		Exception_t* L_6 = ___0_exception;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_6);
		V_1 = L_7;
		Exception_t* L_8 = ___0_exception;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Exception::get_StackTrace() */, L_8);
		V_2 = L_9;
		String_t* L_10 = V_0;
		String_t* L_11 = V_1;
		String_t* L_12 = V_2;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_13 = (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887*)il2cpp_codegen_object_new(LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		LoggedException__ctor_m36E35A2257C4C4E77F61E97CDDF654E2E6B81A07(L_13, L_10, L_11, L_12, NULL);
		V_4 = L_13;
		goto IL_003f;
	}

IL_003f:
	{
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_14 = V_4;
		return L_14;
	}
}
// System.String Firebase.Crashlytics.LoggedException::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoggedException_get_Name_mDF6DE03566F5AF6854F272676AAFF9CCA93709E7 (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void Firebase.Crashlytics.LoggedException::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggedException_set_Name_m1896D9976E235E316D5E9942212844B5A70830B0 (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
// System.String Firebase.Crashlytics.LoggedException::get_CustomStackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoggedException_get_CustomStackTrace_m09CFBAE4B46B47D83C10DD64462E13C250A83289 (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCustomStackTraceU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void Firebase.Crashlytics.LoggedException::set_CustomStackTrace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggedException_set_CustomStackTrace_m96C1F56677E625D1E964AE5EE6657BC51DACB08B (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CCustomStackTraceU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCustomStackTraceU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String>[] Firebase.Crashlytics.LoggedException::get_ParsedStackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* LoggedException_get_ParsedStackTrace_m672B6D6A5AFFA99DAB7C4001BCCB7E2B5B4B7E56 (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_0 = __this->___U3CParsedStackTraceU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void Firebase.Crashlytics.LoggedException::set_ParsedStackTrace(System.Collections.Generic.Dictionary`2<System.String,System.String>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggedException_set_ParsedStackTrace_m3B96F287A2952EC305C06EE0D55A8C6F002FDF20 (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* ___0_value, const RuntimeMethod* method) 
{
	{
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_0 = ___0_value;
		__this->___U3CParsedStackTraceU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParsedStackTraceU3Ek__BackingField_20), (void*)L_0);
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
// System.Void Firebase.Crashlytics.Metadata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metadata__ctor_m152B834D7423AF0ED2D3A500786662C4350BEE92 (Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5D8AF07339C92C1C8A544FB0AED646C001200E8);
		s_Il2CppMethodInitialized = true;
	}
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0;
		L_0 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		__this->___uv_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uv_0), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(NULL);
		__this->___idb_1 = L_1;
		String_t* L_2;
		L_2 = SystemInfo_get_processorType_m985AB6C66E69918DF641BC1A589A3F9B4CE76FBE(NULL);
		__this->___pt_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pt_2), (void*)L_2);
		int32_t L_3;
		L_3 = SystemInfo_get_processorCount_m6B20AC11AEA09CA06278FBC47BAAEAA01BC7DB55(NULL);
		__this->___pc_3 = L_3;
		int32_t L_4;
		L_4 = SystemInfo_get_processorFrequency_mC3B994657AC07ECDFFF09E2B67AA90F5ED7F39E8(NULL);
		__this->___pf_4 = L_4;
		int32_t L_5;
		L_5 = SystemInfo_get_systemMemorySize_m3BFE40CF5A43FEAB94F5C552A47D04ECD88B771E(NULL);
		__this->___sms_5 = L_5;
		int32_t L_6;
		L_6 = SystemInfo_get_graphicsMemorySize_m05C833741F5F5C06FE9B4B9F50078A21E9E71ACF(NULL);
		__this->___gms_6 = L_6;
		int32_t L_7;
		L_7 = SystemInfo_get_graphicsDeviceID_m9CB876E71515AF035A36AF3185992D10AE2ED646(NULL);
		__this->___gdid_7 = L_7;
		int32_t L_8;
		L_8 = SystemInfo_get_graphicsDeviceVendorID_m9806D2F3459612C9FFE1A152BEB6BFB9D02C3309(NULL);
		__this->___gdvid_8 = L_8;
		String_t* L_9;
		L_9 = SystemInfo_get_graphicsDeviceName_mA3F2E2CA587AD5E212A38AD7D28559FD017451A2(NULL);
		__this->___gdn_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gdn_9), (void*)L_9);
		String_t* L_10;
		L_10 = SystemInfo_get_graphicsDeviceVendor_mE2D7A85437C820636639ADC124C965DB37B52204(NULL);
		__this->___gdv_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gdv_10), (void*)L_10);
		String_t* L_11;
		L_11 = SystemInfo_get_graphicsDeviceVersion_m8A157C76206F3CF7D9A3DA6F4BE188A6FEC0769C(NULL);
		__this->___gdver_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gdver_11), (void*)L_11);
		int32_t L_12;
		L_12 = SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545(NULL);
		__this->___gdt_12 = L_12;
		int32_t L_13;
		L_13 = SystemInfo_get_graphicsShaderLevel_m9E6B001FA80EFBFC92EF4E7440AE64828B15070F(NULL);
		__this->___gsl_13 = L_13;
		int32_t L_14;
		L_14 = SystemInfo_get_supportedRenderTargetCount_mA8696B2D9AB343F9D04B0F4F14A4A1F7098DBC34(NULL);
		__this->___grtc_14 = L_14;
		int32_t L_15;
		L_15 = SystemInfo_get_copyTextureSupport_m35C5E2D749B53757DD6F05492B5D79F364F466C2(NULL);
		__this->___gcts_15 = L_15;
		int32_t L_16;
		L_16 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
		__this->___gmts_16 = L_16;
		int32_t L_17;
		L_17 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		int32_t L_20;
		L_20 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralC5D8AF07339C92C1C8A544FB0AED646C001200E8, L_19, L_22, NULL);
		__this->___ss_17 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ss_17), (void*)L_23);
		float L_24;
		L_24 = Screen_get_dpi_mEEDAA2189F84A47BD69D62A611E031D5C59CFE8E(NULL);
		__this->___sdpi_18 = L_24;
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 L_25;
		L_25 = Screen_get_currentResolution_m8FE4C43E4F6EF28E0B85EB94B6C69D1EC5687CCD(NULL);
		V_0 = L_25;
		int32_t L_26;
		L_26 = Resolution_get_refreshRate_mBA65C6BC920F0045E798C9F096E830C135F37870((&V_0), NULL);
		__this->___srr_19 = L_26;
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
// System.String Firebase.Crashlytics.MetadataBuilder::GenerateMetadataJSON()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetadataBuilder_GenerateMetadataJSON_m9C53E7A4FEE2F79806EE7A176AC1FADA1080CBFC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094* V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094* L_0 = (Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094*)il2cpp_codegen_object_new(Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Metadata__ctor_m152B834D7423AF0ED2D3A500786662C4350BEE92(L_0, NULL);
		V_0 = L_0;
		Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094* L_1 = V_0;
		String_t* L_2;
		L_2 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_1, NULL);
		V_1 = L_2;
		goto IL_0031;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0011;
		}
		throw e;
	}

CATCH_0011:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_3 = V_2;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral94EFF030C9A3F8836D2235E04B3792B04BC2F807)), L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_5, NULL);
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	}// end catch (depth: 1)

IL_0031:
	{
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.Void Firebase.Crashlytics.MetadataBuilder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataBuilder__cctor_mEB269BA2D8F3CB67EF1F25C9D64B4DB84504B540 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2BFAE70197C0E422760DF3A996C13C7A418B318);
		s_Il2CppMethodInitialized = true;
	}
	{
		((MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_StaticFields*)il2cpp_codegen_static_fields_for(MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_il2cpp_TypeInfo_var))->___METADATA_KEY_0 = _stringLiteralF2BFAE70197C0E422760DF3A996C13C7A418B318;
		Il2CppCodeGenWriteBarrier((void**)(&((MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_StaticFields*)il2cpp_codegen_static_fields_for(MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_il2cpp_TypeInfo_var))->___METADATA_KEY_0), (void*)_stringLiteralF2BFAE70197C0E422760DF3A996C13C7A418B318);
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
// System.Collections.Generic.Dictionary`2<System.String,System.String>[] Firebase.Crashlytics.StackTraceParser::ParseStackTraceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* StackTraceParser_ParseStackTraceString_m8C1BCC3D040CAA6827E0EFFE408EC500E0A485D0 (String_t* ___0_stackTrace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m468CC11F68E7B1323DBC33BC15634AA8C520224A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m9E06DB4CA8D1508D73839BB47732C5FECFD88E5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4AA6E535BC1DD1E1308FD2D14FFE0E6A75A63207_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	bool V_3 = false;
	Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* V_4 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	{
		V_0 = (String_t*)NULL;
		List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C* L_0 = (List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C*)il2cpp_codegen_object_new(List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m4AA6E535BC1DD1E1308FD2D14FFE0E6A75A63207(L_0, List_1__ctor_m4AA6E535BC1DD1E1308FD2D14FFE0E6A75A63207_RuntimeMethod_var);
		V_1 = L_0;
		String_t* L_1 = ___0_stackTrace;
		il2cpp_codegen_runtime_class_init_inline(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___StringDelimiters_4;
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_1, L_2, 0, NULL);
		V_2 = L_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_2;
		NullCheck(L_4);
		V_3 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) < ((int32_t)1))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C* L_6 = V_1;
		NullCheck(L_6);
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_7;
		L_7 = List_1_ToArray_m9E06DB4CA8D1508D73839BB47732C5FECFD88E5E(L_6, List_1_ToArray_m9E06DB4CA8D1508D73839BB47732C5FECFD88E5E_RuntimeMethod_var);
		V_4 = L_7;
		goto IL_00c6;
	}

IL_002e:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_2;
		V_5 = L_8;
		V_6 = 0;
		goto IL_00b1;
	}

IL_0037:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_5;
		int32_t L_10 = V_6;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_7 = L_12;
		String_t* L_13 = V_7;
		il2cpp_codegen_runtime_class_init_inline(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		String_t* L_14 = ((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameRegexWithFileInfo_2;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* L_15;
		L_15 = Regex_Matches_m6173BAB925E8664D3E962C59D780625528CAC22F(L_13, L_14, NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = MatchCollection_get_Count_mF9D979B5B9D3835CC61977CBFB4110173B1CC926(L_15, NULL);
		V_9 = (bool)((((int32_t)L_16) == ((int32_t)1))? 1 : 0);
		bool L_17 = V_9;
		if (!L_17)
		{
			goto IL_0063;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		String_t* L_18 = ((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameRegexWithFileInfo_2;
		V_0 = L_18;
		goto IL_008a;
	}

IL_0063:
	{
		String_t* L_19 = V_7;
		il2cpp_codegen_runtime_class_init_inline(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		String_t* L_20 = ((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameRegexWithoutFileInfo_1;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* L_21;
		L_21 = Regex_Matches_m6173BAB925E8664D3E962C59D780625528CAC22F(L_19, L_20, NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = MatchCollection_get_Count_mF9D979B5B9D3835CC61977CBFB4110173B1CC926(L_21, NULL);
		V_10 = (bool)((((int32_t)L_22) == ((int32_t)1))? 1 : 0);
		bool L_23 = V_10;
		if (!L_23)
		{
			goto IL_0087;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		String_t* L_24 = ((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameRegexWithoutFileInfo_1;
		V_0 = L_24;
		goto IL_008a;
	}

IL_0087:
	{
		goto IL_00ab;
	}

IL_008a:
	{
		String_t* L_25 = V_0;
		String_t* L_26 = V_7;
		il2cpp_codegen_runtime_class_init_inline(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_27;
		L_27 = StackTraceParser_ParseFrameString_m4A987A4B13FCA52A4B510B4FB7A1C7C0E85B62C2(L_25, L_26, NULL);
		V_8 = L_27;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_28 = V_8;
		V_11 = (bool)((!(((RuntimeObject*)(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)L_28) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_29 = V_11;
		if (!L_29)
		{
			goto IL_00aa;
		}
	}
	{
		List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C* L_30 = V_1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_31 = V_8;
		NullCheck(L_30);
		List_1_Add_m468CC11F68E7B1323DBC33BC15634AA8C520224A_inline(L_30, L_31, List_1_Add_m468CC11F68E7B1323DBC33BC15634AA8C520224A_RuntimeMethod_var);
	}

IL_00aa:
	{
	}

IL_00ab:
	{
		int32_t L_32 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00b1:
	{
		int32_t L_33 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = V_5;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_0037;
		}
	}
	{
		List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C* L_35 = V_1;
		NullCheck(L_35);
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_36;
		L_36 = List_1_ToArray_m9E06DB4CA8D1508D73839BB47732C5FECFD88E5E(L_35, List_1_ToArray_m9E06DB4CA8D1508D73839BB47732C5FECFD88E5E_RuntimeMethod_var);
		V_4 = L_36;
		goto IL_00c6;
	}

IL_00c6:
	{
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_37 = V_4;
		return L_37;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Firebase.Crashlytics.StackTraceParser::ParseFrameString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* StackTraceParser_ParseFrameString_m4A987A4B13FCA52A4B510B4FB7A1C7C0E85B62C2 (String_t* ___0_regex, String_t* ___1_frameString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral614B501556B12B5890C878B29FB23C1807F2B680);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* V_0 = NULL;
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_4 = NULL;
	bool V_5 = false;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	String_t* G_B10_0 = NULL;
	String_t* G_B13_0 = NULL;
	{
		String_t* L_0 = ___1_frameString;
		String_t* L_1 = ___0_regex;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* L_2;
		L_2 = Regex_Matches_m6173BAB925E8664D3E962C59D780625528CAC22F(L_0, L_1, NULL);
		V_0 = L_2;
		MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = MatchCollection_get_Count_mF9D979B5B9D3835CC61977CBFB4110173B1CC926(L_3, NULL);
		V_5 = (bool)((((int32_t)L_4) < ((int32_t)1))? 1 : 0);
		bool L_5 = V_5;
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		V_6 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL;
		goto IL_017e;
	}

IL_0021:
	{
		MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* L_6 = V_0;
		NullCheck(L_6);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_7;
		L_7 = VirtualFuncInvoker1< Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F*, int32_t >::Invoke(35 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, L_6, 0);
		V_1 = L_7;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_8 = V_1;
		NullCheck(L_8);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_9;
		L_9 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_8);
		NullCheck(L_9);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_10;
		L_10 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_9, _stringLiteral614B501556B12B5890C878B29FB23C1807F2B680, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_10, NULL);
		if (!L_11)
		{
			goto IL_005a;
		}
	}
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_12 = V_1;
		NullCheck(L_12);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_13;
		L_13 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_12);
		NullCheck(L_13);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_14;
		L_14 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_13, _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF, NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_14, NULL);
		G_B5_0 = ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		goto IL_005b;
	}

IL_005a:
	{
		G_B5_0 = 1;
	}

IL_005b:
	{
		V_7 = (bool)G_B5_0;
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_006a;
		}
	}
	{
		V_6 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL;
		goto IL_017e;
	}

IL_006a:
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_17 = V_1;
		NullCheck(L_17);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_18;
		L_18 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_17);
		NullCheck(L_18);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_19;
		L_19 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_18, _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E, NULL);
		NullCheck(L_19);
		bool L_20;
		L_20 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_19, NULL);
		if (L_20)
		{
			goto IL_0098;
		}
	}
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_21 = V_1;
		NullCheck(L_21);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_22;
		L_22 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_21);
		NullCheck(L_22);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_23;
		L_23 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_22, _stringLiteral614B501556B12B5890C878B29FB23C1807F2B680, NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_23, NULL);
		G_B10_0 = L_24;
		goto IL_00ad;
	}

IL_0098:
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_25 = V_1;
		NullCheck(L_25);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_26;
		L_26 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_25);
		NullCheck(L_26);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_27;
		L_27 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_26, _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E, NULL);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_27, NULL);
		G_B10_0 = L_28;
	}

IL_00ad:
	{
		V_2 = G_B10_0;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_29 = V_1;
		NullCheck(L_29);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_30;
		L_30 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_29);
		NullCheck(L_30);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_31;
		L_31 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_30, _stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D, NULL);
		NullCheck(L_31);
		bool L_32;
		L_32 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_31, NULL);
		if (L_32)
		{
			goto IL_00cc;
		}
	}
	{
		G_B13_0 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
		goto IL_00e1;
	}

IL_00cc:
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_33 = V_1;
		NullCheck(L_33);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_34;
		L_34 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_33);
		NullCheck(L_34);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_35;
		L_35 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_34, _stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D, NULL);
		NullCheck(L_35);
		String_t* L_36;
		L_36 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_35, NULL);
		G_B13_0 = L_36;
	}

IL_00e1:
	{
		V_3 = G_B13_0;
		String_t* L_37 = V_2;
		il2cpp_codegen_runtime_class_init_inline(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		String_t* L_38 = ((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___MonoFilenameUnknownString_3;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, L_38, NULL);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0111;
		}
	}
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_41 = V_1;
		NullCheck(L_41);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_42;
		L_42 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_41);
		NullCheck(L_42);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_43;
		L_43 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_42, _stringLiteral614B501556B12B5890C878B29FB23C1807F2B680, NULL);
		NullCheck(L_43);
		String_t* L_44;
		L_44 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_43, NULL);
		V_2 = L_44;
		V_3 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
	}

IL_0111:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_45 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_45, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_4 = L_45;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_46 = V_4;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_47 = V_1;
		NullCheck(L_47);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_48;
		L_48 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_47);
		NullCheck(L_48);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_49;
		L_49 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_48, _stringLiteral614B501556B12B5890C878B29FB23C1807F2B680, NULL);
		NullCheck(L_49);
		String_t* L_50;
		L_50 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_49, NULL);
		NullCheck(L_46);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_46, _stringLiteral614B501556B12B5890C878B29FB23C1807F2B680, L_50, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_51 = V_4;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_52 = V_1;
		NullCheck(L_52);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_53;
		L_53 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_52);
		NullCheck(L_53);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_54;
		L_54 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_53, _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF, NULL);
		NullCheck(L_54);
		String_t* L_55;
		L_55 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_54, NULL);
		NullCheck(L_51);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_51, _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF, L_55, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_56 = V_4;
		String_t* L_57 = V_2;
		NullCheck(L_56);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_56, _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E, L_57, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_58 = V_4;
		String_t* L_59 = V_3;
		NullCheck(L_58);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_58, _stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D, L_59, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_60 = V_4;
		V_6 = L_60;
		goto IL_017e;
	}

IL_017e:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_61 = V_6;
		return L_61;
	}
}
// System.Void Firebase.Crashlytics.StackTraceParser::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTraceParser__cctor_m8414564CE5C51F358C64A7814D32BF603A26359E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C6D64B7A0CDB6E3207FA23727AD41AA18ED8FF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94638D7F4A43B841B52AF845739D3C73F4D2A8BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE84FE8ECE4A6DB8454F274D15DECBFFE3DE403F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD36337CE50D01489EBB3C0651FFACABE7674F341);
		s_Il2CppMethodInitialized = true;
	}
	{
		((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameArgsRegex_0 = _stringLiteralD36337CE50D01489EBB3C0651FFACABE7674F341;
		Il2CppCodeGenWriteBarrier((void**)(&((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameArgsRegex_0), (void*)_stringLiteralD36337CE50D01489EBB3C0651FFACABE7674F341);
		String_t* L_0 = ((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameArgsRegex_0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBE84FE8ECE4A6DB8454F274D15DECBFFE3DE403F, L_0, NULL);
		((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameRegexWithoutFileInfo_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameRegexWithoutFileInfo_1), (void*)L_1);
		String_t* L_2 = ((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameRegexWithoutFileInfo_1;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteral94638D7F4A43B841B52AF845739D3C73F4D2A8BB, NULL);
		((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameRegexWithFileInfo_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameRegexWithFileInfo_2), (void*)L_3);
		((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___MonoFilenameUnknownString_3 = _stringLiteral0C6D64B7A0CDB6E3207FA23727AD41AA18ED8FF5;
		Il2CppCodeGenWriteBarrier((void**)(&((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___MonoFilenameUnknownString_3), (void*)_stringLiteral0C6D64B7A0CDB6E3207FA23727AD41AA18ED8FF5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6;
		L_6 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___StringDelimiters_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___StringDelimiters_4), (void*)L_5);
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
// Conversion methods for marshalling of: Firebase.Crashlytics.Frame
IL2CPP_EXTERN_C void Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshal_pinvoke(const Frame_t2D1277096973249B7867E50EF96B8364B1C46009& unmarshaled, Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshaled_pinvoke& marshaled)
{
	marshaled.___library_0 = il2cpp_codegen_marshal_string(unmarshaled.___library_0);
	marshaled.___symbol_1 = il2cpp_codegen_marshal_string(unmarshaled.___symbol_1);
	marshaled.___fileName_2 = il2cpp_codegen_marshal_string(unmarshaled.___fileName_2);
	marshaled.___lineNumber_3 = il2cpp_codegen_marshal_string(unmarshaled.___lineNumber_3);
}
IL2CPP_EXTERN_C void Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshal_pinvoke_back(const Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshaled_pinvoke& marshaled, Frame_t2D1277096973249B7867E50EF96B8364B1C46009& unmarshaled)
{
	unmarshaled.___library_0 = il2cpp_codegen_marshal_string_result(marshaled.___library_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___library_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___library_0));
	unmarshaled.___symbol_1 = il2cpp_codegen_marshal_string_result(marshaled.___symbol_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___symbol_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___symbol_1));
	unmarshaled.___fileName_2 = il2cpp_codegen_marshal_string_result(marshaled.___fileName_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___fileName_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___fileName_2));
	unmarshaled.___lineNumber_3 = il2cpp_codegen_marshal_string_result(marshaled.___lineNumber_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___lineNumber_3), (void*)il2cpp_codegen_marshal_string_result(marshaled.___lineNumber_3));
}
// Conversion method for clean up from marshalling of: Firebase.Crashlytics.Frame
IL2CPP_EXTERN_C void Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshal_pinvoke_cleanup(Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___library_0);
	marshaled.___library_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___symbol_1);
	marshaled.___symbol_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___fileName_2);
	marshaled.___fileName_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___lineNumber_3);
	marshaled.___lineNumber_3 = NULL;
}
// Conversion methods for marshalling of: Firebase.Crashlytics.Frame
IL2CPP_EXTERN_C void Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshal_com(const Frame_t2D1277096973249B7867E50EF96B8364B1C46009& unmarshaled, Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshaled_com& marshaled)
{
	marshaled.___library_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___library_0);
	marshaled.___symbol_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___symbol_1);
	marshaled.___fileName_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___fileName_2);
	marshaled.___lineNumber_3 = il2cpp_codegen_marshal_bstring(unmarshaled.___lineNumber_3);
}
IL2CPP_EXTERN_C void Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshal_com_back(const Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshaled_com& marshaled, Frame_t2D1277096973249B7867E50EF96B8364B1C46009& unmarshaled)
{
	unmarshaled.___library_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___library_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___library_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___library_0));
	unmarshaled.___symbol_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___symbol_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___symbol_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___symbol_1));
	unmarshaled.___fileName_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___fileName_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___fileName_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___fileName_2));
	unmarshaled.___lineNumber_3 = il2cpp_codegen_marshal_bstring_result(marshaled.___lineNumber_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___lineNumber_3), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___lineNumber_3));
}
// Conversion method for clean up from marshalling of: Firebase.Crashlytics.Frame
IL2CPP_EXTERN_C void Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshal_com_cleanup(Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___library_0);
	marshaled.___library_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___symbol_1);
	marshaled.___symbol_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___fileName_2);
	marshaled.___fileName_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___lineNumber_3);
	marshaled.___lineNumber_3 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Crashlytics.AndroidImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidImpl__ctor_m94EE2C86B032B1858535A88AE69EBCF297634EDD (AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		Impl__ctor_m761BF52C0FBB4326D40254285021B9E3F67404C6(__this, NULL);
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
// System.Boolean Firebase.Crashlytics.IOSImpl::CLUIsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSImpl_CLUIsInitialized_mFA11BDA300C37D9DD09992F2AFCD62BECF337737 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CLUIsInitialized)();

	return static_cast<bool>(returnValue);
}
// System.Void Firebase.Crashlytics.IOSImpl::CLUSetInternalKeyValue(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSImpl_CLUSetInternalKeyValue_mE9289DCF4A2B44EC7A099C8CF69D42C75596F712 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___0_key' to native representation
	char* ____0_key_marshaled = NULL;
	____0_key_marshaled = il2cpp_codegen_marshal_string(___0_key);

	// Marshaling of parameter '___1_value' to native representation
	char* ____1_value_marshaled = NULL;
	____1_value_marshaled = il2cpp_codegen_marshal_string(___1_value);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(CLUSetInternalKeyValue)(____0_key_marshaled, ____1_value_marshaled);

	// Marshaling cleanup of parameter '___0_key' native representation
	il2cpp_codegen_marshal_free(____0_key_marshaled);
	____0_key_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_value' native representation
	il2cpp_codegen_marshal_free(____1_value_marshaled);
	____1_value_marshaled = NULL;

}
// System.Void Firebase.Crashlytics.IOSImpl::CLUSetDevelopmentPlatform(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSImpl_CLUSetDevelopmentPlatform_m05529D4E43F95724E595C656D549FD81B3DC3BC0 (String_t* ___0_name, String_t* ___1_version, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___0_name' to native representation
	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	// Marshaling of parameter '___1_version' to native representation
	char* ____1_version_marshaled = NULL;
	____1_version_marshaled = il2cpp_codegen_marshal_string(___1_version);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(CLUSetDevelopmentPlatform)(____0_name_marshaled, ____1_version_marshaled);

	// Marshaling cleanup of parameter '___0_name' native representation
	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_version' native representation
	il2cpp_codegen_marshal_free(____1_version_marshaled);
	____1_version_marshaled = NULL;

}
// System.Void Firebase.Crashlytics.IOSImpl::CLURecordCustomException(System.String,System.String,Firebase.Crashlytics.Frame[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSImpl_CLURecordCustomException_mF617BD1C3FC4522DB9862690F462D115A951C613 (String_t* ___0_name, String_t* ___1_reason, FrameU5BU5D_t3D1B3D3390EA2FB2AC2CC5C7F91F63B72B45FD9C* ___2_frames, int32_t ___3_frameCount, bool ___4_isOnDemand, const RuntimeMethod* method) 
{


	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshaled_pinvoke*, int32_t, int32_t);

	// Marshaling of parameter '___0_name' to native representation
	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	// Marshaling of parameter '___1_reason' to native representation
	char* ____1_reason_marshaled = NULL;
	____1_reason_marshaled = il2cpp_codegen_marshal_string(___1_reason);

	// Marshaling of parameter '___2_frames' to native representation
	Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshaled_pinvoke* ____2_frames_marshaled = NULL;
	if (___2_frames != NULL)
	{
		il2cpp_array_size_t ____2_frames_Length = (___2_frames)->max_length;
		____2_frames_marshaled = il2cpp_codegen_marshal_allocate_array<Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshaled_pinvoke>(____2_frames_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____2_frames_Length); i++)
		{
			Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshal_pinvoke((___2_frames)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (____2_frames_marshaled)[i]);
		}
	}
	else
	{
		____2_frames_marshaled = NULL;
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(CLURecordCustomException)(____0_name_marshaled, ____1_reason_marshaled, ____2_frames_marshaled, ___3_frameCount, static_cast<int32_t>(___4_isOnDemand));

	// Marshaling cleanup of parameter '___0_name' native representation
	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_reason' native representation
	il2cpp_codegen_marshal_free(____1_reason_marshaled);
	____1_reason_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_frames' native representation
	if (____2_frames_marshaled != NULL)
	{
		const il2cpp_array_size_t ____2_frames_marshaled_CleanupLoopCount = (___2_frames != NULL) ? (___2_frames)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____2_frames_marshaled_CleanupLoopCount); i++)
		{
			Frame_t2D1277096973249B7867E50EF96B8364B1C46009_marshal_pinvoke_cleanup((____2_frames_marshaled)[i]);
		}
		il2cpp_codegen_marshal_free(____2_frames_marshaled);
		____2_frames_marshaled = NULL;
	}

}
// System.Void Firebase.Crashlytics.IOSImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSImpl__ctor_mB8C8A9D9B5516E0F464BFD962656ED87ACA6E70E (IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		Impl__ctor_m761BF52C0FBB4326D40254285021B9E3F67404C6(__this, NULL);
		String_t* L_0;
		L_0 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		IOSImpl_CLUSetDevelopmentPlatform_m05529D4E43F95724E595C656D549FD81B3DC3BC0(_stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_il2cpp_TypeInfo_var);
		String_t* L_1 = ((MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_StaticFields*)il2cpp_codegen_static_fields_for(MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_il2cpp_TypeInfo_var))->___METADATA_KEY_0;
		String_t* L_2;
		L_2 = MetadataBuilder_GenerateMetadataJSON_m9C53E7A4FEE2F79806EE7A176AC1FADA1080CBFC(NULL);
		IOSImpl_CLUSetInternalKeyValue_mE9289DCF4A2B44EC7A099C8CF69D42C75596F712(L_1, L_2, NULL);
		return;
	}
}
// System.Boolean Firebase.Crashlytics.IOSImpl::IsSDKInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSImpl_IsSDKInitialized_m09DBF7DEBD8390AA8C8D450289761B3B6EADC42C (IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = IOSImpl_CLUIsInitialized_mFA11BDA300C37D9DD09992F2AFCD62BECF337737(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.Crashlytics.IOSImpl::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSImpl_LogException_m2CE4A802DDA2AE8AF0CBA1D80D0FF071FD6EEE50 (IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* V_0 = NULL;
	{
		Exception_t* L_0 = ___0_exception;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_1;
		L_1 = LoggedException_FromException_mB66098F5B3617FE9C23C100DB4C1DE21B5704E6E(L_0, NULL);
		V_0 = L_1;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_2 = V_0;
		IOSImpl_RecordCustomException_mE9382238D98984FE15AA2A82215BFBB46DD84BB2(__this, L_2, (bool)0, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.IOSImpl::LogExceptionAsFatal(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSImpl_LogExceptionAsFatal_mB95BA046803ACF9585431CCFEA5E3C3571923AB0 (IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* V_0 = NULL;
	{
		Exception_t* L_0 = ___0_exception;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_1;
		L_1 = LoggedException_FromException_mB66098F5B3617FE9C23C100DB4C1DE21B5704E6E(L_0, NULL);
		V_0 = L_1;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_2 = V_0;
		IOSImpl_RecordCustomException_mE9382238D98984FE15AA2A82215BFBB46DD84BB2(__this, L_2, (bool)1, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.IOSImpl::RecordCustomException(Firebase.Crashlytics.LoggedException,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSImpl_RecordCustomException_mE9382238D98984FE15AA2A82215BFBB46DD84BB2 (IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD* __this, LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* ___0_loggedException, bool ___1_isOnDemand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_mF95EB107F9B1D2AEF1A34FA4D682DAF1954BDE96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Take_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_mBB883D0427D32B9BDF80D680BC69EC474F874258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_m274B6528560C1E1DE5B74049843690753D75F9FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m609FB9DF294CC037F5A6B400A2FE0D54A6268704_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mAAE18D3A341FF02393197A2C0BB884A1F5377B35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5ADB72DB206F3693C6549785C2447F914D44BBAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE185CEB74541D006CC213D7E4B4EA0C1CBF91785_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral614B501556B12B5890C878B29FB23C1807F2B680);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* V_0 = NULL;
	List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* V_4 = NULL;
	bool V_5 = false;
	Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* V_6 = NULL;
	Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* V_7 = NULL;
	int32_t V_8 = 0;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_9 = NULL;
	Frame_t2D1277096973249B7867E50EF96B8364B1C46009 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t G_B3_0 = 0;
	{
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_0 = ___0_loggedException;
		NullCheck(L_0);
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_1;
		L_1 = LoggedException_get_ParsedStackTrace_m672B6D6A5AFFA99DAB7C4001BCCB7E2B5B4B7E56_inline(L_0, NULL);
		V_0 = L_1;
		bool L_2 = ___1_isOnDemand;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_3 = V_0;
		NullCheck(L_3);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_3)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_5;
		L_5 = Environment_get_StackTrace_mE8E276A919C9C9D59220E6D2BA867FABFD9B011D(NULL);
		V_3 = L_5;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_6 = ___0_loggedException;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = LoggedException_get_Name_mDF6DE03566F5AF6854F272676AAFF9CCA93709E7_inline(L_6, NULL);
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_8 = ___0_loggedException;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_8);
		String_t* L_10 = V_3;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_11 = (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887*)il2cpp_codegen_object_new(LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		LoggedException__ctor_m36E35A2257C4C4E77F61E97CDDF654E2E6B81A07(L_11, L_7, L_9, L_10, NULL);
		V_4 = L_11;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_12 = V_4;
		NullCheck(L_12);
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_13;
		L_13 = LoggedException_get_ParsedStackTrace_m672B6D6A5AFFA99DAB7C4001BCCB7E2B5B4B7E56_inline(L_12, NULL);
		V_0 = L_13;
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_14 = V_0;
		NullCheck(L_14);
		V_5 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))) > ((int32_t)2))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_16 = V_0;
		RuntimeObject* L_17;
		L_17 = Enumerable_Skip_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_mF95EB107F9B1D2AEF1A34FA4D682DAF1954BDE96((RuntimeObject*)L_16, 2, Enumerable_Skip_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_mF95EB107F9B1D2AEF1A34FA4D682DAF1954BDE96_RuntimeMethod_var);
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_18 = V_0;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = Enumerable_Take_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_mBB883D0427D32B9BDF80D680BC69EC474F874258(L_17, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_18)->max_length)), 2)), Enumerable_Take_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_mBB883D0427D32B9BDF80D680BC69EC474F874258_RuntimeMethod_var);
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_20;
		L_20 = Enumerable_ToArray_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_m274B6528560C1E1DE5B74049843690753D75F9FD(L_19, Enumerable_ToArray_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_m274B6528560C1E1DE5B74049843690753D75F9FD_RuntimeMethod_var);
		V_6 = L_20;
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_21 = V_6;
		V_0 = L_21;
	}

IL_0063:
	{
	}

IL_0064:
	{
		List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12* L_22 = (List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12*)il2cpp_codegen_object_new(List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		List_1__ctor_m5ADB72DB206F3693C6549785C2447F914D44BBAF(L_22, List_1__ctor_m5ADB72DB206F3693C6549785C2447F914D44BBAF_RuntimeMethod_var);
		V_1 = L_22;
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_23 = V_0;
		V_7 = L_23;
		V_8 = 0;
		goto IL_00df;
	}

IL_0073:
	{
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_24 = V_7;
		int32_t L_25 = V_8;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_9 = L_27;
		List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12* L_28 = V_1;
		il2cpp_codegen_initobj((&V_10), sizeof(Frame_t2D1277096973249B7867E50EF96B8364B1C46009));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_29 = V_9;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_29, _stringLiteral614B501556B12B5890C878B29FB23C1807F2B680, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		(&V_10)->___library_0 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_10)->___library_0), (void*)L_30);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_31 = V_9;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_31, _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		(&V_10)->___symbol_1 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_10)->___symbol_1), (void*)L_32);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_33 = V_9;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_33, _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		(&V_10)->___fileName_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_10)->___fileName_2), (void*)L_34);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_35 = V_9;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_35, _stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		(&V_10)->___lineNumber_3 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_10)->___lineNumber_3), (void*)L_36);
		Frame_t2D1277096973249B7867E50EF96B8364B1C46009 L_37 = V_10;
		NullCheck(L_28);
		List_1_Add_m609FB9DF294CC037F5A6B400A2FE0D54A6268704_inline(L_28, L_37, List_1_Add_m609FB9DF294CC037F5A6B400A2FE0D54A6268704_RuntimeMethod_var);
		int32_t L_38 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00df:
	{
		int32_t L_39 = V_8;
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_40 = V_7;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0073;
		}
	}
	{
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_41 = ___0_loggedException;
		NullCheck(L_41);
		String_t* L_42;
		L_42 = LoggedException_get_Name_mDF6DE03566F5AF6854F272676AAFF9CCA93709E7_inline(L_41, NULL);
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_43 = ___0_loggedException;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_43);
		List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12* L_45 = V_1;
		NullCheck(L_45);
		FrameU5BU5D_t3D1B3D3390EA2FB2AC2CC5C7F91F63B72B45FD9C* L_46;
		L_46 = List_1_ToArray_mAAE18D3A341FF02393197A2C0BB884A1F5377B35(L_45, List_1_ToArray_mAAE18D3A341FF02393197A2C0BB884A1F5377B35_RuntimeMethod_var);
		List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12* L_47 = V_1;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = List_1_get_Count_mE185CEB74541D006CC213D7E4B4EA0C1CBF91785_inline(L_47, List_1_get_Count_mE185CEB74541D006CC213D7E4B4EA0C1CBF91785_RuntimeMethod_var);
		bool L_49 = ___1_isOnDemand;
		IOSImpl_CLURecordCustomException_mF617BD1C3FC4522DB9862690F462D115A951C613(L_42, L_44, L_46, L_48, L_49, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline (UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____exception_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Crashlytics_get_ReportUncaughtExceptionsAsFatal_mDE723695962FC10E3F0E20C673B668E7D73D4F11_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var);
		bool L_0 = ((Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_StaticFields*)il2cpp_codegen_static_fields_for(Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var))->___U3CReportUncaughtExceptionsAsFatalU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoggedException_set_Name_m1896D9976E235E316D5E9942212844B5A70830B0_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoggedException_set_CustomStackTrace_m96C1F56677E625D1E964AE5EE6657BC51DACB08B_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CCustomStackTraceU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCustomStackTraceU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoggedException_get_CustomStackTrace_m09CFBAE4B46B47D83C10DD64462E13C250A83289_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCustomStackTraceU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoggedException_set_ParsedStackTrace_m3B96F287A2952EC305C06EE0D55A8C6F002FDF20_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* ___0_value, const RuntimeMethod* method) 
{
	{
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_0 = ___0_value;
		__this->___U3CParsedStackTraceU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParsedStackTraceU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* LoggedException_get_ParsedStackTrace_m672B6D6A5AFFA99DAB7C4001BCCB7E2B5B4B7E56_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_0 = __this->___U3CParsedStackTraceU3Ek__BackingField_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoggedException_get_Name_mDF6DE03566F5AF6854F272676AAFF9CCA93709E7_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m609FB9DF294CC037F5A6B400A2FE0D54A6268704_gshared_inline (List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12* __this, Frame_t2D1277096973249B7867E50EF96B8364B1C46009 ___0_item, const RuntimeMethod* method) 
{
	FrameU5BU5D_t3D1B3D3390EA2FB2AC2CC5C7F91F63B72B45FD9C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		FrameU5BU5D_t3D1B3D3390EA2FB2AC2CC5C7F91F63B72B45FD9C* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		FrameU5BU5D_t3D1B3D3390EA2FB2AC2CC5C7F91F63B72B45FD9C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		FrameU5BU5D_t3D1B3D3390EA2FB2AC2CC5C7F91F63B72B45FD9C* L_6 = V_0;
		int32_t L_7 = V_1;
		Frame_t2D1277096973249B7867E50EF96B8364B1C46009 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Frame_t2D1277096973249B7867E50EF96B8364B1C46009)L_8);
		return;
	}

IL_0034:
	{
		Frame_t2D1277096973249B7867E50EF96B8364B1C46009 L_9 = ___0_item;
		((  void (*) (List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12*, Frame_t2D1277096973249B7867E50EF96B8364B1C46009, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE185CEB74541D006CC213D7E4B4EA0C1CBF91785_gshared_inline (List_1_t1B8091359577E15FDA0526CA135A1E1BDE303D12* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
