#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// ES3Internal.ES3Member[]
struct ES3MemberU5BU5D_t5320E3A904B7810CCE7F613C15284E403EAEF8DC;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// ES3Types.ES3ArrayType
struct ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535;
// ES3Reader
struct ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B;
// ES3Settings
struct ES3Settings_t65AC4582C03C21A9D3090FE498071C470A130BF2;
// ES3Types.ES3Type
struct ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE;
// ES3Types.ES3Type_SizeBySpeedModule
struct ES3Type_SizeBySpeedModule_t1268F7B8F5C4B40322FDD3E6CAC5B80C74D9FD5D;
// ES3Types.ES3Type_SizeOverLifetimeModule
struct ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F;
// ES3Types.ES3Type_SkinnedMeshRenderer
struct ES3Type_SkinnedMeshRenderer_tFF90E4BACFFA1E5FAF1FD6EF3118B3AFCC1D4019;
// ES3Types.ES3Type_SphereCollider
struct ES3Type_SphereCollider_t41A8F4C79A0F595F31A356EDE1CF65887377E8BB;
// ES3Types.ES3Type_Sprite
struct ES3Type_Sprite_t12CE66318CA9CEBA9F08514B630AE12F23266F10;
// ES3Types.ES3Type_SpriteRenderer
struct ES3Type_SpriteRenderer_tD67ABA492E176020743E5D4DED7C651F0FE4DC8B;
// ES3Types.ES3Type_SubEmittersModule
struct ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A;

IL2CPP_EXTERN_C RuntimeClass* ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Bounds_t62D3E6681258D7C0B7CF4764154B0E6246A9A260_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Sprite_t12CE66318CA9CEBA9F08514B630AE12F23266F10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_floatArray_t292E12EC0E03DD7283C180A4DAB1BFFF4A5423ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral07B42771F94A775E3DA27DF681FC6B5836E8C54F;
IL2CPP_EXTERN_C String_t* _stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A;
IL2CPP_EXTERN_C String_t* _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9;
IL2CPP_EXTERN_C String_t* _stringLiteral1F9261ABE85940E10CA48B7B42F1E5267F122734;
IL2CPP_EXTERN_C String_t* _stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19;
IL2CPP_EXTERN_C String_t* _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5;
IL2CPP_EXTERN_C String_t* _stringLiteral300CA1BACB3617C0704FA17879EE87F5EE04FACB;
IL2CPP_EXTERN_C String_t* _stringLiteral338DFB21C4BCDE10C2A6B0F6B758581AB45E283A;
IL2CPP_EXTERN_C String_t* _stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED;
IL2CPP_EXTERN_C String_t* _stringLiteral35D48CEE13BEC2D9912C51B56AEE98CCBF2F598E;
IL2CPP_EXTERN_C String_t* _stringLiteral3EC42735CF07DB9169F6821DC94EB45DE6B5E1AA;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B;
IL2CPP_EXTERN_C String_t* _stringLiteral416E9D0238C213CFB1C61EDAB93C78CA25E2D04B;
IL2CPP_EXTERN_C String_t* _stringLiteral4845015737DC41475709911228278216EE4DC3AF;
IL2CPP_EXTERN_C String_t* _stringLiteral49E8F5255C0235CF3C6747DD1A447699E1AA2759;
IL2CPP_EXTERN_C String_t* _stringLiteral4E04E7564B2B76DBD228760282F0982D7BC0AFDA;
IL2CPP_EXTERN_C String_t* _stringLiteral565FD04664DC0BE28E9E966B19A5341FD8C2DC3B;
IL2CPP_EXTERN_C String_t* _stringLiteral6F7F9963A2354D2A1DAE9EB5D17828E80398A34E;
IL2CPP_EXTERN_C String_t* _stringLiteral72ECDD9F8744E37D4431E7D17FE954DD88ABF383;
IL2CPP_EXTERN_C String_t* _stringLiteral73792CCBAF937C765700AA0D7388BC226F003166;
IL2CPP_EXTERN_C String_t* _stringLiteral7E7975F5870DE751BD38D4E3A4C0644FFCF21C5F;
IL2CPP_EXTERN_C String_t* _stringLiteral81787047FD5FE9202731B83C06E2CA803858DB13;
IL2CPP_EXTERN_C String_t* _stringLiteral82A38EB534B163662598A55A70842F5AA8919477;
IL2CPP_EXTERN_C String_t* _stringLiteral843D6122FFBBF465C80ECD6FDFC0DF88BEAF4E14;
IL2CPP_EXTERN_C String_t* _stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1;
IL2CPP_EXTERN_C String_t* _stringLiteral892582A238DF4FFEB2A2E7DD5D90A9A7AC6C26C4;
IL2CPP_EXTERN_C String_t* _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB;
IL2CPP_EXTERN_C String_t* _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0;
IL2CPP_EXTERN_C String_t* _stringLiteral8DD0A7170C2DECE4F5E82F96AB9B00AAEBA9F438;
IL2CPP_EXTERN_C String_t* _stringLiteral8F76FFC503D9127950E3EAD1DFD82A8C6C91F728;
IL2CPP_EXTERN_C String_t* _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934;
IL2CPP_EXTERN_C String_t* _stringLiteralA0ECA3668A8B14855295BD8DD5E88309AF31330B;
IL2CPP_EXTERN_C String_t* _stringLiteralBB43137F5798267E1A82DD467143B245A821F93F;
IL2CPP_EXTERN_C String_t* _stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4;
IL2CPP_EXTERN_C String_t* _stringLiteralBDBEBC1E8A863EAF2A1EFDC4D2393F1540ABF0C9;
IL2CPP_EXTERN_C String_t* _stringLiteralC51D373B25723E8ADF9BE9C06A196725DF68C54E;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406;
IL2CPP_EXTERN_C String_t* _stringLiteralC8D7651AAAFAAA9A55123A4B14C546BC27C603E7;
IL2CPP_EXTERN_C String_t* _stringLiteralCFEB83A996CD34035197889D46A13DB9901EE76F;
IL2CPP_EXTERN_C String_t* _stringLiteralD0D915A2B403702AB1F18A340F6557F4030455A2;
IL2CPP_EXTERN_C String_t* _stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B;
IL2CPP_EXTERN_C String_t* _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D;
IL2CPP_EXTERN_C String_t* _stringLiteralDDA23639367EB0B86F361EA02AD294BDFDE6BA0B;
IL2CPP_EXTERN_C String_t* _stringLiteralE5F2AD4FF502002CA1798B22867D45AAB84AB3BD;
IL2CPP_EXTERN_C String_t* _stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF;
IL2CPP_EXTERN_C String_t* _stringLiteralE88CEA670D83FE6CD2A52F3E973A7740F94C4E50;
IL2CPP_EXTERN_C String_t* _stringLiteralF04D2BD9D99AD6218FC8C63B094FB3F1333E7F44;
IL2CPP_EXTERN_C String_t* _stringLiteralF26F502B14F503952C33ADFF928357DED0388E8D;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mBED8067992048B8235F965838499FB03E34C4F21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m88F5AE4F47F57108F2D11503B0CF0F3A8B39DE95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948_m21A35630F47AA42AB097D915807D6BD53CBF3CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_m2E281152A940F223547F05BA3E2942B1C8E0A1E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m6FD4650843988DE254D2352A149F9E0D7B56DA4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB_m1F66D8A5665BB474661ED5537E62D626955D6136_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mECF2B10A4C80058FBC2FD485B335DF6CFBDC3CFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mA6BC0966573158BAA04C16A59D4C29333C825CA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisReflectionProbeUsage_t033508C14CD4AD926A3A215D19913DC21EA22705_mB304BCA0B08E6B3DC4277CD20BF0C7EAC55B336A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D_mF7F8CC6CE7025057CF127A89A9AE1DE8F3E37635_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_m61A448A3A155CB223248C94B0849116850949A33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSkinQuality_tFFFBBA855612EBEAC68BFEBCD1D8F62B26DE3827_mB79C3CBFFB560ED731483C95EC73D2BD5793C164_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m57987108AA25694462069F74A68455A0721D37BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m80ED457EC2261E8551ECFF0C5BD1FB53EF4B34E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_m93FBA20AC99C728D452A81F685AAC9BC024F64EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m65C5A6DA0BFF389A8968C68CBF5690D521C379A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE64B23668F08514EF5706B61F29331831C5F1009_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC522ADACDCFB77F66E3394A74AF1238A19DC5509_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var;

struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
struct ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395;
struct ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Reader
struct ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B  : public RuntimeObject
{
	// ES3Settings ES3Reader::settings
	ES3Settings_t65AC4582C03C21A9D3090FE498071C470A130BF2* ___settings_0;
	// System.Int32 ES3Reader::serializationDepth
	int32_t ___serializationDepth_1;
	// System.String ES3Reader::overridePropertiesName
	String_t* ___overridePropertiesName_2;
};

// ES3Types.ES3Type
struct ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE  : public RuntimeObject
{
	// ES3Internal.ES3Member[] ES3Types.ES3Type::members
	ES3MemberU5BU5D_t5320E3A904B7810CCE7F613C15284E403EAEF8DC* ___members_1;
	// System.Type ES3Types.ES3Type::type
	Type_t* ___type_2;
	// System.Boolean ES3Types.ES3Type::isPrimitive
	bool ___isPrimitive_3;
	// System.Boolean ES3Types.ES3Type::isValueType
	bool ___isValueType_4;
	// System.Boolean ES3Types.ES3Type::isCollection
	bool ___isCollection_5;
	// System.Boolean ES3Types.ES3Type::isDictionary
	bool ___isDictionary_6;
	// System.Boolean ES3Types.ES3Type::isTuple
	bool ___isTuple_7;
	// System.Boolean ES3Types.ES3Type::isEnum
	bool ___isEnum_8;
	// System.Boolean ES3Types.ES3Type::isES3TypeUnityObject
	bool ___isES3TypeUnityObject_9;
	// System.Boolean ES3Types.ES3Type::isReflectedType
	bool ___isReflectedType_10;
	// System.Boolean ES3Types.ES3Type::isUnsupported
	bool ___isUnsupported_11;
	// System.Int32 ES3Types.ES3Type::priority
	int32_t ___priority_12;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A  : public RuntimeObject
{
	// ES3Reader ES3Reader/ES3ReaderPropertyEnumerator::reader
	ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// ES3Types.ES3CollectionType
struct ES3CollectionType_t44F700ABD9762AA11192E0508699C23DBF3DE151  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
	// ES3Types.ES3Type ES3Types.ES3CollectionType::elementType
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___elementType_13;
};

// ES3Types.ES3ObjectType
struct ES3ObjectType_tED2C85C0990B4C915D41A74652D5396676911EB6  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

// ES3Types.ES3Type_Bounds
struct ES3Type_Bounds_t62D3E6681258D7C0B7CF4764154B0E6246A9A260  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

// ES3Types.ES3Type_Color
struct ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

// ES3Types.ES3Type_MinMaxCurve
struct ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

// ES3Types.ES3Type_Rect
struct ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

// ES3Types.ES3Type_SizeBySpeedModule
struct ES3Type_SizeBySpeedModule_t1268F7B8F5C4B40322FDD3E6CAC5B80C74D9FD5D  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

// ES3Types.ES3Type_SizeOverLifetimeModule
struct ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

// ES3Types.ES3Type_SubEmittersModule
struct ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

// ES3Types.ES3Type_Vector2
struct ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

// ES3Types.ES3Type_Vector3
struct ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

// ES3Types.ES3Type_Vector4
struct ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

// ES3Types.ES3Type_bool
struct ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

// ES3Types.ES3Type_float
struct ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

// ES3Types.ES3Type_int
struct ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

// ES3Types.ES3Type_string
struct ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;
};

// UnityEngine.ParticleSystem/SizeBySpeedModule
struct SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/SizeBySpeedModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/SizeBySpeedModule
struct SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/SizeBySpeedModule
struct SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/SizeOverLifetimeModule
struct SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/SizeOverLifetimeModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/SizeOverLifetimeModule
struct SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/SizeOverLifetimeModule
struct SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/SubEmittersModule
struct SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/SubEmittersModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/SubEmittersModule
struct SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/SubEmittersModule
struct SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// ES3Types.ES3ArrayType
struct ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535  : public ES3CollectionType_t44F700ABD9762AA11192E0508699C23DBF3DE151
{
};

// ES3Types.ES3UnityObjectType
struct ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6  : public ES3ObjectType_tED2C85C0990B4C915D41A74652D5396676911EB6
{
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

// UnityEngine.ParticleSystemSubEmitterProperties
struct ParticleSystemSubEmitterProperties_t4D4DA9315F6241A20E824D9ACD06F15E25B6565C 
{
	// System.Int32 UnityEngine.ParticleSystemSubEmitterProperties::value__
	int32_t ___value___2;
};

// UnityEngine.ParticleSystemSubEmitterType
struct ParticleSystemSubEmitterType_t51CF003E726CF2CAE7FF1A17D85408D3745C2304 
{
	// System.Int32 UnityEngine.ParticleSystemSubEmitterType::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// ES3Types.ES3ComponentType
struct ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0  : public ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6
{
};

// ES3Types.ES3Type_GameObject
struct ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4  : public ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6
{
	// System.Boolean ES3Types.ES3Type_GameObject::saveChildren
	bool ___saveChildren_16;
};

// ES3Types.ES3Type_Mesh
struct ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91  : public ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6
{
};

// ES3Types.ES3Type_Sprite
struct ES3Type_Sprite_t12CE66318CA9CEBA9F08514B630AE12F23266F10  : public ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6
{
};

// ES3Types.ES3Type_Texture2D
struct ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349  : public ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6
{
};

// ES3Types.ES3Type_floatArray
struct ES3Type_floatArray_t292E12EC0E03DD7283C180A4DAB1BFFF4A5423ED  : public ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ES3Types.ES3Type_SkinnedMeshRenderer
struct ES3Type_SkinnedMeshRenderer_tFF90E4BACFFA1E5FAF1FD6EF3118B3AFCC1D4019  : public ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0
{
};

// ES3Types.ES3Type_SphereCollider
struct ES3Type_SphereCollider_t41A8F4C79A0F595F31A356EDE1CF65887377E8BB  : public ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0
{
};

// ES3Types.ES3Type_SpriteRenderer
struct ES3Type_SpriteRenderer_tD67ABA492E176020743E5D4DED7C651F0FE4DC8B  : public ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0
{
};

// ES3Types.ES3Type_Transform
struct ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7  : public ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// ES3Reader

// ES3Reader

// ES3Types.ES3Type

// ES3Types.ES3Type

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// ES3Reader/ES3ReaderPropertyEnumerator

// ES3Reader/ES3ReaderPropertyEnumerator

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// ES3Types.ES3Type_Bounds
struct ES3Type_Bounds_t62D3E6681258D7C0B7CF4764154B0E6246A9A260_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Bounds::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_Bounds

// ES3Types.ES3Type_Color
struct ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Color::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_Color

// ES3Types.ES3Type_MinMaxCurve
struct ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MinMaxCurve::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_MinMaxCurve

// ES3Types.ES3Type_Rect
struct ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Rect::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_Rect

// ES3Types.ES3Type_SizeBySpeedModule
struct ES3Type_SizeBySpeedModule_t1268F7B8F5C4B40322FDD3E6CAC5B80C74D9FD5D_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_SizeBySpeedModule::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_SizeBySpeedModule

// ES3Types.ES3Type_SizeOverLifetimeModule
struct ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_SizeOverLifetimeModule::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_SizeOverLifetimeModule

// ES3Types.ES3Type_SubEmittersModule
struct ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_SubEmittersModule::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_SubEmittersModule

// ES3Types.ES3Type_Vector2
struct ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector2::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_Vector2

// ES3Types.ES3Type_Vector3
struct ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector3::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_Vector3

// ES3Types.ES3Type_Vector4
struct ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector4::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_Vector4

// ES3Types.ES3Type_bool
struct ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_bool::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_bool

// ES3Types.ES3Type_float
struct ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_float::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_float

// ES3Types.ES3Type_int
struct ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_int::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_int

// ES3Types.ES3Type_string
struct ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_string::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_string

// System.Int32

// System.Int32

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.ParticleSystem/MinMaxCurve

// UnityEngine.ParticleSystem/MinMaxCurve

// UnityEngine.ParticleSystem/SizeBySpeedModule

// UnityEngine.ParticleSystem/SizeBySpeedModule

// UnityEngine.ParticleSystem/SizeOverLifetimeModule

// UnityEngine.ParticleSystem/SizeOverLifetimeModule

// UnityEngine.ParticleSystem/SubEmittersModule

// UnityEngine.ParticleSystem/SubEmittersModule

// UnityEngine.Bounds

// UnityEngine.Bounds

// ES3Types.ES3ArrayType

// ES3Types.ES3ArrayType

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.ParticleSystemSubEmitterProperties

// UnityEngine.ParticleSystemSubEmitterProperties

// UnityEngine.ParticleSystemSubEmitterType

// UnityEngine.ParticleSystemSubEmitterType

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// ES3Types.ES3Type_GameObject
struct ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_GameObject::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_15;
};

// ES3Types.ES3Type_GameObject

// ES3Types.ES3Type_Mesh
struct ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Mesh::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_Mesh

// ES3Types.ES3Type_Sprite
struct ES3Type_Sprite_t12CE66318CA9CEBA9F08514B630AE12F23266F10_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Sprite::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_Sprite

// ES3Types.ES3Type_Texture2D
struct ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Texture2D::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_Texture2D

// ES3Types.ES3Type_floatArray
struct ES3Type_floatArray_t292E12EC0E03DD7283C180A4DAB1BFFF4A5423ED_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_floatArray::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_14;
};

// ES3Types.ES3Type_floatArray

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// UnityEngine.PhysicMaterial

// UnityEngine.PhysicMaterial

// UnityEngine.Sprite

// UnityEngine.Sprite

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

// UnityEngine.Collider

// UnityEngine.Collider

// ES3Types.ES3Type_SkinnedMeshRenderer
struct ES3Type_SkinnedMeshRenderer_tFF90E4BACFFA1E5FAF1FD6EF3118B3AFCC1D4019_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_SkinnedMeshRenderer::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_14;
};

// ES3Types.ES3Type_SkinnedMeshRenderer

// ES3Types.ES3Type_SphereCollider
struct ES3Type_SphereCollider_t41A8F4C79A0F595F31A356EDE1CF65887377E8BB_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_SphereCollider::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_14;
};

// ES3Types.ES3Type_SphereCollider

// ES3Types.ES3Type_SpriteRenderer
struct ES3Type_SpriteRenderer_tD67ABA492E176020743E5D4DED7C651F0FE4DC8B_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_SpriteRenderer::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_14;
};

// ES3Types.ES3Type_SpriteRenderer

// ES3Types.ES3Type_Transform
struct ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_StaticFields
{
	// System.Int32 ES3Types.ES3Type_Transform::countRead
	int32_t ___countRead_14;
	// ES3Types.ES3Type ES3Types.ES3Type_Transform::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_15;
};

// ES3Types.ES3Type_Transform

// UnityEngine.ParticleSystem

// UnityEngine.ParticleSystem

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.SkinnedMeshRenderer

// UnityEngine.SkinnedMeshRenderer

// UnityEngine.SphereCollider

// UnityEngine.SphereCollider

// UnityEngine.SpriteRenderer

// UnityEngine.SpriteRenderer
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ParticleSystemSubEmitterProperties[]
struct ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6  : public RuntimeArray
{
	ALIGN_FIELD (8) ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* m_Items[1];

	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ParticleSystemSubEmitterType[]
struct ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};



// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718 (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_size(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729 (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_sizeMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901 (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_x(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164 (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_xMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_y(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6 (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_yMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_z(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3 (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_zMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826 (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_separateAxes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7 (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeBySpeedModule::set_range(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7 (SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::set_size(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5 (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::set_sizeMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::set_x(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::set_xMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910 (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::set_y(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601 (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::set_yMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4 (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::set_z(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263 (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::set_zMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4 (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SizeOverLifetimeModule::set_separateAxes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED (SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ES3Reader/ES3ReaderPropertyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F (ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_bones(UnityEngine.Transform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_bones_m80B64F72E4E5C7901E3105594D964F25D00952D7 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_rootBone(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_rootBone_m218D83F020040DB84BA06D99050D6A01A3C90355 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_quality(UnityEngine.SkinQuality)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_quality_m52BBD83F9A16A3D06476C53DE12AC88D8520F7C5 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_sharedMesh_m3D3A431BC8B244C21EB9D01B9A10D040D7137F98 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_updateWhenOffscreen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_updateWhenOffscreen_mED749A4C7DF00418D6BBB7B6B72843A9080CFA83 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_skinnedMotionVectors(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_skinnedMotionVectors_mC2CF4DA01EC67148154FD02C97620C611D6C8308 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_localBounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_localBounds_m1E3C7A43A7CF23326DEB34DC66805623033AB567 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightmapIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightmapIndex_mB6F2202FEC2ECBA3538EBDAEE17B073CEF2B5AB8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_realtimeLightmapIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_realtimeLightmapIndex_mE5684918EF41D05B218AEC5D6D3675B8A8F77389 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightmapScaleOffset(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightmapScaleOffset_m1F7EB461298380CCD8EE337F9AAAE40BE5B732A2 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_motionVectorGenerationMode(UnityEngine.MotionVectorGenerationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_motionVectorGenerationMode_m5768AC38CBBAD505E34281889682CA464ED3A32F (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_realtimeLightmapScaleOffset(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_realtimeLightmapScaleOffset_m391D14F3698B3D2BD88DC001931D261E5A3448E9 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightProbeUsage(UnityEngine.Rendering.LightProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightProbeUsage_mDCCD970DAC3546B32EF58876BABBD3353624F703 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightProbeProxyVolumeOverride(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightProbeProxyVolumeOverride_mEAF99A789A36BEDBAFCD2C2084578CF359587A21 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_probeAnchor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_probeAnchor_m0032C3CC1BBF36AC32FCCDE6F4A6F2CE73062327 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_reflectionProbeUsage(UnityEngine.Rendering.ReflectionProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_reflectionProbeUsage_m54A268EACA655AC3C66C4CD7F8C1EF3B41F3E008 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingLayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingLayerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingLayerID_m289E44FD06B6692C7B2ADD1189FE4FC013180C49 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.SkinnedMeshRenderer::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_blendShapeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_blendShapeCount_mB91EABCC5DFB3B91C4C0047851BC13FB92727408 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void ES3Internal.ES3Debug::LogError(System.String,UnityEngine.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Debug_LogError_m8165218A013911617C94FCF4DD0C89F7327B2BAB (String_t* ___0_msg, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, int32_t ___2_indent, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::SetBlendShapeWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_SetBlendShapeWeight_mD5724DB29A33F007E42F3666BF4B7ABC9C7F6F5E (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SphereCollider::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCollider_set_center_m83F6CC0056B491CD577B9AC08FA1E331074203D4 (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SphereCollider::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCollider_set_radius_m6119FE18C6739B077AB17334B1B53984911017FF (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_contactOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_contactOffset_mEDA8D778F641338733D140E76FCA0D6B29203B52 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_sharedMaterial(UnityEngine.PhysicMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_sharedMaterial_m2AC21AB939A377ABACF8282CDC52EE61B54107ED (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Rect::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Rect_get_zero_m5341D8B63DEF1F4C308A685EEC8CFEA12A396C8D (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2,System.Single,System.UInt32,UnityEngine.SpriteMeshType,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Sprite_Create_m4A5CCF67CAA13E470FD1CBBDEB08122733C4657B (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_pivot, float ___3_pixelsPerUnit, uint32_t ___4_extrude, int32_t ___5_meshType, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___6_border, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_flipY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipY_mB3B2BF1BF87C6BC2DE1795CA4698726091E1FEFA (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SubEmittersModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubEmittersModule_set_enabled_mA8AEC37F249912F94D7ED77A1E0D734C3299B31D (SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void ES3Types.ES3ArrayType::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3ArrayType__ctor_mC6FEB089144B367D53F28FA8434337D7C1D9184A (ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SubEmittersModule::RemoveSubEmitter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubEmittersModule_RemoveSubEmitter_m28E0F914662700046A5D524CA001C4C69B12FFA9 (SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/SubEmittersModule::AddSubEmitter(UnityEngine.ParticleSystem,UnityEngine.ParticleSystemSubEmitterType,UnityEngine.ParticleSystemSubEmitterProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubEmittersModule_AddSubEmitter_m521A291486CC2FC41785BDFFE06955306E5536BF (SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___0_subEmitter, int32_t ___1_type, int32_t ___2_properties, const RuntimeMethod* method) ;
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m643CBDBE98C8130A190D797565362CA560B32858_gshared (ES3Type_SizeBySpeedModule_t1268F7B8F5C4B40322FDD3E6CAC5B80C74D9FD5D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___0_reader;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___0_reader;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ShapeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_mD868613EE5C4151D1996B9E7A2DAC762447A7C0B_gshared (ES3Type_SizeBySpeedModule_t1268F7B8F5C4B40322FDD3E6CAC5B80C74D9FD5D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___0_reader;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___0_reader;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/SizeBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_m6C552E9263A359F9EBF0C3F679AAA92464B3119E_gshared (ES3Type_SizeBySpeedModule_t1268F7B8F5C4B40322FDD3E6CAC5B80C74D9FD5D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___0_reader;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___0_reader;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/SizeOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m2AD7DE02A51D16A2022BFFC04FCC161FED05ED78_gshared (ES3Type_SizeBySpeedModule_t1268F7B8F5C4B40322FDD3E6CAC5B80C74D9FD5D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___0_reader;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___0_reader;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m5986C4379F95B2843F52AAF1C98186B361BE6E86_gshared (ES3Type_SizeBySpeedModule_t1268F7B8F5C4B40322FDD3E6CAC5B80C74D9FD5D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___0_reader;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___0_reader;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_mDDF023B7BA4C1C4DBB632BDAB48E5775A3F62DCF_gshared (ES3Type_SizeBySpeedModule_t1268F7B8F5C4B40322FDD3E6CAC5B80C74D9FD5D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___0_reader;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___0_reader;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m8BFD7C449FC53B5ECFD1E15E5833E0E400EA3565_gshared (ES3Type_SizeBySpeedModule_t1268F7B8F5C4B40322FDD3E6CAC5B80C74D9FD5D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___0_reader;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___0_reader;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m9D51468DE15B5C93F5D923FD2BDFB13CABAE3541_gshared (ES3Type_SizeBySpeedModule_t1268F7B8F5C4B40322FDD3E6CAC5B80C74D9FD5D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___0_reader;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___0_reader;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeBySpeedModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeBySpeedModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_mB6EFA69D7F05508256CAF58829F58238456D59A4_gshared (ES3Type_SizeBySpeedModule_t1268F7B8F5C4B40322FDD3E6CAC5B80C74D9FD5D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeBySpeedModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)((SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)(SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4*)UnBox(L_0, SizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_il2cpp_TypeInfo_var))));
		goto IL_028a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0284;
	}

IL_003e:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_015d;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0284;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0133;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0284;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0284;
	}

IL_00b5:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_019c;
		}
	}
	{
		goto IL_0284;
	}

IL_00ca:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_20)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_0284;
	}

IL_00df:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_22)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0284;
	}

IL_00f4:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_24)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0284;
	}

IL_0109:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_26)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0284;
	}

IL_011e:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_28)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_0284;
	}

IL_0133:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_30)
		{
			goto IL_0220;
		}
	}
	{
		goto IL_0284;
	}

IL_0148:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_32)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0284;
	}

IL_015d:
	{
		String_t* L_33 = V_1;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_34)
		{
			goto IL_0248;
		}
	}
	{
		goto IL_0284;
	}

IL_0172:
	{
		String_t* L_35 = V_1;
		bool L_36;
		L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_36)
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0284;
	}

IL_0187:
	{
		String_t* L_37 = V_1;
		bool L_38;
		L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_38)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_0284;
	}

IL_019c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		bool L_41;
		L_41 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_39, L_40);
		SizeBySpeedModule_set_enabled_m1DFF0FEFF522C52D874173B6CDAAEE94F9E8B718((&V_0), L_41, NULL);
		// break;
		goto IL_028a;
	}

IL_01b3:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_42, L_43);
		SizeBySpeedModule_set_size_mD906BB6EAE9613DDA6F623E4D4878D69ECB90729((&V_0), L_44, NULL);
		// break;
		goto IL_028a;
	}

IL_01ca:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		SizeBySpeedModule_set_sizeMultiplier_mAFACCF6252B8FB92DC3A51BCE11D22126B315901((&V_0), L_47, NULL);
		// break;
		goto IL_028a;
	}

IL_01e1:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_48, L_49);
		SizeBySpeedModule_set_x_mED5B851A688588F171B38AF31B0CC91A003DA164((&V_0), L_50, NULL);
		// break;
		goto IL_028a;
	}

IL_01f8:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_51, L_52);
		SizeBySpeedModule_set_xMultiplier_m1803C7585C7DA6333FB4B3595EAD753FFD8ED32A((&V_0), L_53, NULL);
		// break;
		goto IL_028a;
	}

IL_020c:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56;
		L_56 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_54, L_55);
		SizeBySpeedModule_set_y_m1E9DE959AFA22DE52D24537108BD41B2D4B017E6((&V_0), L_56, NULL);
		// break;
		goto IL_028a;
	}

IL_0220:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_57, L_58);
		SizeBySpeedModule_set_yMultiplier_m4C9EE0927456366AC12C17543E95BAB3201C9DCB((&V_0), L_59, NULL);
		// break;
		goto IL_028a;
	}

IL_0234:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_60, L_61);
		SizeBySpeedModule_set_z_m73C05D968B5C62551614E86A77AEF557F15734A3((&V_0), L_62, NULL);
		// break;
		goto IL_028a;
	}

IL_0248:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_63, L_64);
		SizeBySpeedModule_set_zMultiplier_m0B67A4AF3E30D31C14DBD5FAAA3EABFB787D9826((&V_0), L_65, NULL);
		// break;
		goto IL_028a;
	}

IL_025c:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_66, L_67);
		SizeBySpeedModule_set_separateAxes_m5B0BA28A01D7FED6FDDA0267135B5EAE1F9C72C7((&V_0), L_68, NULL);
		// break;
		goto IL_028a;
	}

IL_0270:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_69, L_70);
		SizeBySpeedModule_set_range_m76B9B316654E44D6938A4A06DED0DF8B3CBCE4D7((&V_0), L_71, NULL);
		// break;
		goto IL_028a;
	}

IL_0284:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___0_reader;
		NullCheck(L_72);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_72);
	}

IL_028a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___0_reader;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_73);
		String_t* L_75 = L_74;
		V_1 = L_75;
		if (L_75)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC332679EB4D2A0E88FF2117F17DF693ACE52D5AE_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mBBF88AAE9E26302F9D6E98929067F28F083F5B49_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m45AB97553923F8AD0B5A06F2BCE4875578839605_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m798E26407BEEA2CD1776F9DA7F9823D61AFAF14B_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m8197E938E67437CD8628665A400FBAA12F4EBA52_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6A3C6EC1DEEF78D895B2931000DFE990A8A665C7_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA5AF53C0E0B1E63FCAA87EDC17EBB1573D14EF9E_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m791767881C322CFBC459F683219D2A49C45FA85F_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m352A8E1DCF477CA16B58A6D7824C33E9953B1A9C_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mE8B953E878A33B1A8AA714DE898CFEAEBCC31921_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisRuntimeObject_m04A76774CF41B9FBE3DB26AEAB66F94779FCC10E_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m5DC05AC6765C5BEC8E3BBA1E4AE2B365E80FE368_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2E142AABD3E05C06B67742029158E83A9015F3D3_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m62865782EEB0C6B0E11C53DEC63CDCF8855AEE73_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBE6EE1B44C6BFF5D8325B83846E6CFA0F001977F_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mF1579D46C2283D4EC7B0D7C3295FAB2F6FFE4EF9_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m59120404C4013453738E35B6F0F6256E8FBF6D84_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C237291934587AE3F8137D1EAF57043E48FC964_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m367830698816196C7D6A5296835C44B4531934E0_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SizeOverLifetimeModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SizeOverLifetimeModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m72409866927116116E43D3181E7554726BC9FFCC_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SizeOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_1 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_2 = L_1;
		RuntimeObject* L_3 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_4 = V_0;
		SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C L_5 = L_4;
		RuntimeObject* L_6 = Box(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisRuntimeObject_m11B64F7963526C4D0E25B536EB87375F494CE9DD_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m6F7055B6EAC22967A08242BFB506BFED1ABF0445_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_mF440DDDD4E39525D3693343EC92C5D3F8AF5ED8F_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m030F3C3548BA48D520EE64585C526E69D6B20897_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m9F0886A5909511EE5FFDB67C96D5910A7B21728D_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_mBBDCD33AB1576650C4055FA0E48BAF5087DCA9DA_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_mD78DC8D5183149EA00D6956BA40B693D4316808F_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mA0752C0C6E3BCCA4EF39AFE5FF3287354FEB5C91_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_m5FA8D13DD3B95E194A05861BBB1CFE60DEDB3B3C_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m676DA46338B3CA3924E199A37B50F9D11B9C3F03_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_mF09C3666292D1830FD7F84C7D92D80AAD96E2040_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m6F94011D7505FDEA80D0B755E60082D40F7779AE_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_mB84C486C61ABE40FA5F903668B249192514A2FE6_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_mB6FE8FA39488EC074B6F3F67FC4B6692D59A8E09_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ShapeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_m91A49D0E9B0790D9971BC70D2FB8521F59BCA4BC_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/SizeBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_m187C3FF47EA9FEEFD67E0CDFA36BDEC72E119664_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/SizeOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m5145F3EE1DC52E7679B69BC71FA13C0EE22110CB_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m381235B9823DBC96B8C18AAF6C8F0C6C893ABB0F_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_mB02D7288DF18C387E6E061369B83FAABB048CE7D_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m68C9DF1DC29BC9B5A35B31E8706082B7C2553E40_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m934F0A34B2B2D88AC1D184FFA496CCCFD5F11A00_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SizeOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SizeOverLifetimeModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_mC043CF0863423DCA0E5D416C3BC47B58ABE3166B_gshared (ES3Type_SizeOverLifetimeModule_t3BEB2FC5AC85E9A90EBEF6577A5F6A1DC428E78F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SizeOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)((SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)(SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C*)UnBox(L_0, SizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_il2cpp_TypeInfo_var))));
		goto IL_024a;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1479031685)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)597743964)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)597743964))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0244;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1105436259))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0244;
	}

IL_005e:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-585050980)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_011f;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0244;
	}

IL_007e:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0244;
	}

IL_00a1:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_0173;
		}
	}
	{
		goto IL_0244;
	}

IL_00b6:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, NULL);
		if (L_19)
		{
			goto IL_018a;
		}
	}
	{
		goto IL_0244;
	}

IL_00cb:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralBD0DD0004699EF86BF0FC1D161FA3766AF5126C4, NULL);
		if (L_21)
		{
			goto IL_01a1;
		}
	}
	{
		goto IL_0244;
	}

IL_00e0:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_23)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_0244;
	}

IL_00f5:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_25)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0244;
	}

IL_010a:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_27)
		{
			goto IL_01e0;
		}
	}
	{
		goto IL_0244;
	}

IL_011f:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_29)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0244;
	}

IL_0134:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_31)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0244;
	}

IL_0149:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_33)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0244;
	}

IL_015e:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_35)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0244;
	}

IL_0173:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_36 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_37 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		bool L_38;
		L_38 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_36, L_37);
		SizeOverLifetimeModule_set_enabled_mC45334E7AC31CCBE1CFA531D28D29E1BD38D5D6F((&V_0), L_38, NULL);
		// break;
		goto IL_024a;
	}

IL_018a:
	{
		// instance.size = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_39 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_40 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_39, L_40);
		SizeOverLifetimeModule_set_size_m1D5987F4FB9E948DEAA5E3D8FB21D1AFEE15EBE5((&V_0), L_41, NULL);
		// break;
		goto IL_024a;
	}

IL_01a1:
	{
		// instance.sizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_42, L_43);
		SizeOverLifetimeModule_set_sizeMultiplier_mE97DDCFF7A3065E4E1709EE66C8A524268A757EF((&V_0), L_44, NULL);
		// break;
		goto IL_024a;
	}

IL_01b8:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		SizeOverLifetimeModule_set_x_m7B791B7E4BE55CC4CE1FB815C2E09DBAB05F027A((&V_0), L_47, NULL);
		// break;
		goto IL_024a;
	}

IL_01cc:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		SizeOverLifetimeModule_set_xMultiplier_mD17EFB03D20765192F5772A17573D777DB261910((&V_0), L_50, NULL);
		// break;
		goto IL_024a;
	}

IL_01e0:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		SizeOverLifetimeModule_set_y_mB9138A8037FF0084FE6DED3DC9D81E0D926C6601((&V_0), L_53, NULL);
		// break;
		goto IL_024a;
	}

IL_01f4:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		SizeOverLifetimeModule_set_yMultiplier_mAFF1869E535B324384AB01214B246819306439D4((&V_0), L_56, NULL);
		// break;
		goto IL_024a;
	}

IL_0208:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		SizeOverLifetimeModule_set_z_m2F0D3BC817F95F78D37543F7A54C9CA0D5D87263((&V_0), L_59, NULL);
		// break;
		goto IL_024a;
	}

IL_021c:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		SizeOverLifetimeModule_set_zMultiplier_m97864CAC5D1B8936456B33989CCBA3A12870A3F4((&V_0), L_62, NULL);
		// break;
		goto IL_024a;
	}

IL_0230:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_63, L_64);
		SizeOverLifetimeModule_set_separateAxes_mC07A349FA5AF44C8937B7DE7ECEEA8F871B13EED((&V_0), L_65, NULL);
		// break;
		goto IL_024a;
	}

IL_0244:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		NullCheck(L_66);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_66);
	}

IL_024a:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___0_reader;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_67);
		String_t* L_69 = L_68;
		V_1 = L_69;
		if (L_69)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SkinnedMeshRenderer::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SkinnedMeshRenderer_ReadComponent_TisRuntimeObject_m76F5BEBD1B99ABA96983A0A6B1A74656DDB55AFF_gshared (ES3Type_SkinnedMeshRenderer_tFF90E4BACFFA1E5FAF1FD6EF3118B3AFCC1D4019* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mBED8067992048B8235F965838499FB03E34C4F21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m88F5AE4F47F57108F2D11503B0CF0F3A8B39DE95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948_m21A35630F47AA42AB097D915807D6BD53CBF3CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_m2E281152A940F223547F05BA3E2942B1C8E0A1E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m6FD4650843988DE254D2352A149F9E0D7B56DA4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB_m1F66D8A5665BB474661ED5537E62D626955D6136_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisReflectionProbeUsage_t033508C14CD4AD926A3A215D19913DC21EA22705_mB304BCA0B08E6B3DC4277CD20BF0C7EAC55B336A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D_mF7F8CC6CE7025057CF127A89A9AE1DE8F3E37635_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_m61A448A3A155CB223248C94B0849116850949A33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinQuality_tFFFBBA855612EBEAC68BFEBCD1D8F62B26DE3827_mB79C3CBFFB560ED731483C95EC73D2BD5793C164_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_m93FBA20AC99C728D452A81F685AAC9BC024F64EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m65C5A6DA0BFF389A8968C68CBF5690D521C379A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC522ADACDCFB77F66E3394A74AF1238A19DC5509_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Bounds_t62D3E6681258D7C0B7CF4764154B0E6246A9A260_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_floatArray_t292E12EC0E03DD7283C180A4DAB1BFFF4A5423ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F9261ABE85940E10CA48B7B42F1E5267F122734);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral338DFB21C4BCDE10C2A6B0F6B758581AB45E283A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC42735CF07DB9169F6821DC94EB45DE6B5E1AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49E8F5255C0235CF3C6747DD1A447699E1AA2759);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E04E7564B2B76DBD228760282F0982D7BC0AFDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73792CCBAF937C765700AA0D7388BC226F003166);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E7975F5870DE751BD38D4E3A4C0644FFCF21C5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82A38EB534B163662598A55A70842F5AA8919477);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843D6122FFBBF465C80ECD6FDFC0DF88BEAF4E14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral892582A238DF4FFEB2A2E7DD5D90A9A7AC6C26C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD0A7170C2DECE4F5E82F96AB9B00AAEBA9F438);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F76FFC503D9127950E3EAD1DFD82A8C6C91F728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0ECA3668A8B14855295BD8DD5E88309AF31330B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDBEBC1E8A863EAF2A1EFDC4D2393F1540ABF0C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC51D373B25723E8ADF9BE9C06A196725DF68C54E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8D7651AAAFAAA9A55123A4B14C546BC27C603E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFEB83A996CD34035197889D46A13DB9901EE76F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0D915A2B403702AB1F18A340F6557F4030455A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDA23639367EB0B86F361EA02AD294BDFDE6BA0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5F2AD4FF502002CA1798B22867D45AAB84AB3BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF04D2BD9D99AD6218FC8C63B094FB3F1333E7F44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_3 = NULL;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	{
		// var instance = (UnityEngine.SkinnedMeshRenderer)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E*)CastclassClass((RuntimeObject*)L_0, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var));
		// foreach(string propertyName in reader.Properties)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_05e5:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_6;
					if (!L_5)
					{
						goto IL_05f8;
					}
				}
				{
					RuntimeObject* L_6 = V_6;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_05f8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_05d8_1;
			}

IL_0018_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				uint32_t L_10;
				L_10 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_9, NULL);
				V_4 = L_10;
				uint32_t L_11 = V_4;
				if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1435400483)))))
				{
					goto IL_00f7_1;
				}
			}
			{
				uint32_t L_12 = V_4;
				if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)394058932)))))
				{
					goto IL_009c_1;
				}
			}
			{
				uint32_t L_13 = V_4;
				if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)257228247)))))
				{
					goto IL_0073_1;
				}
			}
			{
				uint32_t L_14 = V_4;
				if ((((int32_t)L_14) == ((int32_t)((int32_t)49525662))))
				{
					goto IL_0246_1;
				}
			}
			{
				uint32_t L_15 = V_4;
				if ((((int32_t)L_15) == ((int32_t)((int32_t)242590710))))
				{
					goto IL_0396_1;
				}
			}
			{
				uint32_t L_16 = V_4;
				if ((((int32_t)L_16) == ((int32_t)((int32_t)257228247))))
				{
					goto IL_021c_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0073_1:
			{
				uint32_t L_17 = V_4;
				if ((((int32_t)L_17) == ((int32_t)((int32_t)258071601))))
				{
					goto IL_0342_1;
				}
			}
			{
				uint32_t L_18 = V_4;
				if ((((int32_t)L_18) == ((int32_t)((int32_t)369730773))))
				{
					goto IL_029a_1;
				}
			}
			{
				uint32_t L_19 = V_4;
				if ((((int32_t)L_19) == ((int32_t)((int32_t)394058932))))
				{
					goto IL_02c4_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_009c_1:
			{
				uint32_t L_20 = V_4;
				if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)899577978)))))
				{
					goto IL_00ce_1;
				}
			}
			{
				uint32_t L_21 = V_4;
				if ((((int32_t)L_21) == ((int32_t)((int32_t)441150745))))
				{
					goto IL_01f2_1;
				}
			}
			{
				uint32_t L_22 = V_4;
				if ((((int32_t)L_22) == ((int32_t)((int32_t)560621451))))
				{
					goto IL_0270_1;
				}
			}
			{
				uint32_t L_23 = V_4;
				if ((((int32_t)L_23) == ((int32_t)((int32_t)899577978))))
				{
					goto IL_02af_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_00ce_1:
			{
				uint32_t L_24 = V_4;
				if ((((int32_t)L_24) == ((int32_t)((int32_t)1039612288))))
				{
					goto IL_032d_1;
				}
			}
			{
				uint32_t L_25 = V_4;
				if ((((int32_t)L_25) == ((int32_t)((int32_t)1284321245))))
				{
					goto IL_0207_1;
				}
			}
			{
				uint32_t L_26 = V_4;
				if ((((int32_t)L_26) == ((int32_t)((int32_t)1435400483))))
				{
					goto IL_0357_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_00f7_1:
			{
				uint32_t L_27 = V_4;
				if ((!(((uint32_t)L_27) <= ((uint32_t)((int32_t)-1592541260)))))
				{
					goto IL_0158_1;
				}
			}
			{
				uint32_t L_28 = V_4;
				if ((!(((uint32_t)L_28) <= ((uint32_t)((int32_t)2056288458)))))
				{
					goto IL_0132_1;
				}
			}
			{
				uint32_t L_29 = V_4;
				if ((((int32_t)L_29) == ((int32_t)((int32_t)1681590497))))
				{
					goto IL_0381_1;
				}
			}
			{
				uint32_t L_30 = V_4;
				if ((((int32_t)L_30) == ((int32_t)((int32_t)1913193519))))
				{
					goto IL_01c8_1;
				}
			}
			{
				uint32_t L_31 = V_4;
				if ((((int32_t)L_31) == ((int32_t)((int32_t)2056288458))))
				{
					goto IL_0285_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0132_1:
			{
				uint32_t L_32 = V_4;
				if ((((int32_t)L_32) == ((int32_t)((int32_t)2066010489))))
				{
					goto IL_02d9_1;
				}
			}
			{
				uint32_t L_33 = V_4;
				if ((((int32_t)L_33) == ((int32_t)((int32_t)-1697296346))))
				{
					goto IL_01dd_1;
				}
			}
			{
				uint32_t L_34 = V_4;
				if ((((int32_t)L_34) == ((int32_t)((int32_t)-1592541260))))
				{
					goto IL_01b3_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0158_1:
			{
				uint32_t L_35 = V_4;
				if ((!(((uint32_t)L_35) <= ((uint32_t)((int32_t)-641088577)))))
				{
					goto IL_018a_1;
				}
			}
			{
				uint32_t L_36 = V_4;
				if ((((int32_t)L_36) == ((int32_t)((int32_t)-1450632603))))
				{
					goto IL_025b_1;
				}
			}
			{
				uint32_t L_37 = V_4;
				if ((((int32_t)L_37) == ((int32_t)((int32_t)-879427281))))
				{
					goto IL_02ee_1;
				}
			}
			{
				uint32_t L_38 = V_4;
				if ((((int32_t)L_38) == ((int32_t)((int32_t)-641088577))))
				{
					goto IL_0318_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_018a_1:
			{
				uint32_t L_39 = V_4;
				if ((((int32_t)L_39) == ((int32_t)((int32_t)-373578199))))
				{
					goto IL_0231_1;
				}
			}
			{
				uint32_t L_40 = V_4;
				if ((((int32_t)L_40) == ((int32_t)((int32_t)-170312451))))
				{
					goto IL_036c_1;
				}
			}
			{
				uint32_t L_41 = V_4;
				if ((((int32_t)L_41) == ((int32_t)((int32_t)-95858950))))
				{
					goto IL_0303_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_01b3_1:
			{
				String_t* L_42 = V_2;
				bool L_43;
				L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteral49E8F5255C0235CF3C6747DD1A447699E1AA2759, NULL);
				if (L_43)
				{
					goto IL_03ab_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_01c8_1:
			{
				String_t* L_44 = V_2;
				bool L_45;
				L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral4E04E7564B2B76DBD228760282F0982D7BC0AFDA, NULL);
				if (L_45)
				{
					goto IL_03bc_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_01dd_1:
			{
				String_t* L_46 = V_2;
				bool L_47;
				L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
				if (L_47)
				{
					goto IL_03d2_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_01f2_1:
			{
				String_t* L_48 = V_2;
				bool L_49;
				L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F, NULL);
				if (L_49)
				{
					goto IL_03e3_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0207_1:
			{
				String_t* L_50 = V_2;
				bool L_51;
				L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralC51D373B25723E8ADF9BE9C06A196725DF68C54E, NULL);
				if (L_51)
				{
					goto IL_03f9_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_021c_1:
			{
				String_t* L_52 = V_2;
				bool L_53;
				L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralE5F2AD4FF502002CA1798B22867D45AAB84AB3BD, NULL);
				if (L_53)
				{
					goto IL_040f_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0231_1:
			{
				String_t* L_54 = V_2;
				bool L_55;
				L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteralCFEB83A996CD34035197889D46A13DB9901EE76F, NULL);
				if (L_55)
				{
					goto IL_0425_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0246_1:
			{
				String_t* L_56 = V_2;
				bool L_57;
				L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
				if (L_57)
				{
					goto IL_043b_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_025b_1:
			{
				String_t* L_58 = V_2;
				bool L_59;
				L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralD0D915A2B403702AB1F18A340F6557F4030455A2, NULL);
				if (L_59)
				{
					goto IL_0451_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0270_1:
			{
				String_t* L_60 = V_2;
				bool L_61;
				L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteralDDA23639367EB0B86F361EA02AD294BDFDE6BA0B, NULL);
				if (L_61)
				{
					goto IL_0462_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0285_1:
			{
				String_t* L_62 = V_2;
				bool L_63;
				L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19, NULL);
				if (L_63)
				{
					goto IL_0478_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_029a_1:
			{
				String_t* L_64 = V_2;
				bool L_65;
				L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteral82A38EB534B163662598A55A70842F5AA8919477, NULL);
				if (L_65)
				{
					goto IL_0489_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_02af_1:
			{
				String_t* L_66 = V_2;
				bool L_67;
				L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteral73792CCBAF937C765700AA0D7388BC226F003166, NULL);
				if (L_67)
				{
					goto IL_049f_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_02c4_1:
			{
				String_t* L_68 = V_2;
				bool L_69;
				L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteralA0ECA3668A8B14855295BD8DD5E88309AF31330B, NULL);
				if (L_69)
				{
					goto IL_04b5_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_02d9_1:
			{
				String_t* L_70 = V_2;
				bool L_71;
				L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral8DD0A7170C2DECE4F5E82F96AB9B00AAEBA9F438, NULL);
				if (L_71)
				{
					goto IL_04cb_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_02ee_1:
			{
				String_t* L_72 = V_2;
				bool L_73;
				L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteralBDBEBC1E8A863EAF2A1EFDC4D2393F1540ABF0C9, NULL);
				if (L_73)
				{
					goto IL_04dc_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0303_1:
			{
				String_t* L_74 = V_2;
				bool L_75;
				L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteral8F76FFC503D9127950E3EAD1DFD82A8C6C91F728, NULL);
				if (L_75)
				{
					goto IL_04f2_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0318_1:
			{
				String_t* L_76 = V_2;
				bool L_77;
				L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteralC8D7651AAAFAAA9A55123A4B14C546BC27C603E7, NULL);
				if (L_77)
				{
					goto IL_0503_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_032d_1:
			{
				String_t* L_78 = V_2;
				bool L_79;
				L_79 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, _stringLiteral338DFB21C4BCDE10C2A6B0F6B758581AB45E283A, NULL);
				if (L_79)
				{
					goto IL_0519_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0342_1:
			{
				String_t* L_80 = V_2;
				bool L_81;
				L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_80, _stringLiteral843D6122FFBBF465C80ECD6FDFC0DF88BEAF4E14, NULL);
				if (L_81)
				{
					goto IL_052f_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0357_1:
			{
				String_t* L_82 = V_2;
				bool L_83;
				L_83 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_82, _stringLiteral3EC42735CF07DB9169F6821DC94EB45DE6B5E1AA, NULL);
				if (L_83)
				{
					goto IL_0540_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_036c_1:
			{
				String_t* L_84 = V_2;
				bool L_85;
				L_85 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_84, _stringLiteral892582A238DF4FFEB2A2E7DD5D90A9A7AC6C26C4, NULL);
				if (L_85)
				{
					goto IL_0556_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0381_1:
			{
				String_t* L_86 = V_2;
				bool L_87;
				L_87 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_86, _stringLiteral1F9261ABE85940E10CA48B7B42F1E5267F122734, NULL);
				if (L_87)
				{
					goto IL_0569_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_0396_1:
			{
				String_t* L_88 = V_2;
				bool L_89;
				L_89 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_88, _stringLiteralF04D2BD9D99AD6218FC8C63B094FB3F1333E7F44, NULL);
				if (L_89)
				{
					goto IL_057c_1;
				}
			}
			{
				goto IL_05d2_1;
			}

IL_03ab_1:
			{
				// instance.bones = reader.Read<UnityEngine.Transform[]>();
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_90 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___0_reader;
				NullCheck(L_91);
				TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_92;
				L_92 = GenericVirtualFuncInvoker0< TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* >::Invoke(ES3Reader_Read_TisTransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_m93FBA20AC99C728D452A81F685AAC9BC024F64EB_RuntimeMethod_var, L_91);
				NullCheck(L_90);
				SkinnedMeshRenderer_set_bones_m80B64F72E4E5C7901E3105594D964F25D00952D7(L_90, L_92, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_03bc_1:
			{
				// instance.rootBone = reader.Read<UnityEngine.Transform>(ES3Type_Transform.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_93 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_95 = ((ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_il2cpp_TypeInfo_var))->___Instance_15;
				NullCheck(L_94);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96;
				L_96 = GenericVirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m65C5A6DA0BFF389A8968C68CBF5690D521C379A9_RuntimeMethod_var, L_94, L_95);
				NullCheck(L_93);
				SkinnedMeshRenderer_set_rootBone_m218D83F020040DB84BA06D99050D6A01A3C90355(L_93, L_96, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_03d2_1:
			{
				// instance.quality = reader.Read<UnityEngine.SkinQuality>();
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_97 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_98 = ___0_reader;
				NullCheck(L_98);
				int32_t L_99;
				L_99 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisSkinQuality_tFFFBBA855612EBEAC68BFEBCD1D8F62B26DE3827_mB79C3CBFFB560ED731483C95EC73D2BD5793C164_RuntimeMethod_var, L_98);
				NullCheck(L_97);
				SkinnedMeshRenderer_set_quality_m52BBD83F9A16A3D06476C53DE12AC88D8520F7C5(L_97, L_99, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_03e3_1:
			{
				// instance.sharedMesh = reader.Read<UnityEngine.Mesh>(ES3Type_Mesh.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_100 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_102 = ((ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Mesh_t713CD36CC5180310CD9D7932D51B0FFA68324F91_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_101);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_103;
				L_103 = GenericVirtualFuncInvoker1< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m6FD4650843988DE254D2352A149F9E0D7B56DA4A_RuntimeMethod_var, L_101, L_102);
				NullCheck(L_100);
				SkinnedMeshRenderer_set_sharedMesh_m3D3A431BC8B244C21EB9D01B9A10D040D7137F98(L_100, L_103, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_03f9_1:
			{
				// instance.updateWhenOffscreen = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_104 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_105 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_106 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_105);
				bool L_107;
				L_107 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_105, L_106);
				NullCheck(L_104);
				SkinnedMeshRenderer_set_updateWhenOffscreen_mED749A4C7DF00418D6BBB7B6B72843A9080CFA83(L_104, L_107, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_040f_1:
			{
				// instance.skinnedMotionVectors = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_108 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_109 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_110 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_109);
				bool L_111;
				L_111 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_109, L_110);
				NullCheck(L_108);
				SkinnedMeshRenderer_set_skinnedMotionVectors_mC2CF4DA01EC67148154FD02C97620C611D6C8308(L_108, L_111, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_0425_1:
			{
				// instance.localBounds = reader.Read<UnityEngine.Bounds>(ES3Type_Bounds.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_112 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_113 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_114 = ((ES3Type_Bounds_t62D3E6681258D7C0B7CF4764154B0E6246A9A260_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Bounds_t62D3E6681258D7C0B7CF4764154B0E6246A9A260_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_113);
				Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_115;
				L_115 = GenericVirtualFuncInvoker1< Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mBED8067992048B8235F965838499FB03E34C4F21_RuntimeMethod_var, L_113, L_114);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_112);
				Renderer_set_localBounds_m1E3C7A43A7CF23326DEB34DC66805623033AB567((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_112, L_115, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_043b_1:
			{
				// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_116 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_117 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_118 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_117);
				bool L_119;
				L_119 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_117, L_118);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_116);
				Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_116, L_119, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_0451_1:
			{
				// instance.shadowCastingMode = reader.Read<UnityEngine.Rendering.ShadowCastingMode>();
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_120 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_121 = ___0_reader;
				NullCheck(L_121);
				int32_t L_122;
				L_122 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D_mF7F8CC6CE7025057CF127A89A9AE1DE8F3E37635_RuntimeMethod_var, L_121);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_120);
				Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_120, L_122, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_0462_1:
			{
				// instance.receiveShadows = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_123 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_124 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_125 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_124);
				bool L_126;
				L_126 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_124, L_125);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_123);
				Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_123, L_126, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_0478_1:
			{
				// instance.sharedMaterials = reader.Read<UnityEngine.Material[]>();
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_127 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_128 = ___0_reader;
				NullCheck(L_128);
				MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_129;
				L_129 = GenericVirtualFuncInvoker0< MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* >::Invoke(ES3Reader_Read_TisMaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_m2E281152A940F223547F05BA3E2942B1C8E0A1E3_RuntimeMethod_var, L_128);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_127);
				Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_127, L_129, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_0489_1:
			{
				// instance.lightmapIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_130 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_131 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_132 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_131);
				int32_t L_133;
				L_133 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_131, L_132);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_130);
				Renderer_set_lightmapIndex_mB6F2202FEC2ECBA3538EBDAEE17B073CEF2B5AB8((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_130, L_133, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_049f_1:
			{
				// instance.realtimeLightmapIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_134 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_135 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_136 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_135);
				int32_t L_137;
				L_137 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_135, L_136);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_134);
				Renderer_set_realtimeLightmapIndex_mE5684918EF41D05B218AEC5D6D3675B8A8F77389((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_134, L_137, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_04b5_1:
			{
				// instance.lightmapScaleOffset = reader.Read<UnityEngine.Vector4>(ES3Type_Vector4.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_138 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_139 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_140 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_139);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_141;
				L_141 = GenericVirtualFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC522ADACDCFB77F66E3394A74AF1238A19DC5509_RuntimeMethod_var, L_139, L_140);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_138);
				Renderer_set_lightmapScaleOffset_m1F7EB461298380CCD8EE337F9AAAE40BE5B732A2((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_138, L_141, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_04cb_1:
			{
				// instance.motionVectorGenerationMode = reader.Read<UnityEngine.MotionVectorGenerationMode>();
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_142 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_143 = ___0_reader;
				NullCheck(L_143);
				int32_t L_144;
				L_144 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisMotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB_m1F66D8A5665BB474661ED5537E62D626955D6136_RuntimeMethod_var, L_143);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_142);
				Renderer_set_motionVectorGenerationMode_m5768AC38CBBAD505E34281889682CA464ED3A32F((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_142, L_144, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_04dc_1:
			{
				// instance.realtimeLightmapScaleOffset = reader.Read<UnityEngine.Vector4>(ES3Type_Vector4.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_145 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_146 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_147 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_146);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_148;
				L_148 = GenericVirtualFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC522ADACDCFB77F66E3394A74AF1238A19DC5509_RuntimeMethod_var, L_146, L_147);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_145);
				Renderer_set_realtimeLightmapScaleOffset_m391D14F3698B3D2BD88DC001931D261E5A3448E9((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_145, L_148, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_04f2_1:
			{
				// instance.lightProbeUsage = reader.Read<UnityEngine.Rendering.LightProbeUsage>();
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_149 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_150 = ___0_reader;
				NullCheck(L_150);
				int32_t L_151;
				L_151 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisLightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948_m21A35630F47AA42AB097D915807D6BD53CBF3CFB_RuntimeMethod_var, L_150);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_149);
				Renderer_set_lightProbeUsage_mDCCD970DAC3546B32EF58876BABBD3353624F703((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_149, L_151, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_0503_1:
			{
				// instance.lightProbeProxyVolumeOverride = reader.Read<UnityEngine.GameObject>(ES3Type_GameObject.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_152 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_153 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_154 = ((ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4_il2cpp_TypeInfo_var))->___Instance_15;
				NullCheck(L_153);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_155;
				L_155 = GenericVirtualFuncInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m88F5AE4F47F57108F2D11503B0CF0F3A8B39DE95_RuntimeMethod_var, L_153, L_154);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_152);
				Renderer_set_lightProbeProxyVolumeOverride_mEAF99A789A36BEDBAFCD2C2084578CF359587A21((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_152, L_155, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_0519_1:
			{
				// instance.probeAnchor = reader.Read<UnityEngine.Transform>(ES3Type_Transform.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_156 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_157 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_158 = ((ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_il2cpp_TypeInfo_var))->___Instance_15;
				NullCheck(L_157);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_159;
				L_159 = GenericVirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m65C5A6DA0BFF389A8968C68CBF5690D521C379A9_RuntimeMethod_var, L_157, L_158);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_156);
				Renderer_set_probeAnchor_m0032C3CC1BBF36AC32FCCDE6F4A6F2CE73062327((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_156, L_159, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_052f_1:
			{
				// instance.reflectionProbeUsage = reader.Read<UnityEngine.Rendering.ReflectionProbeUsage>();
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_160 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_161 = ___0_reader;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisReflectionProbeUsage_t033508C14CD4AD926A3A215D19913DC21EA22705_mB304BCA0B08E6B3DC4277CD20BF0C7EAC55B336A_RuntimeMethod_var, L_161);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_160);
				Renderer_set_reflectionProbeUsage_m54A268EACA655AC3C66C4CD7F8C1EF3B41F3E008((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_160, L_162, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_0540_1:
			{
				// instance.sortingLayerName = reader.Read<System.String>(ES3Type_string.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_163 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_164 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_165 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_164);
				String_t* L_166;
				L_166 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_164, L_165);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_163);
				Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_163, L_166, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_0556_1:
			{
				// instance.sortingLayerID = reader.Read<System.Int32>(ES3Type_int.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_167 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_168 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_169 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_168);
				int32_t L_170;
				L_170 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_168, L_169);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_167);
				Renderer_set_sortingLayerID_m289E44FD06B6692C7B2ADD1189FE4FC013180C49((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_167, L_170, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_0569_1:
			{
				// instance.sortingOrder = reader.Read<System.Int32>(ES3Type_int.Instance);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_171 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_172 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_173 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_172);
				int32_t L_174;
				L_174 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_172, L_173);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_171);
				Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_171, L_174, NULL);
				// break;
				goto IL_05d8_1;
			}

IL_057c_1:
			{
				// var blendShapeWeights = reader.Read<System.Single[]>(ES3Type_floatArray.Instance);
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_175 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_176 = ((ES3Type_floatArray_t292E12EC0E03DD7283C180A4DAB1BFFF4A5423ED_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_floatArray_t292E12EC0E03DD7283C180A4DAB1BFFF4A5423ED_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_175);
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_177;
				L_177 = GenericVirtualFuncInvoker1< SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_m61A448A3A155CB223248C94B0849116850949A33_RuntimeMethod_var, L_175, L_176);
				V_3 = L_177;
				// if (instance.sharedMesh == null) break;
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_178 = V_0;
				NullCheck(L_178);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_179;
				L_179 = SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302(L_178, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_180;
				L_180 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_179, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_180)
				{
					goto IL_05d8_1;
				}
			}
			{
				// if (blendShapeWeights.Length != instance.sharedMesh.blendShapeCount)
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_181 = V_3;
				NullCheck(L_181);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_182 = V_0;
				NullCheck(L_182);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_183;
				L_183 = SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302(L_182, NULL);
				NullCheck(L_183);
				int32_t L_184;
				L_184 = Mesh_get_blendShapeCount_mB91EABCC5DFB3B91C4C0047851BC13FB92727408(L_183, NULL);
				if ((((int32_t)((int32_t)(((RuntimeArray*)L_181)->max_length))) == ((int32_t)L_184)))
				{
					goto IL_05b2_1;
				}
			}
			{
				// ES3Internal.ES3Debug.LogError("The number of blend shape weights we are loading does not match the number of blend shapes in this SkinnedMeshRenderer's Mesh");
				ES3Debug_LogError_m8165218A013911617C94FCF4DD0C89F7327B2BAB(_stringLiteral7E7975F5870DE751BD38D4E3A4C0644FFCF21C5F, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, 0, NULL);
			}

IL_05b2_1:
			{
				// for (int i = 0; i < blendShapeWeights.Length; i++)
				V_5 = 0;
				goto IL_05c9_1;
			}

IL_05b7_1:
			{
				// instance.SetBlendShapeWeight(i, blendShapeWeights[i]);
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_185 = V_0;
				int32_t L_186 = V_5;
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_187 = V_3;
				int32_t L_188 = V_5;
				NullCheck(L_187);
				int32_t L_189 = L_188;
				float L_190 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
				NullCheck(L_185);
				SkinnedMeshRenderer_SetBlendShapeWeight_mD5724DB29A33F007E42F3666BF4B7ABC9C7F6F5E(L_185, L_186, L_190, NULL);
				// for (int i = 0; i < blendShapeWeights.Length; i++)
				int32_t L_191 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_191, 1));
			}

IL_05c9_1:
			{
				// for (int i = 0; i < blendShapeWeights.Length; i++)
				int32_t L_192 = V_5;
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_193 = V_3;
				NullCheck(L_193);
				if ((((int32_t)L_192) < ((int32_t)((int32_t)(((RuntimeArray*)L_193)->max_length)))))
				{
					goto IL_05b7_1;
				}
			}
			{
				// break;
				goto IL_05d8_1;
			}

IL_05d2_1:
			{
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_194 = ___0_reader;
				NullCheck(L_194);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_194);
			}

IL_05d8_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_195 = V_1;
				NullCheck(L_195);
				bool L_196;
				L_196 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_195);
				if (L_196)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_05f9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_05f9:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SphereCollider::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SphereCollider_ReadComponent_TisRuntimeObject_mA7D7C5728FF53C36FE24FEB3090E04C8507CCE65_gshared (ES3Type_SphereCollider_t41A8F4C79A0F595F31A356EDE1CF65887377E8BB* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mECF2B10A4C80058FBC2FD485B335DF6CFBDC3CFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE64B23668F08514EF5706B61F29331831C5F1009_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral416E9D0238C213CFB1C61EDAB93C78CA25E2D04B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72ECDD9F8744E37D4431E7D17FE954DD88ABF383);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF26F502B14F503952C33ADFF928357DED0388E8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.SphereCollider)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275*)CastclassClass((RuntimeObject*)L_0, SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_il2cpp_TypeInfo_var));
		// foreach(string propertyName in reader.Properties)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f4:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0104;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0104:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e7_1;
			}

IL_0018_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteralF26F502B14F503952C33ADFF928357DED0388E8D, NULL);
				if (L_10)
				{
					goto IL_0074_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
				if (L_12)
				{
					goto IL_0087_1;
				}
			}
			{
				String_t* L_13 = V_2;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
				if (L_14)
				{
					goto IL_009a_1;
				}
			}
			{
				String_t* L_15 = V_2;
				bool L_16;
				L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral416E9D0238C213CFB1C61EDAB93C78CA25E2D04B, NULL);
				if (L_16)
				{
					goto IL_00ad_1;
				}
			}
			{
				String_t* L_17 = V_2;
				bool L_18;
				L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral72ECDD9F8744E37D4431E7D17FE954DD88ABF383, NULL);
				if (L_18)
				{
					goto IL_00c0_1;
				}
			}
			{
				String_t* L_19 = V_2;
				bool L_20;
				L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED, NULL);
				if (L_20)
				{
					goto IL_00d3_1;
				}
			}
			{
				goto IL_00e1_1;
			}

IL_0074_1:
			{
				// instance.center = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
				SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_21 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_23 = ((ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_22);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
				L_24 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE64B23668F08514EF5706B61F29331831C5F1009_RuntimeMethod_var, L_22, L_23);
				NullCheck(L_21);
				SphereCollider_set_center_m83F6CC0056B491CD577B9AC08FA1E331074203D4(L_21, L_24, NULL);
				// break;
				goto IL_00e7_1;
			}

IL_0087_1:
			{
				// instance.radius = reader.Read<float>(ES3Type_float.Instance);
				SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_25 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_26);
				float L_28;
				L_28 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_26, L_27);
				NullCheck(L_25);
				SphereCollider_set_radius_m6119FE18C6739B077AB17334B1B53984911017FF(L_25, L_28, NULL);
				// break;
				goto IL_00e7_1;
			}

IL_009a_1:
			{
				// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_29 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_30 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_31 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_30);
				bool L_32;
				L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_30, L_31);
				NullCheck((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_29);
				Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_29, L_32, NULL);
				// break;
				goto IL_00e7_1;
			}

IL_00ad_1:
			{
				// instance.isTrigger = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_33 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_34 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_35 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_34);
				bool L_36;
				L_36 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_34, L_35);
				NullCheck((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_33);
				Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_33, L_36, NULL);
				// break;
				goto IL_00e7_1;
			}

IL_00c0_1:
			{
				// instance.contactOffset = reader.Read<System.Single>(ES3Type_float.Instance);
				SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_37 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_38);
				float L_40;
				L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
				NullCheck((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_37);
				Collider_set_contactOffset_mEDA8D778F641338733D140E76FCA0D6B29203B52((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_37, L_40, NULL);
				// break;
				goto IL_00e7_1;
			}

IL_00d3_1:
			{
				// instance.sharedMaterial = reader.Read<UnityEngine.PhysicMaterial>();
				SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_41 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___0_reader;
				NullCheck(L_42);
				PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_43;
				L_43 = GenericVirtualFuncInvoker0< PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* >::Invoke(ES3Reader_Read_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mECF2B10A4C80058FBC2FD485B335DF6CFBDC3CFA_RuntimeMethod_var, L_42);
				NullCheck((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_41);
				Collider_set_sharedMaterial_m2AC21AB939A377ABACF8282CDC52EE61B54107ED((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_41, L_43, NULL);
				// break;
				goto IL_00e7_1;
			}

IL_00e1_1:
			{
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
				NullCheck(L_44);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_44);
			}

IL_00e7_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_45 = V_1;
				NullCheck(L_45);
				bool L_46;
				L_46 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_45);
				if (L_46)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0105;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0105:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_Sprite::ReadUnityObject<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Sprite_ReadUnityObject_TisRuntimeObject_m925B92C1B02F06C24DC4573B7B6D5F91EF1EB6A0_gshared (ES3Type_Sprite_t12CE66318CA9CEBA9F08514B630AE12F23266F10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mA6BC0966573158BAA04C16A59D4C29333C825CA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m80ED457EC2261E8551ECFF0C5BD1FB53EF4B34E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC522ADACDCFB77F66E3394A74AF1238A19DC5509_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07B42771F94A775E3DA27DF681FC6B5836E8C54F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35D48CEE13BEC2D9912C51B56AEE98CCBF2F598E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F7F9963A2354D2A1DAE9EB5D17828E80398A34E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81787047FD5FE9202731B83C06E2CA803858DB13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB43137F5798267E1A82DD467143B245A821F93F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE88CEA670D83FE6CD2A52F3E973A7740F94C4E50);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	String_t* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	{
		// Texture2D texture = null;
		V_0 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		// Rect rect = Rect.zero;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		L_0 = Rect_get_zero_m5341D8B63DEF1F4C308A685EEC8CFEA12A396C8D(NULL);
		V_1 = L_0;
		// Vector2 pivot = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_2 = L_1;
		// float pixelsPerUnit = 0;
		V_3 = (0.0f);
		// Vector4 border = Vector4.zero;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		V_4 = L_2;
		// foreach (string propertyName in reader.Properties)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___0_reader;
		NullCheck(L_3);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_4;
		L_4 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_4, NULL);
		V_5 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ec:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_5;
					V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_7 = V_7;
					if (!L_7)
					{
						goto IL_0100;
					}
				}
				{
					RuntimeObject* L_8 = V_7;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0100:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00de_1;
			}

IL_002d_1:
			{
				// foreach (string propertyName in reader.Properties)
				RuntimeObject* L_9 = V_5;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				V_6 = ((String_t*)CastclassSealed((RuntimeObject*)L_10, String_t_il2cpp_TypeInfo_var));
				String_t* L_11 = V_6;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralE88CEA670D83FE6CD2A52F3E973A7740F94C4E50, NULL);
				if (L_12)
				{
					goto IL_0091_1;
				}
			}
			{
				String_t* L_13 = V_6;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral35D48CEE13BEC2D9912C51B56AEE98CCBF2F598E, NULL);
				if (L_14)
				{
					goto IL_009f_1;
				}
			}
			{
				String_t* L_15 = V_6;
				bool L_16;
				L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral6F7F9963A2354D2A1DAE9EB5D17828E80398A34E, NULL);
				if (L_16)
				{
					goto IL_009f_1;
				}
			}
			{
				String_t* L_17 = V_6;
				bool L_18;
				L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral07B42771F94A775E3DA27DF681FC6B5836E8C54F, NULL);
				if (L_18)
				{
					goto IL_00ad_1;
				}
			}
			{
				String_t* L_19 = V_6;
				bool L_20;
				L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral81787047FD5FE9202731B83C06E2CA803858DB13, NULL);
				if (L_20)
				{
					goto IL_00bb_1;
				}
			}
			{
				String_t* L_21 = V_6;
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralBB43137F5798267E1A82DD467143B245A821F93F, NULL);
				if (L_22)
				{
					goto IL_00c9_1;
				}
			}
			{
				goto IL_00d8_1;
			}

IL_0091_1:
			{
				// texture = reader.Read<UnityEngine.Texture2D>(ES3Type_Texture2D.Instance);
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_24 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_23);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25;
				L_25 = GenericVirtualFuncInvoker1< Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m80ED457EC2261E8551ECFF0C5BD1FB53EF4B34E6_RuntimeMethod_var, L_23, L_24);
				V_0 = L_25;
				// break;
				goto IL_00de_1;
			}

IL_009f_1:
			{
				// rect = reader.Read<Rect>(ES3Type_Rect.Instance);
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_26 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_27 = ((ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Rect_tA59CCC6EF86B5E61BAFD8C2672BCE896AC4ED562_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_26);
				Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_28;
				L_28 = GenericVirtualFuncInvoker1< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mA6BC0966573158BAA04C16A59D4C29333C825CA4_RuntimeMethod_var, L_26, L_27);
				V_1 = L_28;
				// break;
				goto IL_00de_1;
			}

IL_00ad_1:
			{
				// pivot = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_29 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_30 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_29);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
				L_31 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_29, L_30);
				V_2 = L_31;
				// break;
				goto IL_00de_1;
			}

IL_00bb_1:
			{
				// pixelsPerUnit = reader.Read<System.Single>(ES3Type_float.Instance);
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_32);
				float L_34;
				L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_32, L_33);
				V_3 = L_34;
				// break;
				goto IL_00de_1;
			}

IL_00c9_1:
			{
				// border = reader.Read<Vector4>(ES3Type_Vector4.Instance);
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_35);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_37;
				L_37 = GenericVirtualFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC522ADACDCFB77F66E3394A74AF1238A19DC5509_RuntimeMethod_var, L_35, L_36);
				V_4 = L_37;
				// break;
				goto IL_00de_1;
			}

IL_00d8_1:
			{
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
				NullCheck(L_38);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_38);
			}

IL_00de_1:
			{
				// foreach (string propertyName in reader.Properties)
				RuntimeObject* L_39 = V_5;
				NullCheck(L_39);
				bool L_40;
				L_40 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_39);
				if (L_40)
				{
					goto IL_002d_1;
				}
			}
			{
				goto IL_0101;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0101:
	{
		// return Sprite.Create(texture, rect, pivot, pixelsPerUnit, 0, SpriteMeshType.Tight, border);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_41 = V_0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_42 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = V_2;
		float L_44 = V_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_45 = V_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_46;
		L_46 = Sprite_Create_m4A5CCF67CAA13E470FD1CBBDEB08122733C4657B(L_41, L_42, L_43, L_44, (uint32_t)0, (int32_t)1, L_45, NULL);
		return (RuntimeObject*)L_46;
	}
}
// System.Void ES3Types.ES3Type_Sprite::ReadUnityObject<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Sprite_ReadUnityObject_TisRuntimeObject_m4AF3D7F00F2B3FC53D9761551A4A1AD0ECD8CC6A_gshared (ES3Type_Sprite_t12CE66318CA9CEBA9F08514B630AE12F23266F10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// foreach (string propertyName in reader.Properties)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		NullCheck(L_0);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_1;
		L_1 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_003a;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_003a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0020_1;
			}

IL_000e_1:
			{
				// foreach (string propertyName in reader.Properties)
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___0_reader;
				NullCheck(L_8);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_8);
			}

IL_0020_1:
			{
				// foreach (string propertyName in reader.Properties)
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SpriteRenderer::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SpriteRenderer_ReadComponent_TisRuntimeObject_mEA742AC1A7C23613AB90A8E1D750B4EEC9D9A77B_gshared (ES3Type_SpriteRenderer_tD67ABA492E176020743E5D4DED7C651F0FE4DC8B* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m88F5AE4F47F57108F2D11503B0CF0F3A8B39DE95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948_m21A35630F47AA42AB097D915807D6BD53CBF3CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_m2E281152A940F223547F05BA3E2942B1C8E0A1E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB_m1F66D8A5665BB474661ED5537E62D626955D6136_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisReflectionProbeUsage_t033508C14CD4AD926A3A215D19913DC21EA22705_mB304BCA0B08E6B3DC4277CD20BF0C7EAC55B336A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D_mF7F8CC6CE7025057CF127A89A9AE1DE8F3E37635_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m57987108AA25694462069F74A68455A0721D37BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m65C5A6DA0BFF389A8968C68CBF5690D521C379A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC522ADACDCFB77F66E3394A74AF1238A19DC5509_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Sprite_t12CE66318CA9CEBA9F08514B630AE12F23266F10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F9261ABE85940E10CA48B7B42F1E5267F122734);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral300CA1BACB3617C0704FA17879EE87F5EE04FACB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral338DFB21C4BCDE10C2A6B0F6B758581AB45E283A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC42735CF07DB9169F6821DC94EB45DE6B5E1AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral565FD04664DC0BE28E9E966B19A5341FD8C2DC3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73792CCBAF937C765700AA0D7388BC226F003166);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82A38EB534B163662598A55A70842F5AA8919477);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843D6122FFBBF465C80ECD6FDFC0DF88BEAF4E14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral892582A238DF4FFEB2A2E7DD5D90A9A7AC6C26C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD0A7170C2DECE4F5E82F96AB9B00AAEBA9F438);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F76FFC503D9127950E3EAD1DFD82A8C6C91F728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0ECA3668A8B14855295BD8DD5E88309AF31330B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDBEBC1E8A863EAF2A1EFDC4D2393F1540ABF0C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8D7651AAAFAAA9A55123A4B14C546BC27C603E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0D915A2B403702AB1F18A340F6557F4030455A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDA23639367EB0B86F361EA02AD294BDFDE6BA0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		// var instance = (UnityEngine.SpriteRenderer)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B*)CastclassSealed((RuntimeObject*)L_0, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var));
		// foreach(string propertyName in reader.Properties)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_04a8:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_4;
					if (!L_5)
					{
						goto IL_04bb;
					}
				}
				{
					RuntimeObject* L_6 = V_4;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_04bb:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_049b_1;
			}

IL_0018_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				uint32_t L_10;
				L_10 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_9, NULL);
				V_3 = L_10;
				uint32_t L_11 = V_3;
				if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1587639706)))))
				{
					goto IL_00d0_1;
				}
			}
			{
				uint32_t L_12 = V_3;
				if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)560621451)))))
				{
					goto IL_0087_1;
				}
			}
			{
				uint32_t L_13 = V_3;
				if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)258071601)))))
				{
					goto IL_0061_1;
				}
			}
			{
				uint32_t L_14 = V_3;
				if ((((int32_t)L_14) == ((int32_t)((int32_t)49525662))))
				{
					goto IL_01bb_1;
				}
			}
			{
				uint32_t L_15 = V_3;
				if ((((int32_t)L_15) == ((int32_t)((int32_t)258071601))))
				{
					goto IL_02b7_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_0061_1:
			{
				uint32_t L_16 = V_3;
				if ((((int32_t)L_16) == ((int32_t)((int32_t)369730773))))
				{
					goto IL_020f_1;
				}
			}
			{
				uint32_t L_17 = V_3;
				if ((((int32_t)L_17) == ((int32_t)((int32_t)394058932))))
				{
					goto IL_0239_1;
				}
			}
			{
				uint32_t L_18 = V_3;
				if ((((int32_t)L_18) == ((int32_t)((int32_t)560621451))))
				{
					goto IL_01e5_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_0087_1:
			{
				uint32_t L_19 = V_3;
				if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)1031692888)))))
				{
					goto IL_00aa_1;
				}
			}
			{
				uint32_t L_20 = V_3;
				if ((((int32_t)L_20) == ((int32_t)((int32_t)899577978))))
				{
					goto IL_0224_1;
				}
			}
			{
				uint32_t L_21 = V_3;
				if ((((int32_t)L_21) == ((int32_t)((int32_t)1031692888))))
				{
					goto IL_017c_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_00aa_1:
			{
				uint32_t L_22 = V_3;
				if ((((int32_t)L_22) == ((int32_t)((int32_t)1039612288))))
				{
					goto IL_02a2_1;
				}
			}
			{
				uint32_t L_23 = V_3;
				if ((((int32_t)L_23) == ((int32_t)((int32_t)1435400483))))
				{
					goto IL_02cc_1;
				}
			}
			{
				uint32_t L_24 = V_3;
				if ((((int32_t)L_24) == ((int32_t)((int32_t)1587639706))))
				{
					goto IL_0191_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_00d0_1:
			{
				uint32_t L_25 = V_3;
				if ((!(((uint32_t)L_25) <= ((uint32_t)((int32_t)-2115872740)))))
				{
					goto IL_011e_1;
				}
			}
			{
				uint32_t L_26 = V_3;
				if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)1681590497)))))
				{
					goto IL_00fb_1;
				}
			}
			{
				uint32_t L_27 = V_3;
				if ((((int32_t)L_27) == ((int32_t)((int32_t)1604417325))))
				{
					goto IL_01a6_1;
				}
			}
			{
				uint32_t L_28 = V_3;
				if ((((int32_t)L_28) == ((int32_t)((int32_t)1681590497))))
				{
					goto IL_02f6_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_00fb_1:
			{
				uint32_t L_29 = V_3;
				if ((((int32_t)L_29) == ((int32_t)((int32_t)2056288458))))
				{
					goto IL_01fa_1;
				}
			}
			{
				uint32_t L_30 = V_3;
				if ((((int32_t)L_30) == ((int32_t)((int32_t)2066010489))))
				{
					goto IL_024e_1;
				}
			}
			{
				uint32_t L_31 = V_3;
				if ((((int32_t)L_31) == ((int32_t)((int32_t)-2115872740))))
				{
					goto IL_0167_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_011e_1:
			{
				uint32_t L_32 = V_3;
				if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)-879427281)))))
				{
					goto IL_0141_1;
				}
			}
			{
				uint32_t L_33 = V_3;
				if ((((int32_t)L_33) == ((int32_t)((int32_t)-1450632603))))
				{
					goto IL_01d0_1;
				}
			}
			{
				uint32_t L_34 = V_3;
				if ((((int32_t)L_34) == ((int32_t)((int32_t)-879427281))))
				{
					goto IL_0263_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_0141_1:
			{
				uint32_t L_35 = V_3;
				if ((((int32_t)L_35) == ((int32_t)((int32_t)-641088577))))
				{
					goto IL_028d_1;
				}
			}
			{
				uint32_t L_36 = V_3;
				if ((((int32_t)L_36) == ((int32_t)((int32_t)-170312451))))
				{
					goto IL_02e1_1;
				}
			}
			{
				uint32_t L_37 = V_3;
				if ((((int32_t)L_37) == ((int32_t)((int32_t)-95858950))))
				{
					goto IL_0278_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_0167_1:
			{
				String_t* L_38 = V_2;
				bool L_39;
				L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B, NULL);
				if (L_39)
				{
					goto IL_030b_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_017c_1:
			{
				String_t* L_40 = V_2;
				bool L_41;
				L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
				if (L_41)
				{
					goto IL_0321_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_0191_1:
			{
				String_t* L_42 = V_2;
				bool L_43;
				L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteral565FD04664DC0BE28E9E966B19A5341FD8C2DC3B, NULL);
				if (L_43)
				{
					goto IL_0337_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_01a6_1:
			{
				String_t* L_44 = V_2;
				bool L_45;
				L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral300CA1BACB3617C0704FA17879EE87F5EE04FACB, NULL);
				if (L_45)
				{
					goto IL_034d_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_01bb_1:
			{
				String_t* L_46 = V_2;
				bool L_47;
				L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
				if (L_47)
				{
					goto IL_0363_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_01d0_1:
			{
				String_t* L_48 = V_2;
				bool L_49;
				L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralD0D915A2B403702AB1F18A340F6557F4030455A2, NULL);
				if (L_49)
				{
					goto IL_0379_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_01e5_1:
			{
				String_t* L_50 = V_2;
				bool L_51;
				L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralDDA23639367EB0B86F361EA02AD294BDFDE6BA0B, NULL);
				if (L_51)
				{
					goto IL_038a_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_01fa_1:
			{
				String_t* L_52 = V_2;
				bool L_53;
				L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19, NULL);
				if (L_53)
				{
					goto IL_03a0_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_020f_1:
			{
				String_t* L_54 = V_2;
				bool L_55;
				L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral82A38EB534B163662598A55A70842F5AA8919477, NULL);
				if (L_55)
				{
					goto IL_03b1_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_0224_1:
			{
				String_t* L_56 = V_2;
				bool L_57;
				L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteral73792CCBAF937C765700AA0D7388BC226F003166, NULL);
				if (L_57)
				{
					goto IL_03c7_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_0239_1:
			{
				String_t* L_58 = V_2;
				bool L_59;
				L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralA0ECA3668A8B14855295BD8DD5E88309AF31330B, NULL);
				if (L_59)
				{
					goto IL_03dd_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_024e_1:
			{
				String_t* L_60 = V_2;
				bool L_61;
				L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral8DD0A7170C2DECE4F5E82F96AB9B00AAEBA9F438, NULL);
				if (L_61)
				{
					goto IL_03f3_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_0263_1:
			{
				String_t* L_62 = V_2;
				bool L_63;
				L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteralBDBEBC1E8A863EAF2A1EFDC4D2393F1540ABF0C9, NULL);
				if (L_63)
				{
					goto IL_0404_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_0278_1:
			{
				String_t* L_64 = V_2;
				bool L_65;
				L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteral8F76FFC503D9127950E3EAD1DFD82A8C6C91F728, NULL);
				if (L_65)
				{
					goto IL_041a_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_028d_1:
			{
				String_t* L_66 = V_2;
				bool L_67;
				L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteralC8D7651AAAFAAA9A55123A4B14C546BC27C603E7, NULL);
				if (L_67)
				{
					goto IL_0428_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_02a2_1:
			{
				String_t* L_68 = V_2;
				bool L_69;
				L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteral338DFB21C4BCDE10C2A6B0F6B758581AB45E283A, NULL);
				if (L_69)
				{
					goto IL_043b_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_02b7_1:
			{
				String_t* L_70 = V_2;
				bool L_71;
				L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral843D6122FFBBF465C80ECD6FDFC0DF88BEAF4E14, NULL);
				if (L_71)
				{
					goto IL_044e_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_02cc_1:
			{
				String_t* L_72 = V_2;
				bool L_73;
				L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteral3EC42735CF07DB9169F6821DC94EB45DE6B5E1AA, NULL);
				if (L_73)
				{
					goto IL_045c_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_02e1_1:
			{
				String_t* L_74 = V_2;
				bool L_75;
				L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteral892582A238DF4FFEB2A2E7DD5D90A9A7AC6C26C4, NULL);
				if (L_75)
				{
					goto IL_046f_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_02f6_1:
			{
				String_t* L_76 = V_2;
				bool L_77;
				L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteral1F9261ABE85940E10CA48B7B42F1E5267F122734, NULL);
				if (L_77)
				{
					goto IL_0482_1;
				}
			}
			{
				goto IL_0495_1;
			}

IL_030b_1:
			{
				// instance.sprite = reader.Read<UnityEngine.Sprite>(ES3Type_Sprite.Instance);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_78 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_80 = ((ES3Type_Sprite_t12CE66318CA9CEBA9F08514B630AE12F23266F10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Sprite_t12CE66318CA9CEBA9F08514B630AE12F23266F10_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_79);
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_81;
				L_81 = GenericVirtualFuncInvoker1< Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m57987108AA25694462069F74A68455A0721D37BC_RuntimeMethod_var, L_79, L_80);
				NullCheck(L_78);
				SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_78, L_81, NULL);
				// break;
				goto IL_049b_1;
			}

IL_0321_1:
			{
				// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_82 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_84 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_83);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_85;
				L_85 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_83, L_84);
				NullCheck(L_82);
				SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_82, L_85, NULL);
				// break;
				goto IL_049b_1;
			}

IL_0337_1:
			{
				// instance.flipX = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_86 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_87 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_88 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_87);
				bool L_89;
				L_89 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_87, L_88);
				NullCheck(L_86);
				SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_86, L_89, NULL);
				// break;
				goto IL_049b_1;
			}

IL_034d_1:
			{
				// instance.flipY = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_90 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_91 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_92 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_91);
				bool L_93;
				L_93 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_91, L_92);
				NullCheck(L_90);
				SpriteRenderer_set_flipY_mB3B2BF1BF87C6BC2DE1795CA4698726091E1FEFA(L_90, L_93, NULL);
				// break;
				goto IL_049b_1;
			}

IL_0363_1:
			{
				// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_94 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_96 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_95);
				bool L_97;
				L_97 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_95, L_96);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_94);
				Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_94, L_97, NULL);
				// break;
				goto IL_049b_1;
			}

IL_0379_1:
			{
				// instance.shadowCastingMode = reader.Read<UnityEngine.Rendering.ShadowCastingMode>();
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_98 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___0_reader;
				NullCheck(L_99);
				int32_t L_100;
				L_100 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D_mF7F8CC6CE7025057CF127A89A9AE1DE8F3E37635_RuntimeMethod_var, L_99);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_98);
				Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_98, L_100, NULL);
				// break;
				goto IL_049b_1;
			}

IL_038a_1:
			{
				// instance.receiveShadows = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_101 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_102 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_103 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_102);
				bool L_104;
				L_104 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_102, L_103);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_101);
				Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_101, L_104, NULL);
				// break;
				goto IL_049b_1;
			}

IL_03a0_1:
			{
				// instance.sharedMaterials = reader.Read<UnityEngine.Material[]>();
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_105 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_106 = ___0_reader;
				NullCheck(L_106);
				MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_107;
				L_107 = GenericVirtualFuncInvoker0< MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* >::Invoke(ES3Reader_Read_TisMaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_m2E281152A940F223547F05BA3E2942B1C8E0A1E3_RuntimeMethod_var, L_106);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_105);
				Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_105, L_107, NULL);
				// break;
				goto IL_049b_1;
			}

IL_03b1_1:
			{
				// instance.lightmapIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_108 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_109 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_110 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_109);
				int32_t L_111;
				L_111 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_109, L_110);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_108);
				Renderer_set_lightmapIndex_mB6F2202FEC2ECBA3538EBDAEE17B073CEF2B5AB8((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_108, L_111, NULL);
				// break;
				goto IL_049b_1;
			}

IL_03c7_1:
			{
				// instance.realtimeLightmapIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_112 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_113 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_114 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_113);
				int32_t L_115;
				L_115 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_113, L_114);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_112);
				Renderer_set_realtimeLightmapIndex_mE5684918EF41D05B218AEC5D6D3675B8A8F77389((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_112, L_115, NULL);
				// break;
				goto IL_049b_1;
			}

IL_03dd_1:
			{
				// instance.lightmapScaleOffset = reader.Read<UnityEngine.Vector4>(ES3Type_Vector4.Instance);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_116 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_117 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_118 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_117);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_119;
				L_119 = GenericVirtualFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC522ADACDCFB77F66E3394A74AF1238A19DC5509_RuntimeMethod_var, L_117, L_118);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_116);
				Renderer_set_lightmapScaleOffset_m1F7EB461298380CCD8EE337F9AAAE40BE5B732A2((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_116, L_119, NULL);
				// break;
				goto IL_049b_1;
			}

IL_03f3_1:
			{
				// instance.motionVectorGenerationMode = reader.Read<UnityEngine.MotionVectorGenerationMode>();
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_120 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_121 = ___0_reader;
				NullCheck(L_121);
				int32_t L_122;
				L_122 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisMotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB_m1F66D8A5665BB474661ED5537E62D626955D6136_RuntimeMethod_var, L_121);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_120);
				Renderer_set_motionVectorGenerationMode_m5768AC38CBBAD505E34281889682CA464ED3A32F((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_120, L_122, NULL);
				// break;
				goto IL_049b_1;
			}

IL_0404_1:
			{
				// instance.realtimeLightmapScaleOffset = reader.Read<UnityEngine.Vector4>(ES3Type_Vector4.Instance);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_123 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_124 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_125 = ((ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_t4744042038C2E1A1BAAD45D2DA4C21D9B5D174A6_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_124);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_126;
				L_126 = GenericVirtualFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC522ADACDCFB77F66E3394A74AF1238A19DC5509_RuntimeMethod_var, L_124, L_125);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_123);
				Renderer_set_realtimeLightmapScaleOffset_m391D14F3698B3D2BD88DC001931D261E5A3448E9((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_123, L_126, NULL);
				// break;
				goto IL_049b_1;
			}

IL_041a_1:
			{
				// instance.lightProbeUsage = reader.Read<UnityEngine.Rendering.LightProbeUsage>();
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_127 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_128 = ___0_reader;
				NullCheck(L_128);
				int32_t L_129;
				L_129 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisLightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948_m21A35630F47AA42AB097D915807D6BD53CBF3CFB_RuntimeMethod_var, L_128);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_127);
				Renderer_set_lightProbeUsage_mDCCD970DAC3546B32EF58876BABBD3353624F703((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_127, L_129, NULL);
				// break;
				goto IL_049b_1;
			}

IL_0428_1:
			{
				// instance.lightProbeProxyVolumeOverride = reader.Read<UnityEngine.GameObject>(ES3Type_GameObject.Instance);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_130 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_131 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_132 = ((ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_GameObject_tC1960F2F6CCFE9F26418AD22D1D18870BE1DE6A4_il2cpp_TypeInfo_var))->___Instance_15;
				NullCheck(L_131);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_133;
				L_133 = GenericVirtualFuncInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m88F5AE4F47F57108F2D11503B0CF0F3A8B39DE95_RuntimeMethod_var, L_131, L_132);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_130);
				Renderer_set_lightProbeProxyVolumeOverride_mEAF99A789A36BEDBAFCD2C2084578CF359587A21((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_130, L_133, NULL);
				// break;
				goto IL_049b_1;
			}

IL_043b_1:
			{
				// instance.probeAnchor = reader.Read<UnityEngine.Transform>(ES3Type_Transform.Instance);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_134 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_135 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_136 = ((ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Transform_tD50A7619BB17DAD63A4DD2DFD828C016F4C8F2B7_il2cpp_TypeInfo_var))->___Instance_15;
				NullCheck(L_135);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_137;
				L_137 = GenericVirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m65C5A6DA0BFF389A8968C68CBF5690D521C379A9_RuntimeMethod_var, L_135, L_136);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_134);
				Renderer_set_probeAnchor_m0032C3CC1BBF36AC32FCCDE6F4A6F2CE73062327((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_134, L_137, NULL);
				// break;
				goto IL_049b_1;
			}

IL_044e_1:
			{
				// instance.reflectionProbeUsage = reader.Read<UnityEngine.Rendering.ReflectionProbeUsage>();
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_138 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_139 = ___0_reader;
				NullCheck(L_139);
				int32_t L_140;
				L_140 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisReflectionProbeUsage_t033508C14CD4AD926A3A215D19913DC21EA22705_mB304BCA0B08E6B3DC4277CD20BF0C7EAC55B336A_RuntimeMethod_var, L_139);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_138);
				Renderer_set_reflectionProbeUsage_m54A268EACA655AC3C66C4CD7F8C1EF3B41F3E008((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_138, L_140, NULL);
				// break;
				goto IL_049b_1;
			}

IL_045c_1:
			{
				// instance.sortingLayerName = reader.Read<System.String>(ES3Type_string.Instance);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_141 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_142 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_143 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_142);
				String_t* L_144;
				L_144 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_142, L_143);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_141);
				Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_141, L_144, NULL);
				// break;
				goto IL_049b_1;
			}

IL_046f_1:
			{
				// instance.sortingLayerID = reader.Read<System.Int32>(ES3Type_int.Instance);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_145 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_146 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_147 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_146);
				int32_t L_148;
				L_148 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_146, L_147);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_145);
				Renderer_set_sortingLayerID_m289E44FD06B6692C7B2ADD1189FE4FC013180C49((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_145, L_148, NULL);
				// break;
				goto IL_049b_1;
			}

IL_0482_1:
			{
				// instance.sortingOrder = reader.Read<System.Int32>(ES3Type_int.Instance);
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_149 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_150 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_151 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_150);
				int32_t L_152;
				L_152 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_150, L_151);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_149);
				Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_149, L_152, NULL);
				// break;
				goto IL_049b_1;
			}

IL_0495_1:
			{
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_153 = ___0_reader;
				NullCheck(L_153);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_153);
			}

IL_049b_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_154 = V_1;
				NullCheck(L_154);
				bool L_155;
				L_155 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_154);
				if (L_155)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_04bc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_04bc:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_SubEmittersModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SubEmittersModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC07CA7B287DCDBA1D168E4BDD4A4716EA042D5A9_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SubEmittersModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_1 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_2 = L_1;
		RuntimeObject* L_3 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_5 = L_4;
		RuntimeObject* L_6 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SubEmittersModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SubEmittersModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m7B0CFECE7E092FC8CB395EBBD6DB01E185552C48_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SubEmittersModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_1 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_2 = L_1;
		RuntimeObject* L_3 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_5 = L_4;
		RuntimeObject* L_6 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SubEmittersModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SubEmittersModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE80F7F99FF5F0E53A831F3609DCA67820DE6A589_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SubEmittersModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_1 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_2 = L_1;
		RuntimeObject* L_3 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_5 = L_4;
		RuntimeObject* L_6 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SubEmittersModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SubEmittersModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m6100EA785E02804EB2D812C3B30A04F8542D08B8_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SubEmittersModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_1 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_2 = L_1;
		RuntimeObject* L_3 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_5 = L_4;
		RuntimeObject* L_6 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SubEmittersModule::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SubEmittersModule_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m41650877C3D7205ACA7BCFFED68068E356D3DE67_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SubEmittersModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_1 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_2 = L_1;
		RuntimeObject* L_3 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_5 = L_4;
		RuntimeObject* L_6 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SubEmittersModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SubEmittersModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1A5CAF5B046FE01E2778DB4D5FA3C2DF8952B00E_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SubEmittersModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_1 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_2 = L_1;
		RuntimeObject* L_3 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_5 = L_4;
		RuntimeObject* L_6 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SubEmittersModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SubEmittersModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mF65A0129E6A34DEAABB0D28DDF2711081A667B15_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SubEmittersModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_1 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_2 = L_1;
		RuntimeObject* L_3 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_5 = L_4;
		RuntimeObject* L_6 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SubEmittersModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SubEmittersModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mB8218091435D2C9FDF7832594E968F4C983E9A0D_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SubEmittersModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_1 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_2 = L_1;
		RuntimeObject* L_3 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_5 = L_4;
		RuntimeObject* L_6 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SubEmittersModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SubEmittersModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mD388FF260CF262A2A171BF8EF8AE15DAB4070DA0_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SubEmittersModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_1 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_2 = L_1;
		RuntimeObject* L_3 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_5 = L_4;
		RuntimeObject* L_6 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SubEmittersModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SubEmittersModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mE6822B5143C72FD30C0E4495998CAB0F084B6519_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SubEmittersModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_1 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_2 = L_1;
		RuntimeObject* L_3 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_5 = L_4;
		RuntimeObject* L_6 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SubEmittersModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SubEmittersModule_Read_TisRuntimeObject_m0187ED5E2B18F827B6F3483ABDACD177B7318B99_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SubEmittersModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_1 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_2 = L_1;
		RuntimeObject* L_3 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_5 = L_4;
		RuntimeObject* L_6 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SubEmittersModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SubEmittersModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mA15E1C93E04F1A4AE5E7B77F6BCA91E39851D22E_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SubEmittersModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_1 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_2 = L_1;
		RuntimeObject* L_3 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_5 = L_4;
		RuntimeObject* L_6 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SubEmittersModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SubEmittersModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m74D88857FAB6E07B5E327E754CF51431C6778893_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SubEmittersModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_1 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_2 = L_1;
		RuntimeObject* L_3 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_5 = L_4;
		RuntimeObject* L_6 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SubEmittersModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SubEmittersModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mB7449BFD2EB2C4D23D3547992AFFBB5188EAD78A_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SubEmittersModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_1 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_2 = L_1;
		RuntimeObject* L_3 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_5 = L_4;
		RuntimeObject* L_6 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SubEmittersModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SubEmittersModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A5852A7FBC699C89C4D3EFD41D8F149F52616CD_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SubEmittersModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_1 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_2 = L_1;
		RuntimeObject* L_3 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_5 = L_4;
		RuntimeObject* L_6 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SubEmittersModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SubEmittersModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA09EA6EE5F813B58FAFB80986A6B13B58E43A390_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SubEmittersModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_1 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_2 = L_1;
		RuntimeObject* L_3 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_5 = L_4;
		RuntimeObject* L_6 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SubEmittersModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SubEmittersModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m92BA5BA630331141483F7547E8812FB85780F1A8_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SubEmittersModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_1 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_2 = L_1;
		RuntimeObject* L_3 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_5 = L_4;
		RuntimeObject* L_6 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SubEmittersModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SubEmittersModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4E81E50777591DD5B6D945B76DF8A0BB2DF6239E_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SubEmittersModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_1 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_2 = L_1;
		RuntimeObject* L_3 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_5 = L_4;
		RuntimeObject* L_6 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SubEmittersModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SubEmittersModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mD6CEC5883856A8B534DB66FA14E630AF8530AB1C_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SubEmittersModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_1 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_2 = L_1;
		RuntimeObject* L_3 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_5 = L_4;
		RuntimeObject* L_6 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_SubEmittersModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_SubEmittersModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mC45CE789066584368B58A8A79A26C15D89CADE7E_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.SubEmittersModule();
		il2cpp_codegen_initobj((&V_0), sizeof(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_1 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_2 = L_1;
		RuntimeObject* L_3 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_4 = V_0;
		SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B L_5 = L_4;
		RuntimeObject* L_6 = Box(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_SubEmittersModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SubEmittersModule_ReadInto_TisRuntimeObject_mE6C9485BEFE78989B09CE3D164DD64662AF1A763_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* V_1 = NULL;
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_2 = NULL;
	ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SubEmittersModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)((SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)UnBox(L_0, SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var))));
		// ParticleSystemSubEmitterProperties[] seProperties = null;
		V_1 = (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*)NULL;
		// ParticleSystem[] seSystems = null;
		V_2 = (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6*)NULL;
		// ParticleSystemSubEmitterType[] seTypes = null;
		V_3 = (ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F*)NULL;
		goto IL_008d;
	}

IL_000f:
	{
		String_t* L_1 = V_4;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_3 = V_4;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1, NULL);
		if (L_4)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_5 = V_4;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A, NULL);
		if (L_6)
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_7 = V_4;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF, NULL);
		if (L_8)
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0087;
	}

IL_0049:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		bool L_11;
		L_11 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_9, L_10);
		SubEmittersModule_set_enabled_mA8AEC37F249912F94D7ED77A1E0D734C3299B31D((&V_0), L_11, NULL);
		// break;
		goto IL_008d;
	}

IL_005d:
	{
		// seProperties = reader.Read<ParticleSystemSubEmitterProperties[]>(new ES3ArrayType(typeof(ParticleSystemSubEmitterProperties[])));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_12 = ___0_reader;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535* L_15 = (ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535*)il2cpp_codegen_object_new(ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		ES3ArrayType__ctor_mC6FEB089144B367D53F28FA8434337D7C1D9184A(L_15, L_14, NULL);
		NullCheck(L_12);
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_16;
		L_16 = GenericVirtualFuncInvoker1< ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var, L_12, (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)L_15);
		V_1 = L_16;
		// break;
		goto IL_008d;
	}

IL_0075:
	{
		// seSystems = reader.Read<ParticleSystem[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___0_reader;
		NullCheck(L_17);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_18;
		L_18 = GenericVirtualFuncInvoker0< ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* >::Invoke(ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var, L_17);
		V_2 = L_18;
		// break;
		goto IL_008d;
	}

IL_007e:
	{
		// seTypes = reader.Read<ParticleSystemSubEmitterType[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_19 = ___0_reader;
		NullCheck(L_19);
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_20;
		L_20 = GenericVirtualFuncInvoker0< ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var, L_19);
		V_3 = L_20;
		// break;
		goto IL_008d;
	}

IL_0087:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_21 = ___0_reader;
		NullCheck(L_21);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
	}

IL_008d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___0_reader;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_22);
		String_t* L_24 = L_23;
		V_4 = L_24;
		if (L_24)
		{
			goto IL_000f;
		}
	}
	{
		// if(seProperties != null)
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_25 = V_1;
		if (!L_25)
		{
			goto IL_00cc;
		}
	}
	{
		// for(int i=0; i<seProperties.Length; i++)
		V_5 = 0;
		goto IL_00c5;
	}

IL_00a3:
	{
		// instance.RemoveSubEmitter(i);
		int32_t L_26 = V_5;
		SubEmittersModule_RemoveSubEmitter_m28E0F914662700046A5D524CA001C4C69B12FFA9((&V_0), L_26, NULL);
		// instance.AddSubEmitter(seSystems[i],seTypes[i],seProperties[i]);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_27 = V_2;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (int32_t)(L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_35 = V_1;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (int32_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		SubEmittersModule_AddSubEmitter_m521A291486CC2FC41785BDFFE06955306E5536BF((&V_0), L_30, (int32_t)L_34, (int32_t)L_38, NULL);
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00c5:
	{
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_40 = V_5;
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_41 = V_1;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_00a3;
		}
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SubEmittersModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SubEmittersModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m6FD7087CBF6BFB5EF89BB404799BB209016C2830_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* V_1 = NULL;
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_2 = NULL;
	ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SubEmittersModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)((SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)UnBox(L_0, SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var))));
		// ParticleSystemSubEmitterProperties[] seProperties = null;
		V_1 = (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*)NULL;
		// ParticleSystem[] seSystems = null;
		V_2 = (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6*)NULL;
		// ParticleSystemSubEmitterType[] seTypes = null;
		V_3 = (ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F*)NULL;
		goto IL_008d;
	}

IL_000f:
	{
		String_t* L_1 = V_4;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_3 = V_4;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1, NULL);
		if (L_4)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_5 = V_4;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A, NULL);
		if (L_6)
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_7 = V_4;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF, NULL);
		if (L_8)
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0087;
	}

IL_0049:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		bool L_11;
		L_11 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_9, L_10);
		SubEmittersModule_set_enabled_mA8AEC37F249912F94D7ED77A1E0D734C3299B31D((&V_0), L_11, NULL);
		// break;
		goto IL_008d;
	}

IL_005d:
	{
		// seProperties = reader.Read<ParticleSystemSubEmitterProperties[]>(new ES3ArrayType(typeof(ParticleSystemSubEmitterProperties[])));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_12 = ___0_reader;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535* L_15 = (ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535*)il2cpp_codegen_object_new(ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		ES3ArrayType__ctor_mC6FEB089144B367D53F28FA8434337D7C1D9184A(L_15, L_14, NULL);
		NullCheck(L_12);
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_16;
		L_16 = GenericVirtualFuncInvoker1< ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var, L_12, (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)L_15);
		V_1 = L_16;
		// break;
		goto IL_008d;
	}

IL_0075:
	{
		// seSystems = reader.Read<ParticleSystem[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___0_reader;
		NullCheck(L_17);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_18;
		L_18 = GenericVirtualFuncInvoker0< ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* >::Invoke(ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var, L_17);
		V_2 = L_18;
		// break;
		goto IL_008d;
	}

IL_007e:
	{
		// seTypes = reader.Read<ParticleSystemSubEmitterType[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_19 = ___0_reader;
		NullCheck(L_19);
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_20;
		L_20 = GenericVirtualFuncInvoker0< ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var, L_19);
		V_3 = L_20;
		// break;
		goto IL_008d;
	}

IL_0087:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_21 = ___0_reader;
		NullCheck(L_21);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
	}

IL_008d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___0_reader;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_22);
		String_t* L_24 = L_23;
		V_4 = L_24;
		if (L_24)
		{
			goto IL_000f;
		}
	}
	{
		// if(seProperties != null)
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_25 = V_1;
		if (!L_25)
		{
			goto IL_00cc;
		}
	}
	{
		// for(int i=0; i<seProperties.Length; i++)
		V_5 = 0;
		goto IL_00c5;
	}

IL_00a3:
	{
		// instance.RemoveSubEmitter(i);
		int32_t L_26 = V_5;
		SubEmittersModule_RemoveSubEmitter_m28E0F914662700046A5D524CA001C4C69B12FFA9((&V_0), L_26, NULL);
		// instance.AddSubEmitter(seSystems[i],seTypes[i],seProperties[i]);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_27 = V_2;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (int32_t)(L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_35 = V_1;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (int32_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		SubEmittersModule_AddSubEmitter_m521A291486CC2FC41785BDFFE06955306E5536BF((&V_0), L_30, (int32_t)L_34, (int32_t)L_38, NULL);
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00c5:
	{
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_40 = V_5;
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_41 = V_1;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_00a3;
		}
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SubEmittersModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SubEmittersModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m05B639F1A8DFC74090D78B14D026C568BB2E3EA3_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* V_1 = NULL;
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_2 = NULL;
	ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SubEmittersModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)((SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)UnBox(L_0, SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var))));
		// ParticleSystemSubEmitterProperties[] seProperties = null;
		V_1 = (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*)NULL;
		// ParticleSystem[] seSystems = null;
		V_2 = (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6*)NULL;
		// ParticleSystemSubEmitterType[] seTypes = null;
		V_3 = (ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F*)NULL;
		goto IL_008d;
	}

IL_000f:
	{
		String_t* L_1 = V_4;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_3 = V_4;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1, NULL);
		if (L_4)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_5 = V_4;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A, NULL);
		if (L_6)
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_7 = V_4;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF, NULL);
		if (L_8)
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0087;
	}

IL_0049:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		bool L_11;
		L_11 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_9, L_10);
		SubEmittersModule_set_enabled_mA8AEC37F249912F94D7ED77A1E0D734C3299B31D((&V_0), L_11, NULL);
		// break;
		goto IL_008d;
	}

IL_005d:
	{
		// seProperties = reader.Read<ParticleSystemSubEmitterProperties[]>(new ES3ArrayType(typeof(ParticleSystemSubEmitterProperties[])));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_12 = ___0_reader;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535* L_15 = (ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535*)il2cpp_codegen_object_new(ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		ES3ArrayType__ctor_mC6FEB089144B367D53F28FA8434337D7C1D9184A(L_15, L_14, NULL);
		NullCheck(L_12);
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_16;
		L_16 = GenericVirtualFuncInvoker1< ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var, L_12, (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)L_15);
		V_1 = L_16;
		// break;
		goto IL_008d;
	}

IL_0075:
	{
		// seSystems = reader.Read<ParticleSystem[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___0_reader;
		NullCheck(L_17);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_18;
		L_18 = GenericVirtualFuncInvoker0< ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* >::Invoke(ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var, L_17);
		V_2 = L_18;
		// break;
		goto IL_008d;
	}

IL_007e:
	{
		// seTypes = reader.Read<ParticleSystemSubEmitterType[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_19 = ___0_reader;
		NullCheck(L_19);
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_20;
		L_20 = GenericVirtualFuncInvoker0< ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var, L_19);
		V_3 = L_20;
		// break;
		goto IL_008d;
	}

IL_0087:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_21 = ___0_reader;
		NullCheck(L_21);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
	}

IL_008d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___0_reader;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_22);
		String_t* L_24 = L_23;
		V_4 = L_24;
		if (L_24)
		{
			goto IL_000f;
		}
	}
	{
		// if(seProperties != null)
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_25 = V_1;
		if (!L_25)
		{
			goto IL_00cc;
		}
	}
	{
		// for(int i=0; i<seProperties.Length; i++)
		V_5 = 0;
		goto IL_00c5;
	}

IL_00a3:
	{
		// instance.RemoveSubEmitter(i);
		int32_t L_26 = V_5;
		SubEmittersModule_RemoveSubEmitter_m28E0F914662700046A5D524CA001C4C69B12FFA9((&V_0), L_26, NULL);
		// instance.AddSubEmitter(seSystems[i],seTypes[i],seProperties[i]);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_27 = V_2;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (int32_t)(L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_35 = V_1;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (int32_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		SubEmittersModule_AddSubEmitter_m521A291486CC2FC41785BDFFE06955306E5536BF((&V_0), L_30, (int32_t)L_34, (int32_t)L_38, NULL);
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00c5:
	{
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_40 = V_5;
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_41 = V_1;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_00a3;
		}
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SubEmittersModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SubEmittersModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mEECD5BC6056BF0BBEB89B3484F53A8FD6B8B3DD3_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* V_1 = NULL;
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_2 = NULL;
	ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SubEmittersModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)((SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)UnBox(L_0, SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var))));
		// ParticleSystemSubEmitterProperties[] seProperties = null;
		V_1 = (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*)NULL;
		// ParticleSystem[] seSystems = null;
		V_2 = (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6*)NULL;
		// ParticleSystemSubEmitterType[] seTypes = null;
		V_3 = (ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F*)NULL;
		goto IL_008d;
	}

IL_000f:
	{
		String_t* L_1 = V_4;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_3 = V_4;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1, NULL);
		if (L_4)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_5 = V_4;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A, NULL);
		if (L_6)
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_7 = V_4;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF, NULL);
		if (L_8)
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0087;
	}

IL_0049:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		bool L_11;
		L_11 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_9, L_10);
		SubEmittersModule_set_enabled_mA8AEC37F249912F94D7ED77A1E0D734C3299B31D((&V_0), L_11, NULL);
		// break;
		goto IL_008d;
	}

IL_005d:
	{
		// seProperties = reader.Read<ParticleSystemSubEmitterProperties[]>(new ES3ArrayType(typeof(ParticleSystemSubEmitterProperties[])));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_12 = ___0_reader;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535* L_15 = (ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535*)il2cpp_codegen_object_new(ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		ES3ArrayType__ctor_mC6FEB089144B367D53F28FA8434337D7C1D9184A(L_15, L_14, NULL);
		NullCheck(L_12);
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_16;
		L_16 = GenericVirtualFuncInvoker1< ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var, L_12, (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)L_15);
		V_1 = L_16;
		// break;
		goto IL_008d;
	}

IL_0075:
	{
		// seSystems = reader.Read<ParticleSystem[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___0_reader;
		NullCheck(L_17);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_18;
		L_18 = GenericVirtualFuncInvoker0< ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* >::Invoke(ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var, L_17);
		V_2 = L_18;
		// break;
		goto IL_008d;
	}

IL_007e:
	{
		// seTypes = reader.Read<ParticleSystemSubEmitterType[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_19 = ___0_reader;
		NullCheck(L_19);
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_20;
		L_20 = GenericVirtualFuncInvoker0< ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var, L_19);
		V_3 = L_20;
		// break;
		goto IL_008d;
	}

IL_0087:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_21 = ___0_reader;
		NullCheck(L_21);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
	}

IL_008d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___0_reader;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_22);
		String_t* L_24 = L_23;
		V_4 = L_24;
		if (L_24)
		{
			goto IL_000f;
		}
	}
	{
		// if(seProperties != null)
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_25 = V_1;
		if (!L_25)
		{
			goto IL_00cc;
		}
	}
	{
		// for(int i=0; i<seProperties.Length; i++)
		V_5 = 0;
		goto IL_00c5;
	}

IL_00a3:
	{
		// instance.RemoveSubEmitter(i);
		int32_t L_26 = V_5;
		SubEmittersModule_RemoveSubEmitter_m28E0F914662700046A5D524CA001C4C69B12FFA9((&V_0), L_26, NULL);
		// instance.AddSubEmitter(seSystems[i],seTypes[i],seProperties[i]);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_27 = V_2;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (int32_t)(L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_35 = V_1;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (int32_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		SubEmittersModule_AddSubEmitter_m521A291486CC2FC41785BDFFE06955306E5536BF((&V_0), L_30, (int32_t)L_34, (int32_t)L_38, NULL);
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00c5:
	{
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_40 = V_5;
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_41 = V_1;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_00a3;
		}
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SubEmittersModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SubEmittersModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m4D9FC0C63A7EEF423FBDB1CF971918E8D8A7C95F_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* V_1 = NULL;
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_2 = NULL;
	ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SubEmittersModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)((SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)UnBox(L_0, SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var))));
		// ParticleSystemSubEmitterProperties[] seProperties = null;
		V_1 = (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*)NULL;
		// ParticleSystem[] seSystems = null;
		V_2 = (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6*)NULL;
		// ParticleSystemSubEmitterType[] seTypes = null;
		V_3 = (ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F*)NULL;
		goto IL_008d;
	}

IL_000f:
	{
		String_t* L_1 = V_4;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_3 = V_4;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1, NULL);
		if (L_4)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_5 = V_4;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A, NULL);
		if (L_6)
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_7 = V_4;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF, NULL);
		if (L_8)
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0087;
	}

IL_0049:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		bool L_11;
		L_11 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_9, L_10);
		SubEmittersModule_set_enabled_mA8AEC37F249912F94D7ED77A1E0D734C3299B31D((&V_0), L_11, NULL);
		// break;
		goto IL_008d;
	}

IL_005d:
	{
		// seProperties = reader.Read<ParticleSystemSubEmitterProperties[]>(new ES3ArrayType(typeof(ParticleSystemSubEmitterProperties[])));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_12 = ___0_reader;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535* L_15 = (ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535*)il2cpp_codegen_object_new(ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		ES3ArrayType__ctor_mC6FEB089144B367D53F28FA8434337D7C1D9184A(L_15, L_14, NULL);
		NullCheck(L_12);
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_16;
		L_16 = GenericVirtualFuncInvoker1< ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var, L_12, (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)L_15);
		V_1 = L_16;
		// break;
		goto IL_008d;
	}

IL_0075:
	{
		// seSystems = reader.Read<ParticleSystem[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___0_reader;
		NullCheck(L_17);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_18;
		L_18 = GenericVirtualFuncInvoker0< ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* >::Invoke(ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var, L_17);
		V_2 = L_18;
		// break;
		goto IL_008d;
	}

IL_007e:
	{
		// seTypes = reader.Read<ParticleSystemSubEmitterType[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_19 = ___0_reader;
		NullCheck(L_19);
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_20;
		L_20 = GenericVirtualFuncInvoker0< ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var, L_19);
		V_3 = L_20;
		// break;
		goto IL_008d;
	}

IL_0087:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_21 = ___0_reader;
		NullCheck(L_21);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
	}

IL_008d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___0_reader;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_22);
		String_t* L_24 = L_23;
		V_4 = L_24;
		if (L_24)
		{
			goto IL_000f;
		}
	}
	{
		// if(seProperties != null)
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_25 = V_1;
		if (!L_25)
		{
			goto IL_00cc;
		}
	}
	{
		// for(int i=0; i<seProperties.Length; i++)
		V_5 = 0;
		goto IL_00c5;
	}

IL_00a3:
	{
		// instance.RemoveSubEmitter(i);
		int32_t L_26 = V_5;
		SubEmittersModule_RemoveSubEmitter_m28E0F914662700046A5D524CA001C4C69B12FFA9((&V_0), L_26, NULL);
		// instance.AddSubEmitter(seSystems[i],seTypes[i],seProperties[i]);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_27 = V_2;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (int32_t)(L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_35 = V_1;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (int32_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		SubEmittersModule_AddSubEmitter_m521A291486CC2FC41785BDFFE06955306E5536BF((&V_0), L_30, (int32_t)L_34, (int32_t)L_38, NULL);
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00c5:
	{
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_40 = V_5;
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_41 = V_1;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_00a3;
		}
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SubEmittersModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SubEmittersModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m7CE4DC9203076CA998EBEFDBA49050CC7CCF776A_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* V_1 = NULL;
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_2 = NULL;
	ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SubEmittersModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)((SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)UnBox(L_0, SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var))));
		// ParticleSystemSubEmitterProperties[] seProperties = null;
		V_1 = (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*)NULL;
		// ParticleSystem[] seSystems = null;
		V_2 = (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6*)NULL;
		// ParticleSystemSubEmitterType[] seTypes = null;
		V_3 = (ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F*)NULL;
		goto IL_008d;
	}

IL_000f:
	{
		String_t* L_1 = V_4;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_3 = V_4;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1, NULL);
		if (L_4)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_5 = V_4;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A, NULL);
		if (L_6)
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_7 = V_4;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF, NULL);
		if (L_8)
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0087;
	}

IL_0049:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		bool L_11;
		L_11 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_9, L_10);
		SubEmittersModule_set_enabled_mA8AEC37F249912F94D7ED77A1E0D734C3299B31D((&V_0), L_11, NULL);
		// break;
		goto IL_008d;
	}

IL_005d:
	{
		// seProperties = reader.Read<ParticleSystemSubEmitterProperties[]>(new ES3ArrayType(typeof(ParticleSystemSubEmitterProperties[])));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_12 = ___0_reader;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535* L_15 = (ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535*)il2cpp_codegen_object_new(ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		ES3ArrayType__ctor_mC6FEB089144B367D53F28FA8434337D7C1D9184A(L_15, L_14, NULL);
		NullCheck(L_12);
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_16;
		L_16 = GenericVirtualFuncInvoker1< ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var, L_12, (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)L_15);
		V_1 = L_16;
		// break;
		goto IL_008d;
	}

IL_0075:
	{
		// seSystems = reader.Read<ParticleSystem[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___0_reader;
		NullCheck(L_17);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_18;
		L_18 = GenericVirtualFuncInvoker0< ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* >::Invoke(ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var, L_17);
		V_2 = L_18;
		// break;
		goto IL_008d;
	}

IL_007e:
	{
		// seTypes = reader.Read<ParticleSystemSubEmitterType[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_19 = ___0_reader;
		NullCheck(L_19);
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_20;
		L_20 = GenericVirtualFuncInvoker0< ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var, L_19);
		V_3 = L_20;
		// break;
		goto IL_008d;
	}

IL_0087:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_21 = ___0_reader;
		NullCheck(L_21);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
	}

IL_008d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___0_reader;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_22);
		String_t* L_24 = L_23;
		V_4 = L_24;
		if (L_24)
		{
			goto IL_000f;
		}
	}
	{
		// if(seProperties != null)
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_25 = V_1;
		if (!L_25)
		{
			goto IL_00cc;
		}
	}
	{
		// for(int i=0; i<seProperties.Length; i++)
		V_5 = 0;
		goto IL_00c5;
	}

IL_00a3:
	{
		// instance.RemoveSubEmitter(i);
		int32_t L_26 = V_5;
		SubEmittersModule_RemoveSubEmitter_m28E0F914662700046A5D524CA001C4C69B12FFA9((&V_0), L_26, NULL);
		// instance.AddSubEmitter(seSystems[i],seTypes[i],seProperties[i]);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_27 = V_2;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (int32_t)(L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_35 = V_1;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (int32_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		SubEmittersModule_AddSubEmitter_m521A291486CC2FC41785BDFFE06955306E5536BF((&V_0), L_30, (int32_t)L_34, (int32_t)L_38, NULL);
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00c5:
	{
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_40 = V_5;
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_41 = V_1;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_00a3;
		}
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SubEmittersModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SubEmittersModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m87AC6128C29D5A47C471A622E357037813FE65C1_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* V_1 = NULL;
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_2 = NULL;
	ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SubEmittersModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)((SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)UnBox(L_0, SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var))));
		// ParticleSystemSubEmitterProperties[] seProperties = null;
		V_1 = (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*)NULL;
		// ParticleSystem[] seSystems = null;
		V_2 = (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6*)NULL;
		// ParticleSystemSubEmitterType[] seTypes = null;
		V_3 = (ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F*)NULL;
		goto IL_008d;
	}

IL_000f:
	{
		String_t* L_1 = V_4;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_3 = V_4;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1, NULL);
		if (L_4)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_5 = V_4;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A, NULL);
		if (L_6)
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_7 = V_4;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF, NULL);
		if (L_8)
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0087;
	}

IL_0049:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		bool L_11;
		L_11 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_9, L_10);
		SubEmittersModule_set_enabled_mA8AEC37F249912F94D7ED77A1E0D734C3299B31D((&V_0), L_11, NULL);
		// break;
		goto IL_008d;
	}

IL_005d:
	{
		// seProperties = reader.Read<ParticleSystemSubEmitterProperties[]>(new ES3ArrayType(typeof(ParticleSystemSubEmitterProperties[])));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_12 = ___0_reader;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535* L_15 = (ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535*)il2cpp_codegen_object_new(ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		ES3ArrayType__ctor_mC6FEB089144B367D53F28FA8434337D7C1D9184A(L_15, L_14, NULL);
		NullCheck(L_12);
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_16;
		L_16 = GenericVirtualFuncInvoker1< ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var, L_12, (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)L_15);
		V_1 = L_16;
		// break;
		goto IL_008d;
	}

IL_0075:
	{
		// seSystems = reader.Read<ParticleSystem[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___0_reader;
		NullCheck(L_17);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_18;
		L_18 = GenericVirtualFuncInvoker0< ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* >::Invoke(ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var, L_17);
		V_2 = L_18;
		// break;
		goto IL_008d;
	}

IL_007e:
	{
		// seTypes = reader.Read<ParticleSystemSubEmitterType[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_19 = ___0_reader;
		NullCheck(L_19);
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_20;
		L_20 = GenericVirtualFuncInvoker0< ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var, L_19);
		V_3 = L_20;
		// break;
		goto IL_008d;
	}

IL_0087:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_21 = ___0_reader;
		NullCheck(L_21);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
	}

IL_008d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___0_reader;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_22);
		String_t* L_24 = L_23;
		V_4 = L_24;
		if (L_24)
		{
			goto IL_000f;
		}
	}
	{
		// if(seProperties != null)
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_25 = V_1;
		if (!L_25)
		{
			goto IL_00cc;
		}
	}
	{
		// for(int i=0; i<seProperties.Length; i++)
		V_5 = 0;
		goto IL_00c5;
	}

IL_00a3:
	{
		// instance.RemoveSubEmitter(i);
		int32_t L_26 = V_5;
		SubEmittersModule_RemoveSubEmitter_m28E0F914662700046A5D524CA001C4C69B12FFA9((&V_0), L_26, NULL);
		// instance.AddSubEmitter(seSystems[i],seTypes[i],seProperties[i]);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_27 = V_2;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (int32_t)(L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_35 = V_1;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (int32_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		SubEmittersModule_AddSubEmitter_m521A291486CC2FC41785BDFFE06955306E5536BF((&V_0), L_30, (int32_t)L_34, (int32_t)L_38, NULL);
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00c5:
	{
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_40 = V_5;
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_41 = V_1;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_00a3;
		}
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SubEmittersModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SubEmittersModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m770F4F5AB3F73C919A7D134F19BDD3BA8C559459_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* V_1 = NULL;
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_2 = NULL;
	ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SubEmittersModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)((SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)UnBox(L_0, SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var))));
		// ParticleSystemSubEmitterProperties[] seProperties = null;
		V_1 = (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*)NULL;
		// ParticleSystem[] seSystems = null;
		V_2 = (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6*)NULL;
		// ParticleSystemSubEmitterType[] seTypes = null;
		V_3 = (ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F*)NULL;
		goto IL_008d;
	}

IL_000f:
	{
		String_t* L_1 = V_4;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_3 = V_4;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1, NULL);
		if (L_4)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_5 = V_4;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A, NULL);
		if (L_6)
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_7 = V_4;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF, NULL);
		if (L_8)
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0087;
	}

IL_0049:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		bool L_11;
		L_11 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_9, L_10);
		SubEmittersModule_set_enabled_mA8AEC37F249912F94D7ED77A1E0D734C3299B31D((&V_0), L_11, NULL);
		// break;
		goto IL_008d;
	}

IL_005d:
	{
		// seProperties = reader.Read<ParticleSystemSubEmitterProperties[]>(new ES3ArrayType(typeof(ParticleSystemSubEmitterProperties[])));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_12 = ___0_reader;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535* L_15 = (ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535*)il2cpp_codegen_object_new(ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		ES3ArrayType__ctor_mC6FEB089144B367D53F28FA8434337D7C1D9184A(L_15, L_14, NULL);
		NullCheck(L_12);
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_16;
		L_16 = GenericVirtualFuncInvoker1< ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var, L_12, (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)L_15);
		V_1 = L_16;
		// break;
		goto IL_008d;
	}

IL_0075:
	{
		// seSystems = reader.Read<ParticleSystem[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___0_reader;
		NullCheck(L_17);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_18;
		L_18 = GenericVirtualFuncInvoker0< ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* >::Invoke(ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var, L_17);
		V_2 = L_18;
		// break;
		goto IL_008d;
	}

IL_007e:
	{
		// seTypes = reader.Read<ParticleSystemSubEmitterType[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_19 = ___0_reader;
		NullCheck(L_19);
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_20;
		L_20 = GenericVirtualFuncInvoker0< ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var, L_19);
		V_3 = L_20;
		// break;
		goto IL_008d;
	}

IL_0087:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_21 = ___0_reader;
		NullCheck(L_21);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
	}

IL_008d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___0_reader;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_22);
		String_t* L_24 = L_23;
		V_4 = L_24;
		if (L_24)
		{
			goto IL_000f;
		}
	}
	{
		// if(seProperties != null)
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_25 = V_1;
		if (!L_25)
		{
			goto IL_00cc;
		}
	}
	{
		// for(int i=0; i<seProperties.Length; i++)
		V_5 = 0;
		goto IL_00c5;
	}

IL_00a3:
	{
		// instance.RemoveSubEmitter(i);
		int32_t L_26 = V_5;
		SubEmittersModule_RemoveSubEmitter_m28E0F914662700046A5D524CA001C4C69B12FFA9((&V_0), L_26, NULL);
		// instance.AddSubEmitter(seSystems[i],seTypes[i],seProperties[i]);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_27 = V_2;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (int32_t)(L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_35 = V_1;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (int32_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		SubEmittersModule_AddSubEmitter_m521A291486CC2FC41785BDFFE06955306E5536BF((&V_0), L_30, (int32_t)L_34, (int32_t)L_38, NULL);
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00c5:
	{
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_40 = V_5;
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_41 = V_1;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_00a3;
		}
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SubEmittersModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SubEmittersModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_m76EF84DD089724E706E367217BD48776CAA25F71_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* V_1 = NULL;
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_2 = NULL;
	ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SubEmittersModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)((SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)UnBox(L_0, SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var))));
		// ParticleSystemSubEmitterProperties[] seProperties = null;
		V_1 = (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*)NULL;
		// ParticleSystem[] seSystems = null;
		V_2 = (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6*)NULL;
		// ParticleSystemSubEmitterType[] seTypes = null;
		V_3 = (ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F*)NULL;
		goto IL_008d;
	}

IL_000f:
	{
		String_t* L_1 = V_4;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_3 = V_4;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1, NULL);
		if (L_4)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_5 = V_4;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A, NULL);
		if (L_6)
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_7 = V_4;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF, NULL);
		if (L_8)
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0087;
	}

IL_0049:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		bool L_11;
		L_11 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_9, L_10);
		SubEmittersModule_set_enabled_mA8AEC37F249912F94D7ED77A1E0D734C3299B31D((&V_0), L_11, NULL);
		// break;
		goto IL_008d;
	}

IL_005d:
	{
		// seProperties = reader.Read<ParticleSystemSubEmitterProperties[]>(new ES3ArrayType(typeof(ParticleSystemSubEmitterProperties[])));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_12 = ___0_reader;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535* L_15 = (ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535*)il2cpp_codegen_object_new(ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		ES3ArrayType__ctor_mC6FEB089144B367D53F28FA8434337D7C1D9184A(L_15, L_14, NULL);
		NullCheck(L_12);
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_16;
		L_16 = GenericVirtualFuncInvoker1< ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var, L_12, (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)L_15);
		V_1 = L_16;
		// break;
		goto IL_008d;
	}

IL_0075:
	{
		// seSystems = reader.Read<ParticleSystem[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___0_reader;
		NullCheck(L_17);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_18;
		L_18 = GenericVirtualFuncInvoker0< ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* >::Invoke(ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var, L_17);
		V_2 = L_18;
		// break;
		goto IL_008d;
	}

IL_007e:
	{
		// seTypes = reader.Read<ParticleSystemSubEmitterType[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_19 = ___0_reader;
		NullCheck(L_19);
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_20;
		L_20 = GenericVirtualFuncInvoker0< ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var, L_19);
		V_3 = L_20;
		// break;
		goto IL_008d;
	}

IL_0087:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_21 = ___0_reader;
		NullCheck(L_21);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
	}

IL_008d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___0_reader;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_22);
		String_t* L_24 = L_23;
		V_4 = L_24;
		if (L_24)
		{
			goto IL_000f;
		}
	}
	{
		// if(seProperties != null)
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_25 = V_1;
		if (!L_25)
		{
			goto IL_00cc;
		}
	}
	{
		// for(int i=0; i<seProperties.Length; i++)
		V_5 = 0;
		goto IL_00c5;
	}

IL_00a3:
	{
		// instance.RemoveSubEmitter(i);
		int32_t L_26 = V_5;
		SubEmittersModule_RemoveSubEmitter_m28E0F914662700046A5D524CA001C4C69B12FFA9((&V_0), L_26, NULL);
		// instance.AddSubEmitter(seSystems[i],seTypes[i],seProperties[i]);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_27 = V_2;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (int32_t)(L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_35 = V_1;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (int32_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		SubEmittersModule_AddSubEmitter_m521A291486CC2FC41785BDFFE06955306E5536BF((&V_0), L_30, (int32_t)L_34, (int32_t)L_38, NULL);
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00c5:
	{
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_40 = V_5;
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_41 = V_1;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_00a3;
		}
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SubEmittersModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SubEmittersModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m8442C7ADDA0656E085BDA268C046740DD19548C7_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* V_1 = NULL;
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_2 = NULL;
	ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SubEmittersModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)((SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)UnBox(L_0, SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var))));
		// ParticleSystemSubEmitterProperties[] seProperties = null;
		V_1 = (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*)NULL;
		// ParticleSystem[] seSystems = null;
		V_2 = (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6*)NULL;
		// ParticleSystemSubEmitterType[] seTypes = null;
		V_3 = (ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F*)NULL;
		goto IL_008d;
	}

IL_000f:
	{
		String_t* L_1 = V_4;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_3 = V_4;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1, NULL);
		if (L_4)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_5 = V_4;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A, NULL);
		if (L_6)
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_7 = V_4;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF, NULL);
		if (L_8)
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0087;
	}

IL_0049:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		bool L_11;
		L_11 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_9, L_10);
		SubEmittersModule_set_enabled_mA8AEC37F249912F94D7ED77A1E0D734C3299B31D((&V_0), L_11, NULL);
		// break;
		goto IL_008d;
	}

IL_005d:
	{
		// seProperties = reader.Read<ParticleSystemSubEmitterProperties[]>(new ES3ArrayType(typeof(ParticleSystemSubEmitterProperties[])));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_12 = ___0_reader;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535* L_15 = (ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535*)il2cpp_codegen_object_new(ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		ES3ArrayType__ctor_mC6FEB089144B367D53F28FA8434337D7C1D9184A(L_15, L_14, NULL);
		NullCheck(L_12);
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_16;
		L_16 = GenericVirtualFuncInvoker1< ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var, L_12, (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)L_15);
		V_1 = L_16;
		// break;
		goto IL_008d;
	}

IL_0075:
	{
		// seSystems = reader.Read<ParticleSystem[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___0_reader;
		NullCheck(L_17);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_18;
		L_18 = GenericVirtualFuncInvoker0< ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* >::Invoke(ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var, L_17);
		V_2 = L_18;
		// break;
		goto IL_008d;
	}

IL_007e:
	{
		// seTypes = reader.Read<ParticleSystemSubEmitterType[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_19 = ___0_reader;
		NullCheck(L_19);
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_20;
		L_20 = GenericVirtualFuncInvoker0< ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var, L_19);
		V_3 = L_20;
		// break;
		goto IL_008d;
	}

IL_0087:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_21 = ___0_reader;
		NullCheck(L_21);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
	}

IL_008d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___0_reader;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_22);
		String_t* L_24 = L_23;
		V_4 = L_24;
		if (L_24)
		{
			goto IL_000f;
		}
	}
	{
		// if(seProperties != null)
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_25 = V_1;
		if (!L_25)
		{
			goto IL_00cc;
		}
	}
	{
		// for(int i=0; i<seProperties.Length; i++)
		V_5 = 0;
		goto IL_00c5;
	}

IL_00a3:
	{
		// instance.RemoveSubEmitter(i);
		int32_t L_26 = V_5;
		SubEmittersModule_RemoveSubEmitter_m28E0F914662700046A5D524CA001C4C69B12FFA9((&V_0), L_26, NULL);
		// instance.AddSubEmitter(seSystems[i],seTypes[i],seProperties[i]);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_27 = V_2;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (int32_t)(L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_35 = V_1;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (int32_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		SubEmittersModule_AddSubEmitter_m521A291486CC2FC41785BDFFE06955306E5536BF((&V_0), L_30, (int32_t)L_34, (int32_t)L_38, NULL);
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00c5:
	{
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_40 = V_5;
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_41 = V_1;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_00a3;
		}
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SubEmittersModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SubEmittersModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m5B200D264948602EBE9E7F70199AEE298E89BC67_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* V_1 = NULL;
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_2 = NULL;
	ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SubEmittersModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)((SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)UnBox(L_0, SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var))));
		// ParticleSystemSubEmitterProperties[] seProperties = null;
		V_1 = (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*)NULL;
		// ParticleSystem[] seSystems = null;
		V_2 = (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6*)NULL;
		// ParticleSystemSubEmitterType[] seTypes = null;
		V_3 = (ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F*)NULL;
		goto IL_008d;
	}

IL_000f:
	{
		String_t* L_1 = V_4;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_3 = V_4;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1, NULL);
		if (L_4)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_5 = V_4;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A, NULL);
		if (L_6)
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_7 = V_4;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF, NULL);
		if (L_8)
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0087;
	}

IL_0049:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		bool L_11;
		L_11 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_9, L_10);
		SubEmittersModule_set_enabled_mA8AEC37F249912F94D7ED77A1E0D734C3299B31D((&V_0), L_11, NULL);
		// break;
		goto IL_008d;
	}

IL_005d:
	{
		// seProperties = reader.Read<ParticleSystemSubEmitterProperties[]>(new ES3ArrayType(typeof(ParticleSystemSubEmitterProperties[])));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_12 = ___0_reader;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535* L_15 = (ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535*)il2cpp_codegen_object_new(ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		ES3ArrayType__ctor_mC6FEB089144B367D53F28FA8434337D7C1D9184A(L_15, L_14, NULL);
		NullCheck(L_12);
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_16;
		L_16 = GenericVirtualFuncInvoker1< ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var, L_12, (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)L_15);
		V_1 = L_16;
		// break;
		goto IL_008d;
	}

IL_0075:
	{
		// seSystems = reader.Read<ParticleSystem[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___0_reader;
		NullCheck(L_17);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_18;
		L_18 = GenericVirtualFuncInvoker0< ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* >::Invoke(ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var, L_17);
		V_2 = L_18;
		// break;
		goto IL_008d;
	}

IL_007e:
	{
		// seTypes = reader.Read<ParticleSystemSubEmitterType[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_19 = ___0_reader;
		NullCheck(L_19);
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_20;
		L_20 = GenericVirtualFuncInvoker0< ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var, L_19);
		V_3 = L_20;
		// break;
		goto IL_008d;
	}

IL_0087:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_21 = ___0_reader;
		NullCheck(L_21);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
	}

IL_008d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___0_reader;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_22);
		String_t* L_24 = L_23;
		V_4 = L_24;
		if (L_24)
		{
			goto IL_000f;
		}
	}
	{
		// if(seProperties != null)
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_25 = V_1;
		if (!L_25)
		{
			goto IL_00cc;
		}
	}
	{
		// for(int i=0; i<seProperties.Length; i++)
		V_5 = 0;
		goto IL_00c5;
	}

IL_00a3:
	{
		// instance.RemoveSubEmitter(i);
		int32_t L_26 = V_5;
		SubEmittersModule_RemoveSubEmitter_m28E0F914662700046A5D524CA001C4C69B12FFA9((&V_0), L_26, NULL);
		// instance.AddSubEmitter(seSystems[i],seTypes[i],seProperties[i]);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_27 = V_2;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (int32_t)(L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_35 = V_1;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (int32_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		SubEmittersModule_AddSubEmitter_m521A291486CC2FC41785BDFFE06955306E5536BF((&V_0), L_30, (int32_t)L_34, (int32_t)L_38, NULL);
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00c5:
	{
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_40 = V_5;
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_41 = V_1;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_00a3;
		}
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_SubEmittersModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_SubEmittersModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m44A93DF9F8E89C4F180E113B9662BCFF1D7ECF9A_gshared (ES3Type_SubEmittersModule_tFA4527FD278FCA0DBA11E6160F5071664FC21793* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B V_0;
	memset((&V_0), 0, sizeof(V_0));
	ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* V_1 = NULL;
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_2 = NULL;
	ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.SubEmittersModule)obj;
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)((SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)(SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B*)UnBox(L_0, SubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_il2cpp_TypeInfo_var))));
		// ParticleSystemSubEmitterProperties[] seProperties = null;
		V_1 = (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*)NULL;
		// ParticleSystem[] seSystems = null;
		V_2 = (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6*)NULL;
		// ParticleSystemSubEmitterType[] seTypes = null;
		V_3 = (ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F*)NULL;
		goto IL_008d;
	}

IL_000f:
	{
		String_t* L_1 = V_4;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_3 = V_4;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1, NULL);
		if (L_4)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_5 = V_4;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral106AA5AA2B6E0DB51E27A24E1F75969108BF369A, NULL);
		if (L_6)
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_7 = V_4;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF, NULL);
		if (L_8)
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0087;
	}

IL_0049:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_9 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_10 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		bool L_11;
		L_11 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_9, L_10);
		SubEmittersModule_set_enabled_mA8AEC37F249912F94D7ED77A1E0D734C3299B31D((&V_0), L_11, NULL);
		// break;
		goto IL_008d;
	}

IL_005d:
	{
		// seProperties = reader.Read<ParticleSystemSubEmitterProperties[]>(new ES3ArrayType(typeof(ParticleSystemSubEmitterProperties[])));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_12 = ___0_reader;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535* L_15 = (ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535*)il2cpp_codegen_object_new(ES3ArrayType_t0E80C9BB43D4F280B99885B413307C9403534535_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		ES3ArrayType__ctor_mC6FEB089144B367D53F28FA8434337D7C1D9184A(L_15, L_14, NULL);
		NullCheck(L_12);
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_16;
		L_16 = GenericVirtualFuncInvoker1< ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395_mD5A5C7BC2F4328E3B1C5CA00106AF275740C114B_RuntimeMethod_var, L_12, (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)L_15);
		V_1 = L_16;
		// break;
		goto IL_008d;
	}

IL_0075:
	{
		// seSystems = reader.Read<ParticleSystem[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_17 = ___0_reader;
		NullCheck(L_17);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_18;
		L_18 = GenericVirtualFuncInvoker0< ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* >::Invoke(ES3Reader_Read_TisParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_m6C01F2513306D9866A09242541595E4CB65CE3ED_RuntimeMethod_var, L_17);
		V_2 = L_18;
		// break;
		goto IL_008d;
	}

IL_007e:
	{
		// seTypes = reader.Read<ParticleSystemSubEmitterType[]>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_19 = ___0_reader;
		NullCheck(L_19);
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_20;
		L_20 = GenericVirtualFuncInvoker0< ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* >::Invoke(ES3Reader_Read_TisParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F_mEBE32E28F1A0154AB9AF1F229B2BE2504C4B41EB_RuntimeMethod_var, L_19);
		V_3 = L_20;
		// break;
		goto IL_008d;
	}

IL_0087:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_21 = ___0_reader;
		NullCheck(L_21);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_21);
	}

IL_008d:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_22 = ___0_reader;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_22);
		String_t* L_24 = L_23;
		V_4 = L_24;
		if (L_24)
		{
			goto IL_000f;
		}
	}
	{
		// if(seProperties != null)
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_25 = V_1;
		if (!L_25)
		{
			goto IL_00cc;
		}
	}
	{
		// for(int i=0; i<seProperties.Length; i++)
		V_5 = 0;
		goto IL_00c5;
	}

IL_00a3:
	{
		// instance.RemoveSubEmitter(i);
		int32_t L_26 = V_5;
		SubEmittersModule_RemoveSubEmitter_m28E0F914662700046A5D524CA001C4C69B12FFA9((&V_0), L_26, NULL);
		// instance.AddSubEmitter(seSystems[i],seTypes[i],seProperties[i]);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_27 = V_2;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		ParticleSystemSubEmitterTypeU5BU5D_t7EA83AD5E17B0D5EA54F07A01433BB1EDD12870F* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (int32_t)(L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_35 = V_1;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (int32_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		SubEmittersModule_AddSubEmitter_m521A291486CC2FC41785BDFFE06955306E5536BF((&V_0), L_30, (int32_t)L_34, (int32_t)L_38, NULL);
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00c5:
	{
		// for(int i=0; i<seProperties.Length; i++)
		int32_t L_40 = V_5;
		ParticleSystemSubEmitterPropertiesU5BU5D_tB22C8A64D02C44C85B3C1CCCA616F60D896F0395* L_41 = V_1;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_00a3;
		}
	}

IL_00cc:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
