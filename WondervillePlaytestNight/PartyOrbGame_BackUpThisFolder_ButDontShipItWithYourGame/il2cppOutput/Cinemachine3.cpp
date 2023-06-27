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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Cinemachine.CinemachineBlend
struct CinemachineBlend_t7A2A71833A7E2C44AB1D7874B3D076EF46A56298;
// Cinemachine.CinemachineBlenderSettings
struct CinemachineBlenderSettings_tCD488C84B252394D8CDD7D0DB623D991BE77F3F0;
// Cinemachine.CinemachineBrain
struct CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB;
// Cinemachine.CinemachineBrain/BrainEvent
struct BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0;
// Cinemachine.CinemachineBrain/VcamActivatedEvent
struct VcamActivatedEvent_tD6FFF8FCC883ABD7CC27619CD451E6FE56DB4A3B;
// Cinemachine.CinemachineCore/AxisInputDelegate
struct AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE;
// Cinemachine.CinemachineCore/GetBlendOverrideDelegate
struct GetBlendOverrideDelegate_t26D8778A313C528295CC34D776A57119AE7F1EB8;
// Cinemachine.CinemachineCore/Stage[]
struct StageU5BU5D_tC107E846F8ED5DBF4CEF77B4AFCC26D9DBE723A2;
// Cinemachine.CinemachineExtension
struct CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE;
// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD;
// Cinemachine.ICinemachineCamera
struct ICinemachineCamera_t89A591897FD47A23EAD91D2B3DA94B7EB3B322FD;
// Cinemachine.Utility.CinemachineDebug/OnGUIDelegate
struct OnGUIDelegate_tF9317001AB4E703C8439EFD7987552E90C476F72;
// Cinemachine.Utility.GaussianWindow1D_CameraRotation
struct GaussianWindow1D_CameraRotation_t88B75023ED9125C4BE06144C20215CD10666641D;
// Cinemachine.Utility.GaussianWindow1D_Quaternion
struct GaussianWindow1D_Quaternion_t7B6418660E5E1E7E1CDC2E2AD08FADD17C4EECC3;
// Cinemachine.Utility.GaussianWindow1D_Vector3
struct GaussianWindow1D_Vector3_t3D2CA98CAA335A6CA30F2F3E51CEC6FA69C1EC48;
// Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Quaternion>
struct GaussianWindow1d_1_tD306E7D9C22D8A3423192901A6231996D605EAFC;
// Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector2>
struct GaussianWindow1d_1_t10F20E064ADE0A33D663FD5C4A4BA8B9BDC981AD;
// Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector3>
struct GaussianWindow1d_1_tB879E544550B44574C9A5A21528AB3884F3580DD;
// Cinemachine.Utility.HeadingTracker
struct HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4;
// Cinemachine.Utility.HeadingTracker/Item[]
struct ItemU5BU5D_t7D008EEEF404065A770D7C42085C86F254078B46;
// Cinemachine.Utility.PositionPredictor
struct PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223;
// Cinemachine.VcamTargetPropertyAttribute
struct VcamTargetPropertyAttribute_t7DF91AEFF1BD2B83D640D6D39F1720CB57798B1F;
// CinemachineCameraOffset
struct CinemachineCameraOffset_t2D656B9D964F68E61A5168495C2666BE6B8AD693;
// CinemachineMixer
struct CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2;
// CinemachineMixer/MasterDirectorDelegate
struct MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6;
// CinemachineRecomposer
struct CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD;
// CinemachineShot
struct CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5;
// CinemachineShotPlayable
struct CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE;
// CinemachineTouchInputMapper
struct CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815;
// CinemachineTrack
struct CinemachineTrack_t6B531D379A33136302768D59460F3E8B1AC6D79D;
// System.Action`1<UnityEngine.Playables.PlayableDirector>
struct Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021;
// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t3DEF6B983A6FD251CA5E86CED7441D9CF0A26209;
// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t08E03FF5D8187DCF3A2B450F10E005618E1956C1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/UpdateStatus>
struct Dictionary_2_tACB39FA2E62BA2EA60CEBEAE83D5AB8B14A1D280;
// System.Collections.Generic.Dictionary`2<Cinemachine.ICinemachineCamera,System.Object>
struct Dictionary_2_tA752E1EEBD2A0EF17F6A4C0262D35070B38CE8A2;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>
struct Dictionary_2_t1B7E37FEB7F10BFB6B7320EF2FEC7B2CDE25C7E4;
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,Cinemachine.TargetPositionCache/CacheEntry>
struct Dictionary_2_tC828B62C23DF118F79F73B89C024ABBCCE87873B;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset>
struct IEnumerable_1_t5E4794B9C0140D35E865840CCDBFC9FEF5E3EFB9;
// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable>
struct List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5;
// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain/BrainFrame>
struct List_1_tACCC6306B7B7555D17ED9223157499B6CEDAA0F7;
// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain>
struct List_1_tC0D9EEE4F50880325C33F6FABD6B0EB876E7FB3D;
// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension>
struct List_1_t368EDCAA9D752F3C679EB61F998F2B839F58843E;
// System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>
struct List_1_t2A7D1450D916CAA44FEB79B0E5C2E4EF5A02CECF;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>>
struct List_1_tBDF194622D0C56020E8C4DD7B5145B2988CA19A4;
// System.Collections.Generic.List`1<UnityEngine.ScriptableObject>
struct List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF;
// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker>
struct List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip>
struct List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset>
struct List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AnimationClip
struct AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE;
// UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C;
// UnityEngine.AnimationCurve[]
struct AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.IExposedPropertyTable
struct IExposedPropertyTable_tBA6A5A41F6283C34744CA6EE8B7BE2F0679CF885;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD;
// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01;
// UnityEngine.Playables.PlayableDirector
struct PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3;
// UnityEngine.Timeline.IPropertyCollector
struct IPropertyCollector_t716BB6257535844909D08C5849BF25BEFAB51AC1;
// UnityEngine.Timeline.TimelineClip[]
struct TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E;
// UnityEngine.Timeline.TrackAsset
struct TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D;
// UnityEngine.Timeline.TrackAsset[]
struct TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5;
// UnityEngine.Touch[]
struct TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t8801328F075019AF6B6150B20EC343935A29FF97;

IL2CPP_EXTERN_C RuntimeClass* AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ItemU5BU5D_t7D008EEEF404065A770D7C42085C86F254078B46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2;
IL2CPP_EXTERN_C String_t* _stringLiteral20B7AF975FE61D31242708B325C2EBE54C427D42;
IL2CPP_EXTERN_C String_t* _stringLiteral25A7D94AE338306D36C6374758F830F411BC7709;
IL2CPP_EXTERN_C String_t* _stringLiteral294D359ECE148A430F19981912277E5154CA19E0;
IL2CPP_EXTERN_C String_t* _stringLiteral76F5995D7A1D434E1D7C4046772BDE3F81E26ADA;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE47ED25C8CD4D0D230E6261B3C1BE71F746BD6;
IL2CPP_EXTERN_C String_t* _stringLiteral9975DAF0085BA0D080E112D87C20E40CD439A2CC;
IL2CPP_EXTERN_C String_t* _stringLiteralAEEEC79135C627C521C9AF016C69BE1561778B7C;
IL2CPP_EXTERN_C String_t* _stringLiteralCC357B8329982D47F9D2DAC70F02E7F8E8217DD0;
IL2CPP_EXTERN_C String_t* _stringLiteralD0BDB1A683AF21C4D3907C91B62158B7170DC94B;
IL2CPP_EXTERN_C String_t* _stringLiteralD8EE6A18D5B371A364BE13F498C76E11E321DECB;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineTouchInputMapper_GetInputAxis_m7A2342D7913F4BF3711C35E69AD6F61FBCD37A37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedReference_1_Resolve_m97A5CBAEBA1062ED36BF724510A76204AF114E74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_mBD916E48F072E85917A54BADF9B02330C838FEA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GaussianWindow1d_1__ctor_m41A04DD612C41D2C24F75212ACE3C5D64329EDA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GaussianWindow1d_1__ctor_m5DB4A4144E17F603C16CA26AA0378DA3192BD142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GaussianWindow1d_1__ctor_m93C6FDD41196F17FE54DE551228CDF93144F5EFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GaussianWindow1d_1_get_KernelSize_m621B6F929CB7A454DCE085B08C0092714E31FC2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GaussianWindow1d_1_get_KernelSize_m76DDF9B93C1D3C274A6242EF89BA3A78D8CC1441_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GaussianWindow1d_1_get_KernelSize_m93C2EDFD6C996D1637AE8DB9BF1382A9071E8DA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPropertyCollector_AddFromName_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m947A59E8BC6D05E58F58A13170DEAE422D5EE674_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m3557C19B4048EF5C9E875572F0E47D5EFB8E8E75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetDuration_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m5311B48AA1AC40CCC1C7E5F416C71CB0D5C2F77D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mD04A716A5F8BF194F20D8AA2CEC2388233504F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBAE3A98FEA61C11C997238263E219EEE147E0F2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetPlayState_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2449EED62648E08ED363284EEFF1080E562C7981_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetTime_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2B7F64DD20E0D9B18A3E60B1B0BB0056B7C6747D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetTime_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m0EC69EBE63C5C7E96133DEBDAB0CEBCFA5A74BDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_SetInputCount_TisScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_m847F542F39A4F6792F586FE306664FB4E37E649F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_mDE5946292E4A4165D00B39EACF469071ADA73189_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_mF1204C0279C018CD6130BBFFA0F9D3E5CFA026D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Explicit_m8AFDFB2071A6323A8AF5A938EBF5547C28F01652_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_m6F1FE1C8EFB32C6564EAB7C8E44FB9DF276102D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_m9388F54AB0598505CA6ED126475CB8DC2172407B_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CinemachineCameraOffset_PostPipelineStageCallback_m12777380D2DCFC115C2A8AE6F07304C62B88C049_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineCameraOffset__ctor_m98184CA5AE9FE91AB824BB023B17ECF5BD1019BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineMixer_GetDeltaTime_mEA6473C55C1D43106E7F6EF9B15E58955D418A2D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineMixer_OnPlayableDestroy_m34D62485682D21923664DF61BEBD71E1A1EF44CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineMixer_ProcessFrame_mF8767A07041ADA879C57F56736DE89454E9BDF09_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineRecomposer_OnValidate_m22401285E4DCB06E90E12410C7F4ACB30A81EF73_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineRecomposer_PostPipelineStageCallback_m6571EAB849AE1FB94A5019D2E766C088073D98D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineShotPlayable_get_IsValid_mB1F51FF9816FBC56D680EB7F47919C5C69C35331_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineShot_CreatePlayable_m9FF5653D04CAFD839568D784D68DDE4F63C1A04F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineShot_GatherProperties_m503ED5DE1E71FCCCAACE2E6DE385B1179CBA66EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineTouchInputMapper_Start_m15388C86B79D1CA2833E5408D1CA2151519F5424_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineTouchInputMapper__ctor_mD73B04A8718E3A899F4359C9CD4ACA08E9D1305E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineTrack_CreateTrackMixer_m879E9C56FBCAE3C28F1BAD6CF247A904BBDAC1A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineTrack__ctor_m0C7D2958AD95C45518C9BEAB9418AEB192B0DBAE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Damper_Damp_m91BF7E7465305B7286234FAD38454A05DE468573_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Damper_DecayConstant_mF442786078CA64E351A3D65EE14B7423ADA73DA0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Damper_DecayedRemainder_mD4C471125C7D69871E84872281867B54AA27206A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GaussianWindow1D_CameraRotation_Compute_m2AF82F11B6AF69FDA08B516C63381E0192FF1C83_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GaussianWindow1D_CameraRotation__ctor_m27068192451EBDB88B64909F642D99C4D0445BC6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GaussianWindow1D_Quaternion_Compute_m4AED7FDFB67E6E53CC5407CEAE2DE0C326B92A6A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GaussianWindow1D_Quaternion__ctor_m22A74D17EE4528E1FEFD148E5EF3061D62763A90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GaussianWindow1D_Vector3_Compute_mA21000B9E4F7A74790C6926FB78C3A2EE1727200_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GaussianWindow1D_Vector3__ctor_mBB506DCFE07AA03924BB52082875891A6D0916C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HeadingTracker_Add_m409F3CE9AD9F76CFB1A726014919316BF1883B61_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HeadingTracker_ClearHistory_m0B2E3ACB6DD3065138E08CEA92ABA19F348CC7CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HeadingTracker_DecayHistory_m45AA371C807BE4790C03211ADCC07C4481C0F803_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HeadingTracker_Decay_m32A071681762DD778FB0E36DF788BE5216AB1720_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HeadingTracker_GetReliableHeading_m80202507069C77358EB5D92D546799B978B93F71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HeadingTracker_PopBottom_m4A6A60D6F6EDD2136FB949232D7F89DF9E072407_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HeadingTracker__ctor_m0A16F52FDBFB1271DE6862232DD698E732FB070E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PositionPredictor_AddPosition_m9C5DC8C6C311E4CFCC8C0F8D5731B44326A68D62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PositionPredictor_ApplyTransformDelta_m1129D277F1AAAF3FCF14C8E52093B53273887449_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PositionPredictor_PredictPositionDelta_m89CCC3CE749BED086E2148F0AB28248A6D897FE7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PositionPredictor_PredictPosition_m1DE042B701CF432CFB8663B99AC7F27B0B314313_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PositionPredictor_Reset_m7E4F467F2AB6ABFE2A102332B9143F7FC8DD6535_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SplineHelpers_Bezier1_mEC2ED8E3AD96C410A9972F8C69A218F7B4E93076_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SplineHelpers_Bezier3_mF92B01A4DE1464C8183887795B7434C5E6C2B678_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SplineHelpers_BezierTangent1_mAD80C25E3EE3EACA09B12735DAC4AE274CBF2C6C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SplineHelpers_BezierTangent3_m83A52667AD3BB651B9B136F35059CE8D179EAB3E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SplineHelpers_ComputeSmoothControlPointsLooped_mF88A01E9DEC80CC554BC81FEB189C729B51D24A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SplineHelpers_ComputeSmoothControlPoints_mBCAE08CEA6E84A14E6181263BF67BC29E7F2CE63_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TargetPositionCache_get_CacheMode_m7C4D3FC799E34E324A56B695AC9D6E6844B8725CCinemachine3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityQuaternionExtensions_ApplyCameraRotation_m3E5594FA8D22EECF7DD709A26493DE5FAD7B0814_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityQuaternionExtensions_GetCameraRotationToTarget_m2FC346D5CDC3FA3E81B1D35B4667D72034572B67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityQuaternionExtensions_SlerpWithReferenceUp_mA5EA8034D99CAD536ED015E57007A82B346EB834_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_Abs_m306CBBA7519A685B4A409FA92A75A450A7A03E82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_Angle_m51BB9FF2F18CF2F2B7CCCFDF4B22F6061B487FD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_ClosestPointOnSegment_m85309B3AC8DD44D081FFA53A2A9D844BCB7046FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_ClosestPointOnSegment_mB4297DD213BAA7738E173F1B6A8AE7295812EF5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_SafeFromToRotation_mD8833A51B691738B2F6EFB46750C92380AC0B6BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_SignedAngle_mACC4C418DBAC81BF1F719AAFCF2EE55364AE908D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_SlerpWithReferenceUp_m2C4005C18D79C50E3DD198E7C067AC46D4FFEAEF_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ItemU5BU5D_t7D008EEEF404065A770D7C42085C86F254078B46;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3;
struct TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D;
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Cinemachine.Utility.Damper
struct Damper_t9BB3B28320C2E100B659D1237F6064551C846A91  : public RuntimeObject
{
public:

public:
};


// Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Quaternion>
struct GaussianWindow1d_1_tD306E7D9C22D8A3423192901A6231996D605EAFC  : public RuntimeObject
{
public:
	// T[] Cinemachine.Utility.GaussianWindow1d`1::mData
	QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* ___mData_0;
	// System.Single[] Cinemachine.Utility.GaussianWindow1d`1::mKernel
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___mKernel_1;
	// System.Int32 Cinemachine.Utility.GaussianWindow1d`1::mCurrentPos
	int32_t ___mCurrentPos_2;
	// System.Single Cinemachine.Utility.GaussianWindow1d`1::<Sigma>k__BackingField
	float ___U3CSigmaU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_mData_0() { return static_cast<int32_t>(offsetof(GaussianWindow1d_1_tD306E7D9C22D8A3423192901A6231996D605EAFC, ___mData_0)); }
	inline QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* get_mData_0() const { return ___mData_0; }
	inline QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3** get_address_of_mData_0() { return &___mData_0; }
	inline void set_mData_0(QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* value)
	{
		___mData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mData_0), (void*)value);
	}

	inline static int32_t get_offset_of_mKernel_1() { return static_cast<int32_t>(offsetof(GaussianWindow1d_1_tD306E7D9C22D8A3423192901A6231996D605EAFC, ___mKernel_1)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_mKernel_1() const { return ___mKernel_1; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_mKernel_1() { return &___mKernel_1; }
	inline void set_mKernel_1(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___mKernel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mKernel_1), (void*)value);
	}

	inline static int32_t get_offset_of_mCurrentPos_2() { return static_cast<int32_t>(offsetof(GaussianWindow1d_1_tD306E7D9C22D8A3423192901A6231996D605EAFC, ___mCurrentPos_2)); }
	inline int32_t get_mCurrentPos_2() const { return ___mCurrentPos_2; }
	inline int32_t* get_address_of_mCurrentPos_2() { return &___mCurrentPos_2; }
	inline void set_mCurrentPos_2(int32_t value)
	{
		___mCurrentPos_2 = value;
	}

	inline static int32_t get_offset_of_U3CSigmaU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GaussianWindow1d_1_tD306E7D9C22D8A3423192901A6231996D605EAFC, ___U3CSigmaU3Ek__BackingField_3)); }
	inline float get_U3CSigmaU3Ek__BackingField_3() const { return ___U3CSigmaU3Ek__BackingField_3; }
	inline float* get_address_of_U3CSigmaU3Ek__BackingField_3() { return &___U3CSigmaU3Ek__BackingField_3; }
	inline void set_U3CSigmaU3Ek__BackingField_3(float value)
	{
		___U3CSigmaU3Ek__BackingField_3 = value;
	}
};


// Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector2>
struct GaussianWindow1d_1_t10F20E064ADE0A33D663FD5C4A4BA8B9BDC981AD  : public RuntimeObject
{
public:
	// T[] Cinemachine.Utility.GaussianWindow1d`1::mData
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___mData_0;
	// System.Single[] Cinemachine.Utility.GaussianWindow1d`1::mKernel
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___mKernel_1;
	// System.Int32 Cinemachine.Utility.GaussianWindow1d`1::mCurrentPos
	int32_t ___mCurrentPos_2;
	// System.Single Cinemachine.Utility.GaussianWindow1d`1::<Sigma>k__BackingField
	float ___U3CSigmaU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_mData_0() { return static_cast<int32_t>(offsetof(GaussianWindow1d_1_t10F20E064ADE0A33D663FD5C4A4BA8B9BDC981AD, ___mData_0)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_mData_0() const { return ___mData_0; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_mData_0() { return &___mData_0; }
	inline void set_mData_0(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___mData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mData_0), (void*)value);
	}

	inline static int32_t get_offset_of_mKernel_1() { return static_cast<int32_t>(offsetof(GaussianWindow1d_1_t10F20E064ADE0A33D663FD5C4A4BA8B9BDC981AD, ___mKernel_1)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_mKernel_1() const { return ___mKernel_1; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_mKernel_1() { return &___mKernel_1; }
	inline void set_mKernel_1(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___mKernel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mKernel_1), (void*)value);
	}

	inline static int32_t get_offset_of_mCurrentPos_2() { return static_cast<int32_t>(offsetof(GaussianWindow1d_1_t10F20E064ADE0A33D663FD5C4A4BA8B9BDC981AD, ___mCurrentPos_2)); }
	inline int32_t get_mCurrentPos_2() const { return ___mCurrentPos_2; }
	inline int32_t* get_address_of_mCurrentPos_2() { return &___mCurrentPos_2; }
	inline void set_mCurrentPos_2(int32_t value)
	{
		___mCurrentPos_2 = value;
	}

	inline static int32_t get_offset_of_U3CSigmaU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GaussianWindow1d_1_t10F20E064ADE0A33D663FD5C4A4BA8B9BDC981AD, ___U3CSigmaU3Ek__BackingField_3)); }
	inline float get_U3CSigmaU3Ek__BackingField_3() const { return ___U3CSigmaU3Ek__BackingField_3; }
	inline float* get_address_of_U3CSigmaU3Ek__BackingField_3() { return &___U3CSigmaU3Ek__BackingField_3; }
	inline void set_U3CSigmaU3Ek__BackingField_3(float value)
	{
		___U3CSigmaU3Ek__BackingField_3 = value;
	}
};


// Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector3>
struct GaussianWindow1d_1_tB879E544550B44574C9A5A21528AB3884F3580DD  : public RuntimeObject
{
public:
	// T[] Cinemachine.Utility.GaussianWindow1d`1::mData
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___mData_0;
	// System.Single[] Cinemachine.Utility.GaussianWindow1d`1::mKernel
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___mKernel_1;
	// System.Int32 Cinemachine.Utility.GaussianWindow1d`1::mCurrentPos
	int32_t ___mCurrentPos_2;
	// System.Single Cinemachine.Utility.GaussianWindow1d`1::<Sigma>k__BackingField
	float ___U3CSigmaU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_mData_0() { return static_cast<int32_t>(offsetof(GaussianWindow1d_1_tB879E544550B44574C9A5A21528AB3884F3580DD, ___mData_0)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_mData_0() const { return ___mData_0; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_mData_0() { return &___mData_0; }
	inline void set_mData_0(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___mData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mData_0), (void*)value);
	}

	inline static int32_t get_offset_of_mKernel_1() { return static_cast<int32_t>(offsetof(GaussianWindow1d_1_tB879E544550B44574C9A5A21528AB3884F3580DD, ___mKernel_1)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_mKernel_1() const { return ___mKernel_1; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_mKernel_1() { return &___mKernel_1; }
	inline void set_mKernel_1(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___mKernel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mKernel_1), (void*)value);
	}

	inline static int32_t get_offset_of_mCurrentPos_2() { return static_cast<int32_t>(offsetof(GaussianWindow1d_1_tB879E544550B44574C9A5A21528AB3884F3580DD, ___mCurrentPos_2)); }
	inline int32_t get_mCurrentPos_2() const { return ___mCurrentPos_2; }
	inline int32_t* get_address_of_mCurrentPos_2() { return &___mCurrentPos_2; }
	inline void set_mCurrentPos_2(int32_t value)
	{
		___mCurrentPos_2 = value;
	}

	inline static int32_t get_offset_of_U3CSigmaU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GaussianWindow1d_1_tB879E544550B44574C9A5A21528AB3884F3580DD, ___U3CSigmaU3Ek__BackingField_3)); }
	inline float get_U3CSigmaU3Ek__BackingField_3() const { return ___U3CSigmaU3Ek__BackingField_3; }
	inline float* get_address_of_U3CSigmaU3Ek__BackingField_3() { return &___U3CSigmaU3Ek__BackingField_3; }
	inline void set_U3CSigmaU3Ek__BackingField_3(float value)
	{
		___U3CSigmaU3Ek__BackingField_3 = value;
	}
};


// Cinemachine.Utility.SplineHelpers
struct SplineHelpers_tC88AED5435AA4C67E6039B93997091214A2E0858  : public RuntimeObject
{
public:

public:
};


// Cinemachine.Utility.UnityQuaternionExtensions
struct UnityQuaternionExtensions_tCED4E5F8D5E7C212E7CE30310E4123D534075ABB  : public RuntimeObject
{
public:

public:
};


// Cinemachine.Utility.UnityRectExtensions
struct UnityRectExtensions_tD2D2C115AA54BE180CE78EF2BB37D1EC18A36847  : public RuntimeObject
{
public:

public:
};


// Cinemachine.Utility.UnityVectorExtensions
struct UnityVectorExtensions_t8B7D79BD392965E48AEA9B91EE25FD09244E69B3  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01  : public RuntimeObject
{
public:

public:
};


// Cinemachine.CameraState/CustomBlendable
struct CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253 
{
public:
	// UnityEngine.Object Cinemachine.CameraState/CustomBlendable::m_Custom
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___m_Custom_0;
	// System.Single Cinemachine.CameraState/CustomBlendable::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_Custom_0() { return static_cast<int32_t>(offsetof(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253, ___m_Custom_0)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_m_Custom_0() const { return ___m_Custom_0; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_m_Custom_0() { return &___m_Custom_0; }
	inline void set_m_Custom_0(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___m_Custom_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Custom_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};


// Cinemachine.TargetPositionCache/TimeRange
struct TimeRange_tF70DD4C14BC9F99833857B0743DC3302FABAF276 
{
public:
	// System.Single Cinemachine.TargetPositionCache/TimeRange::Start
	float ___Start_0;
	// System.Single Cinemachine.TargetPositionCache/TimeRange::End
	float ___End_1;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(TimeRange_tF70DD4C14BC9F99833857B0743DC3302FABAF276, ___Start_0)); }
	inline float get_Start_0() const { return ___Start_0; }
	inline float* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(float value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(TimeRange_tF70DD4C14BC9F99833857B0743DC3302FABAF276, ___End_1)); }
	inline float get_End_1() const { return ___End_1; }
	inline float* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(float value)
	{
		___End_1 = value;
	}
};


// Cinemachine.Utility.GaussianWindow1D_CameraRotation
struct GaussianWindow1D_CameraRotation_t88B75023ED9125C4BE06144C20215CD10666641D  : public GaussianWindow1d_1_t10F20E064ADE0A33D663FD5C4A4BA8B9BDC981AD
{
public:

public:
};


// Cinemachine.Utility.GaussianWindow1D_Quaternion
struct GaussianWindow1D_Quaternion_t7B6418660E5E1E7E1CDC2E2AD08FADD17C4EECC3  : public GaussianWindow1d_1_tD306E7D9C22D8A3423192901A6231996D605EAFC
{
public:

public:
};


// Cinemachine.Utility.GaussianWindow1D_Vector3
struct GaussianWindow1D_Vector3_t3D2CA98CAA335A6CA30F2F3E51CEC6FA69C1EC48  : public GaussianWindow1d_1_tB879E544550B44574C9A5A21528AB3884F3580DD
{
public:

public:
};


// CinemachineMixer
struct CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2  : public PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01
{
public:
	// Cinemachine.CinemachineBrain CinemachineMixer::mBrain
	CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * ___mBrain_1;
	// System.Int32 CinemachineMixer::mBrainOverrideId
	int32_t ___mBrainOverrideId_2;
	// System.Boolean CinemachineMixer::mPreviewPlay
	bool ___mPreviewPlay_3;

public:
	inline static int32_t get_offset_of_mBrain_1() { return static_cast<int32_t>(offsetof(CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2, ___mBrain_1)); }
	inline CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * get_mBrain_1() const { return ___mBrain_1; }
	inline CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB ** get_address_of_mBrain_1() { return &___mBrain_1; }
	inline void set_mBrain_1(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * value)
	{
		___mBrain_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBrain_1), (void*)value);
	}

	inline static int32_t get_offset_of_mBrainOverrideId_2() { return static_cast<int32_t>(offsetof(CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2, ___mBrainOverrideId_2)); }
	inline int32_t get_mBrainOverrideId_2() const { return ___mBrainOverrideId_2; }
	inline int32_t* get_address_of_mBrainOverrideId_2() { return &___mBrainOverrideId_2; }
	inline void set_mBrainOverrideId_2(int32_t value)
	{
		___mBrainOverrideId_2 = value;
	}

	inline static int32_t get_offset_of_mPreviewPlay_3() { return static_cast<int32_t>(offsetof(CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2, ___mPreviewPlay_3)); }
	inline bool get_mPreviewPlay_3() const { return ___mPreviewPlay_3; }
	inline bool* get_address_of_mPreviewPlay_3() { return &___mPreviewPlay_3; }
	inline void set_mPreviewPlay_3(bool value)
	{
		___mPreviewPlay_3 = value;
	}
};

struct CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2_StaticFields
{
public:
	// CinemachineMixer/MasterDirectorDelegate CinemachineMixer::GetMasterPlayableDirector
	MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6 * ___GetMasterPlayableDirector_0;

public:
	inline static int32_t get_offset_of_GetMasterPlayableDirector_0() { return static_cast<int32_t>(offsetof(CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2_StaticFields, ___GetMasterPlayableDirector_0)); }
	inline MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6 * get_GetMasterPlayableDirector_0() const { return ___GetMasterPlayableDirector_0; }
	inline MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6 ** get_address_of_GetMasterPlayableDirector_0() { return &___GetMasterPlayableDirector_0; }
	inline void set_GetMasterPlayableDirector_0(MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6 * value)
	{
		___GetMasterPlayableDirector_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetMasterPlayableDirector_0), (void*)value);
	}
};


// CinemachineShotPlayable
struct CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE  : public PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01
{
public:
	// Cinemachine.CinemachineVirtualCameraBase CinemachineShotPlayable::VirtualCamera
	CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___VirtualCamera_0;

public:
	inline static int32_t get_offset_of_VirtualCamera_0() { return static_cast<int32_t>(offsetof(CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE, ___VirtualCamera_0)); }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * get_VirtualCamera_0() const { return ___VirtualCamera_0; }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD ** get_address_of_VirtualCamera_0() { return &___VirtualCamera_0; }
	inline void set_VirtualCamera_0(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * value)
	{
		___VirtualCamera_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VirtualCamera_0), (void*)value);
	}
};


// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Double
struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.Nullable`1<System.Boolean>
struct Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// UnityEngine.PropertyName
struct PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Timeline.DiscreteTime
struct DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 
{
public:
	// System.Int64 UnityEngine.Timeline.DiscreteTime::m_DiscreteTime
	int64_t ___m_DiscreteTime_2;

public:
	inline static int32_t get_offset_of_m_DiscreteTime_2() { return static_cast<int32_t>(offsetof(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047, ___m_DiscreteTime_2)); }
	inline int64_t get_m_DiscreteTime_2() const { return ___m_DiscreteTime_2; }
	inline int64_t* get_address_of_m_DiscreteTime_2() { return &___m_DiscreteTime_2; }
	inline void set_m_DiscreteTime_2(int64_t value)
	{
		___m_DiscreteTime_2 = value;
	}
};

struct DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047_StaticFields
{
public:
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.DiscreteTime::kMaxTime
	DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  ___kMaxTime_1;

public:
	inline static int32_t get_offset_of_kMaxTime_1() { return static_cast<int32_t>(offsetof(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047_StaticFields, ___kMaxTime_1)); }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  get_kMaxTime_1() const { return ___kMaxTime_1; }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 * get_address_of_kMaxTime_1() { return &___kMaxTime_1; }
	inline void set_kMaxTime_1(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  value)
	{
		___kMaxTime_1 = value;
	}
};


// UnityEngine.Timeline.MarkerList
struct MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.MarkerList::m_Objects
	List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * ___m_Objects_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> UnityEngine.Timeline.MarkerList::m_Cache
	List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * ___m_Cache_1;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_CacheDirty
	bool ___m_CacheDirty_2;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_HasNotifications
	bool ___m_HasNotifications_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_Objects_0)); }
	inline List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Cache_1() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_Cache_1)); }
	inline List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * get_m_Cache_1() const { return ___m_Cache_1; }
	inline List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC ** get_address_of_m_Cache_1() { return &___m_Cache_1; }
	inline void set_m_Cache_1(List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * value)
	{
		___m_Cache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cache_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheDirty_2() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_CacheDirty_2)); }
	inline bool get_m_CacheDirty_2() const { return ___m_CacheDirty_2; }
	inline bool* get_address_of_m_CacheDirty_2() { return &___m_CacheDirty_2; }
	inline void set_m_CacheDirty_2(bool value)
	{
		___m_CacheDirty_2 = value;
	}

	inline static int32_t get_offset_of_m_HasNotifications_3() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_HasNotifications_3)); }
	inline bool get_m_HasNotifications_3() const { return ___m_HasNotifications_3; }
	inline bool* get_address_of_m_HasNotifications_3() { return &___m_HasNotifications_3; }
	inline void set_m_HasNotifications_3(bool value)
	{
		___m_HasNotifications_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC_marshaled_pinvoke
{
	List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * ___m_Objects_0;
	List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};
// Native definition for COM marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC_marshaled_com
{
	List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * ___m_Objects_0;
	List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};

// UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t2CDF71634041677EC226311F30665780C2026744 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset/TransientBuildData::trackList
	List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704 * ___trackList_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset/TransientBuildData::clipList
	List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * ___clipList_1;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> UnityEngine.Timeline.TrackAsset/TransientBuildData::markerList
	List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * ___markerList_2;

public:
	inline static int32_t get_offset_of_trackList_0() { return static_cast<int32_t>(offsetof(TransientBuildData_t2CDF71634041677EC226311F30665780C2026744, ___trackList_0)); }
	inline List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704 * get_trackList_0() const { return ___trackList_0; }
	inline List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704 ** get_address_of_trackList_0() { return &___trackList_0; }
	inline void set_trackList_0(List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704 * value)
	{
		___trackList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackList_0), (void*)value);
	}

	inline static int32_t get_offset_of_clipList_1() { return static_cast<int32_t>(offsetof(TransientBuildData_t2CDF71634041677EC226311F30665780C2026744, ___clipList_1)); }
	inline List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * get_clipList_1() const { return ___clipList_1; }
	inline List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA ** get_address_of_clipList_1() { return &___clipList_1; }
	inline void set_clipList_1(List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * value)
	{
		___clipList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipList_1), (void*)value);
	}

	inline static int32_t get_offset_of_markerList_2() { return static_cast<int32_t>(offsetof(TransientBuildData_t2CDF71634041677EC226311F30665780C2026744, ___markerList_2)); }
	inline List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * get_markerList_2() const { return ___markerList_2; }
	inline List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC ** get_address_of_markerList_2() { return &___markerList_2; }
	inline void set_markerList_2(List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * value)
	{
		___markerList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___markerList_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t2CDF71634041677EC226311F30665780C2026744_marshaled_pinvoke
{
	List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704 * ___trackList_0;
	List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * ___clipList_1;
	List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * ___markerList_2;
};
// Native definition for COM marshalling of UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t2CDF71634041677EC226311F30665780C2026744_marshaled_com
{
	List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704 * ___trackList_0;
	List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * ___clipList_1;
	List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * ___markerList_2;
};

// UnityEngine.Vector2
struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// Cinemachine.CameraState/BlendHintValue
struct BlendHintValue_tCF9A24D7B4477067080DB09C7E1BAD86C14B4B52 
{
public:
	// System.Int32 Cinemachine.CameraState/BlendHintValue::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendHintValue_tCF9A24D7B4477067080DB09C7E1BAD86C14B4B52, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineBlendDefinition/Style
struct Style_t709ACC1BF602ECD71DBFC58A23673543021BBF0F 
{
public:
	// System.Int32 Cinemachine.CinemachineBlendDefinition/Style::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Style_t709ACC1BF602ECD71DBFC58A23673543021BBF0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineBrain/BrainUpdateMethod
struct BrainUpdateMethod_t0563DEDF54EDDA6F830CB1426DE00AA27B3D3A5E 
{
public:
	// System.Int32 Cinemachine.CinemachineBrain/BrainUpdateMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BrainUpdateMethod_t0563DEDF54EDDA6F830CB1426DE00AA27B3D3A5E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineBrain/UpdateMethod
struct UpdateMethod_t24F3391B8C1CB67A2AF181A8EF51E994224C9FA2 
{
public:
	// System.Int32 Cinemachine.CinemachineBrain/UpdateMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateMethod_t24F3391B8C1CB67A2AF181A8EF51E994224C9FA2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineCore/Stage
struct Stage_t0E42746EC0AE99362E618F1D42126DCA0F62C4FF 
{
public:
	// System.Int32 Cinemachine.CinemachineCore/Stage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Stage_t0E42746EC0AE99362E618F1D42126DCA0F62C4FF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineCore/UpdateFilter
struct UpdateFilter_t9309B9175AFFA45140CE56FD5C229947C9CC19D2 
{
public:
	// System.Int32 Cinemachine.CinemachineCore/UpdateFilter::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateFilter_t9309B9175AFFA45140CE56FD5C229947C9CC19D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode
struct StandbyUpdateMode_tDD387031AFF8EB8516338BC71517029CB6F1BE18 
{
public:
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StandbyUpdateMode_tDD387031AFF8EB8516338BC71517029CB6F1BE18, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.LensSettings
struct LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC 
{
public:
	// System.Single Cinemachine.LensSettings::FieldOfView
	float ___FieldOfView_1;
	// System.Single Cinemachine.LensSettings::OrthographicSize
	float ___OrthographicSize_2;
	// System.Single Cinemachine.LensSettings::NearClipPlane
	float ___NearClipPlane_3;
	// System.Single Cinemachine.LensSettings::FarClipPlane
	float ___FarClipPlane_4;
	// System.Single Cinemachine.LensSettings::Dutch
	float ___Dutch_5;
	// System.Boolean Cinemachine.LensSettings::<Orthographic>k__BackingField
	bool ___U3COrthographicU3Ek__BackingField_6;
	// UnityEngine.Vector2 Cinemachine.LensSettings::<SensorSize>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CSensorSizeU3Ek__BackingField_7;
	// System.Boolean Cinemachine.LensSettings::<IsPhysicalCamera>k__BackingField
	bool ___U3CIsPhysicalCameraU3Ek__BackingField_8;
	// UnityEngine.Vector2 Cinemachine.LensSettings::LensShift
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___LensShift_9;

public:
	inline static int32_t get_offset_of_FieldOfView_1() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___FieldOfView_1)); }
	inline float get_FieldOfView_1() const { return ___FieldOfView_1; }
	inline float* get_address_of_FieldOfView_1() { return &___FieldOfView_1; }
	inline void set_FieldOfView_1(float value)
	{
		___FieldOfView_1 = value;
	}

	inline static int32_t get_offset_of_OrthographicSize_2() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___OrthographicSize_2)); }
	inline float get_OrthographicSize_2() const { return ___OrthographicSize_2; }
	inline float* get_address_of_OrthographicSize_2() { return &___OrthographicSize_2; }
	inline void set_OrthographicSize_2(float value)
	{
		___OrthographicSize_2 = value;
	}

	inline static int32_t get_offset_of_NearClipPlane_3() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___NearClipPlane_3)); }
	inline float get_NearClipPlane_3() const { return ___NearClipPlane_3; }
	inline float* get_address_of_NearClipPlane_3() { return &___NearClipPlane_3; }
	inline void set_NearClipPlane_3(float value)
	{
		___NearClipPlane_3 = value;
	}

	inline static int32_t get_offset_of_FarClipPlane_4() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___FarClipPlane_4)); }
	inline float get_FarClipPlane_4() const { return ___FarClipPlane_4; }
	inline float* get_address_of_FarClipPlane_4() { return &___FarClipPlane_4; }
	inline void set_FarClipPlane_4(float value)
	{
		___FarClipPlane_4 = value;
	}

	inline static int32_t get_offset_of_Dutch_5() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___Dutch_5)); }
	inline float get_Dutch_5() const { return ___Dutch_5; }
	inline float* get_address_of_Dutch_5() { return &___Dutch_5; }
	inline void set_Dutch_5(float value)
	{
		___Dutch_5 = value;
	}

	inline static int32_t get_offset_of_U3COrthographicU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___U3COrthographicU3Ek__BackingField_6)); }
	inline bool get_U3COrthographicU3Ek__BackingField_6() const { return ___U3COrthographicU3Ek__BackingField_6; }
	inline bool* get_address_of_U3COrthographicU3Ek__BackingField_6() { return &___U3COrthographicU3Ek__BackingField_6; }
	inline void set_U3COrthographicU3Ek__BackingField_6(bool value)
	{
		___U3COrthographicU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CSensorSizeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___U3CSensorSizeU3Ek__BackingField_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CSensorSizeU3Ek__BackingField_7() const { return ___U3CSensorSizeU3Ek__BackingField_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CSensorSizeU3Ek__BackingField_7() { return &___U3CSensorSizeU3Ek__BackingField_7; }
	inline void set_U3CSensorSizeU3Ek__BackingField_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CSensorSizeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsPhysicalCameraU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___U3CIsPhysicalCameraU3Ek__BackingField_8)); }
	inline bool get_U3CIsPhysicalCameraU3Ek__BackingField_8() const { return ___U3CIsPhysicalCameraU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsPhysicalCameraU3Ek__BackingField_8() { return &___U3CIsPhysicalCameraU3Ek__BackingField_8; }
	inline void set_U3CIsPhysicalCameraU3Ek__BackingField_8(bool value)
	{
		___U3CIsPhysicalCameraU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_LensShift_9() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___LensShift_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_LensShift_9() const { return ___LensShift_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_LensShift_9() { return &___LensShift_9; }
	inline void set_LensShift_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___LensShift_9 = value;
	}
};

struct LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_StaticFields
{
public:
	// Cinemachine.LensSettings Cinemachine.LensSettings::Default
	LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_StaticFields, ___Default_0)); }
	inline LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  get_Default_0() const { return ___Default_0; }
	inline LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC * get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  value)
	{
		___Default_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.LensSettings
struct LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshaled_pinvoke
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___U3COrthographicU3Ek__BackingField_6;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CSensorSizeU3Ek__BackingField_7;
	int32_t ___U3CIsPhysicalCameraU3Ek__BackingField_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___LensShift_9;
};
// Native definition for COM marshalling of Cinemachine.LensSettings
struct LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshaled_com
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___U3COrthographicU3Ek__BackingField_6;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CSensorSizeU3Ek__BackingField_7;
	int32_t ___U3CIsPhysicalCameraU3Ek__BackingField_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___LensShift_9;
};

// Cinemachine.TargetPositionCache/Mode
struct Mode_tBD240FF3EF9461B3B93FFC3AB5F2036120F5EB96 
{
public:
	// System.Int32 Cinemachine.TargetPositionCache/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_tBD240FF3EF9461B3B93FFC3AB5F2036120F5EB96, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.Utility.HeadingTracker
struct HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4  : public RuntimeObject
{
public:
	// Cinemachine.Utility.HeadingTracker/Item[] Cinemachine.Utility.HeadingTracker::mHistory
	ItemU5BU5D_t7D008EEEF404065A770D7C42085C86F254078B46* ___mHistory_0;
	// System.Int32 Cinemachine.Utility.HeadingTracker::mTop
	int32_t ___mTop_1;
	// System.Int32 Cinemachine.Utility.HeadingTracker::mBottom
	int32_t ___mBottom_2;
	// System.Int32 Cinemachine.Utility.HeadingTracker::mCount
	int32_t ___mCount_3;
	// UnityEngine.Vector3 Cinemachine.Utility.HeadingTracker::mHeadingSum
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mHeadingSum_4;
	// System.Single Cinemachine.Utility.HeadingTracker::mWeightSum
	float ___mWeightSum_5;
	// System.Single Cinemachine.Utility.HeadingTracker::mWeightTime
	float ___mWeightTime_6;
	// UnityEngine.Vector3 Cinemachine.Utility.HeadingTracker::mLastGoodHeading
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mLastGoodHeading_7;

public:
	inline static int32_t get_offset_of_mHistory_0() { return static_cast<int32_t>(offsetof(HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4, ___mHistory_0)); }
	inline ItemU5BU5D_t7D008EEEF404065A770D7C42085C86F254078B46* get_mHistory_0() const { return ___mHistory_0; }
	inline ItemU5BU5D_t7D008EEEF404065A770D7C42085C86F254078B46** get_address_of_mHistory_0() { return &___mHistory_0; }
	inline void set_mHistory_0(ItemU5BU5D_t7D008EEEF404065A770D7C42085C86F254078B46* value)
	{
		___mHistory_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mHistory_0), (void*)value);
	}

	inline static int32_t get_offset_of_mTop_1() { return static_cast<int32_t>(offsetof(HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4, ___mTop_1)); }
	inline int32_t get_mTop_1() const { return ___mTop_1; }
	inline int32_t* get_address_of_mTop_1() { return &___mTop_1; }
	inline void set_mTop_1(int32_t value)
	{
		___mTop_1 = value;
	}

	inline static int32_t get_offset_of_mBottom_2() { return static_cast<int32_t>(offsetof(HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4, ___mBottom_2)); }
	inline int32_t get_mBottom_2() const { return ___mBottom_2; }
	inline int32_t* get_address_of_mBottom_2() { return &___mBottom_2; }
	inline void set_mBottom_2(int32_t value)
	{
		___mBottom_2 = value;
	}

	inline static int32_t get_offset_of_mCount_3() { return static_cast<int32_t>(offsetof(HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4, ___mCount_3)); }
	inline int32_t get_mCount_3() const { return ___mCount_3; }
	inline int32_t* get_address_of_mCount_3() { return &___mCount_3; }
	inline void set_mCount_3(int32_t value)
	{
		___mCount_3 = value;
	}

	inline static int32_t get_offset_of_mHeadingSum_4() { return static_cast<int32_t>(offsetof(HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4, ___mHeadingSum_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mHeadingSum_4() const { return ___mHeadingSum_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mHeadingSum_4() { return &___mHeadingSum_4; }
	inline void set_mHeadingSum_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mHeadingSum_4 = value;
	}

	inline static int32_t get_offset_of_mWeightSum_5() { return static_cast<int32_t>(offsetof(HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4, ___mWeightSum_5)); }
	inline float get_mWeightSum_5() const { return ___mWeightSum_5; }
	inline float* get_address_of_mWeightSum_5() { return &___mWeightSum_5; }
	inline void set_mWeightSum_5(float value)
	{
		___mWeightSum_5 = value;
	}

	inline static int32_t get_offset_of_mWeightTime_6() { return static_cast<int32_t>(offsetof(HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4, ___mWeightTime_6)); }
	inline float get_mWeightTime_6() const { return ___mWeightTime_6; }
	inline float* get_address_of_mWeightTime_6() { return &___mWeightTime_6; }
	inline void set_mWeightTime_6(float value)
	{
		___mWeightTime_6 = value;
	}

	inline static int32_t get_offset_of_mLastGoodHeading_7() { return static_cast<int32_t>(offsetof(HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4, ___mLastGoodHeading_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mLastGoodHeading_7() const { return ___mLastGoodHeading_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mLastGoodHeading_7() { return &___mLastGoodHeading_7; }
	inline void set_mLastGoodHeading_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mLastGoodHeading_7 = value;
	}
};

struct HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4_StaticFields
{
public:
	// System.Single Cinemachine.Utility.HeadingTracker::mDecayExponent
	float ___mDecayExponent_8;

public:
	inline static int32_t get_offset_of_mDecayExponent_8() { return static_cast<int32_t>(offsetof(HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4_StaticFields, ___mDecayExponent_8)); }
	inline float get_mDecayExponent_8() const { return ___mDecayExponent_8; }
	inline float* get_address_of_mDecayExponent_8() { return &___mDecayExponent_8; }
	inline void set_mDecayExponent_8(float value)
	{
		___mDecayExponent_8 = value;
	}
};


// Cinemachine.Utility.HeadingTracker/Item
struct Item_t3B6B467A1D39665462BC0A703E543496169303B4 
{
public:
	// UnityEngine.Vector3 Cinemachine.Utility.HeadingTracker/Item::velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___velocity_0;
	// System.Single Cinemachine.Utility.HeadingTracker/Item::weight
	float ___weight_1;
	// System.Single Cinemachine.Utility.HeadingTracker/Item::time
	float ___time_2;

public:
	inline static int32_t get_offset_of_velocity_0() { return static_cast<int32_t>(offsetof(Item_t3B6B467A1D39665462BC0A703E543496169303B4, ___velocity_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_velocity_0() const { return ___velocity_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_velocity_0() { return &___velocity_0; }
	inline void set_velocity_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___velocity_0 = value;
	}

	inline static int32_t get_offset_of_weight_1() { return static_cast<int32_t>(offsetof(Item_t3B6B467A1D39665462BC0A703E543496169303B4, ___weight_1)); }
	inline float get_weight_1() const { return ___weight_1; }
	inline float* get_address_of_weight_1() { return &___weight_1; }
	inline void set_weight_1(float value)
	{
		___weight_1 = value;
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(Item_t3B6B467A1D39665462BC0A703E543496169303B4, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}
};


// Cinemachine.Utility.PositionPredictor
struct PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Cinemachine.Utility.PositionPredictor::m_Velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Velocity_0;
	// UnityEngine.Vector3 Cinemachine.Utility.PositionPredictor::m_SmoothDampVelocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_SmoothDampVelocity_1;
	// UnityEngine.Vector3 Cinemachine.Utility.PositionPredictor::m_Pos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Pos_2;
	// System.Boolean Cinemachine.Utility.PositionPredictor::m_HavePos
	bool ___m_HavePos_3;
	// System.Single Cinemachine.Utility.PositionPredictor::<Smoothing>k__BackingField
	float ___U3CSmoothingU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_m_Velocity_0() { return static_cast<int32_t>(offsetof(PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223, ___m_Velocity_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Velocity_0() const { return ___m_Velocity_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Velocity_0() { return &___m_Velocity_0; }
	inline void set_m_Velocity_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Velocity_0 = value;
	}

	inline static int32_t get_offset_of_m_SmoothDampVelocity_1() { return static_cast<int32_t>(offsetof(PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223, ___m_SmoothDampVelocity_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_SmoothDampVelocity_1() const { return ___m_SmoothDampVelocity_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_SmoothDampVelocity_1() { return &___m_SmoothDampVelocity_1; }
	inline void set_m_SmoothDampVelocity_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_SmoothDampVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Pos_2() { return static_cast<int32_t>(offsetof(PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223, ___m_Pos_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Pos_2() const { return ___m_Pos_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Pos_2() { return &___m_Pos_2; }
	inline void set_m_Pos_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Pos_2 = value;
	}

	inline static int32_t get_offset_of_m_HavePos_3() { return static_cast<int32_t>(offsetof(PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223, ___m_HavePos_3)); }
	inline bool get_m_HavePos_3() const { return ___m_HavePos_3; }
	inline bool* get_address_of_m_HavePos_3() { return &___m_HavePos_3; }
	inline void set_m_HavePos_3(bool value)
	{
		___m_HavePos_3 = value;
	}

	inline static int32_t get_offset_of_U3CSmoothingU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223, ___U3CSmoothingU3Ek__BackingField_4)); }
	inline float get_U3CSmoothingU3Ek__BackingField_4() const { return ___U3CSmoothingU3Ek__BackingField_4; }
	inline float* get_address_of_U3CSmoothingU3Ek__BackingField_4() { return &___U3CSmoothingU3Ek__BackingField_4; }
	inline void set_U3CSmoothingU3Ek__BackingField_4(float value)
	{
		___U3CSmoothingU3Ek__BackingField_4 = value;
	}
};


// Cinemachine.VcamTargetPropertyAttribute
struct VcamTargetPropertyAttribute_t7DF91AEFF1BD2B83D640D6D39F1720CB57798B1F  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:

public:
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.ExposedReference`1<Cinemachine.CinemachineVirtualCameraBase>
struct ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F 
{
public:
	// UnityEngine.PropertyName UnityEngine.ExposedReference`1::exposedName
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	// UnityEngine.Object UnityEngine.ExposedReference`1::defaultValue
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___defaultValue_1;

public:
	inline static int32_t get_offset_of_exposedName_0() { return static_cast<int32_t>(offsetof(ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F, ___exposedName_0)); }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  get_exposedName_0() const { return ___exposedName_0; }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * get_address_of_exposedName_0() { return &___exposedName_0; }
	inline void set_exposedName_0(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  value)
	{
		___exposedName_0 = value;
	}

	inline static int32_t get_offset_of_defaultValue_1() { return static_cast<int32_t>(offsetof(ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F, ___defaultValue_1)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_defaultValue_1() const { return ___defaultValue_1; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_defaultValue_1() { return &___defaultValue_1; }
	inline void set_defaultValue_1(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___defaultValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultValue_1), (void*)value);
	}
};


// UnityEngine.ExposedReference`1<System.Object>
struct ExposedReference_1_t6A54AB83F72FCC7CB479D3F39F3CFC074284DF86 
{
public:
	// UnityEngine.PropertyName UnityEngine.ExposedReference`1::exposedName
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	// UnityEngine.Object UnityEngine.ExposedReference`1::defaultValue
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___defaultValue_1;

public:
	inline static int32_t get_offset_of_exposedName_0() { return static_cast<int32_t>(offsetof(ExposedReference_1_t6A54AB83F72FCC7CB479D3F39F3CFC074284DF86, ___exposedName_0)); }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  get_exposedName_0() const { return ___exposedName_0; }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * get_address_of_exposedName_0() { return &___exposedName_0; }
	inline void set_exposedName_0(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  value)
	{
		___exposedName_0 = value;
	}

	inline static int32_t get_offset_of_defaultValue_1() { return static_cast<int32_t>(offsetof(ExposedReference_1_t6A54AB83F72FCC7CB479D3F39F3CFC074284DF86, ___defaultValue_1)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_defaultValue_1() const { return ___defaultValue_1; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_defaultValue_1() { return &___defaultValue_1; }
	inline void set_defaultValue_1(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___defaultValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultValue_1), (void*)value);
	}
};


// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Playables.FrameData/Flags
struct Flags_tC705783C7BC90E0953FD3B996C7900B58A452D69 
{
public:
	// System.Int32 UnityEngine.Playables.FrameData/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tC705783C7BC90E0953FD3B996C7900B58A452D69, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Playables.PlayState
struct PlayState_tC3BC5843A80D4DEC4D5E79417CBBAD10BB0BEC91 
{
public:
	// System.Int32 UnityEngine.Playables.PlayState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayState_tC3BC5843A80D4DEC4D5E79417CBBAD10BB0BEC91, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Playables.PlayableGraph
struct PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};


// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields, ___m_Null_2)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_t7E9CEC3DD059E32F847242513BD6CE30866AB2A6 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_t7E9CEC3DD059E32F847242513BD6CE30866AB2A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_tBBD83025576FC017B10484014B5C396613A02B8E 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_tBBD83025576FC017B10484014B5C396613A02B8E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CameraState
struct CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 
{
public:
	// Cinemachine.LensSettings Cinemachine.CameraState::<Lens>k__BackingField
	LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  ___U3CLensU3Ek__BackingField_0;
	// UnityEngine.Vector3 Cinemachine.CameraState::<ReferenceUp>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceUpU3Ek__BackingField_1;
	// UnityEngine.Vector3 Cinemachine.CameraState::<ReferenceLookAt>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceLookAtU3Ek__BackingField_2;
	// UnityEngine.Vector3 Cinemachine.CameraState::<RawPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CRawPositionU3Ek__BackingField_4;
	// UnityEngine.Quaternion Cinemachine.CameraState::<RawOrientation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CRawOrientationU3Ek__BackingField_5;
	// UnityEngine.Vector3 Cinemachine.CameraState::<PositionDampingBypass>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	// System.Single Cinemachine.CameraState::<ShotQuality>k__BackingField
	float ___U3CShotQualityU3Ek__BackingField_7;
	// UnityEngine.Vector3 Cinemachine.CameraState::<PositionCorrection>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionCorrectionU3Ek__BackingField_8;
	// UnityEngine.Quaternion Cinemachine.CameraState::<OrientationCorrection>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3COrientationCorrectionU3Ek__BackingField_9;
	// Cinemachine.CameraState/BlendHintValue Cinemachine.CameraState::<BlendHint>k__BackingField
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom0
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom0_11;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom1
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom1_12;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom2
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom2_13;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom3
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom3_14;
	// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable> Cinemachine.CameraState::m_CustomOverflow
	List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5 * ___m_CustomOverflow_15;
	// System.Int32 Cinemachine.CameraState::<NumCustomBlendables>k__BackingField
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CLensU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CLensU3Ek__BackingField_0)); }
	inline LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  get_U3CLensU3Ek__BackingField_0() const { return ___U3CLensU3Ek__BackingField_0; }
	inline LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC * get_address_of_U3CLensU3Ek__BackingField_0() { return &___U3CLensU3Ek__BackingField_0; }
	inline void set_U3CLensU3Ek__BackingField_0(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  value)
	{
		___U3CLensU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceUpU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CReferenceUpU3Ek__BackingField_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CReferenceUpU3Ek__BackingField_1() const { return ___U3CReferenceUpU3Ek__BackingField_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CReferenceUpU3Ek__BackingField_1() { return &___U3CReferenceUpU3Ek__BackingField_1; }
	inline void set_U3CReferenceUpU3Ek__BackingField_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CReferenceUpU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceLookAtU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CReferenceLookAtU3Ek__BackingField_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CReferenceLookAtU3Ek__BackingField_2() const { return ___U3CReferenceLookAtU3Ek__BackingField_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CReferenceLookAtU3Ek__BackingField_2() { return &___U3CReferenceLookAtU3Ek__BackingField_2; }
	inline void set_U3CReferenceLookAtU3Ek__BackingField_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CReferenceLookAtU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRawPositionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CRawPositionU3Ek__BackingField_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CRawPositionU3Ek__BackingField_4() const { return ___U3CRawPositionU3Ek__BackingField_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CRawPositionU3Ek__BackingField_4() { return &___U3CRawPositionU3Ek__BackingField_4; }
	inline void set_U3CRawPositionU3Ek__BackingField_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CRawPositionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRawOrientationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CRawOrientationU3Ek__BackingField_5)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3CRawOrientationU3Ek__BackingField_5() const { return ___U3CRawOrientationU3Ek__BackingField_5; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3CRawOrientationU3Ek__BackingField_5() { return &___U3CRawOrientationU3Ek__BackingField_5; }
	inline void set_U3CRawOrientationU3Ek__BackingField_5(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3CRawOrientationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPositionDampingBypassU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CPositionDampingBypassU3Ek__BackingField_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CPositionDampingBypassU3Ek__BackingField_6() const { return ___U3CPositionDampingBypassU3Ek__BackingField_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CPositionDampingBypassU3Ek__BackingField_6() { return &___U3CPositionDampingBypassU3Ek__BackingField_6; }
	inline void set_U3CPositionDampingBypassU3Ek__BackingField_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CPositionDampingBypassU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CShotQualityU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CShotQualityU3Ek__BackingField_7)); }
	inline float get_U3CShotQualityU3Ek__BackingField_7() const { return ___U3CShotQualityU3Ek__BackingField_7; }
	inline float* get_address_of_U3CShotQualityU3Ek__BackingField_7() { return &___U3CShotQualityU3Ek__BackingField_7; }
	inline void set_U3CShotQualityU3Ek__BackingField_7(float value)
	{
		___U3CShotQualityU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CPositionCorrectionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CPositionCorrectionU3Ek__BackingField_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CPositionCorrectionU3Ek__BackingField_8() const { return ___U3CPositionCorrectionU3Ek__BackingField_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CPositionCorrectionU3Ek__BackingField_8() { return &___U3CPositionCorrectionU3Ek__BackingField_8; }
	inline void set_U3CPositionCorrectionU3Ek__BackingField_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CPositionCorrectionU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3COrientationCorrectionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3COrientationCorrectionU3Ek__BackingField_9)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3COrientationCorrectionU3Ek__BackingField_9() const { return ___U3COrientationCorrectionU3Ek__BackingField_9; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3COrientationCorrectionU3Ek__BackingField_9() { return &___U3COrientationCorrectionU3Ek__BackingField_9; }
	inline void set_U3COrientationCorrectionU3Ek__BackingField_9(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3COrientationCorrectionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CBlendHintU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CBlendHintU3Ek__BackingField_10)); }
	inline int32_t get_U3CBlendHintU3Ek__BackingField_10() const { return ___U3CBlendHintU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CBlendHintU3Ek__BackingField_10() { return &___U3CBlendHintU3Ek__BackingField_10; }
	inline void set_U3CBlendHintU3Ek__BackingField_10(int32_t value)
	{
		___U3CBlendHintU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_mCustom0_11() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___mCustom0_11)); }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  get_mCustom0_11() const { return ___mCustom0_11; }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253 * get_address_of_mCustom0_11() { return &___mCustom0_11; }
	inline void set_mCustom0_11(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  value)
	{
		___mCustom0_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom0_11))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom1_12() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___mCustom1_12)); }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  get_mCustom1_12() const { return ___mCustom1_12; }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253 * get_address_of_mCustom1_12() { return &___mCustom1_12; }
	inline void set_mCustom1_12(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  value)
	{
		___mCustom1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom1_12))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom2_13() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___mCustom2_13)); }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  get_mCustom2_13() const { return ___mCustom2_13; }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253 * get_address_of_mCustom2_13() { return &___mCustom2_13; }
	inline void set_mCustom2_13(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  value)
	{
		___mCustom2_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom2_13))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom3_14() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___mCustom3_14)); }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  get_mCustom3_14() const { return ___mCustom3_14; }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253 * get_address_of_mCustom3_14() { return &___mCustom3_14; }
	inline void set_mCustom3_14(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  value)
	{
		___mCustom3_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom3_14))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_CustomOverflow_15() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___m_CustomOverflow_15)); }
	inline List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5 * get_m_CustomOverflow_15() const { return ___m_CustomOverflow_15; }
	inline List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5 ** get_address_of_m_CustomOverflow_15() { return &___m_CustomOverflow_15; }
	inline void set_m_CustomOverflow_15(List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5 * value)
	{
		___m_CustomOverflow_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomOverflow_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNumCustomBlendablesU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CNumCustomBlendablesU3Ek__BackingField_16)); }
	inline int32_t get_U3CNumCustomBlendablesU3Ek__BackingField_16() const { return ___U3CNumCustomBlendablesU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CNumCustomBlendablesU3Ek__BackingField_16() { return &___U3CNumCustomBlendablesU3Ek__BackingField_16; }
	inline void set_U3CNumCustomBlendablesU3Ek__BackingField_16(int32_t value)
	{
		___U3CNumCustomBlendablesU3Ek__BackingField_16 = value;
	}
};

struct CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_StaticFields
{
public:
	// UnityEngine.Vector3 Cinemachine.CameraState::kNoPoint
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___kNoPoint_3;

public:
	inline static int32_t get_offset_of_kNoPoint_3() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_StaticFields, ___kNoPoint_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_kNoPoint_3() const { return ___kNoPoint_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_kNoPoint_3() { return &___kNoPoint_3; }
	inline void set_kNoPoint_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___kNoPoint_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CameraState
struct CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_marshaled_pinvoke
{
	LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshaled_pinvoke ___U3CLensU3Ek__BackingField_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceUpU3Ek__BackingField_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceLookAtU3Ek__BackingField_2;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CRawPositionU3Ek__BackingField_4;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CRawOrientationU3Ek__BackingField_5;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	float ___U3CShotQualityU3Ek__BackingField_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionCorrectionU3Ek__BackingField_8;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3COrientationCorrectionU3Ek__BackingField_9;
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom0_11;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom1_12;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom2_13;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom3_14;
	List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5 * ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for COM marshalling of Cinemachine.CameraState
struct CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_marshaled_com
{
	LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshaled_com ___U3CLensU3Ek__BackingField_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceUpU3Ek__BackingField_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceLookAtU3Ek__BackingField_2;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CRawPositionU3Ek__BackingField_4;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CRawOrientationU3Ek__BackingField_5;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	float ___U3CShotQualityU3Ek__BackingField_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionCorrectionU3Ek__BackingField_8;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3COrientationCorrectionU3Ek__BackingField_9;
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom0_11;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom1_12;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom2_13;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom3_14;
	List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5 * ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

// Cinemachine.CinemachineBlendDefinition
struct CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04 
{
public:
	// Cinemachine.CinemachineBlendDefinition/Style Cinemachine.CinemachineBlendDefinition::m_Style
	int32_t ___m_Style_0;
	// System.Single Cinemachine.CinemachineBlendDefinition::m_Time
	float ___m_Time_1;
	// UnityEngine.AnimationCurve Cinemachine.CinemachineBlendDefinition::m_CustomCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___m_CustomCurve_2;

public:
	inline static int32_t get_offset_of_m_Style_0() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04, ___m_Style_0)); }
	inline int32_t get_m_Style_0() const { return ___m_Style_0; }
	inline int32_t* get_address_of_m_Style_0() { return &___m_Style_0; }
	inline void set_m_Style_0(int32_t value)
	{
		___m_Style_0 = value;
	}

	inline static int32_t get_offset_of_m_Time_1() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04, ___m_Time_1)); }
	inline float get_m_Time_1() const { return ___m_Time_1; }
	inline float* get_address_of_m_Time_1() { return &___m_Time_1; }
	inline void set_m_Time_1(float value)
	{
		___m_Time_1 = value;
	}

	inline static int32_t get_offset_of_m_CustomCurve_2() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04, ___m_CustomCurve_2)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_m_CustomCurve_2() const { return ___m_CustomCurve_2; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_m_CustomCurve_2() { return &___m_CustomCurve_2; }
	inline void set_m_CustomCurve_2(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___m_CustomCurve_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomCurve_2), (void*)value);
	}
};

struct CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04_StaticFields
{
public:
	// UnityEngine.AnimationCurve[] Cinemachine.CinemachineBlendDefinition::sStandardCurves
	AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* ___sStandardCurves_3;

public:
	inline static int32_t get_offset_of_sStandardCurves_3() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04_StaticFields, ___sStandardCurves_3)); }
	inline AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* get_sStandardCurves_3() const { return ___sStandardCurves_3; }
	inline AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1** get_address_of_sStandardCurves_3() { return &___sStandardCurves_3; }
	inline void set_sStandardCurves_3(AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* value)
	{
		___sStandardCurves_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sStandardCurves_3), (void*)value);
	}
};


// Cinemachine.CinemachineCore
struct CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain> Cinemachine.CinemachineCore::mActiveBrains
	List_1_tC0D9EEE4F50880325C33F6FABD6B0EB876E7FB3D * ___mActiveBrains_10;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase> Cinemachine.CinemachineCore::mActiveCameras
	List_1_t2A7D1450D916CAA44FEB79B0E5C2E4EF5A02CECF * ___mActiveCameras_11;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>> Cinemachine.CinemachineCore::mAllCameras
	List_1_tBDF194622D0C56020E8C4DD7B5145B2988CA19A4 * ___mAllCameras_12;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineCore::mRoundRobinVcamLastFrame
	CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___mRoundRobinVcamLastFrame_13;
	// System.Collections.Generic.Dictionary`2<Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/UpdateStatus> Cinemachine.CinemachineCore::mUpdateStatus
	Dictionary_2_tACB39FA2E62BA2EA60CEBEAE83D5AB8B14A1D280 * ___mUpdateStatus_16;
	// Cinemachine.CinemachineCore/UpdateFilter Cinemachine.CinemachineCore::<CurrentUpdateFilter>k__BackingField
	int32_t ___U3CCurrentUpdateFilterU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_mActiveBrains_10() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___mActiveBrains_10)); }
	inline List_1_tC0D9EEE4F50880325C33F6FABD6B0EB876E7FB3D * get_mActiveBrains_10() const { return ___mActiveBrains_10; }
	inline List_1_tC0D9EEE4F50880325C33F6FABD6B0EB876E7FB3D ** get_address_of_mActiveBrains_10() { return &___mActiveBrains_10; }
	inline void set_mActiveBrains_10(List_1_tC0D9EEE4F50880325C33F6FABD6B0EB876E7FB3D * value)
	{
		___mActiveBrains_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveBrains_10), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveCameras_11() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___mActiveCameras_11)); }
	inline List_1_t2A7D1450D916CAA44FEB79B0E5C2E4EF5A02CECF * get_mActiveCameras_11() const { return ___mActiveCameras_11; }
	inline List_1_t2A7D1450D916CAA44FEB79B0E5C2E4EF5A02CECF ** get_address_of_mActiveCameras_11() { return &___mActiveCameras_11; }
	inline void set_mActiveCameras_11(List_1_t2A7D1450D916CAA44FEB79B0E5C2E4EF5A02CECF * value)
	{
		___mActiveCameras_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveCameras_11), (void*)value);
	}

	inline static int32_t get_offset_of_mAllCameras_12() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___mAllCameras_12)); }
	inline List_1_tBDF194622D0C56020E8C4DD7B5145B2988CA19A4 * get_mAllCameras_12() const { return ___mAllCameras_12; }
	inline List_1_tBDF194622D0C56020E8C4DD7B5145B2988CA19A4 ** get_address_of_mAllCameras_12() { return &___mAllCameras_12; }
	inline void set_mAllCameras_12(List_1_tBDF194622D0C56020E8C4DD7B5145B2988CA19A4 * value)
	{
		___mAllCameras_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAllCameras_12), (void*)value);
	}

	inline static int32_t get_offset_of_mRoundRobinVcamLastFrame_13() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___mRoundRobinVcamLastFrame_13)); }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * get_mRoundRobinVcamLastFrame_13() const { return ___mRoundRobinVcamLastFrame_13; }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD ** get_address_of_mRoundRobinVcamLastFrame_13() { return &___mRoundRobinVcamLastFrame_13; }
	inline void set_mRoundRobinVcamLastFrame_13(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * value)
	{
		___mRoundRobinVcamLastFrame_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRoundRobinVcamLastFrame_13), (void*)value);
	}

	inline static int32_t get_offset_of_mUpdateStatus_16() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___mUpdateStatus_16)); }
	inline Dictionary_2_tACB39FA2E62BA2EA60CEBEAE83D5AB8B14A1D280 * get_mUpdateStatus_16() const { return ___mUpdateStatus_16; }
	inline Dictionary_2_tACB39FA2E62BA2EA60CEBEAE83D5AB8B14A1D280 ** get_address_of_mUpdateStatus_16() { return &___mUpdateStatus_16; }
	inline void set_mUpdateStatus_16(Dictionary_2_tACB39FA2E62BA2EA60CEBEAE83D5AB8B14A1D280 * value)
	{
		___mUpdateStatus_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUpdateStatus_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentUpdateFilterU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___U3CCurrentUpdateFilterU3Ek__BackingField_17)); }
	inline int32_t get_U3CCurrentUpdateFilterU3Ek__BackingField_17() const { return ___U3CCurrentUpdateFilterU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CCurrentUpdateFilterU3Ek__BackingField_17() { return &___U3CCurrentUpdateFilterU3Ek__BackingField_17; }
	inline void set_U3CCurrentUpdateFilterU3Ek__BackingField_17(int32_t value)
	{
		___U3CCurrentUpdateFilterU3Ek__BackingField_17 = value;
	}
};

struct CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields
{
public:
	// System.Int32 Cinemachine.CinemachineCore::kStreamingVersion
	int32_t ___kStreamingVersion_0;
	// System.String Cinemachine.CinemachineCore::kVersionString
	String_t* ___kVersionString_1;
	// Cinemachine.CinemachineCore Cinemachine.CinemachineCore::sInstance
	CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C * ___sInstance_2;
	// System.Boolean Cinemachine.CinemachineCore::sShowHiddenObjects
	bool ___sShowHiddenObjects_3;
	// Cinemachine.CinemachineCore/AxisInputDelegate Cinemachine.CinemachineCore::GetInputAxis
	AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE * ___GetInputAxis_4;
	// System.Single Cinemachine.CinemachineCore::UniformDeltaTimeOverride
	float ___UniformDeltaTimeOverride_5;
	// System.Single Cinemachine.CinemachineCore::CurrentTimeOverride
	float ___CurrentTimeOverride_6;
	// Cinemachine.CinemachineCore/GetBlendOverrideDelegate Cinemachine.CinemachineCore::GetBlendOverride
	GetBlendOverrideDelegate_t26D8778A313C528295CC34D776A57119AE7F1EB8 * ___GetBlendOverride_7;
	// Cinemachine.CinemachineBrain/BrainEvent Cinemachine.CinemachineCore::CameraUpdatedEvent
	BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * ___CameraUpdatedEvent_8;
	// Cinemachine.CinemachineBrain/BrainEvent Cinemachine.CinemachineCore::CameraCutEvent
	BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * ___CameraCutEvent_9;
	// System.Single Cinemachine.CinemachineCore::mLastUpdateTime
	float ___mLastUpdateTime_14;
	// System.Int32 Cinemachine.CinemachineCore::<FixedFrameCount>k__BackingField
	int32_t ___U3CFixedFrameCountU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_kStreamingVersion_0() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___kStreamingVersion_0)); }
	inline int32_t get_kStreamingVersion_0() const { return ___kStreamingVersion_0; }
	inline int32_t* get_address_of_kStreamingVersion_0() { return &___kStreamingVersion_0; }
	inline void set_kStreamingVersion_0(int32_t value)
	{
		___kStreamingVersion_0 = value;
	}

	inline static int32_t get_offset_of_kVersionString_1() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___kVersionString_1)); }
	inline String_t* get_kVersionString_1() const { return ___kVersionString_1; }
	inline String_t** get_address_of_kVersionString_1() { return &___kVersionString_1; }
	inline void set_kVersionString_1(String_t* value)
	{
		___kVersionString_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kVersionString_1), (void*)value);
	}

	inline static int32_t get_offset_of_sInstance_2() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___sInstance_2)); }
	inline CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C * get_sInstance_2() const { return ___sInstance_2; }
	inline CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C ** get_address_of_sInstance_2() { return &___sInstance_2; }
	inline void set_sInstance_2(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C * value)
	{
		___sInstance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_2), (void*)value);
	}

	inline static int32_t get_offset_of_sShowHiddenObjects_3() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___sShowHiddenObjects_3)); }
	inline bool get_sShowHiddenObjects_3() const { return ___sShowHiddenObjects_3; }
	inline bool* get_address_of_sShowHiddenObjects_3() { return &___sShowHiddenObjects_3; }
	inline void set_sShowHiddenObjects_3(bool value)
	{
		___sShowHiddenObjects_3 = value;
	}

	inline static int32_t get_offset_of_GetInputAxis_4() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___GetInputAxis_4)); }
	inline AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE * get_GetInputAxis_4() const { return ___GetInputAxis_4; }
	inline AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE ** get_address_of_GetInputAxis_4() { return &___GetInputAxis_4; }
	inline void set_GetInputAxis_4(AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE * value)
	{
		___GetInputAxis_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetInputAxis_4), (void*)value);
	}

	inline static int32_t get_offset_of_UniformDeltaTimeOverride_5() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___UniformDeltaTimeOverride_5)); }
	inline float get_UniformDeltaTimeOverride_5() const { return ___UniformDeltaTimeOverride_5; }
	inline float* get_address_of_UniformDeltaTimeOverride_5() { return &___UniformDeltaTimeOverride_5; }
	inline void set_UniformDeltaTimeOverride_5(float value)
	{
		___UniformDeltaTimeOverride_5 = value;
	}

	inline static int32_t get_offset_of_CurrentTimeOverride_6() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___CurrentTimeOverride_6)); }
	inline float get_CurrentTimeOverride_6() const { return ___CurrentTimeOverride_6; }
	inline float* get_address_of_CurrentTimeOverride_6() { return &___CurrentTimeOverride_6; }
	inline void set_CurrentTimeOverride_6(float value)
	{
		___CurrentTimeOverride_6 = value;
	}

	inline static int32_t get_offset_of_GetBlendOverride_7() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___GetBlendOverride_7)); }
	inline GetBlendOverrideDelegate_t26D8778A313C528295CC34D776A57119AE7F1EB8 * get_GetBlendOverride_7() const { return ___GetBlendOverride_7; }
	inline GetBlendOverrideDelegate_t26D8778A313C528295CC34D776A57119AE7F1EB8 ** get_address_of_GetBlendOverride_7() { return &___GetBlendOverride_7; }
	inline void set_GetBlendOverride_7(GetBlendOverrideDelegate_t26D8778A313C528295CC34D776A57119AE7F1EB8 * value)
	{
		___GetBlendOverride_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetBlendOverride_7), (void*)value);
	}

	inline static int32_t get_offset_of_CameraUpdatedEvent_8() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___CameraUpdatedEvent_8)); }
	inline BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * get_CameraUpdatedEvent_8() const { return ___CameraUpdatedEvent_8; }
	inline BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 ** get_address_of_CameraUpdatedEvent_8() { return &___CameraUpdatedEvent_8; }
	inline void set_CameraUpdatedEvent_8(BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * value)
	{
		___CameraUpdatedEvent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraUpdatedEvent_8), (void*)value);
	}

	inline static int32_t get_offset_of_CameraCutEvent_9() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___CameraCutEvent_9)); }
	inline BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * get_CameraCutEvent_9() const { return ___CameraCutEvent_9; }
	inline BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 ** get_address_of_CameraCutEvent_9() { return &___CameraCutEvent_9; }
	inline void set_CameraCutEvent_9(BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * value)
	{
		___CameraCutEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraCutEvent_9), (void*)value);
	}

	inline static int32_t get_offset_of_mLastUpdateTime_14() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___mLastUpdateTime_14)); }
	inline float get_mLastUpdateTime_14() const { return ___mLastUpdateTime_14; }
	inline float* get_address_of_mLastUpdateTime_14() { return &___mLastUpdateTime_14; }
	inline void set_mLastUpdateTime_14(float value)
	{
		___mLastUpdateTime_14 = value;
	}

	inline static int32_t get_offset_of_U3CFixedFrameCountU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___U3CFixedFrameCountU3Ek__BackingField_15)); }
	inline int32_t get_U3CFixedFrameCountU3Ek__BackingField_15() const { return ___U3CFixedFrameCountU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CFixedFrameCountU3Ek__BackingField_15() { return &___U3CFixedFrameCountU3Ek__BackingField_15; }
	inline void set_U3CFixedFrameCountU3Ek__BackingField_15(int32_t value)
	{
		___U3CFixedFrameCountU3Ek__BackingField_15 = value;
	}
};


// Cinemachine.TargetPositionCache
struct TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42  : public RuntimeObject
{
public:

public:
};

struct TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_StaticFields
{
public:
	// System.Boolean Cinemachine.TargetPositionCache::<UseCache>k__BackingField
	bool ___U3CUseCacheU3Ek__BackingField_0;
	// Cinemachine.TargetPositionCache/Mode Cinemachine.TargetPositionCache::m_CacheMode
	int32_t ___m_CacheMode_2;
	// System.Single Cinemachine.TargetPositionCache::<CurrentTime>k__BackingField
	float ___U3CCurrentTimeU3Ek__BackingField_3;
	// System.Int32 Cinemachine.TargetPositionCache::<CurrentFrame>k__BackingField
	int32_t ___U3CCurrentFrameU3Ek__BackingField_4;
	// System.Boolean Cinemachine.TargetPositionCache::<IsCameraCut>k__BackingField
	bool ___U3CIsCameraCutU3Ek__BackingField_5;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,Cinemachine.TargetPositionCache/CacheEntry> Cinemachine.TargetPositionCache::m_Cache
	Dictionary_2_tC828B62C23DF118F79F73B89C024ABBCCE87873B * ___m_Cache_6;
	// Cinemachine.TargetPositionCache/TimeRange Cinemachine.TargetPositionCache::m_CacheTimeRange
	TimeRange_tF70DD4C14BC9F99833857B0743DC3302FABAF276  ___m_CacheTimeRange_7;

public:
	inline static int32_t get_offset_of_U3CUseCacheU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_StaticFields, ___U3CUseCacheU3Ek__BackingField_0)); }
	inline bool get_U3CUseCacheU3Ek__BackingField_0() const { return ___U3CUseCacheU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CUseCacheU3Ek__BackingField_0() { return &___U3CUseCacheU3Ek__BackingField_0; }
	inline void set_U3CUseCacheU3Ek__BackingField_0(bool value)
	{
		___U3CUseCacheU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_CacheMode_2() { return static_cast<int32_t>(offsetof(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_StaticFields, ___m_CacheMode_2)); }
	inline int32_t get_m_CacheMode_2() const { return ___m_CacheMode_2; }
	inline int32_t* get_address_of_m_CacheMode_2() { return &___m_CacheMode_2; }
	inline void set_m_CacheMode_2(int32_t value)
	{
		___m_CacheMode_2 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_StaticFields, ___U3CCurrentTimeU3Ek__BackingField_3)); }
	inline float get_U3CCurrentTimeU3Ek__BackingField_3() const { return ___U3CCurrentTimeU3Ek__BackingField_3; }
	inline float* get_address_of_U3CCurrentTimeU3Ek__BackingField_3() { return &___U3CCurrentTimeU3Ek__BackingField_3; }
	inline void set_U3CCurrentTimeU3Ek__BackingField_3(float value)
	{
		___U3CCurrentTimeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentFrameU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_StaticFields, ___U3CCurrentFrameU3Ek__BackingField_4)); }
	inline int32_t get_U3CCurrentFrameU3Ek__BackingField_4() const { return ___U3CCurrentFrameU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CCurrentFrameU3Ek__BackingField_4() { return &___U3CCurrentFrameU3Ek__BackingField_4; }
	inline void set_U3CCurrentFrameU3Ek__BackingField_4(int32_t value)
	{
		___U3CCurrentFrameU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CIsCameraCutU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_StaticFields, ___U3CIsCameraCutU3Ek__BackingField_5)); }
	inline bool get_U3CIsCameraCutU3Ek__BackingField_5() const { return ___U3CIsCameraCutU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsCameraCutU3Ek__BackingField_5() { return &___U3CIsCameraCutU3Ek__BackingField_5; }
	inline void set_U3CIsCameraCutU3Ek__BackingField_5(bool value)
	{
		___U3CIsCameraCutU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_m_Cache_6() { return static_cast<int32_t>(offsetof(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_StaticFields, ___m_Cache_6)); }
	inline Dictionary_2_tC828B62C23DF118F79F73B89C024ABBCCE87873B * get_m_Cache_6() const { return ___m_Cache_6; }
	inline Dictionary_2_tC828B62C23DF118F79F73B89C024ABBCCE87873B ** get_address_of_m_Cache_6() { return &___m_Cache_6; }
	inline void set_m_Cache_6(Dictionary_2_tC828B62C23DF118F79F73B89C024ABBCCE87873B * value)
	{
		___m_Cache_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cache_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheTimeRange_7() { return static_cast<int32_t>(offsetof(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_StaticFields, ___m_CacheTimeRange_7)); }
	inline TimeRange_tF70DD4C14BC9F99833857B0743DC3302FABAF276  get_m_CacheTimeRange_7() const { return ___m_CacheTimeRange_7; }
	inline TimeRange_tF70DD4C14BC9F99833857B0743DC3302FABAF276 * get_address_of_m_CacheTimeRange_7() { return &___m_CacheTimeRange_7; }
	inline void set_m_CacheTimeRange_7(TimeRange_tF70DD4C14BC9F99833857B0743DC3302FABAF276  value)
	{
		___m_CacheTimeRange_7 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Playables.Playable
struct Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.PlayableOutput
struct PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345, ___m_Handle_0)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<CinemachineMixer>
struct ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>
struct ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<System.Object>
struct ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.Touch
struct Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Position_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_RawPosition_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_PositionDelta_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// Cinemachine.CinemachineCore/AxisInputDelegate
struct AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE  : public MulticastDelegate_t
{
public:

public:
};


// Cinemachine.Utility.CinemachineDebug/OnGUIDelegate
struct OnGUIDelegate_tF9317001AB4E703C8439EFD7987552E90C476F72  : public MulticastDelegate_t
{
public:

public:
};


// CinemachineMixer/MasterDirectorDelegate
struct MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Playables.FrameData
struct FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E 
{
public:
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Double UnityEngine.Playables.FrameData::m_EffectiveParentDelay
	double ___m_EffectiveParentDelay_4;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveParentSpeed
	float ___m_EffectiveParentSpeed_5;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_6;
	// UnityEngine.Playables.FrameData/Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_7;
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.FrameData::m_Output
	PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  ___m_Output_8;

public:
	inline static int32_t get_offset_of_m_FrameID_0() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_FrameID_0)); }
	inline uint64_t get_m_FrameID_0() const { return ___m_FrameID_0; }
	inline uint64_t* get_address_of_m_FrameID_0() { return &___m_FrameID_0; }
	inline void set_m_FrameID_0(uint64_t value)
	{
		___m_FrameID_0 = value;
	}

	inline static int32_t get_offset_of_m_DeltaTime_1() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_DeltaTime_1)); }
	inline double get_m_DeltaTime_1() const { return ___m_DeltaTime_1; }
	inline double* get_address_of_m_DeltaTime_1() { return &___m_DeltaTime_1; }
	inline void set_m_DeltaTime_1(double value)
	{
		___m_DeltaTime_1 = value;
	}

	inline static int32_t get_offset_of_m_Weight_2() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_Weight_2)); }
	inline float get_m_Weight_2() const { return ___m_Weight_2; }
	inline float* get_address_of_m_Weight_2() { return &___m_Weight_2; }
	inline void set_m_Weight_2(float value)
	{
		___m_Weight_2 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveWeight_3() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_EffectiveWeight_3)); }
	inline float get_m_EffectiveWeight_3() const { return ___m_EffectiveWeight_3; }
	inline float* get_address_of_m_EffectiveWeight_3() { return &___m_EffectiveWeight_3; }
	inline void set_m_EffectiveWeight_3(float value)
	{
		___m_EffectiveWeight_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveParentDelay_4() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_EffectiveParentDelay_4)); }
	inline double get_m_EffectiveParentDelay_4() const { return ___m_EffectiveParentDelay_4; }
	inline double* get_address_of_m_EffectiveParentDelay_4() { return &___m_EffectiveParentDelay_4; }
	inline void set_m_EffectiveParentDelay_4(double value)
	{
		___m_EffectiveParentDelay_4 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveParentSpeed_5() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_EffectiveParentSpeed_5)); }
	inline float get_m_EffectiveParentSpeed_5() const { return ___m_EffectiveParentSpeed_5; }
	inline float* get_address_of_m_EffectiveParentSpeed_5() { return &___m_EffectiveParentSpeed_5; }
	inline void set_m_EffectiveParentSpeed_5(float value)
	{
		___m_EffectiveParentSpeed_5 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveSpeed_6() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_EffectiveSpeed_6)); }
	inline float get_m_EffectiveSpeed_6() const { return ___m_EffectiveSpeed_6; }
	inline float* get_address_of_m_EffectiveSpeed_6() { return &___m_EffectiveSpeed_6; }
	inline void set_m_EffectiveSpeed_6(float value)
	{
		___m_EffectiveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}

	inline static int32_t get_offset_of_m_Output_8() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_Output_8)); }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  get_m_Output_8() const { return ___m_Output_8; }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 * get_address_of_m_Output_8() { return &___m_Output_8; }
	inline void set_m_Output_8(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  value)
	{
		___m_Output_8 = value;
	}
};


// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};


// CinemachineShot
struct CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5  : public PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD
{
public:
	// System.String CinemachineShot::DisplayName
	String_t* ___DisplayName_4;
	// UnityEngine.ExposedReference`1<Cinemachine.CinemachineVirtualCameraBase> CinemachineShot::VirtualCamera
	ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F  ___VirtualCamera_5;

public:
	inline static int32_t get_offset_of_DisplayName_4() { return static_cast<int32_t>(offsetof(CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5, ___DisplayName_4)); }
	inline String_t* get_DisplayName_4() const { return ___DisplayName_4; }
	inline String_t** get_address_of_DisplayName_4() { return &___DisplayName_4; }
	inline void set_DisplayName_4(String_t* value)
	{
		___DisplayName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisplayName_4), (void*)value);
	}

	inline static int32_t get_offset_of_VirtualCamera_5() { return static_cast<int32_t>(offsetof(CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5, ___VirtualCamera_5)); }
	inline ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F  get_VirtualCamera_5() const { return ___VirtualCamera_5; }
	inline ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F * get_address_of_VirtualCamera_5() { return &___VirtualCamera_5; }
	inline void set_VirtualCamera_5(ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F  value)
	{
		___VirtualCamera_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___VirtualCamera_5))->___defaultValue_1), (void*)NULL);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Playables.PlayableDirector
struct PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::played
	Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * ___played_4;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::paused
	Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * ___paused_5;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::stopped
	Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * ___stopped_6;

public:
	inline static int32_t get_offset_of_played_4() { return static_cast<int32_t>(offsetof(PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2, ___played_4)); }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * get_played_4() const { return ___played_4; }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 ** get_address_of_played_4() { return &___played_4; }
	inline void set_played_4(Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * value)
	{
		___played_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___played_4), (void*)value);
	}

	inline static int32_t get_offset_of_paused_5() { return static_cast<int32_t>(offsetof(PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2, ___paused_5)); }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * get_paused_5() const { return ___paused_5; }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 ** get_address_of_paused_5() { return &___paused_5; }
	inline void set_paused_5(Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * value)
	{
		___paused_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paused_5), (void*)value);
	}

	inline static int32_t get_offset_of_stopped_6() { return static_cast<int32_t>(offsetof(PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2, ___stopped_6)); }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * get_stopped_6() const { return ___stopped_6; }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 ** get_address_of_stopped_6() { return &___stopped_6; }
	inline void set_stopped_6(Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * value)
	{
		___stopped_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stopped_6), (void*)value);
	}
};


// UnityEngine.Timeline.TrackAsset
struct TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D  : public PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD
{
public:
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_Version
	int32_t ___m_Version_5;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_AnimClip
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___m_AnimClip_6;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Locked
	bool ___m_Locked_11;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Muted
	bool ___m_Muted_12;
	// System.String UnityEngine.Timeline.TrackAsset::m_CustomPlayableFullTypename
	String_t* ___m_CustomPlayableFullTypename_13;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_Curves
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___m_Curves_14;
	// UnityEngine.Playables.PlayableAsset UnityEngine.Timeline.TrackAsset::m_Parent
	PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * ___m_Parent_15;
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.TrackAsset::m_Children
	List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * ___m_Children_16;
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_ItemsHash
	int32_t ___m_ItemsHash_17;
	// UnityEngine.Timeline.TimelineClip[] UnityEngine.Timeline.TrackAsset::m_ClipsCache
	TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E* ___m_ClipsCache_18;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_Start
	DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  ___m_Start_19;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_End
	DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  ___m_End_20;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_CacheSorted
	bool ___m_CacheSorted_21;
	// System.Nullable`1<System.Boolean> UnityEngine.Timeline.TrackAsset::m_SupportsNotifications
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___m_SupportsNotifications_22;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset::m_ChildTrackCache
	RuntimeObject* ___m_ChildTrackCache_24;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset::m_Clips
	List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * ___m_Clips_26;
	// UnityEngine.Timeline.MarkerList UnityEngine.Timeline.TrackAsset::m_Markers
	MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC  ___m_Markers_27;

public:
	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Version_5)); }
	inline int32_t get_m_Version_5() const { return ___m_Version_5; }
	inline int32_t* get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(int32_t value)
	{
		___m_Version_5 = value;
	}

	inline static int32_t get_offset_of_m_AnimClip_6() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_AnimClip_6)); }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * get_m_AnimClip_6() const { return ___m_AnimClip_6; }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** get_address_of_m_AnimClip_6() { return &___m_AnimClip_6; }
	inline void set_m_AnimClip_6(AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		___m_AnimClip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimClip_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Locked_11() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Locked_11)); }
	inline bool get_m_Locked_11() const { return ___m_Locked_11; }
	inline bool* get_address_of_m_Locked_11() { return &___m_Locked_11; }
	inline void set_m_Locked_11(bool value)
	{
		___m_Locked_11 = value;
	}

	inline static int32_t get_offset_of_m_Muted_12() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Muted_12)); }
	inline bool get_m_Muted_12() const { return ___m_Muted_12; }
	inline bool* get_address_of_m_Muted_12() { return &___m_Muted_12; }
	inline void set_m_Muted_12(bool value)
	{
		___m_Muted_12 = value;
	}

	inline static int32_t get_offset_of_m_CustomPlayableFullTypename_13() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_CustomPlayableFullTypename_13)); }
	inline String_t* get_m_CustomPlayableFullTypename_13() const { return ___m_CustomPlayableFullTypename_13; }
	inline String_t** get_address_of_m_CustomPlayableFullTypename_13() { return &___m_CustomPlayableFullTypename_13; }
	inline void set_m_CustomPlayableFullTypename_13(String_t* value)
	{
		___m_CustomPlayableFullTypename_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomPlayableFullTypename_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Curves_14() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Curves_14)); }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * get_m_Curves_14() const { return ___m_Curves_14; }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** get_address_of_m_Curves_14() { return &___m_Curves_14; }
	inline void set_m_Curves_14(AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		___m_Curves_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Curves_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_15() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Parent_15)); }
	inline PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * get_m_Parent_15() const { return ___m_Parent_15; }
	inline PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD ** get_address_of_m_Parent_15() { return &___m_Parent_15; }
	inline void set_m_Parent_15(PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * value)
	{
		___m_Parent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_Children_16() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Children_16)); }
	inline List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * get_m_Children_16() const { return ___m_Children_16; }
	inline List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF ** get_address_of_m_Children_16() { return &___m_Children_16; }
	inline void set_m_Children_16(List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * value)
	{
		___m_Children_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Children_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemsHash_17() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_ItemsHash_17)); }
	inline int32_t get_m_ItemsHash_17() const { return ___m_ItemsHash_17; }
	inline int32_t* get_address_of_m_ItemsHash_17() { return &___m_ItemsHash_17; }
	inline void set_m_ItemsHash_17(int32_t value)
	{
		___m_ItemsHash_17 = value;
	}

	inline static int32_t get_offset_of_m_ClipsCache_18() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_ClipsCache_18)); }
	inline TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E* get_m_ClipsCache_18() const { return ___m_ClipsCache_18; }
	inline TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E** get_address_of_m_ClipsCache_18() { return &___m_ClipsCache_18; }
	inline void set_m_ClipsCache_18(TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E* value)
	{
		___m_ClipsCache_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClipsCache_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_Start_19() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Start_19)); }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  get_m_Start_19() const { return ___m_Start_19; }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 * get_address_of_m_Start_19() { return &___m_Start_19; }
	inline void set_m_Start_19(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  value)
	{
		___m_Start_19 = value;
	}

	inline static int32_t get_offset_of_m_End_20() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_End_20)); }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  get_m_End_20() const { return ___m_End_20; }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 * get_address_of_m_End_20() { return &___m_End_20; }
	inline void set_m_End_20(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  value)
	{
		___m_End_20 = value;
	}

	inline static int32_t get_offset_of_m_CacheSorted_21() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_CacheSorted_21)); }
	inline bool get_m_CacheSorted_21() const { return ___m_CacheSorted_21; }
	inline bool* get_address_of_m_CacheSorted_21() { return &___m_CacheSorted_21; }
	inline void set_m_CacheSorted_21(bool value)
	{
		___m_CacheSorted_21 = value;
	}

	inline static int32_t get_offset_of_m_SupportsNotifications_22() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_SupportsNotifications_22)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_m_SupportsNotifications_22() const { return ___m_SupportsNotifications_22; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_m_SupportsNotifications_22() { return &___m_SupportsNotifications_22; }
	inline void set_m_SupportsNotifications_22(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___m_SupportsNotifications_22 = value;
	}

	inline static int32_t get_offset_of_m_ChildTrackCache_24() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_ChildTrackCache_24)); }
	inline RuntimeObject* get_m_ChildTrackCache_24() const { return ___m_ChildTrackCache_24; }
	inline RuntimeObject** get_address_of_m_ChildTrackCache_24() { return &___m_ChildTrackCache_24; }
	inline void set_m_ChildTrackCache_24(RuntimeObject* value)
	{
		___m_ChildTrackCache_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildTrackCache_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Clips_26() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Clips_26)); }
	inline List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * get_m_Clips_26() const { return ___m_Clips_26; }
	inline List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA ** get_address_of_m_Clips_26() { return &___m_Clips_26; }
	inline void set_m_Clips_26(List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * value)
	{
		___m_Clips_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Clips_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Markers_27() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Markers_27)); }
	inline MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC  get_m_Markers_27() const { return ___m_Markers_27; }
	inline MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC * get_address_of_m_Markers_27() { return &___m_Markers_27; }
	inline void set_m_Markers_27(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC  value)
	{
		___m_Markers_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Markers_27))->___m_Objects_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Markers_27))->___m_Cache_1), (void*)NULL);
		#endif
	}
};

struct TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields
{
public:
	// UnityEngine.Timeline.TrackAsset/TransientBuildData UnityEngine.Timeline.TrackAsset::s_BuildData
	TransientBuildData_t2CDF71634041677EC226311F30665780C2026744  ___s_BuildData_7;
	// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnClipPlayableCreate
	Action_3_t3DEF6B983A6FD251CA5E86CED7441D9CF0A26209 * ___OnClipPlayableCreate_9;
	// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnTrackAnimationPlayableCreate
	Action_3_t08E03FF5D8187DCF3A2B450F10E005618E1956C1 * ___OnTrackAnimationPlayableCreate_10;
	// UnityEngine.Timeline.TrackAsset[] UnityEngine.Timeline.TrackAsset::s_EmptyCache
	TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5* ___s_EmptyCache_23;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute> UnityEngine.Timeline.TrackAsset::s_TrackBindingTypeAttributeCache
	Dictionary_2_t1B7E37FEB7F10BFB6B7320EF2FEC7B2CDE25C7E4 * ___s_TrackBindingTypeAttributeCache_25;

public:
	inline static int32_t get_offset_of_s_BuildData_7() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___s_BuildData_7)); }
	inline TransientBuildData_t2CDF71634041677EC226311F30665780C2026744  get_s_BuildData_7() const { return ___s_BuildData_7; }
	inline TransientBuildData_t2CDF71634041677EC226311F30665780C2026744 * get_address_of_s_BuildData_7() { return &___s_BuildData_7; }
	inline void set_s_BuildData_7(TransientBuildData_t2CDF71634041677EC226311F30665780C2026744  value)
	{
		___s_BuildData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___trackList_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___clipList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___markerList_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_OnClipPlayableCreate_9() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___OnClipPlayableCreate_9)); }
	inline Action_3_t3DEF6B983A6FD251CA5E86CED7441D9CF0A26209 * get_OnClipPlayableCreate_9() const { return ___OnClipPlayableCreate_9; }
	inline Action_3_t3DEF6B983A6FD251CA5E86CED7441D9CF0A26209 ** get_address_of_OnClipPlayableCreate_9() { return &___OnClipPlayableCreate_9; }
	inline void set_OnClipPlayableCreate_9(Action_3_t3DEF6B983A6FD251CA5E86CED7441D9CF0A26209 * value)
	{
		___OnClipPlayableCreate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipPlayableCreate_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnTrackAnimationPlayableCreate_10() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___OnTrackAnimationPlayableCreate_10)); }
	inline Action_3_t08E03FF5D8187DCF3A2B450F10E005618E1956C1 * get_OnTrackAnimationPlayableCreate_10() const { return ___OnTrackAnimationPlayableCreate_10; }
	inline Action_3_t08E03FF5D8187DCF3A2B450F10E005618E1956C1 ** get_address_of_OnTrackAnimationPlayableCreate_10() { return &___OnTrackAnimationPlayableCreate_10; }
	inline void set_OnTrackAnimationPlayableCreate_10(Action_3_t08E03FF5D8187DCF3A2B450F10E005618E1956C1 * value)
	{
		___OnTrackAnimationPlayableCreate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackAnimationPlayableCreate_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_EmptyCache_23() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___s_EmptyCache_23)); }
	inline TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5* get_s_EmptyCache_23() const { return ___s_EmptyCache_23; }
	inline TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5** get_address_of_s_EmptyCache_23() { return &___s_EmptyCache_23; }
	inline void set_s_EmptyCache_23(TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5* value)
	{
		___s_EmptyCache_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyCache_23), (void*)value);
	}

	inline static int32_t get_offset_of_s_TrackBindingTypeAttributeCache_25() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___s_TrackBindingTypeAttributeCache_25)); }
	inline Dictionary_2_t1B7E37FEB7F10BFB6B7320EF2FEC7B2CDE25C7E4 * get_s_TrackBindingTypeAttributeCache_25() const { return ___s_TrackBindingTypeAttributeCache_25; }
	inline Dictionary_2_t1B7E37FEB7F10BFB6B7320EF2FEC7B2CDE25C7E4 ** get_address_of_s_TrackBindingTypeAttributeCache_25() { return &___s_TrackBindingTypeAttributeCache_25; }
	inline void set_s_TrackBindingTypeAttributeCache_25(Dictionary_2_t1B7E37FEB7F10BFB6B7320EF2FEC7B2CDE25C7E4 * value)
	{
		___s_TrackBindingTypeAttributeCache_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackBindingTypeAttributeCache_25), (void*)value);
	}
};


// Cinemachine.CinemachineBrain
struct CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Cinemachine.CinemachineBrain::m_ShowDebugText
	bool ___m_ShowDebugText_4;
	// System.Boolean Cinemachine.CinemachineBrain::m_ShowCameraFrustum
	bool ___m_ShowCameraFrustum_5;
	// System.Boolean Cinemachine.CinemachineBrain::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_6;
	// UnityEngine.Transform Cinemachine.CinemachineBrain::m_WorldUpOverride
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_WorldUpOverride_7;
	// Cinemachine.CinemachineBrain/UpdateMethod Cinemachine.CinemachineBrain::m_UpdateMethod
	int32_t ___m_UpdateMethod_8;
	// Cinemachine.CinemachineBrain/BrainUpdateMethod Cinemachine.CinemachineBrain::m_BlendUpdateMethod
	int32_t ___m_BlendUpdateMethod_9;
	// Cinemachine.CinemachineBlendDefinition Cinemachine.CinemachineBrain::m_DefaultBlend
	CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04  ___m_DefaultBlend_10;
	// Cinemachine.CinemachineBlenderSettings Cinemachine.CinemachineBrain::m_CustomBlends
	CinemachineBlenderSettings_tCD488C84B252394D8CDD7D0DB623D991BE77F3F0 * ___m_CustomBlends_11;
	// UnityEngine.Camera Cinemachine.CinemachineBrain::m_OutputCamera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___m_OutputCamera_12;
	// Cinemachine.CinemachineBrain/BrainEvent Cinemachine.CinemachineBrain::m_CameraCutEvent
	BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * ___m_CameraCutEvent_13;
	// Cinemachine.CinemachineBrain/VcamActivatedEvent Cinemachine.CinemachineBrain::m_CameraActivatedEvent
	VcamActivatedEvent_tD6FFF8FCC883ABD7CC27619CD451E6FE56DB4A3B * ___m_CameraActivatedEvent_14;
	// UnityEngine.Coroutine Cinemachine.CinemachineBrain::mPhysicsCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___mPhysicsCoroutine_16;
	// System.Int32 Cinemachine.CinemachineBrain::m_LastFrameUpdated
	int32_t ___m_LastFrameUpdated_17;
	// UnityEngine.WaitForFixedUpdate Cinemachine.CinemachineBrain::mWaitForFixedUpdate
	WaitForFixedUpdate_t8801328F075019AF6B6150B20EC343935A29FF97 * ___mWaitForFixedUpdate_18;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain/BrainFrame> Cinemachine.CinemachineBrain::mFrameStack
	List_1_tACCC6306B7B7555D17ED9223157499B6CEDAA0F7 * ___mFrameStack_19;
	// System.Int32 Cinemachine.CinemachineBrain::mNextFrameId
	int32_t ___mNextFrameId_20;
	// Cinemachine.CinemachineBlend Cinemachine.CinemachineBrain::mCurrentLiveCameras
	CinemachineBlend_t7A2A71833A7E2C44AB1D7874B3D076EF46A56298 * ___mCurrentLiveCameras_21;
	// Cinemachine.ICinemachineCamera Cinemachine.CinemachineBrain::mActiveCameraPreviousFrame
	RuntimeObject* ___mActiveCameraPreviousFrame_23;
	// Cinemachine.CameraState Cinemachine.CinemachineBrain::<CurrentCameraState>k__BackingField
	CameraState_t308F3A442112B7464D2B21A417D325662E3399B1  ___U3CCurrentCameraStateU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_ShowDebugText_4() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_ShowDebugText_4)); }
	inline bool get_m_ShowDebugText_4() const { return ___m_ShowDebugText_4; }
	inline bool* get_address_of_m_ShowDebugText_4() { return &___m_ShowDebugText_4; }
	inline void set_m_ShowDebugText_4(bool value)
	{
		___m_ShowDebugText_4 = value;
	}

	inline static int32_t get_offset_of_m_ShowCameraFrustum_5() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_ShowCameraFrustum_5)); }
	inline bool get_m_ShowCameraFrustum_5() const { return ___m_ShowCameraFrustum_5; }
	inline bool* get_address_of_m_ShowCameraFrustum_5() { return &___m_ShowCameraFrustum_5; }
	inline void set_m_ShowCameraFrustum_5(bool value)
	{
		___m_ShowCameraFrustum_5 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_6() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_IgnoreTimeScale_6)); }
	inline bool get_m_IgnoreTimeScale_6() const { return ___m_IgnoreTimeScale_6; }
	inline bool* get_address_of_m_IgnoreTimeScale_6() { return &___m_IgnoreTimeScale_6; }
	inline void set_m_IgnoreTimeScale_6(bool value)
	{
		___m_IgnoreTimeScale_6 = value;
	}

	inline static int32_t get_offset_of_m_WorldUpOverride_7() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_WorldUpOverride_7)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_WorldUpOverride_7() const { return ___m_WorldUpOverride_7; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_WorldUpOverride_7() { return &___m_WorldUpOverride_7; }
	inline void set_m_WorldUpOverride_7(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_WorldUpOverride_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WorldUpOverride_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_UpdateMethod_8() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_UpdateMethod_8)); }
	inline int32_t get_m_UpdateMethod_8() const { return ___m_UpdateMethod_8; }
	inline int32_t* get_address_of_m_UpdateMethod_8() { return &___m_UpdateMethod_8; }
	inline void set_m_UpdateMethod_8(int32_t value)
	{
		___m_UpdateMethod_8 = value;
	}

	inline static int32_t get_offset_of_m_BlendUpdateMethod_9() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_BlendUpdateMethod_9)); }
	inline int32_t get_m_BlendUpdateMethod_9() const { return ___m_BlendUpdateMethod_9; }
	inline int32_t* get_address_of_m_BlendUpdateMethod_9() { return &___m_BlendUpdateMethod_9; }
	inline void set_m_BlendUpdateMethod_9(int32_t value)
	{
		___m_BlendUpdateMethod_9 = value;
	}

	inline static int32_t get_offset_of_m_DefaultBlend_10() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_DefaultBlend_10)); }
	inline CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04  get_m_DefaultBlend_10() const { return ___m_DefaultBlend_10; }
	inline CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04 * get_address_of_m_DefaultBlend_10() { return &___m_DefaultBlend_10; }
	inline void set_m_DefaultBlend_10(CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04  value)
	{
		___m_DefaultBlend_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultBlend_10))->___m_CustomCurve_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_CustomBlends_11() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_CustomBlends_11)); }
	inline CinemachineBlenderSettings_tCD488C84B252394D8CDD7D0DB623D991BE77F3F0 * get_m_CustomBlends_11() const { return ___m_CustomBlends_11; }
	inline CinemachineBlenderSettings_tCD488C84B252394D8CDD7D0DB623D991BE77F3F0 ** get_address_of_m_CustomBlends_11() { return &___m_CustomBlends_11; }
	inline void set_m_CustomBlends_11(CinemachineBlenderSettings_tCD488C84B252394D8CDD7D0DB623D991BE77F3F0 * value)
	{
		___m_CustomBlends_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomBlends_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OutputCamera_12() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_OutputCamera_12)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_m_OutputCamera_12() const { return ___m_OutputCamera_12; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_m_OutputCamera_12() { return &___m_OutputCamera_12; }
	inline void set_m_OutputCamera_12(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___m_OutputCamera_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OutputCamera_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraCutEvent_13() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_CameraCutEvent_13)); }
	inline BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * get_m_CameraCutEvent_13() const { return ___m_CameraCutEvent_13; }
	inline BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 ** get_address_of_m_CameraCutEvent_13() { return &___m_CameraCutEvent_13; }
	inline void set_m_CameraCutEvent_13(BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * value)
	{
		___m_CameraCutEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraCutEvent_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraActivatedEvent_14() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_CameraActivatedEvent_14)); }
	inline VcamActivatedEvent_tD6FFF8FCC883ABD7CC27619CD451E6FE56DB4A3B * get_m_CameraActivatedEvent_14() const { return ___m_CameraActivatedEvent_14; }
	inline VcamActivatedEvent_tD6FFF8FCC883ABD7CC27619CD451E6FE56DB4A3B ** get_address_of_m_CameraActivatedEvent_14() { return &___m_CameraActivatedEvent_14; }
	inline void set_m_CameraActivatedEvent_14(VcamActivatedEvent_tD6FFF8FCC883ABD7CC27619CD451E6FE56DB4A3B * value)
	{
		___m_CameraActivatedEvent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraActivatedEvent_14), (void*)value);
	}

	inline static int32_t get_offset_of_mPhysicsCoroutine_16() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___mPhysicsCoroutine_16)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_mPhysicsCoroutine_16() const { return ___mPhysicsCoroutine_16; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_mPhysicsCoroutine_16() { return &___mPhysicsCoroutine_16; }
	inline void set_mPhysicsCoroutine_16(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___mPhysicsCoroutine_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPhysicsCoroutine_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastFrameUpdated_17() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_LastFrameUpdated_17)); }
	inline int32_t get_m_LastFrameUpdated_17() const { return ___m_LastFrameUpdated_17; }
	inline int32_t* get_address_of_m_LastFrameUpdated_17() { return &___m_LastFrameUpdated_17; }
	inline void set_m_LastFrameUpdated_17(int32_t value)
	{
		___m_LastFrameUpdated_17 = value;
	}

	inline static int32_t get_offset_of_mWaitForFixedUpdate_18() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___mWaitForFixedUpdate_18)); }
	inline WaitForFixedUpdate_t8801328F075019AF6B6150B20EC343935A29FF97 * get_mWaitForFixedUpdate_18() const { return ___mWaitForFixedUpdate_18; }
	inline WaitForFixedUpdate_t8801328F075019AF6B6150B20EC343935A29FF97 ** get_address_of_mWaitForFixedUpdate_18() { return &___mWaitForFixedUpdate_18; }
	inline void set_mWaitForFixedUpdate_18(WaitForFixedUpdate_t8801328F075019AF6B6150B20EC343935A29FF97 * value)
	{
		___mWaitForFixedUpdate_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mWaitForFixedUpdate_18), (void*)value);
	}

	inline static int32_t get_offset_of_mFrameStack_19() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___mFrameStack_19)); }
	inline List_1_tACCC6306B7B7555D17ED9223157499B6CEDAA0F7 * get_mFrameStack_19() const { return ___mFrameStack_19; }
	inline List_1_tACCC6306B7B7555D17ED9223157499B6CEDAA0F7 ** get_address_of_mFrameStack_19() { return &___mFrameStack_19; }
	inline void set_mFrameStack_19(List_1_tACCC6306B7B7555D17ED9223157499B6CEDAA0F7 * value)
	{
		___mFrameStack_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mFrameStack_19), (void*)value);
	}

	inline static int32_t get_offset_of_mNextFrameId_20() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___mNextFrameId_20)); }
	inline int32_t get_mNextFrameId_20() const { return ___mNextFrameId_20; }
	inline int32_t* get_address_of_mNextFrameId_20() { return &___mNextFrameId_20; }
	inline void set_mNextFrameId_20(int32_t value)
	{
		___mNextFrameId_20 = value;
	}

	inline static int32_t get_offset_of_mCurrentLiveCameras_21() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___mCurrentLiveCameras_21)); }
	inline CinemachineBlend_t7A2A71833A7E2C44AB1D7874B3D076EF46A56298 * get_mCurrentLiveCameras_21() const { return ___mCurrentLiveCameras_21; }
	inline CinemachineBlend_t7A2A71833A7E2C44AB1D7874B3D076EF46A56298 ** get_address_of_mCurrentLiveCameras_21() { return &___mCurrentLiveCameras_21; }
	inline void set_mCurrentLiveCameras_21(CinemachineBlend_t7A2A71833A7E2C44AB1D7874B3D076EF46A56298 * value)
	{
		___mCurrentLiveCameras_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCurrentLiveCameras_21), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveCameraPreviousFrame_23() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___mActiveCameraPreviousFrame_23)); }
	inline RuntimeObject* get_mActiveCameraPreviousFrame_23() const { return ___mActiveCameraPreviousFrame_23; }
	inline RuntimeObject** get_address_of_mActiveCameraPreviousFrame_23() { return &___mActiveCameraPreviousFrame_23; }
	inline void set_mActiveCameraPreviousFrame_23(RuntimeObject* value)
	{
		___mActiveCameraPreviousFrame_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveCameraPreviousFrame_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentCameraStateU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___U3CCurrentCameraStateU3Ek__BackingField_24)); }
	inline CameraState_t308F3A442112B7464D2B21A417D325662E3399B1  get_U3CCurrentCameraStateU3Ek__BackingField_24() const { return ___U3CCurrentCameraStateU3Ek__BackingField_24; }
	inline CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * get_address_of_U3CCurrentCameraStateU3Ek__BackingField_24() { return &___U3CCurrentCameraStateU3Ek__BackingField_24; }
	inline void set_U3CCurrentCameraStateU3Ek__BackingField_24(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1  value)
	{
		___U3CCurrentCameraStateU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_24))->___mCustom0_11))->___m_Custom_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_24))->___mCustom1_12))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_24))->___mCustom2_13))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_24))->___mCustom3_14))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCurrentCameraStateU3Ek__BackingField_24))->___m_CustomOverflow_15), (void*)NULL);
		#endif
	}
};

struct CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_StaticFields
{
public:
	// Cinemachine.ICinemachineCamera Cinemachine.CinemachineBrain::mSoloCamera
	RuntimeObject* ___mSoloCamera_15;
	// UnityEngine.AnimationCurve Cinemachine.CinemachineBrain::mDefaultLinearAnimationCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___mDefaultLinearAnimationCurve_22;

public:
	inline static int32_t get_offset_of_mSoloCamera_15() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_StaticFields, ___mSoloCamera_15)); }
	inline RuntimeObject* get_mSoloCamera_15() const { return ___mSoloCamera_15; }
	inline RuntimeObject** get_address_of_mSoloCamera_15() { return &___mSoloCamera_15; }
	inline void set_mSoloCamera_15(RuntimeObject* value)
	{
		___mSoloCamera_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mSoloCamera_15), (void*)value);
	}

	inline static int32_t get_offset_of_mDefaultLinearAnimationCurve_22() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_StaticFields, ___mDefaultLinearAnimationCurve_22)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_mDefaultLinearAnimationCurve_22() const { return ___mDefaultLinearAnimationCurve_22; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_mDefaultLinearAnimationCurve_22() { return &___mDefaultLinearAnimationCurve_22; }
	inline void set_mDefaultLinearAnimationCurve_22(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___mDefaultLinearAnimationCurve_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDefaultLinearAnimationCurve_22), (void*)value);
	}
};


// Cinemachine.CinemachineExtension
struct CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineExtension::m_vcamOwner
	CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___m_vcamOwner_5;
	// System.Collections.Generic.Dictionary`2<Cinemachine.ICinemachineCamera,System.Object> Cinemachine.CinemachineExtension::mExtraState
	Dictionary_2_tA752E1EEBD2A0EF17F6A4C0262D35070B38CE8A2 * ___mExtraState_6;

public:
	inline static int32_t get_offset_of_m_vcamOwner_5() { return static_cast<int32_t>(offsetof(CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE, ___m_vcamOwner_5)); }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * get_m_vcamOwner_5() const { return ___m_vcamOwner_5; }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD ** get_address_of_m_vcamOwner_5() { return &___m_vcamOwner_5; }
	inline void set_m_vcamOwner_5(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * value)
	{
		___m_vcamOwner_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_vcamOwner_5), (void*)value);
	}

	inline static int32_t get_offset_of_mExtraState_6() { return static_cast<int32_t>(offsetof(CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE, ___mExtraState_6)); }
	inline Dictionary_2_tA752E1EEBD2A0EF17F6A4C0262D35070B38CE8A2 * get_mExtraState_6() const { return ___mExtraState_6; }
	inline Dictionary_2_tA752E1EEBD2A0EF17F6A4C0262D35070B38CE8A2 ** get_address_of_mExtraState_6() { return &___mExtraState_6; }
	inline void set_mExtraState_6(Dictionary_2_tA752E1EEBD2A0EF17F6A4C0262D35070B38CE8A2 * value)
	{
		___mExtraState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mExtraState_6), (void*)value);
	}
};


// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String[] Cinemachine.CinemachineVirtualCameraBase::m_ExcludedPropertiesInInspector
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_ExcludedPropertiesInInspector_4;
	// Cinemachine.CinemachineCore/Stage[] Cinemachine.CinemachineVirtualCameraBase::m_LockStageInInspector
	StageU5BU5D_tC107E846F8ED5DBF4CEF77B4AFCC26D9DBE723A2* ___m_LockStageInInspector_5;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ValidatingStreamVersion
	int32_t ___m_ValidatingStreamVersion_6;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_OnValidateCalled
	bool ___m_OnValidateCalled_7;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_StreamingVersion
	int32_t ___m_StreamingVersion_8;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_Priority
	int32_t ___m_Priority_9;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::<FollowTargetAttachment>k__BackingField
	float ___U3CFollowTargetAttachmentU3Ek__BackingField_10;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::<LookAtTargetAttachment>k__BackingField
	float ___U3CLookAtTargetAttachmentU3Ek__BackingField_11;
	// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode Cinemachine.CinemachineVirtualCameraBase::m_StandbyUpdate
	int32_t ___m_StandbyUpdate_12;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension> Cinemachine.CinemachineVirtualCameraBase::mExtensions
	List_1_t368EDCAA9D752F3C679EB61F998F2B839F58843E * ___mExtensions_13;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<PreviousStateIsValid>k__BackingField
	bool ___U3CPreviousStateIsValidU3Ek__BackingField_14;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_WasStarted
	bool ___m_WasStarted_15;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::mSlaveStatusUpdated
	bool ___mSlaveStatusUpdated_16;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_parentVcam
	CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___m_parentVcam_17;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_QueuePriority
	int32_t ___m_QueuePriority_18;

public:
	inline static int32_t get_offset_of_m_ExcludedPropertiesInInspector_4() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_ExcludedPropertiesInInspector_4)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_ExcludedPropertiesInInspector_4() const { return ___m_ExcludedPropertiesInInspector_4; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_ExcludedPropertiesInInspector_4() { return &___m_ExcludedPropertiesInInspector_4; }
	inline void set_m_ExcludedPropertiesInInspector_4(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_ExcludedPropertiesInInspector_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExcludedPropertiesInInspector_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_LockStageInInspector_5() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_LockStageInInspector_5)); }
	inline StageU5BU5D_tC107E846F8ED5DBF4CEF77B4AFCC26D9DBE723A2* get_m_LockStageInInspector_5() const { return ___m_LockStageInInspector_5; }
	inline StageU5BU5D_tC107E846F8ED5DBF4CEF77B4AFCC26D9DBE723A2** get_address_of_m_LockStageInInspector_5() { return &___m_LockStageInInspector_5; }
	inline void set_m_LockStageInInspector_5(StageU5BU5D_tC107E846F8ED5DBF4CEF77B4AFCC26D9DBE723A2* value)
	{
		___m_LockStageInInspector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LockStageInInspector_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ValidatingStreamVersion_6() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_ValidatingStreamVersion_6)); }
	inline int32_t get_m_ValidatingStreamVersion_6() const { return ___m_ValidatingStreamVersion_6; }
	inline int32_t* get_address_of_m_ValidatingStreamVersion_6() { return &___m_ValidatingStreamVersion_6; }
	inline void set_m_ValidatingStreamVersion_6(int32_t value)
	{
		___m_ValidatingStreamVersion_6 = value;
	}

	inline static int32_t get_offset_of_m_OnValidateCalled_7() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_OnValidateCalled_7)); }
	inline bool get_m_OnValidateCalled_7() const { return ___m_OnValidateCalled_7; }
	inline bool* get_address_of_m_OnValidateCalled_7() { return &___m_OnValidateCalled_7; }
	inline void set_m_OnValidateCalled_7(bool value)
	{
		___m_OnValidateCalled_7 = value;
	}

	inline static int32_t get_offset_of_m_StreamingVersion_8() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_StreamingVersion_8)); }
	inline int32_t get_m_StreamingVersion_8() const { return ___m_StreamingVersion_8; }
	inline int32_t* get_address_of_m_StreamingVersion_8() { return &___m_StreamingVersion_8; }
	inline void set_m_StreamingVersion_8(int32_t value)
	{
		___m_StreamingVersion_8 = value;
	}

	inline static int32_t get_offset_of_m_Priority_9() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_Priority_9)); }
	inline int32_t get_m_Priority_9() const { return ___m_Priority_9; }
	inline int32_t* get_address_of_m_Priority_9() { return &___m_Priority_9; }
	inline void set_m_Priority_9(int32_t value)
	{
		___m_Priority_9 = value;
	}

	inline static int32_t get_offset_of_U3CFollowTargetAttachmentU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___U3CFollowTargetAttachmentU3Ek__BackingField_10)); }
	inline float get_U3CFollowTargetAttachmentU3Ek__BackingField_10() const { return ___U3CFollowTargetAttachmentU3Ek__BackingField_10; }
	inline float* get_address_of_U3CFollowTargetAttachmentU3Ek__BackingField_10() { return &___U3CFollowTargetAttachmentU3Ek__BackingField_10; }
	inline void set_U3CFollowTargetAttachmentU3Ek__BackingField_10(float value)
	{
		___U3CFollowTargetAttachmentU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CLookAtTargetAttachmentU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___U3CLookAtTargetAttachmentU3Ek__BackingField_11)); }
	inline float get_U3CLookAtTargetAttachmentU3Ek__BackingField_11() const { return ___U3CLookAtTargetAttachmentU3Ek__BackingField_11; }
	inline float* get_address_of_U3CLookAtTargetAttachmentU3Ek__BackingField_11() { return &___U3CLookAtTargetAttachmentU3Ek__BackingField_11; }
	inline void set_U3CLookAtTargetAttachmentU3Ek__BackingField_11(float value)
	{
		___U3CLookAtTargetAttachmentU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_m_StandbyUpdate_12() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_StandbyUpdate_12)); }
	inline int32_t get_m_StandbyUpdate_12() const { return ___m_StandbyUpdate_12; }
	inline int32_t* get_address_of_m_StandbyUpdate_12() { return &___m_StandbyUpdate_12; }
	inline void set_m_StandbyUpdate_12(int32_t value)
	{
		___m_StandbyUpdate_12 = value;
	}

	inline static int32_t get_offset_of_mExtensions_13() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___mExtensions_13)); }
	inline List_1_t368EDCAA9D752F3C679EB61F998F2B839F58843E * get_mExtensions_13() const { return ___mExtensions_13; }
	inline List_1_t368EDCAA9D752F3C679EB61F998F2B839F58843E ** get_address_of_mExtensions_13() { return &___mExtensions_13; }
	inline void set_mExtensions_13(List_1_t368EDCAA9D752F3C679EB61F998F2B839F58843E * value)
	{
		___mExtensions_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mExtensions_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreviousStateIsValidU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___U3CPreviousStateIsValidU3Ek__BackingField_14)); }
	inline bool get_U3CPreviousStateIsValidU3Ek__BackingField_14() const { return ___U3CPreviousStateIsValidU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CPreviousStateIsValidU3Ek__BackingField_14() { return &___U3CPreviousStateIsValidU3Ek__BackingField_14; }
	inline void set_U3CPreviousStateIsValidU3Ek__BackingField_14(bool value)
	{
		___U3CPreviousStateIsValidU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_WasStarted_15() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_WasStarted_15)); }
	inline bool get_m_WasStarted_15() const { return ___m_WasStarted_15; }
	inline bool* get_address_of_m_WasStarted_15() { return &___m_WasStarted_15; }
	inline void set_m_WasStarted_15(bool value)
	{
		___m_WasStarted_15 = value;
	}

	inline static int32_t get_offset_of_mSlaveStatusUpdated_16() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___mSlaveStatusUpdated_16)); }
	inline bool get_mSlaveStatusUpdated_16() const { return ___mSlaveStatusUpdated_16; }
	inline bool* get_address_of_mSlaveStatusUpdated_16() { return &___mSlaveStatusUpdated_16; }
	inline void set_mSlaveStatusUpdated_16(bool value)
	{
		___mSlaveStatusUpdated_16 = value;
	}

	inline static int32_t get_offset_of_m_parentVcam_17() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_parentVcam_17)); }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * get_m_parentVcam_17() const { return ___m_parentVcam_17; }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD ** get_address_of_m_parentVcam_17() { return &___m_parentVcam_17; }
	inline void set_m_parentVcam_17(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * value)
	{
		___m_parentVcam_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parentVcam_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_QueuePriority_18() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_QueuePriority_18)); }
	inline int32_t get_m_QueuePriority_18() const { return ___m_QueuePriority_18; }
	inline int32_t* get_address_of_m_QueuePriority_18() { return &___m_QueuePriority_18; }
	inline void set_m_QueuePriority_18(int32_t value)
	{
		___m_QueuePriority_18 = value;
	}
};


// CinemachineTouchInputMapper
struct CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single CinemachineTouchInputMapper::TouchSensitivityX
	float ___TouchSensitivityX_4;
	// System.Single CinemachineTouchInputMapper::TouchSensitivityY
	float ___TouchSensitivityY_5;
	// System.String CinemachineTouchInputMapper::TouchXInputMapTo
	String_t* ___TouchXInputMapTo_6;
	// System.String CinemachineTouchInputMapper::TouchYInputMapTo
	String_t* ___TouchYInputMapTo_7;

public:
	inline static int32_t get_offset_of_TouchSensitivityX_4() { return static_cast<int32_t>(offsetof(CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815, ___TouchSensitivityX_4)); }
	inline float get_TouchSensitivityX_4() const { return ___TouchSensitivityX_4; }
	inline float* get_address_of_TouchSensitivityX_4() { return &___TouchSensitivityX_4; }
	inline void set_TouchSensitivityX_4(float value)
	{
		___TouchSensitivityX_4 = value;
	}

	inline static int32_t get_offset_of_TouchSensitivityY_5() { return static_cast<int32_t>(offsetof(CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815, ___TouchSensitivityY_5)); }
	inline float get_TouchSensitivityY_5() const { return ___TouchSensitivityY_5; }
	inline float* get_address_of_TouchSensitivityY_5() { return &___TouchSensitivityY_5; }
	inline void set_TouchSensitivityY_5(float value)
	{
		___TouchSensitivityY_5 = value;
	}

	inline static int32_t get_offset_of_TouchXInputMapTo_6() { return static_cast<int32_t>(offsetof(CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815, ___TouchXInputMapTo_6)); }
	inline String_t* get_TouchXInputMapTo_6() const { return ___TouchXInputMapTo_6; }
	inline String_t** get_address_of_TouchXInputMapTo_6() { return &___TouchXInputMapTo_6; }
	inline void set_TouchXInputMapTo_6(String_t* value)
	{
		___TouchXInputMapTo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TouchXInputMapTo_6), (void*)value);
	}

	inline static int32_t get_offset_of_TouchYInputMapTo_7() { return static_cast<int32_t>(offsetof(CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815, ___TouchYInputMapTo_7)); }
	inline String_t* get_TouchYInputMapTo_7() const { return ___TouchYInputMapTo_7; }
	inline String_t** get_address_of_TouchYInputMapTo_7() { return &___TouchYInputMapTo_7; }
	inline void set_TouchYInputMapTo_7(String_t* value)
	{
		___TouchYInputMapTo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TouchYInputMapTo_7), (void*)value);
	}
};


// CinemachineTrack
struct CinemachineTrack_t6B531D379A33136302768D59460F3E8B1AC6D79D  : public TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D
{
public:

public:
};


// CinemachineCameraOffset
struct CinemachineCameraOffset_t2D656B9D964F68E61A5168495C2666BE6B8AD693  : public CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE
{
public:
	// UnityEngine.Vector3 CinemachineCameraOffset::m_Offset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Offset_7;
	// Cinemachine.CinemachineCore/Stage CinemachineCameraOffset::m_ApplyAfter
	int32_t ___m_ApplyAfter_8;
	// System.Boolean CinemachineCameraOffset::m_PreserveComposition
	bool ___m_PreserveComposition_9;

public:
	inline static int32_t get_offset_of_m_Offset_7() { return static_cast<int32_t>(offsetof(CinemachineCameraOffset_t2D656B9D964F68E61A5168495C2666BE6B8AD693, ___m_Offset_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Offset_7() const { return ___m_Offset_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Offset_7() { return &___m_Offset_7; }
	inline void set_m_Offset_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Offset_7 = value;
	}

	inline static int32_t get_offset_of_m_ApplyAfter_8() { return static_cast<int32_t>(offsetof(CinemachineCameraOffset_t2D656B9D964F68E61A5168495C2666BE6B8AD693, ___m_ApplyAfter_8)); }
	inline int32_t get_m_ApplyAfter_8() const { return ___m_ApplyAfter_8; }
	inline int32_t* get_address_of_m_ApplyAfter_8() { return &___m_ApplyAfter_8; }
	inline void set_m_ApplyAfter_8(int32_t value)
	{
		___m_ApplyAfter_8 = value;
	}

	inline static int32_t get_offset_of_m_PreserveComposition_9() { return static_cast<int32_t>(offsetof(CinemachineCameraOffset_t2D656B9D964F68E61A5168495C2666BE6B8AD693, ___m_PreserveComposition_9)); }
	inline bool get_m_PreserveComposition_9() const { return ___m_PreserveComposition_9; }
	inline bool* get_address_of_m_PreserveComposition_9() { return &___m_PreserveComposition_9; }
	inline void set_m_PreserveComposition_9(bool value)
	{
		___m_PreserveComposition_9 = value;
	}
};


// CinemachineRecomposer
struct CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD  : public CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE
{
public:
	// Cinemachine.CinemachineCore/Stage CinemachineRecomposer::m_ApplyAfter
	int32_t ___m_ApplyAfter_7;
	// System.Single CinemachineRecomposer::m_Tilt
	float ___m_Tilt_8;
	// System.Single CinemachineRecomposer::m_Pan
	float ___m_Pan_9;
	// System.Single CinemachineRecomposer::m_Dutch
	float ___m_Dutch_10;
	// System.Single CinemachineRecomposer::m_ZoomScale
	float ___m_ZoomScale_11;
	// System.Single CinemachineRecomposer::m_FollowAttachment
	float ___m_FollowAttachment_12;
	// System.Single CinemachineRecomposer::m_LookAtAttachment
	float ___m_LookAtAttachment_13;

public:
	inline static int32_t get_offset_of_m_ApplyAfter_7() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_ApplyAfter_7)); }
	inline int32_t get_m_ApplyAfter_7() const { return ___m_ApplyAfter_7; }
	inline int32_t* get_address_of_m_ApplyAfter_7() { return &___m_ApplyAfter_7; }
	inline void set_m_ApplyAfter_7(int32_t value)
	{
		___m_ApplyAfter_7 = value;
	}

	inline static int32_t get_offset_of_m_Tilt_8() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_Tilt_8)); }
	inline float get_m_Tilt_8() const { return ___m_Tilt_8; }
	inline float* get_address_of_m_Tilt_8() { return &___m_Tilt_8; }
	inline void set_m_Tilt_8(float value)
	{
		___m_Tilt_8 = value;
	}

	inline static int32_t get_offset_of_m_Pan_9() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_Pan_9)); }
	inline float get_m_Pan_9() const { return ___m_Pan_9; }
	inline float* get_address_of_m_Pan_9() { return &___m_Pan_9; }
	inline void set_m_Pan_9(float value)
	{
		___m_Pan_9 = value;
	}

	inline static int32_t get_offset_of_m_Dutch_10() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_Dutch_10)); }
	inline float get_m_Dutch_10() const { return ___m_Dutch_10; }
	inline float* get_address_of_m_Dutch_10() { return &___m_Dutch_10; }
	inline void set_m_Dutch_10(float value)
	{
		___m_Dutch_10 = value;
	}

	inline static int32_t get_offset_of_m_ZoomScale_11() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_ZoomScale_11)); }
	inline float get_m_ZoomScale_11() const { return ___m_ZoomScale_11; }
	inline float* get_address_of_m_ZoomScale_11() { return &___m_ZoomScale_11; }
	inline void set_m_ZoomScale_11(float value)
	{
		___m_ZoomScale_11 = value;
	}

	inline static int32_t get_offset_of_m_FollowAttachment_12() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_FollowAttachment_12)); }
	inline float get_m_FollowAttachment_12() const { return ___m_FollowAttachment_12; }
	inline float* get_address_of_m_FollowAttachment_12() { return &___m_FollowAttachment_12; }
	inline void set_m_FollowAttachment_12(float value)
	{
		___m_FollowAttachment_12 = value;
	}

	inline static int32_t get_offset_of_m_LookAtAttachment_13() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_LookAtAttachment_13)); }
	inline float get_m_LookAtAttachment_13() const { return ___m_LookAtAttachment_13; }
	inline float* get_address_of_m_LookAtAttachment_13() { return &___m_LookAtAttachment_13; }
	inline void set_m_LookAtAttachment_13(float value)
	{
		___m_LookAtAttachment_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  m_Items[1];

public:
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
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
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  m_Items[1];

public:
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// Cinemachine.Utility.HeadingTracker/Item[]
struct ItemU5BU5D_t7D008EEEF404065A770D7C42085C86F254078B46  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Item_t3B6B467A1D39665462BC0A703E543496169303B4  m_Items[1];

public:
	inline Item_t3B6B467A1D39665462BC0A703E543496169303B4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Item_t3B6B467A1D39665462BC0A703E543496169303B4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Item_t3B6B467A1D39665462BC0A703E543496169303B4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Item_t3B6B467A1D39665462BC0A703E543496169303B4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Item_t3B6B467A1D39665462BC0A703E543496169303B4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Item_t3B6B467A1D39665462BC0A703E543496169303B4  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  m_Items[1];

public:
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  m_Items[1];

public:
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  value)
	{
		m_Items[index] = value;
	}
};


// System.Void Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector2>::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaussianWindow1d_1__ctor_m41A04DD612C41D2C24F75212ACE3C5D64329EDA1_gshared (GaussianWindow1d_1_t10F20E064ADE0A33D663FD5C4A4BA8B9BDC981AD * __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method);
// System.Int32 Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector2>::get_KernelSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GaussianWindow1d_1_get_KernelSize_m621B6F929CB7A454DCE085B08C0092714E31FC2C_gshared (GaussianWindow1d_1_t10F20E064ADE0A33D663FD5C4A4BA8B9BDC981AD * __this, const RuntimeMethod* method);
// System.Void Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Quaternion>::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaussianWindow1d_1__ctor_m5DB4A4144E17F603C16CA26AA0378DA3192BD142_gshared (GaussianWindow1d_1_tD306E7D9C22D8A3423192901A6231996D605EAFC * __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method);
// System.Int32 Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Quaternion>::get_KernelSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GaussianWindow1d_1_get_KernelSize_m93C2EDFD6C996D1637AE8DB9BF1382A9071E8DA0_gshared (GaussianWindow1d_1_tD306E7D9C22D8A3423192901A6231996D605EAFC * __this, const RuntimeMethod* method);
// System.Void Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector3>::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaussianWindow1d_1__ctor_m93C6FDD41196F17FE54DE551228CDF93144F5EFE_gshared (GaussianWindow1d_1_tB879E544550B44574C9A5A21528AB3884F3580DD * __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method);
// System.Int32 Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector3>::get_KernelSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GaussianWindow1d_1_get_KernelSize_m76DDF9B93C1D3C274A6242EF89BA3A78D8CC1441_gshared (GaussianWindow1d_1_tB879E544550B44574C9A5A21528AB3884F3580DD * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Playables.PlayableExtensions::GetInputWeight<UnityEngine.Playables.Playable>(!!0,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBAE3A98FEA61C11C997238263E219EEE147E0F2B_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, int32_t ___inputIndex1, const RuntimeMethod* method);
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableExtensions::GetInput<UnityEngine.Playables.Playable>(!!0,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, int32_t ___inputPort1, const RuntimeMethod* method);
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Explicit(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  ScriptPlayable_1_op_Explicit_m9FAFC5C19371356B29F026EED2AFB2633FA6CF80_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method);
// !0 UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_GetBehaviour_m18F5C11A92B96501B55054208E95985D5C72F9B4_gshared (ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableExtensions::GetPlayState<UnityEngine.Playables.Playable>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableExtensions_GetPlayState_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2449EED62648E08ED363284EEFF1080E562C7981_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method);
// System.Double UnityEngine.Playables.PlayableExtensions::GetTime<UnityEngine.Playables.ScriptPlayable`1<System.Object>>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableExtensions_GetTime_TisScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C_mF37B29E1D48DE1EEBEDA7E65483A25EAAD93C8C6_gshared (ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  ___playable0, const RuntimeMethod* method);
// System.Double UnityEngine.Playables.PlayableExtensions::GetTime<UnityEngine.Playables.Playable>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableExtensions_GetTime_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2B7F64DD20E0D9B18A3E60B1B0BB0056B7C6747D_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method);
// System.Double UnityEngine.Playables.PlayableExtensions::GetDuration<UnityEngine.Playables.ScriptPlayable`1<System.Object>>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableExtensions_GetDuration_TisScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C_m330D7A83A89A48B269C4EEB6A5FA84AAE568D315_gshared (ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  ___playable0, const RuntimeMethod* method);
// System.Double UnityEngine.Playables.PlayableExtensions::GetDuration<UnityEngine.Playables.Playable>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m3557C19B4048EF5C9E875572F0E47D5EFB8E8E75_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Playables.PlayableExtensions::GetInputCount<UnityEngine.Playables.Playable>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mD04A716A5F8BF194F20D8AA2CEC2388233504F33_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method);
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<System.Object>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  ScriptPlayable_1_Create_mBE8425D4AF7A0A82F7EE4705CFA90D78548797A8_gshared (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method);
// !0 UnityEngine.ExposedReference`1<System.Object>::Resolve(UnityEngine.IExposedPropertyTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExposedReference_1_Resolve_mBBA492F672C2CF69CFA8999F11C1FBD967AFFD1F_gshared (ExposedReference_1_t6A54AB83F72FCC7CB479D3F39F3CFC074284DF86 * __this, RuntimeObject* ___resolver0, const RuntimeMethod* method);
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ScriptPlayable_1_op_Implicit_mCAFBDEC4F98B94A0A6045DE2FBAE38B2707D7973_gshared (ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  ___playable0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputCount<UnityEngine.Playables.ScriptPlayable`1<System.Object>>(!!0,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetInputCount_TisScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C_m2774559EFF46341FD237D613631323E3DEC292C4_gshared (ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  ___playable0, int32_t ___value1, const RuntimeMethod* method);

// System.Single UnityEngine.Vector3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_Item_mC3B9D35C070A91D7CA5C5B47280BD0EA3E148AC6 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Single Cinemachine.Utility.Damper::Damp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Damper_Damp_m91BF7E7465305B7286234FAD38454A05DE468573 (float ___initial0, float ___dampTime1, float ___deltaTime2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_set_Item_m89FF112CEC0D9ED43F1C4FE01522C75394B30AE6 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// System.Void Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector2>::.ctor(System.Single,System.Int32)
inline void GaussianWindow1d_1__ctor_m41A04DD612C41D2C24F75212ACE3C5D64329EDA1 (GaussianWindow1d_1_t10F20E064ADE0A33D663FD5C4A4BA8B9BDC981AD * __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method)
{
	((  void (*) (GaussianWindow1d_1_t10F20E064ADE0A33D663FD5C4A4BA8B9BDC981AD *, float, int32_t, const RuntimeMethod*))GaussianWindow1d_1__ctor_m41A04DD612C41D2C24F75212ACE3C5D64329EDA1_gshared)(__this, ___sigma0, ___maxKernelRadius1, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// System.Int32 Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector2>::get_KernelSize()
inline int32_t GaussianWindow1d_1_get_KernelSize_m621B6F929CB7A454DCE085B08C0092714E31FC2C (GaussianWindow1d_1_t10F20E064ADE0A33D663FD5C4A4BA8B9BDC981AD * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GaussianWindow1d_1_t10F20E064ADE0A33D663FD5C4A4BA8B9BDC981AD *, const RuntimeMethod*))GaussianWindow1d_1_get_KernelSize_m621B6F929CB7A454DCE085B08C0092714E31FC2C_gshared)(__this, method);
}
// System.Void Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Quaternion>::.ctor(System.Single,System.Int32)
inline void GaussianWindow1d_1__ctor_m5DB4A4144E17F603C16CA26AA0378DA3192BD142 (GaussianWindow1d_1_tD306E7D9C22D8A3423192901A6231996D605EAFC * __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method)
{
	((  void (*) (GaussianWindow1d_1_tD306E7D9C22D8A3423192901A6231996D605EAFC *, float, int32_t, const RuntimeMethod*))GaussianWindow1d_1__ctor_m5DB4A4144E17F603C16CA26AA0378DA3192BD142_gshared)(__this, ___sigma0, ___maxKernelRadius1, method);
}
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternion_Dot_m0C931CC8127C5461E5B8A857BDE2CE09297E468B (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___a0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___b1, const RuntimeMethod* method);
// System.Int32 Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Quaternion>::get_KernelSize()
inline int32_t GaussianWindow1d_1_get_KernelSize_m93C2EDFD6C996D1637AE8DB9BF1382A9071E8DA0 (GaussianWindow1d_1_tD306E7D9C22D8A3423192901A6231996D605EAFC * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GaussianWindow1d_1_tD306E7D9C22D8A3423192901A6231996D605EAFC *, const RuntimeMethod*))GaussianWindow1d_1_get_KernelSize_m93C2EDFD6C996D1637AE8DB9BF1382A9071E8DA0_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Normalize(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Normalize_mC90CD7561BBE1666AA3D6CE37B2310BE0E1736A1 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___q0, const RuntimeMethod* method);
// System.Void Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector3>::.ctor(System.Single,System.Int32)
inline void GaussianWindow1d_1__ctor_m93C6FDD41196F17FE54DE551228CDF93144F5EFE (GaussianWindow1d_1_tB879E544550B44574C9A5A21528AB3884F3580DD * __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method)
{
	((  void (*) (GaussianWindow1d_1_tB879E544550B44574C9A5A21528AB3884F3580DD *, float, int32_t, const RuntimeMethod*))GaussianWindow1d_1__ctor_m93C6FDD41196F17FE54DE551228CDF93144F5EFE_gshared)(__this, ___sigma0, ___maxKernelRadius1, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Int32 Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector3>::get_KernelSize()
inline int32_t GaussianWindow1d_1_get_KernelSize_m76DDF9B93C1D3C274A6242EF89BA3A78D8CC1441 (GaussianWindow1d_1_tB879E544550B44574C9A5A21528AB3884F3580DD * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GaussianWindow1d_1_tB879E544550B44574C9A5A21528AB3884F3580DD *, const RuntimeMethod*))GaussianWindow1d_1_get_KernelSize_m76DDF9B93C1D3C274A6242EF89BA3A78D8CC1441_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Cinemachine.Utility.HeadingTracker::ClearHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker_ClearHistory_m0B2E3ACB6DD3065138E08CEA92ABA19F348CC7CA (HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4 * __this, const RuntimeMethod* method);
// System.Int32 Cinemachine.Utility.HeadingTracker::get_FilterSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HeadingTracker_get_FilterSize_mF36D349F3D9B741A7BDDD4CED21E81F8F4FAEAA1 (HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single Cinemachine.CinemachineCore::get_CurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineCore_get_CurrentTime_m1C8A19990C1179E57846B6BFE4027014444F37C0 (const RuntimeMethod* method);
// System.Void Cinemachine.Utility.HeadingTracker::PopBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker_PopBottom_m4A6A60D6F6EDD2136FB949232D7F89DF9E072407 (HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4 * __this, const RuntimeMethod* method);
// System.Single Cinemachine.Utility.HeadingTracker::Decay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HeadingTracker_Decay_m32A071681762DD778FB0E36DF788BE5216AB1720 (float ___time0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::AlmostZero(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_AlmostZero_m09DAF0093FD15B42729EC01B5017049E2C2602DF (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Void Cinemachine.Utility.PositionPredictor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionPredictor_Reset_m7E4F467F2AB6ABFE2A102332B9143F7FC8DD6535 (PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single Cinemachine.Utility.PositionPredictor::get_Smoothing()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float PositionPredictor_get_Smoothing_m43507C6CC60936FB413A8D351CD3F0A1766E0CB7_inline (PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_SmoothDamp_m5CD4C7E77D8888561F59D612DE89E2E932A68927 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___current0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___target1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method);
// UnityEngine.Vector3 Cinemachine.Utility.PositionPredictor::PredictPositionDelta(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  PositionPredictor_PredictPositionDelta_m89CCC3CE749BED086E2148F0AB28248A6D897FE7 (PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223 * __this, float ___lookaheadTime0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B (float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839 (float ___d0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::Lerp(UnityEngine.Vector4,UnityEngine.Vector4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Vector4_Lerp_mFA160C69C5C6162B9D528643B5807012B2B1EC16 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___a0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4_set_Item_m56FB3A149299FEF1C0CF638CFAF71C7F0685EE45 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Void Cinemachine.Utility.SplineHelpers::ComputeSmoothControlPoints(UnityEngine.Vector4[]&,UnityEngine.Vector4[]&,UnityEngine.Vector4[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineHelpers_ComputeSmoothControlPoints_mBCAE08CEA6E84A14E6181263BF67BC29E7F2CE63 (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** ___knot0, Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** ___ctrl11, Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** ___ctrl22, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 Cinemachine.Utility.UnityVectorExtensions::ProjectOntoPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___planeNormal1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___a0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upwards1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::LerpAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_LerpAngle_m8802FB8DCECA2D48FDD13C20F384B9430E66C99F (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Vector4_get_normalized_mE211195F38FA106A1B303EB0DA78F21BB5C469C3 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// System.Single Cinemachine.Utility.UnityVectorExtensions::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_SignedAngle_mACC4C418DBAC81BF1F719AAFCF2EE55364AE908D (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v10, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v21, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___up2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0 (float ___angle0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mFDFA74F66595FD2B8CE360183D1A92B575F0A76E (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_m31EDC3262BE39D2F6464B15397F882237E6158C3 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_mBE7ED92F28BBE09310975CDF329913C04EA9500E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_SqrMagnitude_m1095C695F57FB6A2C440F3FEA6876ABB87F0C696 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Dot_m34F6A75BE3FC6F728233811943AC4406C7D905BA (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___lhs0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single Cinemachine.Utility.UnityVectorExtensions::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_Angle_m51BB9FF2F18CF2F2B7CCCFDF4B22F6061B487FD3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v10, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v21, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Sign_m6FA1D12786BEE0419D4B9426E5E4955F286BC8D3 (float ___f0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion Cinemachine.Utility.UnityQuaternionExtensions::SlerpWithReferenceUp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  UnityQuaternionExtensions_SlerpWithReferenceUp_mA5EA8034D99CAD536ED015E57007A82B346EB834 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___qA0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___qB1, float ___t2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___up3, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m7F5C473F39D5601486C1127DA0D52F2DC293FC35 (PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54 * __this, const RuntimeMethod* method);
// System.Boolean Cinemachine.CameraState::get_HasLookAt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraState_get_HasLookAt_mAD63C086CB17D6AF1F4462AB0F21F3DD52AC582B (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// UnityEngine.Quaternion Cinemachine.CameraState::get_RawOrientation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  CameraState_get_RawOrientation_mEB165F5AB11D2EE2BCD0D9797103539EEA297623_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Cinemachine.CameraState::get_ReferenceLookAt()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CameraState_get_ReferenceLookAt_m3FCCFB59361130B202C526D5F88FA11E1CC796EC_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Cinemachine.CameraState::get_CorrectedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CameraState_get_CorrectedPosition_mB0BA158101511615DB798168E64D3AFC0228B9AA (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Cinemachine.CameraState::get_ReferenceUp()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CameraState_get_ReferenceUp_mC19FC2F8C4846C140CC7EBE45C16DD07DEA9809B_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Cinemachine.Utility.UnityQuaternionExtensions::GetCameraRotationToTarget(UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  UnityQuaternionExtensions_GetCameraRotationToTarget_m2FC346D5CDC3FA3E81B1D35B4667D72034572B67 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orient0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtDir1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldUp2, const RuntimeMethod* method);
// UnityEngine.Vector3 Cinemachine.CameraState::get_PositionCorrection()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CameraState_get_PositionCorrection_m81476CD9BBC93E1AE8A47E6BA8D6E08F112D1CFD_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CameraState::set_PositionCorrection(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_PositionCorrection_m2CEDE7298CE80A5E020285AD21C2F39353563CB8_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Cinemachine.CameraState::set_ReferenceLookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_ReferenceLookAt_m33C644687C407C4208346D59D6DCFA911E2B5588_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// UnityEngine.Quaternion Cinemachine.Utility.UnityQuaternionExtensions::ApplyCameraRotation(UnityEngine.Quaternion,UnityEngine.Vector2,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  UnityQuaternionExtensions_ApplyCameraRotation_m3E5594FA8D22EECF7DD709A26493DE5FAD7B0814 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orient0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rot1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldUp2, const RuntimeMethod* method);
// System.Void Cinemachine.CameraState::set_RawOrientation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_RawOrientation_m366411C5A4E24AAB88BAF5DDC5174397F099B976_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineExtension__ctor_mF3457052C6CEDAB03B20CFBDF3C9760307CC68DC (CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineBrain::ReleaseCameraOverride(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineBrain_ReleaseCameraOverride_m77A2D0A792D692E4DDC383539DD7A6BFB6001847 (CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * __this, int32_t ___overrideId0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_ProcessFrame_m32F9B265BB54D1A3A290E2709FDD0B873360B25A (PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01 * __this, Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E  ___info1, RuntimeObject * ___playerData2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Cinemachine.CinemachineBrain>()
inline CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * GameObject_GetComponent_TisCinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_mBD916E48F072E85917A54BADF9B02330C838FEA0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Single UnityEngine.Playables.PlayableExtensions::GetInputWeight<UnityEngine.Playables.Playable>(!!0,System.Int32)
inline float PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBAE3A98FEA61C11C997238263E219EEE147E0F2B (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, int32_t ___inputIndex1, const RuntimeMethod* method)
{
	return ((  float (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , int32_t, const RuntimeMethod*))PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBAE3A98FEA61C11C997238263E219EEE147E0F2B_gshared)(___playable0, ___inputIndex1, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableExtensions::GetInput<UnityEngine.Playables.Playable>(!!0,System.Int32)
inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92 (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, int32_t ___inputPort1, const RuntimeMethod* method)
{
	return ((  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , int32_t, const RuntimeMethod*))PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92_gshared)(___playable0, ___inputPort1, method);
}
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>::op_Explicit(UnityEngine.Playables.Playable)
inline ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  ScriptPlayable_1_op_Explicit_m8AFDFB2071A6323A8AF5A938EBF5547C28F01652 (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , const RuntimeMethod*))ScriptPlayable_1_op_Explicit_m9FAFC5C19371356B29F026EED2AFB2633FA6CF80_gshared)(___playable0, method);
}
// !0 UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>::GetBehaviour()
inline CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8 (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A * __this, const RuntimeMethod* method)
{
	return ((  CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * (*) (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A *, const RuntimeMethod*))ScriptPlayable_1_GetBehaviour_m18F5C11A92B96501B55054208E95985D5C72F9B4_gshared)(__this, method);
}
// System.Boolean CinemachineShotPlayable::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CinemachineShotPlayable_get_IsValid_mB1F51FF9816FBC56D680EB7F47919C5C69C35331 (CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableExtensions::GetPlayState<UnityEngine.Playables.Playable>(!!0)
inline int32_t PlayableExtensions_GetPlayState_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2449EED62648E08ED363284EEFF1080E562C7981 (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , const RuntimeMethod*))PlayableExtensions_GetPlayState_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2449EED62648E08ED363284EEFF1080E562C7981_gshared)(___playable0, method);
}
// System.Double UnityEngine.Playables.PlayableExtensions::GetTime<UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>>(!!0)
inline double PlayableExtensions_GetTime_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m0EC69EBE63C5C7E96133DEBDAB0CEBCFA5A74BDB (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  ___playable0, const RuntimeMethod* method)
{
	return ((  double (*) (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A , const RuntimeMethod*))PlayableExtensions_GetTime_TisScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C_mF37B29E1D48DE1EEBEDA7E65483A25EAAD93C8C6_gshared)(___playable0, method);
}
// System.Double UnityEngine.Playables.PlayableExtensions::GetTime<UnityEngine.Playables.Playable>(!!0)
inline double PlayableExtensions_GetTime_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2B7F64DD20E0D9B18A3E60B1B0BB0056B7C6747D (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	return ((  double (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , const RuntimeMethod*))PlayableExtensions_GetTime_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2B7F64DD20E0D9B18A3E60B1B0BB0056B7C6747D_gshared)(___playable0, method);
}
// System.Double UnityEngine.Playables.PlayableExtensions::GetDuration<UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>>(!!0)
inline double PlayableExtensions_GetDuration_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m5311B48AA1AC40CCC1C7E5F416C71CB0D5C2F77D (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  ___playable0, const RuntimeMethod* method)
{
	return ((  double (*) (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A , const RuntimeMethod*))PlayableExtensions_GetDuration_TisScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C_m330D7A83A89A48B269C4EEB6A5FA84AAE568D315_gshared)(___playable0, method);
}
// System.Double UnityEngine.Playables.PlayableExtensions::GetDuration<UnityEngine.Playables.Playable>(!!0)
inline double PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m3557C19B4048EF5C9E875572F0E47D5EFB8E8E75 (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	return ((  double (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , const RuntimeMethod*))PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m3557C19B4048EF5C9E875572F0E47D5EFB8E8E75_gshared)(___playable0, method);
}
// System.Int32 UnityEngine.Playables.PlayableExtensions::GetInputCount<UnityEngine.Playables.Playable>(!!0)
inline int32_t PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mD04A716A5F8BF194F20D8AA2CEC2388233504F33 (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , const RuntimeMethod*))PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mD04A716A5F8BF194F20D8AA2CEC2388233504F33_gshared)(___playable0, method);
}
// System.Single UnityEngine.Playables.FrameData::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FrameData_get_deltaTime_m819B2E98971747205F7B8A66044C537FB79C719A (FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E * __this, const RuntimeMethod* method);
// System.Single CinemachineMixer::GetDeltaTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineMixer_GetDeltaTime_mEA6473C55C1D43106E7F6EF9B15E58955D418A2D (CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2 * __this, float ___deltaTime0, const RuntimeMethod* method);
// System.Int32 Cinemachine.CinemachineBrain::SetCameraOverride(System.Int32,Cinemachine.ICinemachineCamera,Cinemachine.ICinemachineCamera,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CinemachineBrain_SetCameraOverride_m77B47E9D9567F4143E21EFE789D9AFDF8167283C (CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * __this, int32_t ___overrideId0, RuntimeObject* ___camA1, RuntimeObject* ___camB2, float ___weightB3, float ___deltaTime4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// Cinemachine.TargetPositionCache/Mode Cinemachine.TargetPositionCache::get_CacheMode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TargetPositionCache_get_CacheMode_m7C4D3FC799E34E324A56B695AC9D6E6844B8725C_inline (const RuntimeMethod* method);
// System.Boolean Cinemachine.TargetPositionCache::get_HasHurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TargetPositionCache_get_HasHurrentTime_m594606DB4749A8EA02668BD3C5E13514C07A15E4 (const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour__ctor_mE96A877D927BEEC8C9368A0673FEAD77A78C35EE (PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineVirtualCameraBase::set_FollowTargetAttachment(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_set_FollowTargetAttachment_mF7DCDD0C1EAD8B1ADCFA58DA84C140C304E3C937_inline (CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * __this, float ___value0, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineVirtualCameraBase::set_LookAtTargetAttachment(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_set_LookAtTargetAttachment_mF4C1319B7CFCB69F54DC8FA1114A17C704EB7F12_inline (CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * __this, float ___value0, const RuntimeMethod* method);
// Cinemachine.LensSettings Cinemachine.CameraState::get_Lens()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  CameraState_get_Lens_m87EB12E38DA5AD3B2DB3C55E727E58C7D3162AF6_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Cinemachine.CameraState::get_CorrectedOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  CameraState_get_CorrectedOrientation_m34E9DD430137D2B017C560027AF7B3632B2A3DAC (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CameraState::set_OrientationCorrection(UnityEngine.Quaternion)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_OrientationCorrection_m1D4C1A494488F9877416DC7246575D2FA62B75F9_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void Cinemachine.CameraState::set_Lens(Cinemachine.LensSettings)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_Lens_m5425E9638FC8D57DBBABBC48D48266C482F8ABF8_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  ___value0, const RuntimeMethod* method);
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
inline ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  ScriptPlayable_1_Create_mF1204C0279C018CD6130BBFFA0F9D3E5CFA026D3 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  (*) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA , int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_mBE8425D4AF7A0A82F7EE4705CFA90D78548797A8_gshared)(___graph0, ___inputCount1, method);
}
// UnityEngine.IExposedPropertyTable UnityEngine.Playables.PlayableGraph::GetResolver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableGraph_GetResolver_m52F92B131B65F7412D220BB853C562C5983E884E (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * __this, const RuntimeMethod* method);
// !0 UnityEngine.ExposedReference`1<Cinemachine.CinemachineVirtualCameraBase>::Resolve(UnityEngine.IExposedPropertyTable)
inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ExposedReference_1_Resolve_m97A5CBAEBA1062ED36BF724510A76204AF114E74 (ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F * __this, RuntimeObject* ___resolver0, const RuntimeMethod* method)
{
	return ((  CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * (*) (ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F *, RuntimeObject*, const RuntimeMethod*))ExposedReference_1_Resolve_mBBA492F672C2CF69CFA8999F11C1FBD967AFFD1F_gshared)(__this, ___resolver0, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<!0>)
inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ScriptPlayable_1_op_Implicit_m9388F54AB0598505CA6ED126475CB8DC2172407B (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  ___playable0, const RuntimeMethod* method)
{
	return ((  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  (*) (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A , const RuntimeMethod*))ScriptPlayable_1_op_Implicit_mCAFBDEC4F98B94A0A6045DE2FBAE38B2707D7973_gshared)(___playable0, method);
}
// System.Void UnityEngine.Playables.PlayableAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset__ctor_m669F459CFACFE65873346E428F206C457B488167 (PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineCore/AxisInputDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisInputDelegate__ctor_m78B42AB90C54B8EF03079E7FBE1A1D8E56DD86A2 (AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m497E19AA4FA22DB659F631B20FAEF65572D1B44E (const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* Input_get_touches_mD31418E8B2487DBC9641A15677B41B459859011A (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Touch_get_deltaPosition_m4AAD6521D88FE10B3786039892B1BB9438ED2D64 (Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<CinemachineMixer>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
inline ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  ScriptPlayable_1_Create_mDE5946292E4A4165D00B39EACF469071ADA73189 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  (*) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA , int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_mBE8425D4AF7A0A82F7EE4705CFA90D78548797A8_gshared)(___graph0, ___inputCount1, method);
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputCount<UnityEngine.Playables.ScriptPlayable`1<CinemachineMixer>>(!!0,System.Int32)
inline void PlayableExtensions_SetInputCount_TisScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_m847F542F39A4F6792F586FE306664FB4E37E649F (ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  ___playable0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B , int32_t, const RuntimeMethod*))PlayableExtensions_SetInputCount_TisScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C_m2774559EFF46341FD237D613631323E3DEC292C4_gshared)(___playable0, ___value1, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<CinemachineMixer>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<!0>)
inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ScriptPlayable_1_op_Implicit_m6F1FE1C8EFB32C6564EAB7C8E44FB9DF276102D8 (ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  ___playable0, const RuntimeMethod* method)
{
	return ((  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  (*) (ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B , const RuntimeMethod*))ScriptPlayable_1_op_Implicit_mCAFBDEC4F98B94A0A6045DE2FBAE38B2707D7973_gshared)(___playable0, method);
}
// System.Void UnityEngine.Timeline.TrackAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackAsset__ctor_mB57EE24087931D858028EE79112A1FABDC95E5C6 (TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnGUIDelegate_tF9317001AB4E703C8439EFD7987552E90C476F72 (OnGUIDelegate_tF9317001AB4E703C8439EFD7987552E90C476F72 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Cinemachine.Utility.CinemachineDebug/OnGUIDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGUIDelegate__ctor_m1EB961EDA22ED2D8F96D62E05FBC5BB40AF50003 (OnGUIDelegate_tF9317001AB4E703C8439EFD7987552E90C476F72 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Cinemachine.Utility.CinemachineDebug/OnGUIDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGUIDelegate_Invoke_m5F2D0CD846B98662688A90D2F8C4740D1182AECC (OnGUIDelegate_tF9317001AB4E703C8439EFD7987552E90C476F72 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Cinemachine.Utility.CinemachineDebug/OnGUIDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnGUIDelegate_BeginInvoke_m41BFA7B58C5A680FB04323F2029ADF24A2B94A69 (OnGUIDelegate_tF9317001AB4E703C8439EFD7987552E90C476F72 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Cinemachine.Utility.CinemachineDebug/OnGUIDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGUIDelegate_EndInvoke_m6AB88D0F8B64813284A666FB0B67F19819FE57E0 (OnGUIDelegate_tF9317001AB4E703C8439EFD7987552E90C476F72 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Cinemachine.Utility.Damper::DecayConstant(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Damper_DecayConstant_mF442786078CA64E351A3D65EE14B7423ADA73DA0 (float ___time0, float ___residual1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Damper_DecayConstant_mF442786078CA64E351A3D65EE14B7423ADA73DA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return Mathf.Log(1f / residual) / time;
		float L_0 = ___residual1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = logf(((float)((float)(1.0f)/(float)L_0)));
		float L_2 = ___time0;
		V_0 = ((float)((float)L_1/(float)L_2));
		goto IL_0012;
	}

IL_0012:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Single Cinemachine.Utility.Damper::DecayedRemainder(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Damper_DecayedRemainder_mD4C471125C7D69871E84872281867B54AA27206A (float ___initial0, float ___decayConstant1, float ___deltaTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Damper_DecayedRemainder_mD4C471125C7D69871E84872281867B54AA27206A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return initial / Mathf.Exp(decayConstant * deltaTime);
		float L_0 = ___initial0;
		float L_1 = ___decayConstant1;
		float L_2 = ___deltaTime2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_3 = expf(((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)));
		V_0 = ((float)((float)L_0/(float)L_3));
		goto IL_000e;
	}

IL_000e:
	{
		// }
		float L_4 = V_0;
		return L_4;
	}
}
// System.Single Cinemachine.Utility.Damper::Damp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Damper_Damp_m91BF7E7465305B7286234FAD38454A05DE468573 (float ___initial0, float ___dampTime1, float ___deltaTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Damper_Damp_m91BF7E7465305B7286234FAD38454A05DE468573_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		// if (dampTime < Epsilon || Mathf.Abs(initial) < Epsilon)
		float L_0 = ___dampTime1;
		if ((((float)L_0) < ((float)(0.0001f))))
		{
			goto IL_0018;
		}
	}
	{
		float L_1 = ___initial0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = fabsf(L_1);
		G_B3_0 = ((((float)L_2) < ((float)(0.0001f)))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// return initial;
		float L_4 = ___initial0;
		V_2 = L_4;
		goto IL_0051;
	}

IL_0021:
	{
		// if (deltaTime < Epsilon)
		float L_5 = ___deltaTime2;
		V_3 = (bool)((((float)L_5) < ((float)(0.0001f)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// return 0;
		V_2 = (0.0f);
		goto IL_0051;
	}

IL_0035:
	{
		// float k = -kLogNegligibleResidual / dampTime; //DecayConstant(dampTime, kNegligibleResidual);
		float L_7 = ___dampTime1;
		V_0 = ((float)((float)(4.60517025f)/(float)L_7));
		// return initial * (1 - Mathf.Exp(-k * deltaTime));
		float L_8 = ___initial0;
		float L_9 = V_0;
		float L_10 = ___deltaTime2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_11 = expf(((float)il2cpp_codegen_multiply((float)((-L_9)), (float)L_10)));
		V_2 = ((float)il2cpp_codegen_multiply((float)L_8, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_11))));
		goto IL_0051;
	}

IL_0051:
	{
		// }
		float L_12 = V_2;
		return L_12;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.Damper::Damp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Damper_Damp_mDC32C1DBC79A08A9F66B6F8AF9A9BA6A76B19433 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___initial0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dampTime1, float ___deltaTime2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// for (int i = 0; i < 3; ++i)
		V_0 = 0;
		goto IL_0028;
	}

IL_0005:
	{
		// initial[i] = Damp(initial[i], dampTime[i], deltaTime);
		int32_t L_0 = V_0;
		int32_t L_1 = V_0;
		float L_2 = Vector3_get_Item_mC3B9D35C070A91D7CA5C5B47280BD0EA3E148AC6((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___initial0), L_1, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		float L_4 = Vector3_get_Item_mC3B9D35C070A91D7CA5C5B47280BD0EA3E148AC6((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___dampTime1), L_3, /*hidden argument*/NULL);
		float L_5 = ___deltaTime2;
		float L_6 = Damper_Damp_m91BF7E7465305B7286234FAD38454A05DE468573(L_2, L_4, L_5, /*hidden argument*/NULL);
		Vector3_set_Item_m89FF112CEC0D9ED43F1C4FE01522C75394B30AE6((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___initial0), L_0, L_6, /*hidden argument*/NULL);
		// for (int i = 0; i < 3; ++i)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0028:
	{
		// for (int i = 0; i < 3; ++i)
		int32_t L_8 = V_0;
		V_1 = (bool)((((int32_t)L_8) < ((int32_t)3))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0005;
		}
	}
	{
		// return initial;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = ___initial0;
		V_2 = L_10;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_2;
		return L_11;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.Damper::Damp(UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Damper_Damp_m98DA14254EF90B6D90177796BF93D052D9C925A3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___initial0, float ___dampTime1, float ___deltaTime2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// for (int i = 0; i < 3; ++i)
		V_0 = 0;
		goto IL_0021;
	}

IL_0005:
	{
		// initial[i] = Damp(initial[i], dampTime, deltaTime);
		int32_t L_0 = V_0;
		int32_t L_1 = V_0;
		float L_2 = Vector3_get_Item_mC3B9D35C070A91D7CA5C5B47280BD0EA3E148AC6((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___initial0), L_1, /*hidden argument*/NULL);
		float L_3 = ___dampTime1;
		float L_4 = ___deltaTime2;
		float L_5 = Damper_Damp_m91BF7E7465305B7286234FAD38454A05DE468573(L_2, L_3, L_4, /*hidden argument*/NULL);
		Vector3_set_Item_m89FF112CEC0D9ED43F1C4FE01522C75394B30AE6((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___initial0), L_0, L_5, /*hidden argument*/NULL);
		// for (int i = 0; i < 3; ++i)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0021:
	{
		// for (int i = 0; i < 3; ++i)
		int32_t L_7 = V_0;
		V_1 = (bool)((((int32_t)L_7) < ((int32_t)3))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0005;
		}
	}
	{
		// return initial;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = ___initial0;
		V_2 = L_9;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_2;
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
// System.Void Cinemachine.Utility.GaussianWindow1D_CameraRotation::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaussianWindow1D_CameraRotation__ctor_m27068192451EBDB88B64909F642D99C4D0445BC6 (GaussianWindow1D_CameraRotation_t88B75023ED9125C4BE06144C20215CD10666641D * __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GaussianWindow1D_CameraRotation__ctor_m27068192451EBDB88B64909F642D99C4D0445BC6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(sigma, maxKernelRadius) {}
		float L_0 = ___sigma0;
		int32_t L_1 = ___maxKernelRadius1;
		GaussianWindow1d_1__ctor_m41A04DD612C41D2C24F75212ACE3C5D64329EDA1(__this, L_0, L_1, /*hidden argument*/GaussianWindow1d_1__ctor_m41A04DD612C41D2C24F75212ACE3C5D64329EDA1_RuntimeMethod_var);
		// : base(sigma, maxKernelRadius) {}
		return;
	}
}
// UnityEngine.Vector2 Cinemachine.Utility.GaussianWindow1D_CameraRotation::Compute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GaussianWindow1D_CameraRotation_Compute_m2AF82F11B6AF69FDA08B516C63381E0192FF1C83 (GaussianWindow1D_CameraRotation_t88B75023ED9125C4BE06144C20215CD10666641D * __this, int32_t ___windowPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GaussianWindow1D_CameraRotation_Compute_m2AF82F11B6AF69FDA08B516C63381E0192FF1C83_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// Vector2 sum = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		V_0 = L_0;
		// Vector2 v = mData[mCurrentPos];
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_1 = ((GaussianWindow1d_1_t10F20E064ADE0A33D663FD5C4A4BA8B9BDC981AD *)__this)->get_mData_0();
		int32_t L_2 = ((GaussianWindow1d_1_t10F20E064ADE0A33D663FD5C4A4BA8B9BDC981AD *)__this)->get_mCurrentPos_2();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// for (int i = 0; i < KernelSize; ++i)
		V_2 = 0;
		goto IL_00ab;
	}

IL_0020:
	{
		// Vector2 v2 = mData[windowPos] - v;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_5 = ((GaussianWindow1d_1_t10F20E064ADE0A33D663FD5C4A4BA8B9BDC981AD *)__this)->get_mData_0();
		int32_t L_6 = ___windowPos0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_8, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// if (v2.y > 180f)
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = V_3;
		float L_12 = L_11.get_y_1();
		V_4 = (bool)((((float)L_12) > ((float)(180.0f)))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0057;
		}
	}
	{
		// v2.y -= 360f;
		float* L_14 = (&V_3)->get_address_of_y_1();
		float* L_15 = L_14;
		float L_16 = *((float*)L_15);
		*((float*)L_15) = (float)((float)il2cpp_codegen_subtract((float)L_16, (float)(360.0f)));
	}

IL_0057:
	{
		// if (v2.y < -180f)
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = V_3;
		float L_18 = L_17.get_y_1();
		V_5 = (bool)((((float)L_18) < ((float)(-180.0f)))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_007a;
		}
	}
	{
		// v2.y += 360f;
		float* L_20 = (&V_3)->get_address_of_y_1();
		float* L_21 = L_20;
		float L_22 = *((float*)L_21);
		*((float*)L_21) = (float)((float)il2cpp_codegen_add((float)L_22, (float)(360.0f)));
	}

IL_007a:
	{
		// sum += v2 * mKernel[i];
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_24 = V_3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_25 = ((GaussianWindow1d_1_t10F20E064ADE0A33D663FD5C4A4BA8B9BDC981AD *)__this)->get_mKernel_1();
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		float L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_24, L_28, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_30 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_23, L_29, /*hidden argument*/NULL);
		V_0 = L_30;
		// if (++windowPos == KernelSize)
		int32_t L_31 = ___windowPos0;
		int32_t L_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		___windowPos0 = L_32;
		int32_t L_33 = GaussianWindow1d_1_get_KernelSize_m621B6F929CB7A454DCE085B08C0092714E31FC2C(__this, /*hidden argument*/GaussianWindow1d_1_get_KernelSize_m621B6F929CB7A454DCE085B08C0092714E31FC2C_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_32) == ((int32_t)L_33))? 1 : 0);
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_00a6;
		}
	}
	{
		// windowPos = 0;
		___windowPos0 = 0;
	}

IL_00a6:
	{
		// for (int i = 0; i < KernelSize; ++i)
		int32_t L_35 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00ab:
	{
		// for (int i = 0; i < KernelSize; ++i)
		int32_t L_36 = V_2;
		int32_t L_37 = GaussianWindow1d_1_get_KernelSize_m621B6F929CB7A454DCE085B08C0092714E31FC2C(__this, /*hidden argument*/GaussianWindow1d_1_get_KernelSize_m621B6F929CB7A454DCE085B08C0092714E31FC2C_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_7;
		if (L_38)
		{
			goto IL_0020;
		}
	}
	{
		// return v + sum;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_39 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_40 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_41 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_39, L_40, /*hidden argument*/NULL);
		V_8 = L_41;
		goto IL_00c8;
	}

IL_00c8:
	{
		// }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_42 = V_8;
		return L_42;
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
// System.Void Cinemachine.Utility.GaussianWindow1D_Quaternion::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaussianWindow1D_Quaternion__ctor_m22A74D17EE4528E1FEFD148E5EF3061D62763A90 (GaussianWindow1D_Quaternion_t7B6418660E5E1E7E1CDC2E2AD08FADD17C4EECC3 * __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GaussianWindow1D_Quaternion__ctor_m22A74D17EE4528E1FEFD148E5EF3061D62763A90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(sigma, maxKernelRadius) {}
		float L_0 = ___sigma0;
		int32_t L_1 = ___maxKernelRadius1;
		GaussianWindow1d_1__ctor_m5DB4A4144E17F603C16CA26AA0378DA3192BD142(__this, L_0, L_1, /*hidden argument*/GaussianWindow1d_1__ctor_m5DB4A4144E17F603C16CA26AA0378DA3192BD142_RuntimeMethod_var);
		// : base(sigma, maxKernelRadius) {}
		return;
	}
}
// UnityEngine.Quaternion Cinemachine.Utility.GaussianWindow1D_Quaternion::Compute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  GaussianWindow1D_Quaternion_Compute_m4AED7FDFB67E6E53CC5407CEAE2DE0C326B92A6A (GaussianWindow1D_Quaternion_t7B6418660E5E1E7E1CDC2E2AD08FADD17C4EECC3 * __this, int32_t ___windowPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GaussianWindow1D_Quaternion_Compute_m4AED7FDFB67E6E53CC5407CEAE2DE0C326B92A6A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// Quaternion sum = new Quaternion(0, 0, 0, 0);
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// Quaternion q = mData[mCurrentPos];
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_0 = ((GaussianWindow1d_1_tD306E7D9C22D8A3423192901A6231996D605EAFC *)__this)->get_mData_0();
		int32_t L_1 = ((GaussianWindow1d_1_tD306E7D9C22D8A3423192901A6231996D605EAFC *)__this)->get_mCurrentPos_2();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		// Quaternion qInverse = Quaternion.Inverse(q);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// for (int i = 0; i < KernelSize; ++i)
		V_3 = 0;
		goto IL_00e9;
	}

IL_003c:
	{
		// float scale = mKernel[i];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_6 = ((GaussianWindow1d_1_tD306E7D9C22D8A3423192901A6231996D605EAFC *)__this)->get_mKernel_1();
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_4 = L_9;
		// Quaternion q2 = qInverse * mData[windowPos];
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = V_2;
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_11 = ((GaussianWindow1d_1_tD306E7D9C22D8A3423192901A6231996D605EAFC *)__this)->get_mData_0();
		int32_t L_12 = ___windowPos0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_10, L_14, /*hidden argument*/NULL);
		V_5 = L_15;
		// if (Quaternion.Dot(Quaternion.identity, q2) < 0)
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = V_5;
		float L_18 = Quaternion_Dot_m0C931CC8127C5461E5B8A857BDE2CE09297E468B(L_16, L_17, /*hidden argument*/NULL);
		V_6 = (bool)((((float)L_18) < ((float)(0.0f)))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_0079;
		}
	}
	{
		// scale = -scale;
		float L_20 = V_4;
		V_4 = ((-L_20));
	}

IL_0079:
	{
		// sum.x += q2.x * scale;
		float* L_21 = (&V_0)->get_address_of_x_0();
		float* L_22 = L_21;
		float L_23 = *((float*)L_22);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = V_5;
		float L_25 = L_24.get_x_0();
		float L_26 = V_4;
		*((float*)L_22) = (float)((float)il2cpp_codegen_add((float)L_23, (float)((float)il2cpp_codegen_multiply((float)L_25, (float)L_26))));
		// sum.y += q2.y * scale;
		float* L_27 = (&V_0)->get_address_of_y_1();
		float* L_28 = L_27;
		float L_29 = *((float*)L_28);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = V_5;
		float L_31 = L_30.get_y_1();
		float L_32 = V_4;
		*((float*)L_28) = (float)((float)il2cpp_codegen_add((float)L_29, (float)((float)il2cpp_codegen_multiply((float)L_31, (float)L_32))));
		// sum.z += q2.z * scale;
		float* L_33 = (&V_0)->get_address_of_z_2();
		float* L_34 = L_33;
		float L_35 = *((float*)L_34);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_36 = V_5;
		float L_37 = L_36.get_z_2();
		float L_38 = V_4;
		*((float*)L_34) = (float)((float)il2cpp_codegen_add((float)L_35, (float)((float)il2cpp_codegen_multiply((float)L_37, (float)L_38))));
		// sum.w += q2.w * scale;
		float* L_39 = (&V_0)->get_address_of_w_3();
		float* L_40 = L_39;
		float L_41 = *((float*)L_40);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_42 = V_5;
		float L_43 = L_42.get_w_3();
		float L_44 = V_4;
		*((float*)L_40) = (float)((float)il2cpp_codegen_add((float)L_41, (float)((float)il2cpp_codegen_multiply((float)L_43, (float)L_44))));
		// if (++windowPos == KernelSize)
		int32_t L_45 = ___windowPos0;
		int32_t L_46 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
		___windowPos0 = L_46;
		int32_t L_47 = GaussianWindow1d_1_get_KernelSize_m93C2EDFD6C996D1637AE8DB9BF1382A9071E8DA0(__this, /*hidden argument*/GaussianWindow1d_1_get_KernelSize_m93C2EDFD6C996D1637AE8DB9BF1382A9071E8DA0_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_46) == ((int32_t)L_47))? 1 : 0);
		bool L_48 = V_7;
		if (!L_48)
		{
			goto IL_00e4;
		}
	}
	{
		// windowPos = 0;
		___windowPos0 = 0;
	}

IL_00e4:
	{
		// for (int i = 0; i < KernelSize; ++i)
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_00e9:
	{
		// for (int i = 0; i < KernelSize; ++i)
		int32_t L_50 = V_3;
		int32_t L_51 = GaussianWindow1d_1_get_KernelSize_m93C2EDFD6C996D1637AE8DB9BF1382A9071E8DA0(__this, /*hidden argument*/GaussianWindow1d_1_get_KernelSize_m93C2EDFD6C996D1637AE8DB9BF1382A9071E8DA0_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_50) < ((int32_t)L_51))? 1 : 0);
		bool L_52 = V_8;
		if (L_52)
		{
			goto IL_003c;
		}
	}
	{
		// return q * Quaternion.Normalize(sum);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_53 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_54 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_55 = Quaternion_Normalize_mC90CD7561BBE1666AA3D6CE37B2310BE0E1736A1(L_54, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_56 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_53, L_55, /*hidden argument*/NULL);
		V_9 = L_56;
		goto IL_010b;
	}

IL_010b:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_57 = V_9;
		return L_57;
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
// System.Void Cinemachine.Utility.GaussianWindow1D_Vector3::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaussianWindow1D_Vector3__ctor_mBB506DCFE07AA03924BB52082875891A6D0916C1 (GaussianWindow1D_Vector3_t3D2CA98CAA335A6CA30F2F3E51CEC6FA69C1EC48 * __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GaussianWindow1D_Vector3__ctor_mBB506DCFE07AA03924BB52082875891A6D0916C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(sigma, maxKernelRadius) {}
		float L_0 = ___sigma0;
		int32_t L_1 = ___maxKernelRadius1;
		GaussianWindow1d_1__ctor_m93C6FDD41196F17FE54DE551228CDF93144F5EFE(__this, L_0, L_1, /*hidden argument*/GaussianWindow1d_1__ctor_m93C6FDD41196F17FE54DE551228CDF93144F5EFE_RuntimeMethod_var);
		// : base(sigma, maxKernelRadius) {}
		return;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.GaussianWindow1D_Vector3::Compute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GaussianWindow1D_Vector3_Compute_mA21000B9E4F7A74790C6926FB78C3A2EE1727200 (GaussianWindow1D_Vector3_t3D2CA98CAA335A6CA30F2F3E51CEC6FA69C1EC48 * __this, int32_t ___windowPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GaussianWindow1D_Vector3_Compute_mA21000B9E4F7A74790C6926FB78C3A2EE1727200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector3 sum = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_0 = L_0;
		// for (int i = 0; i < KernelSize; ++i)
		V_1 = 0;
		goto IL_0046;
	}

IL_000b:
	{
		// sum += mData[windowPos] * mKernel[i];
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = ((GaussianWindow1d_1_tB879E544550B44574C9A5A21528AB3884F3580DD *)__this)->get_mData_0();
		int32_t L_3 = ___windowPos0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_6 = ((GaussianWindow1d_1_tB879E544550B44574C9A5A21528AB3884F3580DD *)__this)->get_mKernel_1();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_5, L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_1, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// if (++windowPos == KernelSize)
		int32_t L_12 = ___windowPos0;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		___windowPos0 = L_13;
		int32_t L_14 = GaussianWindow1d_1_get_KernelSize_m76DDF9B93C1D3C274A6242EF89BA3A78D8CC1441(__this, /*hidden argument*/GaussianWindow1d_1_get_KernelSize_m76DDF9B93C1D3C274A6242EF89BA3A78D8CC1441_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_13) == ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0041;
		}
	}
	{
		// windowPos = 0;
		___windowPos0 = 0;
	}

IL_0041:
	{
		// for (int i = 0; i < KernelSize; ++i)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0046:
	{
		// for (int i = 0; i < KernelSize; ++i)
		int32_t L_17 = V_1;
		int32_t L_18 = GaussianWindow1d_1_get_KernelSize_m76DDF9B93C1D3C274A6242EF89BA3A78D8CC1441(__this, /*hidden argument*/GaussianWindow1d_1_get_KernelSize_m76DDF9B93C1D3C274A6242EF89BA3A78D8CC1441_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_3;
		if (L_19)
		{
			goto IL_000b;
		}
	}
	{
		// return sum;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_0;
		V_4 = L_20;
		goto IL_0058;
	}

IL_0058:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_4;
		return L_21;
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
// System.Void Cinemachine.Utility.HeadingTracker::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker__ctor_m0A16F52FDBFB1271DE6862232DD698E732FB070E (HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4 * __this, int32_t ___filterSize0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HeadingTracker__ctor_m0A16F52FDBFB1271DE6862232DD698E732FB070E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float mWeightSum = 0;
		__this->set_mWeightSum_5((0.0f));
		// float mWeightTime = 0;
		__this->set_mWeightTime_6((0.0f));
		// Vector3 mLastGoodHeading = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_mLastGoodHeading_7(L_0);
		// public HeadingTracker(int filterSize)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// mHistory = new Item[filterSize];
		int32_t L_1 = ___filterSize0;
		ItemU5BU5D_t7D008EEEF404065A770D7C42085C86F254078B46* L_2 = (ItemU5BU5D_t7D008EEEF404065A770D7C42085C86F254078B46*)(ItemU5BU5D_t7D008EEEF404065A770D7C42085C86F254078B46*)SZArrayNew(ItemU5BU5D_t7D008EEEF404065A770D7C42085C86F254078B46_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->set_mHistory_0(L_2);
		// float historyHalfLife = filterSize / 5f; // somewhat arbitrarily
		int32_t L_3 = ___filterSize0;
		V_0 = ((float)((float)(((float)((float)L_3)))/(float)(5.0f)));
		// mDecayExponent = -Mathf.Log(2f) / historyHalfLife;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_4 = logf((2.0f));
		float L_5 = V_0;
		((HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4_StaticFields*)il2cpp_codegen_static_fields_for(HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4_il2cpp_TypeInfo_var))->set_mDecayExponent_8(((float)((float)((-L_4))/(float)L_5)));
		// ClearHistory();
		HeadingTracker_ClearHistory_m0B2E3ACB6DD3065138E08CEA92ABA19F348CC7CA(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Cinemachine.Utility.HeadingTracker::get_FilterSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HeadingTracker_get_FilterSize_mF36D349F3D9B741A7BDDD4CED21E81F8F4FAEAA1 (HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public int FilterSize { get { return mHistory.Length; } }
		ItemU5BU5D_t7D008EEEF404065A770D7C42085C86F254078B46* L_0 = __this->get_mHistory_0();
		NullCheck(L_0);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		goto IL_000c;
	}

IL_000c:
	{
		// public int FilterSize { get { return mHistory.Length; } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Cinemachine.Utility.HeadingTracker::ClearHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker_ClearHistory_m0B2E3ACB6DD3065138E08CEA92ABA19F348CC7CA (HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HeadingTracker_ClearHistory_m0B2E3ACB6DD3065138E08CEA92ABA19F348CC7CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// mTop = mBottom = mCount = 0;
		int32_t L_0 = 0;
		V_0 = L_0;
		__this->set_mCount_3(L_0);
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->set_mBottom_2(L_2);
		int32_t L_3 = V_0;
		__this->set_mTop_1(L_3);
		// mWeightSum = 0;
		__this->set_mWeightSum_5((0.0f));
		// mHeadingSum = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_mHeadingSum_4(L_4);
		// }
		return;
	}
}
// System.Single Cinemachine.Utility.HeadingTracker::Decay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HeadingTracker_Decay_m32A071681762DD778FB0E36DF788BE5216AB1720 (float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HeadingTracker_Decay_m32A071681762DD778FB0E36DF788BE5216AB1720_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// static float Decay(float time) { return Mathf.Exp(time * mDecayExponent); }
		float L_0 = ___time0;
		float L_1 = ((HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4_StaticFields*)il2cpp_codegen_static_fields_for(HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4_il2cpp_TypeInfo_var))->get_mDecayExponent_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = expf(((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// static float Decay(float time) { return Mathf.Exp(time * mDecayExponent); }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Void Cinemachine.Utility.HeadingTracker::Add(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker_Add_m409F3CE9AD9F76CFB1A726014919316BF1883B61 (HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___velocity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HeadingTracker_Add_m409F3CE9AD9F76CFB1A726014919316BF1883B61_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	Item_t3B6B467A1D39665462BC0A703E543496169303B4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	{
		// if (FilterSize == 0)
		int32_t L_0 = HeadingTracker_get_FilterSize_mF36D349F3D9B741A7BDDD4CED21E81F8F4FAEAA1(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// mLastGoodHeading = velocity;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___velocity0;
		__this->set_mLastGoodHeading_7(L_2);
		// return;
		goto IL_010c;
	}

IL_001b:
	{
		// float weight = velocity.magnitude;
		float L_3 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___velocity0), /*hidden argument*/NULL);
		V_0 = L_3;
		// if (weight > UnityVectorExtensions.Epsilon)
		float L_4 = V_0;
		V_2 = (bool)((((float)L_4) > ((float)(0.0001f)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_010c;
		}
	}
	{
		// Item item = new Item();
		il2cpp_codegen_initobj((&V_3), sizeof(Item_t3B6B467A1D39665462BC0A703E543496169303B4 ));
		// item.velocity = velocity;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___velocity0;
		(&V_3)->set_velocity_0(L_6);
		// item.weight = weight;
		float L_7 = V_0;
		(&V_3)->set_weight_1(L_7);
		// item.time = CinemachineCore.CurrentTime;
		IL2CPP_RUNTIME_CLASS_INIT(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_il2cpp_TypeInfo_var);
		float L_8 = CinemachineCore_get_CurrentTime_m1C8A19990C1179E57846B6BFE4027014444F37C0(/*hidden argument*/NULL);
		(&V_3)->set_time_2(L_8);
		// if (mCount == FilterSize)
		int32_t L_9 = __this->get_mCount_3();
		int32_t L_10 = HeadingTracker_get_FilterSize_mF36D349F3D9B741A7BDDD4CED21E81F8F4FAEAA1(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0072;
		}
	}
	{
		// PopBottom();
		HeadingTracker_PopBottom_m4A6A60D6F6EDD2136FB949232D7F89DF9E072407(__this, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// ++mCount;
		int32_t L_12 = __this->get_mCount_3();
		__this->set_mCount_3(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
		// mHistory[mTop] = item;
		ItemU5BU5D_t7D008EEEF404065A770D7C42085C86F254078B46* L_13 = __this->get_mHistory_0();
		int32_t L_14 = __this->get_mTop_1();
		Item_t3B6B467A1D39665462BC0A703E543496169303B4  L_15 = V_3;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Item_t3B6B467A1D39665462BC0A703E543496169303B4 )L_15);
		// if (++mTop == FilterSize)
		int32_t L_16 = __this->get_mTop_1();
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		int32_t L_17 = V_6;
		__this->set_mTop_1(L_17);
		int32_t L_18 = V_6;
		int32_t L_19 = HeadingTracker_get_FilterSize_mF36D349F3D9B741A7BDDD4CED21E81F8F4FAEAA1(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_18) == ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_00bb;
		}
	}
	{
		// mTop = 0;
		__this->set_mTop_1(0);
	}

IL_00bb:
	{
		// mWeightSum *= Decay(item.time - mWeightTime);
		float L_21 = __this->get_mWeightSum_5();
		Item_t3B6B467A1D39665462BC0A703E543496169303B4  L_22 = V_3;
		float L_23 = L_22.get_time_2();
		float L_24 = __this->get_mWeightTime_6();
		float L_25 = HeadingTracker_Decay_m32A071681762DD778FB0E36DF788BE5216AB1720(((float)il2cpp_codegen_subtract((float)L_23, (float)L_24)), /*hidden argument*/NULL);
		__this->set_mWeightSum_5(((float)il2cpp_codegen_multiply((float)L_21, (float)L_25)));
		// mWeightTime = item.time;
		Item_t3B6B467A1D39665462BC0A703E543496169303B4  L_26 = V_3;
		float L_27 = L_26.get_time_2();
		__this->set_mWeightTime_6(L_27);
		// mWeightSum += weight;
		float L_28 = __this->get_mWeightSum_5();
		float L_29 = V_0;
		__this->set_mWeightSum_5(((float)il2cpp_codegen_add((float)L_28, (float)L_29)));
		// mHeadingSum += item.velocity;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = __this->get_mHeadingSum_4();
		Item_t3B6B467A1D39665462BC0A703E543496169303B4  L_31 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = L_31.get_velocity_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_30, L_32, /*hidden argument*/NULL);
		__this->set_mHeadingSum_4(L_33);
	}

IL_010c:
	{
		// }
		return;
	}
}
// System.Void Cinemachine.Utility.HeadingTracker::PopBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker_PopBottom_m4A6A60D6F6EDD2136FB949232D7F89DF9E072407 (HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HeadingTracker_PopBottom_m4A6A60D6F6EDD2136FB949232D7F89DF9E072407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	Item_t3B6B467A1D39665462BC0A703E543496169303B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t G_B6_0 = 0;
	{
		// if (mCount > 0)
		int32_t L_0 = __this->get_mCount_3();
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c8;
		}
	}
	{
		// float time = CinemachineCore.CurrentTime;
		IL2CPP_RUNTIME_CLASS_INIT(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_il2cpp_TypeInfo_var);
		float L_2 = CinemachineCore_get_CurrentTime_m1C8A19990C1179E57846B6BFE4027014444F37C0(/*hidden argument*/NULL);
		V_1 = L_2;
		// Item item = mHistory[mBottom];
		ItemU5BU5D_t7D008EEEF404065A770D7C42085C86F254078B46* L_3 = __this->get_mHistory_0();
		int32_t L_4 = __this->get_mBottom_2();
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Item_t3B6B467A1D39665462BC0A703E543496169303B4  L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (++mBottom == FilterSize)
		int32_t L_7 = __this->get_mBottom_2();
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		int32_t L_8 = V_5;
		__this->set_mBottom_2(L_8);
		int32_t L_9 = V_5;
		int32_t L_10 = HeadingTracker_get_FilterSize_mF36D349F3D9B741A7BDDD4CED21E81F8F4FAEAA1(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		// mBottom = 0;
		__this->set_mBottom_2(0);
	}

IL_0053:
	{
		// --mCount;
		int32_t L_12 = __this->get_mCount_3();
		__this->set_mCount_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)));
		// float decay = Decay(time - item.time);
		float L_13 = V_1;
		Item_t3B6B467A1D39665462BC0A703E543496169303B4  L_14 = V_2;
		float L_15 = L_14.get_time_2();
		float L_16 = HeadingTracker_Decay_m32A071681762DD778FB0E36DF788BE5216AB1720(((float)il2cpp_codegen_subtract((float)L_13, (float)L_15)), /*hidden argument*/NULL);
		V_3 = L_16;
		// mWeightSum -= item.weight * decay;
		float L_17 = __this->get_mWeightSum_5();
		Item_t3B6B467A1D39665462BC0A703E543496169303B4  L_18 = V_2;
		float L_19 = L_18.get_weight_1();
		float L_20 = V_3;
		__this->set_mWeightSum_5(((float)il2cpp_codegen_subtract((float)L_17, (float)((float)il2cpp_codegen_multiply((float)L_19, (float)L_20)))));
		// mHeadingSum -= item.velocity * decay;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = __this->get_mHeadingSum_4();
		Item_t3B6B467A1D39665462BC0A703E543496169303B4  L_22 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = L_22.get_velocity_0();
		float L_24 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_23, L_24, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_21, L_25, /*hidden argument*/NULL);
		__this->set_mHeadingSum_4(L_26);
		// if (mWeightSum <= UnityVectorExtensions.Epsilon || mCount == 0)
		float L_27 = __this->get_mWeightSum_5();
		if ((((float)L_27) <= ((float)(0.0001f))))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_28 = __this->get_mCount_3();
		G_B6_0 = ((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		goto IL_00ba;
	}

IL_00b9:
	{
		G_B6_0 = 1;
	}

IL_00ba:
	{
		V_6 = (bool)G_B6_0;
		bool L_29 = V_6;
		if (!L_29)
		{
			goto IL_00c7;
		}
	}
	{
		// ClearHistory();
		HeadingTracker_ClearHistory_m0B2E3ACB6DD3065138E08CEA92ABA19F348CC7CA(__this, /*hidden argument*/NULL);
	}

IL_00c7:
	{
	}

IL_00c8:
	{
		// }
		return;
	}
}
// System.Void Cinemachine.Utility.HeadingTracker::DecayHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker_DecayHistory_m45AA371C807BE4790C03211ADCC07C4481C0F803 (HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HeadingTracker_DecayHistory_m45AA371C807BE4790C03211ADCC07C4481C0F803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		// float time = CinemachineCore.CurrentTime;
		IL2CPP_RUNTIME_CLASS_INIT(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_il2cpp_TypeInfo_var);
		float L_0 = CinemachineCore_get_CurrentTime_m1C8A19990C1179E57846B6BFE4027014444F37C0(/*hidden argument*/NULL);
		V_0 = L_0;
		// float decay = Decay(time - mWeightTime);
		float L_1 = V_0;
		float L_2 = __this->get_mWeightTime_6();
		float L_3 = HeadingTracker_Decay_m32A071681762DD778FB0E36DF788BE5216AB1720(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)), /*hidden argument*/NULL);
		V_1 = L_3;
		// mWeightSum *= decay;
		float L_4 = __this->get_mWeightSum_5();
		float L_5 = V_1;
		__this->set_mWeightSum_5(((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)));
		// mWeightTime = time;
		float L_6 = V_0;
		__this->set_mWeightTime_6(L_6);
		// if (mWeightSum < UnityVectorExtensions.Epsilon)
		float L_7 = __this->get_mWeightSum_5();
		V_2 = (bool)((((float)L_7) < ((float)(0.0001f)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		// ClearHistory();
		HeadingTracker_ClearHistory_m0B2E3ACB6DD3065138E08CEA92ABA19F348CC7CA(__this, /*hidden argument*/NULL);
		goto IL_0056;
	}

IL_0044:
	{
		// mHeadingSum = mHeadingSum * decay;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = __this->get_mHeadingSum_4();
		float L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_9, L_10, /*hidden argument*/NULL);
		__this->set_mHeadingSum_4(L_11);
	}

IL_0056:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.HeadingTracker::GetReliableHeading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  HeadingTracker_GetReliableHeading_m80202507069C77358EB5D92D546799B978B93F71 (HeadingTracker_t5957804552F409AFD9CCBEA177E09CC3753873D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HeadingTracker_GetReliableHeading_m80202507069C77358EB5D92D546799B978B93F71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// if (mWeightSum > UnityVectorExtensions.Epsilon
		//     && (mCount == mHistory.Length || mLastGoodHeading.AlmostZero()))
		float L_0 = __this->get_mWeightSum_5();
		if ((!(((float)L_0) > ((float)(0.0001f)))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_1 = __this->get_mCount_3();
		ItemU5BU5D_t7D008EEEF404065A770D7C42085C86F254078B46* L_2 = __this->get_mHistory_0();
		NullCheck(L_2);
		if ((((int32_t)L_1) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))))
		{
			goto IL_002b;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = __this->get_mLastGoodHeading_7();
		bool L_4 = UnityVectorExtensions_AlmostZero_m09DAF0093FD15B42729EC01B5017049E2C2602DF(L_3, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_4));
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 1;
	}

IL_002c:
	{
		G_B6_0 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 0;
	}

IL_002f:
	{
		V_0 = (bool)G_B6_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0061;
		}
	}
	{
		// Vector3  h = mHeadingSum / mWeightSum;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = __this->get_mHeadingSum_4();
		float L_7 = __this->get_mWeightSum_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// if (!h.AlmostZero())
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_1;
		bool L_10 = UnityVectorExtensions_AlmostZero_m09DAF0093FD15B42729EC01B5017049E2C2602DF(L_9, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		// mLastGoodHeading = h.normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		__this->set_mLastGoodHeading_7(L_12);
	}

IL_0060:
	{
	}

IL_0061:
	{
		// return mLastGoodHeading;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = __this->get_mLastGoodHeading_7();
		V_3 = L_13;
		goto IL_006a;
	}

IL_006a:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_3;
		return L_14;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Cinemachine.Utility.PositionPredictor::get_Smoothing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PositionPredictor_get_Smoothing_m43507C6CC60936FB413A8D351CD3F0A1766E0CB7 (PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223 * __this, const RuntimeMethod* method)
{
	{
		// public float Smoothing { get; set; }
		float L_0 = __this->get_U3CSmoothingU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Cinemachine.Utility.PositionPredictor::set_Smoothing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionPredictor_set_Smoothing_mDB96EF8784D6BDAC31F0E0369ABCB60CB85F92DF (PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Smoothing { get; set; }
		float L_0 = ___value0;
		__this->set_U3CSmoothingU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Boolean Cinemachine.Utility.PositionPredictor::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PositionPredictor_IsEmpty_mD03ED4D7511BB76F600B2DEB85E8BDF0EEC17AAB (PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool IsEmpty() { return !m_HavePos; }
		bool L_0 = __this->get_m_HavePos_3();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// public bool IsEmpty() { return !m_HavePos; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Cinemachine.Utility.PositionPredictor::ApplyTransformDelta(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionPredictor_ApplyTransformDelta_m1129D277F1AAAF3FCF14C8E52093B53273887449 (PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positionDelta0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PositionPredictor_ApplyTransformDelta_m1129D277F1AAAF3FCF14C8E52093B53273887449_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void ApplyTransformDelta(Vector3 positionDelta) { m_Pos += positionDelta; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_Pos_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___positionDelta0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_Pos_2(L_2);
		// public void ApplyTransformDelta(Vector3 positionDelta) { m_Pos += positionDelta; }
		return;
	}
}
// System.Void Cinemachine.Utility.PositionPredictor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionPredictor_Reset_m7E4F467F2AB6ABFE2A102332B9143F7FC8DD6535 (PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PositionPredictor_Reset_m7E4F467F2AB6ABFE2A102332B9143F7FC8DD6535_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_HavePos = false;
		__this->set_m_HavePos_3((bool)0);
		// m_SmoothDampVelocity = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_m_SmoothDampVelocity_1(L_0);
		// m_Velocity = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_m_Velocity_0(L_1);
		// }
		return;
	}
}
// System.Void Cinemachine.Utility.PositionPredictor::AddPosition(UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionPredictor_AddPosition_m9C5DC8C6C311E4CFCC8C0F8D5731B44326A68D62 (PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos0, float ___deltaTime1, float ___lookaheadTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PositionPredictor_AddPosition_m9C5DC8C6C311E4CFCC8C0F8D5731B44326A68D62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	float G_B8_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * G_B8_1 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B8_2;
	memset((&G_B8_2), 0, sizeof(G_B8_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B8_3;
	memset((&G_B8_3), 0, sizeof(G_B8_3));
	PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223 * G_B8_4 = NULL;
	float G_B7_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * G_B7_1 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B7_2;
	memset((&G_B7_2), 0, sizeof(G_B7_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B7_3;
	memset((&G_B7_3), 0, sizeof(G_B7_3));
	PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223 * G_B7_4 = NULL;
	int32_t G_B9_0 = 0;
	float G_B9_1 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * G_B9_2 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B9_3;
	memset((&G_B9_3), 0, sizeof(G_B9_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B9_4;
	memset((&G_B9_4), 0, sizeof(G_B9_4));
	PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223 * G_B9_5 = NULL;
	{
		// if (deltaTime < 0)
		float L_0 = ___deltaTime1;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Reset();
		PositionPredictor_Reset_m7E4F467F2AB6ABFE2A102332B9143F7FC8DD6535(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// if (m_HavePos && deltaTime > UnityVectorExtensions.Epsilon)
		bool L_2 = __this->get_m_HavePos_3();
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		float L_3 = ___deltaTime1;
		G_B5_0 = ((((float)L_3) > ((float)(0.0001f)))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B5_0 = 0;
	}

IL_0027:
	{
		V_1 = (bool)G_B5_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0084;
		}
	}
	{
		// var vel = (pos - m_Pos) / deltaTime;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___pos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = __this->get_m_Pos_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_5, L_6, /*hidden argument*/NULL);
		float L_8 = ___deltaTime1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// bool slowing = vel.sqrMagnitude < m_Velocity.sqrMagnitude;
		float L_10 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_11 = __this->get_address_of_m_Velocity_0();
		float L_12 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_11, /*hidden argument*/NULL);
		V_3 = (bool)((((float)L_10) < ((float)L_12))? 1 : 0);
		// m_Velocity = Vector3.SmoothDamp(
		//     m_Velocity, vel, ref m_SmoothDampVelocity, Smoothing / (slowing ? 30 : 10),
		//     float.PositiveInfinity, deltaTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = __this->get_m_Velocity_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_15 = __this->get_address_of_m_SmoothDampVelocity_1();
		float L_16 = PositionPredictor_get_Smoothing_m43507C6CC60936FB413A8D351CD3F0A1766E0CB7_inline(__this, /*hidden argument*/NULL);
		bool L_17 = V_3;
		G_B7_0 = L_16;
		G_B7_1 = L_15;
		G_B7_2 = L_14;
		G_B7_3 = L_13;
		G_B7_4 = __this;
		if (L_17)
		{
			G_B8_0 = L_16;
			G_B8_1 = L_15;
			G_B8_2 = L_14;
			G_B8_3 = L_13;
			G_B8_4 = __this;
			goto IL_006f;
		}
	}
	{
		G_B9_0 = ((int32_t)10);
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		G_B9_4 = G_B7_3;
		G_B9_5 = G_B7_4;
		goto IL_0071;
	}

IL_006f:
	{
		G_B9_0 = ((int32_t)30);
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
		G_B9_4 = G_B8_3;
		G_B9_5 = G_B8_4;
	}

IL_0071:
	{
		float L_18 = ___deltaTime1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_SmoothDamp_m5CD4C7E77D8888561F59D612DE89E2E932A68927(G_B9_4, G_B9_3, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)G_B9_2, ((float)((float)G_B9_1/(float)(((float)((float)G_B9_0))))), (std::numeric_limits<float>::infinity()), L_18, /*hidden argument*/NULL);
		NullCheck(G_B9_5);
		G_B9_5->set_m_Velocity_0(L_19);
	}

IL_0084:
	{
		// m_Pos = pos;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = ___pos0;
		__this->set_m_Pos_2(L_20);
		// m_HavePos = true;
		__this->set_m_HavePos_3((bool)1);
		// }
		return;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.PositionPredictor::PredictPositionDelta(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  PositionPredictor_PredictPositionDelta_m89CCC3CE749BED086E2148F0AB28248A6D897FE7 (PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223 * __this, float ___lookaheadTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PositionPredictor_PredictPositionDelta_m89CCC3CE749BED086E2148F0AB28248A6D897FE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return m_Velocity * lookaheadTime;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_Velocity_0();
		float L_1 = ___lookaheadTime0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.PositionPredictor::PredictPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  PositionPredictor_PredictPosition_m1DE042B701CF432CFB8663B99AC7F27B0B314313 (PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223 * __this, float ___lookaheadTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PositionPredictor_PredictPosition_m1DE042B701CF432CFB8663B99AC7F27B0B314313_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return m_Pos + PredictPositionDelta(lookaheadTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_Pos_2();
		float L_1 = ___lookaheadTime0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = PositionPredictor_PredictPositionDelta_m89CCC3CE749BED086E2148F0AB28248A6D897FE7(__this, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// System.Void Cinemachine.Utility.PositionPredictor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionPredictor__ctor_mBBB97C15FEA38C4EC4BE370FD78E6A3C1DD6F712 (PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 Cinemachine.Utility.SplineHelpers::Bezier3(System.Single,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SplineHelpers_Bezier3_mF92B01A4DE1464C8183887795B7434C5E6C2B678 (float ___t0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___p01, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___p12, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___p23, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___p34, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SplineHelpers_Bezier3_mF92B01A4DE1464C8183887795B7434C5E6C2B678_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// t = Mathf.Clamp01(t);
		float L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(L_0, /*hidden argument*/NULL);
		___t0 = L_1;
		// float d = 1f - t;
		float L_2 = ___t0;
		V_0 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_2));
		// return d * d * d * p0 + 3f * d * d * t * p1
		//     + 3f * d * t * t * p2 + t * t * t * p3;
		float L_3 = V_0;
		float L_4 = V_0;
		float L_5 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___p01;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), (float)L_5)), L_6, /*hidden argument*/NULL);
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = ___t0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = ___p12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_8)), (float)L_9)), (float)L_10)), L_11, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_7, L_12, /*hidden argument*/NULL);
		float L_14 = V_0;
		float L_15 = ___t0;
		float L_16 = ___t0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = ___p23;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_14)), (float)L_15)), (float)L_16)), L_17, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_13, L_18, /*hidden argument*/NULL);
		float L_20 = ___t0;
		float L_21 = ___t0;
		float L_22 = ___t0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = ___p34;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_20, (float)L_21)), (float)L_22)), L_23, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_19, L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		goto IL_005c;
	}

IL_005c:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = V_1;
		return L_26;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.SplineHelpers::BezierTangent3(System.Single,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SplineHelpers_BezierTangent3_m83A52667AD3BB651B9B136F35059CE8D179EAB3E (float ___t0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___p01, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___p12, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___p23, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___p34, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SplineHelpers_BezierTangent3_m83A52667AD3BB651B9B136F35059CE8D179EAB3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// t = Mathf.Clamp01(t);
		float L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(L_0, /*hidden argument*/NULL);
		___t0 = L_1;
		// return (-3f * p0 + 9f * p1 - 9f * p2 + 3f * p3) * (t * t)
		//     +  (6f * p0 - 12f * p1 + 6f * p2) * t
		//     -  3f * p0 + 3f * p1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___p01;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((-3.0f), L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___p12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((9.0f), L_4, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_3, L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___p23;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((9.0f), L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = ___p34;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((3.0f), L_10, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_9, L_11, /*hidden argument*/NULL);
		float L_13 = ___t0;
		float L_14 = ___t0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_12, ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = ___p01;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((6.0f), L_16, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = ___p12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((12.0f), L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_17, L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = ___p23;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((6.0f), L_21, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_20, L_22, /*hidden argument*/NULL);
		float L_24 = ___t0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_23, L_24, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_15, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = ___p01;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((3.0f), L_27, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_26, L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = ___p12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((3.0f), L_30, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_29, L_31, /*hidden argument*/NULL);
		V_0 = L_32;
		goto IL_00a6;
	}

IL_00a6:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = V_0;
		return L_33;
	}
}
// System.Single Cinemachine.Utility.SplineHelpers::Bezier1(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SplineHelpers_Bezier1_mEC2ED8E3AD96C410A9972F8C69A218F7B4E93076 (float ___t0, float ___p01, float ___p12, float ___p23, float ___p34, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SplineHelpers_Bezier1_mEC2ED8E3AD96C410A9972F8C69A218F7B4E93076_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// t = Mathf.Clamp01(t);
		float L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(L_0, /*hidden argument*/NULL);
		___t0 = L_1;
		// float d = 1f - t;
		float L_2 = ___t0;
		V_0 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_2));
		// return d * d * d * p0 + 3f * d * d * t * p1
		//     + 3f * d * t * t * p2 + t * t * t * p3;
		float L_3 = V_0;
		float L_4 = V_0;
		float L_5 = V_0;
		float L_6 = ___p01;
		float L_7 = V_0;
		float L_8 = V_0;
		float L_9 = ___t0;
		float L_10 = ___p12;
		float L_11 = V_0;
		float L_12 = ___t0;
		float L_13 = ___t0;
		float L_14 = ___p23;
		float L_15 = ___t0;
		float L_16 = ___t0;
		float L_17 = ___t0;
		float L_18 = ___p34;
		V_1 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), (float)L_5)), (float)L_6)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_7)), (float)L_8)), (float)L_9)), (float)L_10)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_11)), (float)L_12)), (float)L_13)), (float)L_14)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)), (float)L_17)), (float)L_18))));
		goto IL_0040;
	}

IL_0040:
	{
		// }
		float L_19 = V_1;
		return L_19;
	}
}
// System.Single Cinemachine.Utility.SplineHelpers::BezierTangent1(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SplineHelpers_BezierTangent1_mAD80C25E3EE3EACA09B12735DAC4AE274CBF2C6C (float ___t0, float ___p01, float ___p12, float ___p23, float ___p34, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SplineHelpers_BezierTangent1_mAD80C25E3EE3EACA09B12735DAC4AE274CBF2C6C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// t = Mathf.Clamp01(t);
		float L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(L_0, /*hidden argument*/NULL);
		___t0 = L_1;
		// return (-3f * p0 + 9f * p1 - 9f * p2 + 3f * p3) * t * t
		//     +  (6f * p0 - 12f * p1 + 6f * p2) * t
		//     -  3f * p0 + 3f * p1;
		float L_2 = ___p01;
		float L_3 = ___p12;
		float L_4 = ___p23;
		float L_5 = ___p34;
		float L_6 = ___t0;
		float L_7 = ___t0;
		float L_8 = ___p01;
		float L_9 = ___p12;
		float L_10 = ___p23;
		float L_11 = ___t0;
		float L_12 = ___p01;
		float L_13 = ___p12;
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(-3.0f), (float)L_2)), (float)((float)il2cpp_codegen_multiply((float)(9.0f), (float)L_3)))), (float)((float)il2cpp_codegen_multiply((float)(9.0f), (float)L_4)))), (float)((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_5)))), (float)L_6)), (float)L_7)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(6.0f), (float)L_8)), (float)((float)il2cpp_codegen_multiply((float)(12.0f), (float)L_9)))), (float)((float)il2cpp_codegen_multiply((float)(6.0f), (float)L_10)))), (float)L_11)))), (float)((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_12)))), (float)((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_13))));
		goto IL_005a;
	}

IL_005a:
	{
		// }
		float L_14 = V_0;
		return L_14;
	}
}
// System.Void Cinemachine.Utility.SplineHelpers::ComputeSmoothControlPoints(UnityEngine.Vector4[]&,UnityEngine.Vector4[]&,UnityEngine.Vector4[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineHelpers_ComputeSmoothControlPoints_mBCAE08CEA6E84A14E6181263BF67BC29E7F2CE63 (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** ___knot0, Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** ___ctrl11, Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** ___ctrl22, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SplineHelpers_ComputeSmoothControlPoints_mBCAE08CEA6E84A14E6181263BF67BC29E7F2CE63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_1 = NULL;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_2 = NULL;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_3 = NULL;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	float V_14 = 0.0f;
	bool V_15 = false;
	int32_t V_16 = 0;
	bool V_17 = false;
	int32_t V_18 = 0;
	bool V_19 = false;
	bool V_20 = false;
	{
		// int numPoints = knot.Length;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_0 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_1 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_0);
		NullCheck(L_1);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))));
		// if (numPoints <= 2)
		int32_t L_2 = V_0;
		V_5 = (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_0092;
		}
	}
	{
		// if (numPoints == 2)
		int32_t L_4 = V_0;
		V_6 = (bool)((((int32_t)L_4) == ((int32_t)2))? 1 : 0);
		bool L_5 = V_6;
		if (!L_5)
		{
			goto IL_0066;
		}
	}
	{
		// ctrl1[0] = Vector4.Lerp(knot[0], knot[1], 0.33333f);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_6 = ___ctrl11;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_7 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_6);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_8 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_9 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_8);
		NullCheck(L_9);
		int32_t L_10 = 0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_12 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_13 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_12);
		NullCheck(L_13);
		int32_t L_14 = 1;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_16 = Vector4_Lerp_mFA160C69C5C6162B9D528643B5807012B2B1EC16(L_11, L_15, (0.33333f), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_16);
		// ctrl2[0] = Vector4.Lerp(knot[0], knot[1], 0.66666f);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_17 = ___ctrl22;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_18 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_17);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_19 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_20 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_19);
		NullCheck(L_20);
		int32_t L_21 = 0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_23 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_24 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_23);
		NullCheck(L_24);
		int32_t L_25 = 1;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_27 = Vector4_Lerp_mFA160C69C5C6162B9D528643B5807012B2B1EC16(L_22, L_26, (0.66666f), /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_27);
		goto IL_008d;
	}

IL_0066:
	{
		// else if (numPoints == 1)
		int32_t L_28 = V_0;
		V_7 = (bool)((((int32_t)L_28) == ((int32_t)1))? 1 : 0);
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_008d;
		}
	}
	{
		// ctrl1[0] = ctrl2[0] = knot[0];
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_30 = ___ctrl11;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_31 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_30);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_32 = ___ctrl22;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_33 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_32);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_34 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_35 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_34);
		NullCheck(L_35);
		int32_t L_36 = 0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_38 = L_37;
		V_8 = L_38;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_38);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_39 = V_8;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_39);
	}

IL_008d:
	{
		// return;
		goto IL_031a;
	}

IL_0092:
	{
		// var a = new float[numPoints];
		int32_t L_40 = V_0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_41 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)L_40);
		V_1 = L_41;
		// var b = new float[numPoints];
		int32_t L_42 = V_0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_43 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)L_42);
		V_2 = L_43;
		// var c = new float[numPoints];
		int32_t L_44 = V_0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_45 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)L_44);
		V_3 = L_45;
		// var r = new float[numPoints];
		int32_t L_46 = V_0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_47 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)L_46);
		V_4 = L_47;
		// for (int axis = 0; axis < 4; ++axis)
		V_9 = 0;
		goto IL_030c;
	}

IL_00b7:
	{
		// int n = numPoints - 1;
		int32_t L_48 = V_0;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1));
		// a[0] = 0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_49 = V_1;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.0f));
		// b[0] = 2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_50 = V_2;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(2.0f));
		// c[0] = 1;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_51 = V_3;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.0f));
		// r[0] = knot[0][axis] + 2 * knot[1][axis];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_52 = V_4;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_53 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_54 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_53);
		NullCheck(L_54);
		int32_t L_55 = V_9;
		float L_56 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), L_55, /*hidden argument*/NULL);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_57 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_58 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_57);
		NullCheck(L_58);
		int32_t L_59 = V_9;
		float L_60 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), L_59, /*hidden argument*/NULL);
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)il2cpp_codegen_add((float)L_56, (float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_60)))));
		// for (int i = 1; i < n - 1; ++i)
		V_11 = 1;
		goto IL_015a;
	}

IL_0103:
	{
		// a[i] = 1;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_61 = V_1;
		int32_t L_62 = V_11;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (float)(1.0f));
		// b[i] = 4;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_63 = V_2;
		int32_t L_64 = V_11;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (float)(4.0f));
		// c[i] = 1;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_65 = V_3;
		int32_t L_66 = V_11;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (float)(1.0f));
		// r[i] = 4 * knot[i][axis] + 2 * knot[i+1][axis];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_67 = V_4;
		int32_t L_68 = V_11;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_69 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_70 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_69);
		int32_t L_71 = V_11;
		NullCheck(L_70);
		int32_t L_72 = V_9;
		float L_73 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71))), L_72, /*hidden argument*/NULL);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_74 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_75 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_74);
		int32_t L_76 = V_11;
		NullCheck(L_75);
		int32_t L_77 = V_9;
		float L_78 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1))))), L_77, /*hidden argument*/NULL);
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(4.0f), (float)L_73)), (float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_78)))));
		// for (int i = 1; i < n - 1; ++i)
		int32_t L_79 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
	}

IL_015a:
	{
		// for (int i = 1; i < n - 1; ++i)
		int32_t L_80 = V_11;
		int32_t L_81 = V_10;
		V_12 = (bool)((((int32_t)L_80) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)1))))? 1 : 0);
		bool L_82 = V_12;
		if (L_82)
		{
			goto IL_0103;
		}
	}
	{
		// a[n - 1] = 2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_83 = V_1;
		int32_t L_84 = V_10;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_84, (int32_t)1))), (float)(2.0f));
		// b[n - 1] = 7;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_85 = V_2;
		int32_t L_86 = V_10;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_86, (int32_t)1))), (float)(7.0f));
		// c[n - 1] = 0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_87 = V_3;
		int32_t L_88 = V_10;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_88, (int32_t)1))), (float)(0.0f));
		// r[n - 1] = 8 * knot[n - 1][axis] + knot[n][axis];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_89 = V_4;
		int32_t L_90 = V_10;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_91 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_92 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_91);
		int32_t L_93 = V_10;
		NullCheck(L_92);
		int32_t L_94 = V_9;
		float L_95 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_92)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_93, (int32_t)1))))), L_94, /*hidden argument*/NULL);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_96 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_97 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_96);
		int32_t L_98 = V_10;
		NullCheck(L_97);
		int32_t L_99 = V_9;
		float L_100 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_97)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_98))), L_99, /*hidden argument*/NULL);
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_90, (int32_t)1))), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(8.0f), (float)L_95)), (float)L_100)));
		// for (int i = 1; i < n; ++i)
		V_13 = 1;
		goto IL_01fa;
	}

IL_01be:
	{
		// float m = a[i] / b[i-1];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_101 = V_1;
		int32_t L_102 = V_13;
		NullCheck(L_101);
		int32_t L_103 = L_102;
		float L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_105 = V_2;
		int32_t L_106 = V_13;
		NullCheck(L_105);
		int32_t L_107 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_106, (int32_t)1));
		float L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_14 = ((float)((float)L_104/(float)L_108));
		// b[i] = b[i] - m * c[i-1];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_109 = V_2;
		int32_t L_110 = V_13;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_111 = V_2;
		int32_t L_112 = V_13;
		NullCheck(L_111);
		int32_t L_113 = L_112;
		float L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		float L_115 = V_14;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_116 = V_3;
		int32_t L_117 = V_13;
		NullCheck(L_116);
		int32_t L_118 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_117, (int32_t)1));
		float L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(L_110), (float)((float)il2cpp_codegen_subtract((float)L_114, (float)((float)il2cpp_codegen_multiply((float)L_115, (float)L_119)))));
		// r[i] = r[i] - m * r[i-1];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_120 = V_4;
		int32_t L_121 = V_13;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_122 = V_4;
		int32_t L_123 = V_13;
		NullCheck(L_122);
		int32_t L_124 = L_123;
		float L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		float L_126 = V_14;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_127 = V_4;
		int32_t L_128 = V_13;
		NullCheck(L_127);
		int32_t L_129 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_128, (int32_t)1));
		float L_130 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		NullCheck(L_120);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(L_121), (float)((float)il2cpp_codegen_subtract((float)L_125, (float)((float)il2cpp_codegen_multiply((float)L_126, (float)L_130)))));
		// for (int i = 1; i < n; ++i)
		int32_t L_131 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)1));
	}

IL_01fa:
	{
		// for (int i = 1; i < n; ++i)
		int32_t L_132 = V_13;
		int32_t L_133 = V_10;
		V_15 = (bool)((((int32_t)L_132) < ((int32_t)L_133))? 1 : 0);
		bool L_134 = V_15;
		if (L_134)
		{
			goto IL_01be;
		}
	}
	{
		// ctrl1[n-1][axis] = r[n-1] / b[n-1];
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_135 = ___ctrl11;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_136 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_135);
		int32_t L_137 = V_10;
		NullCheck(L_136);
		int32_t L_138 = V_9;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_139 = V_4;
		int32_t L_140 = V_10;
		NullCheck(L_139);
		int32_t L_141 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_140, (int32_t)1));
		float L_142 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_143 = V_2;
		int32_t L_144 = V_10;
		NullCheck(L_143);
		int32_t L_145 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_144, (int32_t)1));
		float L_146 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		Vector4_set_Item_m56FB3A149299FEF1C0CF638CFAF71C7F0685EE45((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_136)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_137, (int32_t)1))))), L_138, ((float)((float)L_142/(float)L_146)), /*hidden argument*/NULL);
		// for (int i = n - 2; i >= 0; --i)
		int32_t L_147 = V_10;
		V_16 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_147, (int32_t)2));
		goto IL_0268;
	}

IL_022f:
	{
		// ctrl1[i][axis] = (r[i] - c[i] * ctrl1[i + 1][axis]) / b[i];
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_148 = ___ctrl11;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_149 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_148);
		int32_t L_150 = V_16;
		NullCheck(L_149);
		int32_t L_151 = V_9;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_152 = V_4;
		int32_t L_153 = V_16;
		NullCheck(L_152);
		int32_t L_154 = L_153;
		float L_155 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_156 = V_3;
		int32_t L_157 = V_16;
		NullCheck(L_156);
		int32_t L_158 = L_157;
		float L_159 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_160 = ___ctrl11;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_161 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_160);
		int32_t L_162 = V_16;
		NullCheck(L_161);
		int32_t L_163 = V_9;
		float L_164 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_161)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_162, (int32_t)1))))), L_163, /*hidden argument*/NULL);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_165 = V_2;
		int32_t L_166 = V_16;
		NullCheck(L_165);
		int32_t L_167 = L_166;
		float L_168 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		Vector4_set_Item_m56FB3A149299FEF1C0CF638CFAF71C7F0685EE45((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_149)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_150))), L_151, ((float)((float)((float)il2cpp_codegen_subtract((float)L_155, (float)((float)il2cpp_codegen_multiply((float)L_159, (float)L_164))))/(float)L_168)), /*hidden argument*/NULL);
		// for (int i = n - 2; i >= 0; --i)
		int32_t L_169 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_169, (int32_t)1));
	}

IL_0268:
	{
		// for (int i = n - 2; i >= 0; --i)
		int32_t L_170 = V_16;
		V_17 = (bool)((((int32_t)((((int32_t)L_170) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_171 = V_17;
		if (L_171)
		{
			goto IL_022f;
		}
	}
	{
		// for (int i = 0; i < n; i++)
		V_18 = 0;
		goto IL_02bd;
	}

IL_027b:
	{
		// ctrl2[i][axis] = 2 * knot[i + 1][axis] - ctrl1[i + 1][axis];
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_172 = ___ctrl22;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_173 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_172);
		int32_t L_174 = V_18;
		NullCheck(L_173);
		int32_t L_175 = V_9;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_176 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_177 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_176);
		int32_t L_178 = V_18;
		NullCheck(L_177);
		int32_t L_179 = V_9;
		float L_180 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_177)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_178, (int32_t)1))))), L_179, /*hidden argument*/NULL);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_181 = ___ctrl11;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_182 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_181);
		int32_t L_183 = V_18;
		NullCheck(L_182);
		int32_t L_184 = V_9;
		float L_185 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_182)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_183, (int32_t)1))))), L_184, /*hidden argument*/NULL);
		Vector4_set_Item_m56FB3A149299FEF1C0CF638CFAF71C7F0685EE45((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_173)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_174))), L_175, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_180)), (float)L_185)), /*hidden argument*/NULL);
		// for (int i = 0; i < n; i++)
		int32_t L_186 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_186, (int32_t)1));
	}

IL_02bd:
	{
		// for (int i = 0; i < n; i++)
		int32_t L_187 = V_18;
		int32_t L_188 = V_10;
		V_19 = (bool)((((int32_t)L_187) < ((int32_t)L_188))? 1 : 0);
		bool L_189 = V_19;
		if (L_189)
		{
			goto IL_027b;
		}
	}
	{
		// ctrl2[n - 1][axis] = 0.5f * (knot[n][axis] + ctrl1[n - 1][axis]);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_190 = ___ctrl22;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_191 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_190);
		int32_t L_192 = V_10;
		NullCheck(L_191);
		int32_t L_193 = V_9;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_194 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_195 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_194);
		int32_t L_196 = V_10;
		NullCheck(L_195);
		int32_t L_197 = V_9;
		float L_198 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_195)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_196))), L_197, /*hidden argument*/NULL);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_199 = ___ctrl11;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_200 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_199);
		int32_t L_201 = V_10;
		NullCheck(L_200);
		int32_t L_202 = V_9;
		float L_203 = Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_200)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_201, (int32_t)1))))), L_202, /*hidden argument*/NULL);
		Vector4_set_Item_m56FB3A149299FEF1C0CF638CFAF71C7F0685EE45((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((L_191)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_192, (int32_t)1))))), L_193, ((float)il2cpp_codegen_multiply((float)(0.5f), (float)((float)il2cpp_codegen_add((float)L_198, (float)L_203)))), /*hidden argument*/NULL);
		// for (int axis = 0; axis < 4; ++axis)
		int32_t L_204 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_204, (int32_t)1));
	}

IL_030c:
	{
		// for (int axis = 0; axis < 4; ++axis)
		int32_t L_205 = V_9;
		V_20 = (bool)((((int32_t)L_205) < ((int32_t)4))? 1 : 0);
		bool L_206 = V_20;
		if (L_206)
		{
			goto IL_00b7;
		}
	}

IL_031a:
	{
		// }
		return;
	}
}
// System.Void Cinemachine.Utility.SplineHelpers::ComputeSmoothControlPointsLooped(UnityEngine.Vector4[]&,UnityEngine.Vector4[]&,UnityEngine.Vector4[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineHelpers_ComputeSmoothControlPointsLooped_mF88A01E9DEC80CC554BC81FEB189C729B51D24A9 (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** ___knot0, Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** ___ctrl11, Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** ___ctrl22, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SplineHelpers_ComputeSmoothControlPointsLooped_mF88A01E9DEC80CC554BC81FEB189C729B51D24A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_2 = NULL;
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_3 = NULL;
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	{
		// int numPoints = knot.Length;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_0 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_1 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_0);
		NullCheck(L_1);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))));
		// if (numPoints < 2)
		int32_t L_2 = V_0;
		V_5 = (bool)((((int32_t)L_2) < ((int32_t)2))? 1 : 0);
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		// if (numPoints == 1)
		int32_t L_4 = V_0;
		V_6 = (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
		bool L_5 = V_6;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// ctrl1[0] = ctrl2[0] = knot[0];
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_6 = ___ctrl11;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_7 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_6);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_8 = ___ctrl22;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_9 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_8);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_10 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_11 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_10);
		NullCheck(L_11);
		int32_t L_12 = 0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_14 = L_13;
		V_7 = L_14;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_14);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_15 = V_7;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_15);
	}

IL_0038:
	{
		// return;
		goto IL_011f;
	}

IL_003d:
	{
		// int margin = Mathf.Min(4, numPoints-1);
		int32_t L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_17 = Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A(4, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_17;
		// Vector4[] knotLooped = new Vector4[numPoints + 2 * margin];
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_20 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)SZArrayNew(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_19)))));
		V_2 = L_20;
		// Vector4[] ctrl1Looped = new Vector4[numPoints + 2 * margin];
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_23 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)SZArrayNew(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_22)))));
		V_3 = L_23;
		// Vector4[] ctrl2Looped = new Vector4[numPoints + 2 * margin];
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_26 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)SZArrayNew(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_25)))));
		V_4 = L_26;
		// for (int i = 0; i < margin; ++i)
		V_8 = 0;
		goto IL_00a0;
	}

IL_006e:
	{
		// knotLooped[i] = knot[numPoints-(margin-i)];
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_27 = V_2;
		int32_t L_28 = V_8;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_29 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_30 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_29);
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		int32_t L_33 = V_8;
		NullCheck(L_30);
		int32_t L_34 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_33))));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_35 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_35);
		// knotLooped[numPoints+margin+i] = knot[i];
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_36 = V_2;
		int32_t L_37 = V_0;
		int32_t L_38 = V_1;
		int32_t L_39 = V_8;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_40 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_41 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_40);
		int32_t L_42 = V_8;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_38)), (int32_t)L_39))), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_44);
		// for (int i = 0; i < margin; ++i)
		int32_t L_45 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00a0:
	{
		// for (int i = 0; i < margin; ++i)
		int32_t L_46 = V_8;
		int32_t L_47 = V_1;
		V_9 = (bool)((((int32_t)L_46) < ((int32_t)L_47))? 1 : 0);
		bool L_48 = V_9;
		if (L_48)
		{
			goto IL_006e;
		}
	}
	{
		// for (int i = 0; i < numPoints; ++i)
		V_10 = 0;
		goto IL_00c9;
	}

IL_00b0:
	{
		// knotLooped[i + margin] = knot[i];
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_49 = V_2;
		int32_t L_50 = V_10;
		int32_t L_51 = V_1;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_52 = ___knot0;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_53 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_52);
		int32_t L_54 = V_10;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)L_51))), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_56);
		// for (int i = 0; i < numPoints; ++i)
		int32_t L_57 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
	}

IL_00c9:
	{
		// for (int i = 0; i < numPoints; ++i)
		int32_t L_58 = V_10;
		int32_t L_59 = V_0;
		V_11 = (bool)((((int32_t)L_58) < ((int32_t)L_59))? 1 : 0);
		bool L_60 = V_11;
		if (L_60)
		{
			goto IL_00b0;
		}
	}
	{
		// ComputeSmoothControlPoints(ref knotLooped, ref ctrl1Looped, ref ctrl2Looped);
		SplineHelpers_ComputeSmoothControlPoints_mBCAE08CEA6E84A14E6181263BF67BC29E7F2CE63((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)(&V_2), (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)(&V_3), (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)(&V_4), /*hidden argument*/NULL);
		// for (int i = 0; i < numPoints; ++i)
		V_12 = 0;
		goto IL_0114;
	}

IL_00e5:
	{
		// ctrl1[i] = ctrl1Looped[i + margin];
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_61 = ___ctrl11;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_62 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_61);
		int32_t L_63 = V_12;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_64 = V_3;
		int32_t L_65 = V_12;
		int32_t L_66 = V_1;
		NullCheck(L_64);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_68 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_68);
		// ctrl2[i] = ctrl2Looped[i + margin];
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** L_69 = ___ctrl22;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_70 = *((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66**)L_69);
		int32_t L_71 = V_12;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_72 = V_4;
		int32_t L_73 = V_12;
		int32_t L_74 = V_1;
		NullCheck(L_72);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)L_74));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_76 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(L_71), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_76);
		// for (int i = 0; i < numPoints; ++i)
		int32_t L_77 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
	}

IL_0114:
	{
		// for (int i = 0; i < numPoints; ++i)
		int32_t L_78 = V_12;
		int32_t L_79 = V_0;
		V_13 = (bool)((((int32_t)L_78) < ((int32_t)L_79))? 1 : 0);
		bool L_80 = V_13;
		if (L_80)
		{
			goto IL_00e5;
		}
	}

IL_011f:
	{
		// }
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
// UnityEngine.Quaternion Cinemachine.Utility.UnityQuaternionExtensions::SlerpWithReferenceUp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  UnityQuaternionExtensions_SlerpWithReferenceUp_mA5EA8034D99CAD536ED015E57007A82B346EB834 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___qA0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___qB1, float ___t2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___up3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityQuaternionExtensions_SlerpWithReferenceUp_mA5EA8034D99CAD536ED015E57007A82B346EB834_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t G_B3_0 = 0;
	{
		// var dirA = (qA * Vector3.forward).ProjectOntoPlane(up);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___qA0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_0, L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___up3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// var dirB = (qB * Vector3.forward).ProjectOntoPlane(up);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = ___qB1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_5, L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = ___up3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA(L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// if (dirA.AlmostZero() || dirB.AlmostZero())
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		bool L_11 = UnityVectorExtensions_AlmostZero_m09DAF0093FD15B42729EC01B5017049E2C2602DF(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0035;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_1;
		bool L_13 = UnityVectorExtensions_AlmostZero_m09DAF0093FD15B42729EC01B5017049E2C2602DF(L_12, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_13));
		goto IL_0036;
	}

IL_0035:
	{
		G_B3_0 = 1;
	}

IL_0036:
	{
		V_8 = (bool)G_B3_0;
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_0048;
		}
	}
	{
		// return Quaternion.Slerp(qA, qB, t);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = ___qA0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = ___qB1;
		float L_17 = ___t2;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_15, L_16, L_17, /*hidden argument*/NULL);
		V_9 = L_18;
		goto IL_00c6;
	}

IL_0048:
	{
		// var qBase = Quaternion.LookRotation(dirA, up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = ___up3;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_19, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		// var qBaseInv = Quaternion.Inverse(qBase);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		// Quaternion qA1 = qBaseInv * qA;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = V_3;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = ___qA0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_24, L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		// Quaternion qB1 = qBaseInv * qB;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_27 = V_3;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = ___qB1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_29 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_27, L_28, /*hidden argument*/NULL);
		V_5 = L_29;
		// var eA = qA1.eulerAngles;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_4), /*hidden argument*/NULL);
		V_6 = L_30;
		// var eB = qB1.eulerAngles;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_5), /*hidden argument*/NULL);
		V_7 = L_31;
		// return qBase * Quaternion.Euler(
		//     Mathf.LerpAngle(eA.x, eB.x, t),
		//     Mathf.LerpAngle(eA.y, eB.y, t),
		//     Mathf.LerpAngle(eA.z, eB.z, t));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_32 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = V_6;
		float L_34 = L_33.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = V_7;
		float L_36 = L_35.get_x_2();
		float L_37 = ___t2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_38 = Mathf_LerpAngle_m8802FB8DCECA2D48FDD13C20F384B9430E66C99F(L_34, L_36, L_37, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = V_6;
		float L_40 = L_39.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = V_7;
		float L_42 = L_41.get_y_3();
		float L_43 = ___t2;
		float L_44 = Mathf_LerpAngle_m8802FB8DCECA2D48FDD13C20F384B9430E66C99F(L_40, L_42, L_43, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = V_6;
		float L_46 = L_45.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = V_7;
		float L_48 = L_47.get_z_4();
		float L_49 = ___t2;
		float L_50 = Mathf_LerpAngle_m8802FB8DCECA2D48FDD13C20F384B9430E66C99F(L_46, L_48, L_49, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_51 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_38, L_44, L_50, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_52 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_32, L_51, /*hidden argument*/NULL);
		V_9 = L_52;
		goto IL_00c6;
	}

IL_00c6:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_53 = V_9;
		return L_53;
	}
}
// UnityEngine.Quaternion Cinemachine.Utility.UnityQuaternionExtensions::Normalized(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  UnityQuaternionExtensions_Normalized_mB006F33E658FDC8C1816178450C650804F7201CB (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___q0, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector4 v = new Vector4(q.x, q.y, q.z, q.w).normalized;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___q0;
		float L_1 = L_0.get_x_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = ___q0;
		float L_3 = L_2.get_y_1();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___q0;
		float L_5 = L_4.get_z_2();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = ___q0;
		float L_7 = L_6.get_w_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_9 = Vector4_get_normalized_mE211195F38FA106A1B303EB0DA78F21BB5C469C3((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_9;
		// return new Quaternion(v.x, v.y, v.z, v.w);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_10 = V_0;
		float L_11 = L_10.get_x_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_12 = V_0;
		float L_13 = L_12.get_y_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_14 = V_0;
		float L_15 = L_14.get_z_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_16 = V_0;
		float L_17 = L_16.get_w_4();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((&L_18), L_11, L_13, L_15, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		goto IL_0047;
	}

IL_0047:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = V_2;
		return L_19;
	}
}
// UnityEngine.Vector2 Cinemachine.Utility.UnityQuaternionExtensions::GetCameraRotationToTarget(UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  UnityQuaternionExtensions_GetCameraRotationToTarget_m2FC346D5CDC3FA3E81B1D35B4667D72034572B67 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orient0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtDir1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldUp2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityQuaternionExtensions_GetCameraRotationToTarget_m2FC346D5CDC3FA3E81B1D35B4667D72034572B67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	{
		// if (lookAtDir.AlmostZero())
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___lookAtDir1;
		bool L_1 = UnityVectorExtensions_AlmostZero_m09DAF0093FD15B42729EC01B5017049E2C2602DF(L_0, /*hidden argument*/NULL);
		V_5 = L_1;
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return Vector2.zero;  // degenerate
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		V_6 = L_3;
		goto IL_00de;
	}

IL_0019:
	{
		// Quaternion toLocal = Quaternion.Inverse(orient);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___orient0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// Vector3 up = toLocal * worldUp;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___worldUp2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// lookAtDir = toLocal * lookAtDir;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = ___lookAtDir1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_9, L_10, /*hidden argument*/NULL);
		___lookAtDir1 = L_11;
		// float angleH = 0;
		V_2 = (0.0f);
		// Vector3 targetDirH = lookAtDir.ProjectOntoPlane(up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = ___lookAtDir1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA(L_12, L_13, /*hidden argument*/NULL);
		V_7 = L_14;
		// if (!targetDirH.AlmostZero())
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_7;
		bool L_16 = UnityVectorExtensions_AlmostZero_m09DAF0093FD15B42729EC01B5017049E2C2602DF(L_15, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_8;
		if (!L_17)
		{
			goto IL_00ab;
		}
	}
	{
		// Vector3 currentDirH = Vector3.forward.ProjectOntoPlane(up);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA(L_18, L_19, /*hidden argument*/NULL);
		V_9 = L_20;
		// if (currentDirH.AlmostZero())
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_9;
		bool L_22 = UnityVectorExtensions_AlmostZero_m09DAF0093FD15B42729EC01B5017049E2C2602DF(L_21, /*hidden argument*/NULL);
		V_10 = L_22;
		bool L_23 = V_10;
		if (!L_23)
		{
			goto IL_009f;
		}
	}
	{
		// if (Vector3.Dot(currentDirH, up) > 0)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_26 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_24, L_25, /*hidden argument*/NULL);
		V_11 = (bool)((((float)L_26) > ((float)(0.0f)))? 1 : 0);
		bool L_27 = V_11;
		if (!L_27)
		{
			goto IL_0091;
		}
	}
	{
		// currentDirH = Vector3.down.ProjectOntoPlane(up);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA(L_28, L_29, /*hidden argument*/NULL);
		V_9 = L_30;
		goto IL_009e;
	}

IL_0091:
	{
		// currentDirH = Vector3.up.ProjectOntoPlane(up);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA(L_31, L_32, /*hidden argument*/NULL);
		V_9 = L_33;
	}

IL_009e:
	{
	}

IL_009f:
	{
		// angleH = UnityVectorExtensions.SignedAngle(currentDirH, targetDirH, up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = V_9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = V_1;
		float L_37 = UnityVectorExtensions_SignedAngle_mACC4C418DBAC81BF1F719AAFCF2EE55364AE908D(L_34, L_35, L_36, /*hidden argument*/NULL);
		V_2 = L_37;
	}

IL_00ab:
	{
		// Quaternion q = Quaternion.AngleAxis(angleH, up);
		float L_38 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_40 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_38, L_39, /*hidden argument*/NULL);
		V_3 = L_40;
		// float angleV = UnityVectorExtensions.SignedAngle(
		//     q * Vector3.forward, lookAtDir, q * Vector3.right);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_41 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_41, L_42, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = ___lookAtDir1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_45 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_45, L_46, /*hidden argument*/NULL);
		float L_48 = UnityVectorExtensions_SignedAngle_mACC4C418DBAC81BF1F719AAFCF2EE55364AE908D(L_43, L_44, L_47, /*hidden argument*/NULL);
		V_4 = L_48;
		// return new Vector2(angleV, angleH);
		float L_49 = V_4;
		float L_50 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_51), L_49, L_50, /*hidden argument*/NULL);
		V_6 = L_51;
		goto IL_00de;
	}

IL_00de:
	{
		// }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_52 = V_6;
		return L_52;
	}
}
// UnityEngine.Quaternion Cinemachine.Utility.UnityQuaternionExtensions::ApplyCameraRotation(UnityEngine.Quaternion,UnityEngine.Vector2,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  UnityQuaternionExtensions_ApplyCameraRotation_m3E5594FA8D22EECF7DD709A26493DE5FAD7B0814 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orient0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rot1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldUp2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityQuaternionExtensions_ApplyCameraRotation_m3E5594FA8D22EECF7DD709A26493DE5FAD7B0814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Quaternion q = Quaternion.AngleAxis(rot.x, Vector3.right);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___rot1;
		float L_1 = L_0.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// return (Quaternion.AngleAxis(rot.y, worldUp) * orient) * q;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = ___rot1;
		float L_5 = L_4.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___worldUp2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_5, L_6, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = ___orient0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_7, L_8, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = V_1;
		return L_12;
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
// UnityEngine.Rect Cinemachine.Utility.UnityRectExtensions::Inflated(UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  UnityRectExtensions_Inflated_m5AA81D3FFB2CECE0523B2D03025E3448B82353D7 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___r0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___delta1, const RuntimeMethod* method)
{
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Rect(
		//     r.xMin - delta.x, r.yMin - delta.y,
		//     r.width + delta.x * 2, r.height + delta.y * 2);
		float L_0 = Rect_get_xMin_mFDFA74F66595FD2B8CE360183D1A92B575F0A76E((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r0), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___delta1;
		float L_2 = L_1.get_x_0();
		float L_3 = Rect_get_yMin_m31EDC3262BE39D2F6464B15397F882237E6158C3((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r0), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = ___delta1;
		float L_5 = L_4.get_y_1();
		float L_6 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r0), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = ___delta1;
		float L_8 = L_7.get_x_0();
		float L_9 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r0), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = ___delta1;
		float L_11 = L_10.get_y_1();
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_12), ((float)il2cpp_codegen_subtract((float)L_0, (float)L_2)), ((float)il2cpp_codegen_subtract((float)L_3, (float)L_5)), ((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)L_8, (float)(2.0f))))), ((float)il2cpp_codegen_add((float)L_9, (float)((float)il2cpp_codegen_multiply((float)L_11, (float)(2.0f))))), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_004d;
	}

IL_004d:
	{
		// }
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_13 = V_0;
		return L_13;
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
// System.Single Cinemachine.Utility.UnityVectorExtensions::ClosestPointOnSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_ClosestPointOnSegment_mB4297DD213BAA7738E173F1B6A8AE7295812EF5A (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s01, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s12, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_ClosestPointOnSegment_mB4297DD213BAA7738E173F1B6A8AE7295812EF5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		// Vector3 s = s1 - s0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___s12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___s01;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// float len2 = Vector3.SqrMagnitude(s);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		float L_4 = Vector3_SqrMagnitude_mBE7ED92F28BBE09310975CDF329913C04EA9500E(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (len2 < Epsilon)
		float L_5 = V_1;
		V_2 = (bool)((((float)L_5) < ((float)(0.0001f)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		// return 0; // degenrate segment
		V_3 = (0.0f);
		goto IL_003b;
	}

IL_0024:
	{
		// return Mathf.Clamp01(Vector3.Dot(p - s0, s) / len2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___p0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = ___s01;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_7, L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		float L_11 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_9, L_10, /*hidden argument*/NULL);
		float L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(((float)((float)L_11/(float)L_12)), /*hidden argument*/NULL);
		V_3 = L_13;
		goto IL_003b;
	}

IL_003b:
	{
		// }
		float L_14 = V_3;
		return L_14;
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::ClosestPointOnSegment(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_ClosestPointOnSegment_m85309B3AC8DD44D081FFA53A2A9D844BCB7046FF (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___s01, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___s12, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_ClosestPointOnSegment_m85309B3AC8DD44D081FFA53A2A9D844BCB7046FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		// Vector2 s = s1 - s0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___s12;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___s01;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// float len2 = Vector2.SqrMagnitude(s);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = V_0;
		float L_4 = Vector2_SqrMagnitude_m1095C695F57FB6A2C440F3FEA6876ABB87F0C696(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (len2 < Epsilon)
		float L_5 = V_1;
		V_2 = (bool)((((float)L_5) < ((float)(0.0001f)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		// return 0; // degenrate segment
		V_3 = (0.0f);
		goto IL_003b;
	}

IL_0024:
	{
		// return Mathf.Clamp01(Vector2.Dot(p - s0, s) / len2);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = ___p0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = ___s01;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_7, L_8, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = V_0;
		float L_11 = Vector2_Dot_m34F6A75BE3FC6F728233811943AC4406C7D905BA(L_9, L_10, /*hidden argument*/NULL);
		float L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(((float)((float)L_11/(float)L_12)), /*hidden argument*/NULL);
		V_3 = L_13;
		goto IL_003b;
	}

IL_003b:
	{
		// }
		float L_14 = V_3;
		return L_14;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.UnityVectorExtensions::ProjectOntoPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___planeNormal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return (vector - Vector3.Dot(vector, planeNormal) * planeNormal);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___vector0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___vector0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___planeNormal1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_3 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_1, L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___planeNormal1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_3, L_4, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.UnityVectorExtensions::Abs(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  UnityVectorExtensions_Abs_m306CBBA7519A685B4A409FA92A75A450A7A03E82 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_Abs_m306CBBA7519A685B4A409FA92A75A450A7A03E82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector3(Mathf.Abs(v.x), Mathf.Abs(v.y), Mathf.Abs(v.z));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = fabsf(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___v0;
		float L_4 = L_3.get_y_3();
		float L_5 = fabsf(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___v0;
		float L_7 = L_6.get_z_4();
		float L_8 = fabsf(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		return L_10;
	}
}
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::AlmostZero(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_AlmostZero_m09DAF0093FD15B42729EC01B5017049E2C2602DF (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return v.sqrMagnitude < (Epsilon * Epsilon);
		float L_0 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___v0), /*hidden argument*/NULL);
		V_0 = (bool)((((float)L_0) < ((float)(9.999999E-09f)))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_Angle_m51BB9FF2F18CF2F2B7CCCFDF4B22F6061B487FD3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v10, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_Angle_m51BB9FF2F18CF2F2B7CCCFDF4B22F6061B487FD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// v1.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___v10), /*hidden argument*/NULL);
		// v2.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___v21), /*hidden argument*/NULL);
		// return Mathf.Atan2((v1 - v2).magnitude, (v1 + v2).magnitude) * Mathf.Rad2Deg * 2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___v10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___v21;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___v10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___v21;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_8 = atan2f(L_3, L_7);
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)(57.29578f))), (float)(2.0f)));
		goto IL_0043;
	}

IL_0043:
	{
		// }
		float L_9 = V_1;
		return L_9;
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_SignedAngle_mACC4C418DBAC81BF1F719AAFCF2EE55364AE908D (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v10, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v21, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___up2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_SignedAngle_mACC4C418DBAC81BF1F719AAFCF2EE55364AE908D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		// float angle = Angle(v1, v2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___v10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___v21;
		float L_2 = UnityVectorExtensions_Angle_m51BB9FF2F18CF2F2B7CCCFDF4B22F6061B487FD3(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (Mathf.Sign(Vector3.Dot(up, Vector3.Cross(v1, v2))) < 0)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___up2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___v10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___v21;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_4, L_5, /*hidden argument*/NULL);
		float L_7 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_3, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_8 = Mathf_Sign_m6FA1D12786BEE0419D4B9426E5E4955F286BC8D3(L_7, /*hidden argument*/NULL);
		V_1 = (bool)((((float)L_8) < ((float)(0.0f)))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_002b;
		}
	}
	{
		// return -angle;
		float L_10 = V_0;
		V_2 = ((-L_10));
		goto IL_002f;
	}

IL_002b:
	{
		// return angle;
		float L_11 = V_0;
		V_2 = L_11;
		goto IL_002f;
	}

IL_002f:
	{
		// }
		float L_12 = V_2;
		return L_12;
	}
}
// UnityEngine.Quaternion Cinemachine.Utility.UnityVectorExtensions::SafeFromToRotation(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  UnityVectorExtensions_SafeFromToRotation_mD8833A51B691738B2F6EFB46750C92380AC0B6BC (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v10, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v21, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___up2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_SafeFromToRotation_mD8833A51B691738B2F6EFB46750C92380AC0B6BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var axis = Vector3.Cross(v1, v2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___v10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___v21;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (axis.AlmostZero())
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		bool L_4 = UnityVectorExtensions_AlmostZero_m09DAF0093FD15B42729EC01B5017049E2C2602DF(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0015;
		}
	}
	{
		// axis = up; // in case they are pointing in opposite directions
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___up2;
		V_0 = L_6;
	}

IL_0015:
	{
		// return Quaternion.AngleAxis(Angle(v1, v2), axis);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___v10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = ___v21;
		float L_9 = UnityVectorExtensions_Angle_m51BB9FF2F18CF2F2B7CCCFDF4B22F6061B487FD3(L_7, L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = V_2;
		return L_12;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.UnityVectorExtensions::SlerpWithReferenceUp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  UnityVectorExtensions_SlerpWithReferenceUp_m2C4005C18D79C50E3DD198E7C067AC46D4FFEAEF (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vA0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vB1, float ___t2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___up3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_SlerpWithReferenceUp_m2C4005C18D79C50E3DD198E7C067AC46D4FFEAEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t G_B3_0 = 0;
	{
		// float dA = vA.magnitude;
		float L_0 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___vA0), /*hidden argument*/NULL);
		V_0 = L_0;
		// float dB = vB.magnitude;
		float L_1 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___vB1), /*hidden argument*/NULL);
		V_1 = L_1;
		// if (dA < Epsilon || dB < Epsilon)
		float L_2 = V_0;
		if ((((float)L_2) < ((float)(0.0001f))))
		{
			goto IL_0023;
		}
	}
	{
		float L_3 = V_1;
		G_B3_0 = ((((float)L_3) < ((float)(0.0001f)))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 1;
	}

IL_0024:
	{
		V_8 = (bool)G_B3_0;
		bool L_4 = V_8;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// return Vector3.Lerp(vA, vB, t);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___vA0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___vB1;
		float L_7 = ___t2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_5, L_6, L_7, /*hidden argument*/NULL);
		V_9 = L_8;
		goto IL_0086;
	}

IL_0036:
	{
		// Vector3 dirA = vA / dA;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = ___vA0;
		float L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// Vector3 dirB = vB / dB;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = ___vB1;
		float L_13 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		// Quaternion qA = Quaternion.LookRotation(dirA, up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = ___up3;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_15, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		// Quaternion qB = Quaternion.LookRotation(dirB, up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = ___up3;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_18, L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		// Quaternion q = UnityQuaternionExtensions.SlerpWithReferenceUp(qA, qB, t, up);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = V_4;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = V_5;
		float L_23 = ___t2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = ___up3;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = UnityQuaternionExtensions_SlerpWithReferenceUp_mA5EA8034D99CAD536ED015E57007A82B346EB834(L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		// Vector3 dir = q * Vector3.forward;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_26, L_27, /*hidden argument*/NULL);
		V_7 = L_28;
		// return dir * Mathf.Lerp(dA, dB, t);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_7;
		float L_30 = V_0;
		float L_31 = V_1;
		float L_32 = ___t2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_33 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_30, L_31, L_32, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_29, L_33, /*hidden argument*/NULL);
		V_9 = L_34;
		goto IL_0086;
	}

IL_0086:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = V_9;
		return L_35;
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
// System.Void Cinemachine.VcamTargetPropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VcamTargetPropertyAttribute__ctor_m96B4DF52A5F34FE5968B19EB62FE32535997E456 (VcamTargetPropertyAttribute_t7DF91AEFF1BD2B83D640D6D39F1720CB57798B1F * __this, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_m7F5C473F39D5601486C1127DA0D52F2DC293FC35(__this, /*hidden argument*/NULL);
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
// System.Void CinemachineCameraOffset::PostPipelineStageCallback(Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/Stage,Cinemachine.CameraState&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineCameraOffset_PostPipelineStageCallback_m12777380D2DCFC115C2A8AE6F07304C62B88C049 (CinemachineCameraOffset_t2D656B9D964F68E61A5168495C2666BE6B8AD693 * __this, CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___vcam0, int32_t ___stage1, CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * ___state2, float ___deltaTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineCameraOffset_PostPipelineStageCallback_m12777380D2DCFC115C2A8AE6F07304C62B88C049_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B5_0 = 0;
	{
		// if (stage == m_ApplyAfter)
		int32_t L_0 = ___stage1;
		int32_t L_1 = __this->get_m_ApplyAfter_8();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00ee;
		}
	}
	{
		// bool preserveAim = m_PreserveComposition
		//     && state.HasLookAt && stage > CinemachineCore.Stage.Body;
		bool L_3 = __this->get_m_PreserveComposition_9();
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_4 = ___state2;
		bool L_5 = CameraState_get_HasLookAt_mAD63C086CB17D6AF1F4462AB0F21F3DD52AC582B((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = ___stage1;
		G_B5_0 = ((((int32_t)L_6) > ((int32_t)0))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B5_0;
		// Vector3 screenOffset = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// if (preserveAim)
		bool L_9 = V_1;
		V_4 = L_9;
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		// screenOffset = state.RawOrientation.GetCameraRotationToTarget(
		//     state.ReferenceLookAt - state.CorrectedPosition, state.ReferenceUp);
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_11 = ___state2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = CameraState_get_RawOrientation_mEB165F5AB11D2EE2BCD0D9797103539EEA297623_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_11, /*hidden argument*/NULL);
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_13 = ___state2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = CameraState_get_ReferenceLookAt_m3FCCFB59361130B202C526D5F88FA11E1CC796EC_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_13, /*hidden argument*/NULL);
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_15 = ___state2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = CameraState_get_CorrectedPosition_mB0BA158101511615DB798168E64D3AFC0228B9AA((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_14, L_16, /*hidden argument*/NULL);
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_18 = ___state2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = CameraState_get_ReferenceUp_mC19FC2F8C4846C140CC7EBE45C16DD07DEA9809B_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_18, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = UnityQuaternionExtensions_GetCameraRotationToTarget_m2FC346D5CDC3FA3E81B1D35B4667D72034572B67(L_12, L_17, L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_0066:
	{
		// Vector3 offset = state.RawOrientation * m_Offset;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_22 = ___state2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = CameraState_get_RawOrientation_mEB165F5AB11D2EE2BCD0D9797103539EEA297623_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = __this->get_m_Offset_7();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_23, L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		// state.PositionCorrection += offset;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_26 = ___state2;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_27 = L_26;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = CameraState_get_PositionCorrection_m81476CD9BBC93E1AE8A47E6BA8D6E08F112D1CFD_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_27, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_28, L_29, /*hidden argument*/NULL);
		CameraState_set_PositionCorrection_m2CEDE7298CE80A5E020285AD21C2F39353563CB8_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_27, L_30, /*hidden argument*/NULL);
		// if (!preserveAim)
		bool L_31 = V_1;
		V_5 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_5;
		if (!L_32)
		{
			goto IL_00aa;
		}
	}
	{
		// state.ReferenceLookAt += offset;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_33 = ___state2;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_34 = L_33;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = CameraState_get_ReferenceLookAt_m3FCCFB59361130B202C526D5F88FA11E1CC796EC_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_34, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_35, L_36, /*hidden argument*/NULL);
		CameraState_set_ReferenceLookAt_m33C644687C407C4208346D59D6DCFA911E2B5588_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_34, L_37, /*hidden argument*/NULL);
		goto IL_00ed;
	}

IL_00aa:
	{
		// var q = Quaternion.LookRotation(
		//     state.ReferenceLookAt - state.CorrectedPosition, state.ReferenceUp);
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_38 = ___state2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = CameraState_get_ReferenceLookAt_m3FCCFB59361130B202C526D5F88FA11E1CC796EC_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_38, /*hidden argument*/NULL);
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_40 = ___state2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = CameraState_get_CorrectedPosition_mB0BA158101511615DB798168E64D3AFC0228B9AA((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_39, L_41, /*hidden argument*/NULL);
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_43 = ___state2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = CameraState_get_ReferenceUp_mC19FC2F8C4846C140CC7EBE45C16DD07DEA9809B_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_45 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_42, L_44, /*hidden argument*/NULL);
		V_6 = L_45;
		// q = q.ApplyCameraRotation(-screenOffset, state.ReferenceUp);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_46 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_49 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_48, /*hidden argument*/NULL);
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_50 = ___state2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = CameraState_get_ReferenceUp_mC19FC2F8C4846C140CC7EBE45C16DD07DEA9809B_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_50, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_52 = UnityQuaternionExtensions_ApplyCameraRotation_m3E5594FA8D22EECF7DD709A26493DE5FAD7B0814(L_46, L_49, L_51, /*hidden argument*/NULL);
		V_6 = L_52;
		// state.RawOrientation = q;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_53 = ___state2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_54 = V_6;
		CameraState_set_RawOrientation_m366411C5A4E24AAB88BAF5DDC5174397F099B976_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_53, L_54, /*hidden argument*/NULL);
	}

IL_00ed:
	{
	}

IL_00ee:
	{
		// }
		return;
	}
}
// System.Void CinemachineCameraOffset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineCameraOffset__ctor_m98184CA5AE9FE91AB824BB023B17ECF5BD1019BF (CinemachineCameraOffset_t2D656B9D964F68E61A5168495C2666BE6B8AD693 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineCameraOffset__ctor_m98184CA5AE9FE91AB824BB023B17ECF5BD1019BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3 m_Offset = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_m_Offset_7(L_0);
		// public CinemachineCore.Stage m_ApplyAfter = CinemachineCore.Stage.Aim;
		__this->set_m_ApplyAfter_8(1);
		CinemachineExtension__ctor_mF3457052C6CEDAB03B20CFBDF3C9760307CC68DC(__this, /*hidden argument*/NULL);
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
// System.Void CinemachineMixer::OnPlayableDestroy(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineMixer_OnPlayableDestroy_m34D62485682D21923664DF61BEBD71E1A1EF44CB (CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2 * __this, Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineMixer_OnPlayableDestroy_m34D62485682D21923664DF61BEBD71E1A1EF44CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (mBrain != null)
		CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * L_0 = __this->get_mBrain_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// mBrain.ReleaseCameraOverride(mBrainOverrideId); // clean up
		CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * L_3 = __this->get_mBrain_1();
		int32_t L_4 = __this->get_mBrainOverrideId_2();
		NullCheck(L_3);
		CinemachineBrain_ReleaseCameraOverride_m77A2D0A792D692E4DDC383539DD7A6BFB6001847(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// mBrainOverrideId = -1;
		__this->set_mBrainOverrideId_2((-1));
		// }
		return;
	}
}
// System.Void CinemachineMixer::PrepareFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineMixer_PrepareFrame_m8EB46CE26F50B8D8EA6228CC40722EC7848B1697 (CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2 * __this, Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E  ___info1, const RuntimeMethod* method)
{
	{
		// mPreviewPlay = false;
		__this->set_mPreviewPlay_3((bool)0);
		// }
		return;
	}
}
// System.Void CinemachineMixer::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineMixer_ProcessFrame_mF8767A07041ADA879C57F56736DE89454E9BDF09 (CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2 * __this, Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E  ___info1, RuntimeObject * ___playerData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineMixer_ProcessFrame_mF8767A07041ADA879C57F56736DE89454E9BDF09_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	float V_5 = 0.0f;
	RuntimeObject* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  V_12;
	memset((&V_12), 0, sizeof(V_12));
	CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	int32_t V_21 = 0;
	bool V_22 = false;
	CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * V_23 = NULL;
	ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  V_24;
	memset((&V_24), 0, sizeof(V_24));
	bool V_25 = false;
	CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * V_26 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B23_0 = 0;
	{
		// base.ProcessFrame(playable, info, playerData);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_0 = ___playable0;
		FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E  L_1 = ___info1;
		RuntimeObject * L_2 = ___playerData2;
		PlayableBehaviour_ProcessFrame_m32F9B265BB54D1A3A290E2709FDD0B873360B25A(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// GameObject go = playerData as GameObject;
		RuntimeObject * L_3 = ___playerData2;
		V_0 = ((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)IsInstSealed((RuntimeObject*)L_3, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var));
		// if (go == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_8 = L_5;
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		// mBrain = (CinemachineBrain)playerData;
		RuntimeObject * L_7 = ___playerData2;
		__this->set_mBrain_1(((CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB *)CastclassClass((RuntimeObject*)L_7, CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_il2cpp_TypeInfo_var)));
		goto IL_0039;
	}

IL_002d:
	{
		// mBrain = go.GetComponent<CinemachineBrain>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_0;
		NullCheck(L_8);
		CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * L_9 = GameObject_GetComponent_TisCinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_mBD916E48F072E85917A54BADF9B02330C838FEA0(L_8, /*hidden argument*/GameObject_GetComponent_TisCinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_mBD916E48F072E85917A54BADF9B02330C838FEA0_RuntimeMethod_var);
		__this->set_mBrain_1(L_9);
	}

IL_0039:
	{
		// if (mBrain == null)
		CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * L_10 = __this->get_mBrain_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_9 = L_11;
		bool L_12 = V_9;
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		// return;
		goto IL_0218;
	}

IL_0050:
	{
		// int activeInputs = 0;
		V_1 = 0;
		// int clipIndexA = -1;
		V_2 = (-1);
		// int clipIndexB = -1;
		V_3 = (-1);
		// bool incomingIsA = false; // Assume that incoming clip is clip B
		V_4 = (bool)0;
		// float weightB = 1;
		V_5 = (1.0f);
		// for (int i = 0; i < playable.GetInputCount(); ++i)
		V_10 = 0;
		goto IL_011c;
	}

IL_0068:
	{
		// float weight = playable.GetInputWeight(i);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_13 = ___playable0;
		int32_t L_14 = V_10;
		float L_15 = PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBAE3A98FEA61C11C997238263E219EEE147E0F2B(L_13, L_14, /*hidden argument*/PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBAE3A98FEA61C11C997238263E219EEE147E0F2B_RuntimeMethod_var);
		V_11 = L_15;
		// var clip = (ScriptPlayable<CinemachineShotPlayable>)playable.GetInput(i);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_16 = ___playable0;
		int32_t L_17 = V_10;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_18 = PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92(L_16, L_17, /*hidden argument*/PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_19 = ScriptPlayable_1_op_Explicit_m8AFDFB2071A6323A8AF5A938EBF5547C28F01652(L_18, /*hidden argument*/ScriptPlayable_1_op_Explicit_m8AFDFB2071A6323A8AF5A938EBF5547C28F01652_RuntimeMethod_var);
		V_12 = L_19;
		// CinemachineShotPlayable shot = clip.GetBehaviour();
		CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * L_20 = ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8((ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A *)(&V_12), /*hidden argument*/ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8_RuntimeMethod_var);
		V_13 = L_20;
		// if (shot != null && shot.IsValid
		//     && playable.GetPlayState() == PlayState.Playing
		//     && weight > 0)
		CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * L_21 = V_13;
		if (!L_21)
		{
			goto IL_00ac;
		}
	}
	{
		CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * L_22 = V_13;
		NullCheck(L_22);
		bool L_23 = CinemachineShotPlayable_get_IsValid_mB1F51FF9816FBC56D680EB7F47919C5C69C35331(L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00ac;
		}
	}
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_24 = ___playable0;
		int32_t L_25 = PlayableExtensions_GetPlayState_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2449EED62648E08ED363284EEFF1080E562C7981(L_24, /*hidden argument*/PlayableExtensions_GetPlayState_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2449EED62648E08ED363284EEFF1080E562C7981_RuntimeMethod_var);
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_00ac;
		}
	}
	{
		float L_26 = V_11;
		G_B11_0 = ((((float)L_26) > ((float)(0.0f)))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B11_0 = 0;
	}

IL_00ad:
	{
		V_14 = (bool)G_B11_0;
		bool L_27 = V_14;
		if (!L_27)
		{
			goto IL_0115;
		}
	}
	{
		// clipIndexA = clipIndexB;
		int32_t L_28 = V_3;
		V_2 = L_28;
		// clipIndexB = i;
		int32_t L_29 = V_10;
		V_3 = L_29;
		// weightB = weight;
		float L_30 = V_11;
		V_5 = L_30;
		// if (++activeInputs == 2)
		int32_t L_31 = V_1;
		int32_t L_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		V_1 = L_32;
		V_15 = (bool)((((int32_t)L_32) == ((int32_t)2))? 1 : 0);
		bool L_33 = V_15;
		if (!L_33)
		{
			goto IL_0114;
		}
	}
	{
		// var clipA = playable.GetInput(clipIndexA);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_34 = ___playable0;
		int32_t L_35 = V_2;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_36 = PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92(L_34, L_35, /*hidden argument*/PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92_RuntimeMethod_var);
		V_16 = L_36;
		// incomingIsA = clip.GetTime() >= clipA.GetTime();
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_37 = V_12;
		double L_38 = PlayableExtensions_GetTime_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m0EC69EBE63C5C7E96133DEBDAB0CEBCFA5A74BDB(L_37, /*hidden argument*/PlayableExtensions_GetTime_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m0EC69EBE63C5C7E96133DEBDAB0CEBCFA5A74BDB_RuntimeMethod_var);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_39 = V_16;
		double L_40 = PlayableExtensions_GetTime_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2B7F64DD20E0D9B18A3E60B1B0BB0056B7C6747D(L_39, /*hidden argument*/PlayableExtensions_GetTime_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2B7F64DD20E0D9B18A3E60B1B0BB0056B7C6747D_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)((!(((double)L_38) >= ((double)L_40)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// if (clip.GetTime() == clipA.GetTime())
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_41 = V_12;
		double L_42 = PlayableExtensions_GetTime_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m0EC69EBE63C5C7E96133DEBDAB0CEBCFA5A74BDB(L_41, /*hidden argument*/PlayableExtensions_GetTime_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m0EC69EBE63C5C7E96133DEBDAB0CEBCFA5A74BDB_RuntimeMethod_var);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_43 = V_16;
		double L_44 = PlayableExtensions_GetTime_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2B7F64DD20E0D9B18A3E60B1B0BB0056B7C6747D(L_43, /*hidden argument*/PlayableExtensions_GetTime_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2B7F64DD20E0D9B18A3E60B1B0BB0056B7C6747D_RuntimeMethod_var);
		V_17 = (bool)((((double)L_42) == ((double)L_44))? 1 : 0);
		bool L_45 = V_17;
		if (!L_45)
		{
			goto IL_0112;
		}
	}
	{
		// incomingIsA = clip.GetDuration() < clipA.GetDuration();
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_46 = V_12;
		double L_47 = PlayableExtensions_GetDuration_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m5311B48AA1AC40CCC1C7E5F416C71CB0D5C2F77D(L_46, /*hidden argument*/PlayableExtensions_GetDuration_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m5311B48AA1AC40CCC1C7E5F416C71CB0D5C2F77D_RuntimeMethod_var);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_48 = V_16;
		double L_49 = PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m3557C19B4048EF5C9E875572F0E47D5EFB8E8E75(L_48, /*hidden argument*/PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m3557C19B4048EF5C9E875572F0E47D5EFB8E8E75_RuntimeMethod_var);
		V_4 = (bool)((((double)L_47) < ((double)L_49))? 1 : 0);
	}

IL_0112:
	{
		// break;
		goto IL_012f;
	}

IL_0114:
	{
	}

IL_0115:
	{
		// for (int i = 0; i < playable.GetInputCount(); ++i)
		int32_t L_50 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_011c:
	{
		// for (int i = 0; i < playable.GetInputCount(); ++i)
		int32_t L_51 = V_10;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_52 = ___playable0;
		int32_t L_53 = PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mD04A716A5F8BF194F20D8AA2CEC2388233504F33(L_52, /*hidden argument*/PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mD04A716A5F8BF194F20D8AA2CEC2388233504F33_RuntimeMethod_var);
		V_18 = (bool)((((int32_t)L_51) < ((int32_t)L_53))? 1 : 0);
		bool L_54 = V_18;
		if (L_54)
		{
			goto IL_0068;
		}
	}

IL_012f:
	{
		// if (activeInputs == 1 && weightB < 1
		//         && playable.GetInput(clipIndexB).GetTime() > playable.GetInput(clipIndexB).GetDuration() / 2)
		int32_t L_55 = V_1;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0162;
		}
	}
	{
		float L_56 = V_5;
		if ((!(((float)L_56) < ((float)(1.0f)))))
		{
			goto IL_0162;
		}
	}
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_57 = ___playable0;
		int32_t L_58 = V_3;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_59 = PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92(L_57, L_58, /*hidden argument*/PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92_RuntimeMethod_var);
		double L_60 = PlayableExtensions_GetTime_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2B7F64DD20E0D9B18A3E60B1B0BB0056B7C6747D(L_59, /*hidden argument*/PlayableExtensions_GetTime_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2B7F64DD20E0D9B18A3E60B1B0BB0056B7C6747D_RuntimeMethod_var);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_61 = ___playable0;
		int32_t L_62 = V_3;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_63 = PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92(L_61, L_62, /*hidden argument*/PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92_RuntimeMethod_var);
		double L_64 = PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m3557C19B4048EF5C9E875572F0E47D5EFB8E8E75(L_63, /*hidden argument*/PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m3557C19B4048EF5C9E875572F0E47D5EFB8E8E75_RuntimeMethod_var);
		G_B23_0 = ((((double)L_60) > ((double)((double)((double)L_64/(double)(2.0)))))? 1 : 0);
		goto IL_0163;
	}

IL_0162:
	{
		G_B23_0 = 0;
	}

IL_0163:
	{
		V_19 = (bool)G_B23_0;
		bool L_65 = V_19;
		if (!L_65)
		{
			goto IL_016e;
		}
	}
	{
		// incomingIsA = true;
		V_4 = (bool)1;
	}

IL_016e:
	{
		// if (incomingIsA)
		bool L_66 = V_4;
		V_20 = L_66;
		bool L_67 = V_20;
		if (!L_67)
		{
			goto IL_018a;
		}
	}
	{
		// (clipIndexA, clipIndexB) = (clipIndexB, clipIndexA);
		int32_t L_68 = V_3;
		int32_t L_69 = V_2;
		V_21 = L_69;
		V_2 = L_68;
		int32_t L_70 = V_21;
		V_3 = L_70;
		// weightB = 1 - weightB;
		float L_71 = V_5;
		V_5 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_71));
	}

IL_018a:
	{
		// ICinemachineCamera camA = null;
		V_6 = (RuntimeObject*)NULL;
		// if (clipIndexA >= 0)
		int32_t L_72 = V_2;
		V_22 = (bool)((((int32_t)((((int32_t)L_72) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_73 = V_22;
		if (!L_73)
		{
			goto IL_01bc;
		}
	}
	{
		// CinemachineShotPlayable shot
		//     = ((ScriptPlayable<CinemachineShotPlayable>)playable.GetInput(clipIndexA)).GetBehaviour();
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_74 = ___playable0;
		int32_t L_75 = V_2;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_76 = PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92(L_74, L_75, /*hidden argument*/PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_77 = ScriptPlayable_1_op_Explicit_m8AFDFB2071A6323A8AF5A938EBF5547C28F01652(L_76, /*hidden argument*/ScriptPlayable_1_op_Explicit_m8AFDFB2071A6323A8AF5A938EBF5547C28F01652_RuntimeMethod_var);
		V_24 = L_77;
		CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * L_78 = ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8((ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A *)(&V_24), /*hidden argument*/ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8_RuntimeMethod_var);
		V_23 = L_78;
		// camA = shot.VirtualCamera;
		CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * L_79 = V_23;
		NullCheck(L_79);
		CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_80 = L_79->get_VirtualCamera_0();
		V_6 = L_80;
	}

IL_01bc:
	{
		// ICinemachineCamera camB = null;
		V_7 = (RuntimeObject*)NULL;
		// if (clipIndexB >= 0)
		int32_t L_81 = V_3;
		V_25 = (bool)((((int32_t)((((int32_t)L_81) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_82 = V_25;
		if (!L_82)
		{
			goto IL_01ee;
		}
	}
	{
		// CinemachineShotPlayable shot
		//     = ((ScriptPlayable<CinemachineShotPlayable>)playable.GetInput(clipIndexB)).GetBehaviour();
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_83 = ___playable0;
		int32_t L_84 = V_3;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_85 = PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92(L_83, L_84, /*hidden argument*/PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_86 = ScriptPlayable_1_op_Explicit_m8AFDFB2071A6323A8AF5A938EBF5547C28F01652(L_85, /*hidden argument*/ScriptPlayable_1_op_Explicit_m8AFDFB2071A6323A8AF5A938EBF5547C28F01652_RuntimeMethod_var);
		V_24 = L_86;
		CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * L_87 = ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8((ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A *)(&V_24), /*hidden argument*/ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8_RuntimeMethod_var);
		V_26 = L_87;
		// camB = shot.VirtualCamera;
		CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * L_88 = V_26;
		NullCheck(L_88);
		CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_89 = L_88->get_VirtualCamera_0();
		V_7 = L_89;
	}

IL_01ee:
	{
		// mBrainOverrideId = mBrain.SetCameraOverride(
		//     mBrainOverrideId, camA, camB, weightB, GetDeltaTime(info.deltaTime));
		CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * L_90 = __this->get_mBrain_1();
		int32_t L_91 = __this->get_mBrainOverrideId_2();
		RuntimeObject* L_92 = V_6;
		RuntimeObject* L_93 = V_7;
		float L_94 = V_5;
		float L_95 = FrameData_get_deltaTime_m819B2E98971747205F7B8A66044C537FB79C719A((FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E *)(&___info1), /*hidden argument*/NULL);
		float L_96 = CinemachineMixer_GetDeltaTime_mEA6473C55C1D43106E7F6EF9B15E58955D418A2D(__this, L_95, /*hidden argument*/NULL);
		NullCheck(L_90);
		int32_t L_97 = CinemachineBrain_SetCameraOverride_m77B47E9D9567F4143E21EFE789D9AFDF8167283C(L_90, L_91, L_92, L_93, L_94, L_96, /*hidden argument*/NULL);
		__this->set_mBrainOverrideId_2(L_97);
	}

IL_0218:
	{
		// }
		return;
	}
}
// System.Single CinemachineMixer::GetDeltaTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineMixer_GetDeltaTime_mEA6473C55C1D43106E7F6EF9B15E58955D418A2D (CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2 * __this, float ___deltaTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineMixer_GetDeltaTime_mEA6473C55C1D43106E7F6EF9B15E58955D418A2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (mPreviewPlay || Application.isPlaying)
		bool L_0 = __this->get_mPreviewPlay_3();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 1;
	}

IL_0011:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return deltaTime;
		float L_3 = ___deltaTime0;
		V_1 = L_3;
		goto IL_003e;
	}

IL_0019:
	{
		// if (TargetPositionCache.CacheMode == TargetPositionCache.Mode.Playback
		//     && TargetPositionCache.HasHurrentTime)
		IL2CPP_RUNTIME_CLASS_INIT(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_il2cpp_TypeInfo_var);
		int32_t L_4 = TargetPositionCache_get_CacheMode_m7C4D3FC799E34E324A56B695AC9D6E6844B8725C_inline(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_il2cpp_TypeInfo_var);
		bool L_5 = TargetPositionCache_get_HasHurrentTime_m594606DB4749A8EA02668BD3C5E13514C07A15E4(/*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B8_0 = 0;
	}

IL_0029:
	{
		V_2 = (bool)G_B8_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// return 0;
		V_1 = (0.0f);
		goto IL_003e;
	}

IL_0036:
	{
		// return -1;
		V_1 = (-1.0f);
		goto IL_003e;
	}

IL_003e:
	{
		// }
		float L_7 = V_1;
		return L_7;
	}
}
// System.Void CinemachineMixer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineMixer__ctor_m6D2650596B2C17AA89A120A5405F730F795C6286 (CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2 * __this, const RuntimeMethod* method)
{
	{
		// private int mBrainOverrideId = -1;
		__this->set_mBrainOverrideId_2((-1));
		PlayableBehaviour__ctor_mE96A877D927BEEC8C9368A0673FEAD77A78C35EE(__this, /*hidden argument*/NULL);
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
// System.Void CinemachineMixer/MasterDirectorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MasterDirectorDelegate__ctor_mAC425F6E2BACE4CC0CB895CD7D1D7B1A18FA8021 (MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Playables.PlayableDirector CinemachineMixer/MasterDirectorDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * MasterDirectorDelegate_Invoke_mCF74487E3728A2208F2D3B6FF93103E0654D5E3E (MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6 * __this, const RuntimeMethod* method)
{
	PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult CinemachineMixer/MasterDirectorDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MasterDirectorDelegate_BeginInvoke_m1603727B115FDA229ECBA49CF54F74DDDA463A36 (MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// UnityEngine.Playables.PlayableDirector CinemachineMixer/MasterDirectorDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * MasterDirectorDelegate_EndInvoke_m5AC97662C1EFCC5BD15E4CE9C8805C1123C2450C (MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CinemachineRecomposer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineRecomposer_Reset_m0BCA3AA5476D013AFD2D89A153642CCFE0D27E3B (CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD * __this, const RuntimeMethod* method)
{
	{
		// m_ApplyAfter = CinemachineCore.Stage.Finalize;
		__this->set_m_ApplyAfter_7(3);
		// m_Tilt = 0;
		__this->set_m_Tilt_8((0.0f));
		// m_Pan = 0;
		__this->set_m_Pan_9((0.0f));
		// m_Dutch = 0;
		__this->set_m_Dutch_10((0.0f));
		// m_ZoomScale = 1;
		__this->set_m_ZoomScale_11((1.0f));
		// m_FollowAttachment = 1;
		__this->set_m_FollowAttachment_12((1.0f));
		// m_LookAtAttachment = 1;
		__this->set_m_LookAtAttachment_13((1.0f));
		// }
		return;
	}
}
// System.Void CinemachineRecomposer::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineRecomposer_OnValidate_m22401285E4DCB06E90E12410C7F4ACB30A81EF73 (CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineRecomposer_OnValidate_m22401285E4DCB06E90E12410C7F4ACB30A81EF73_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ZoomScale = Mathf.Max(0.01f, m_ZoomScale);
		float L_0 = __this->get_m_ZoomScale_11();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65((0.01f), L_0, /*hidden argument*/NULL);
		__this->set_m_ZoomScale_11(L_1);
		// m_FollowAttachment = Mathf.Clamp01(m_FollowAttachment);
		float L_2 = __this->get_m_FollowAttachment_12();
		float L_3 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(L_2, /*hidden argument*/NULL);
		__this->set_m_FollowAttachment_12(L_3);
		// m_LookAtAttachment = Mathf.Clamp01(m_LookAtAttachment);
		float L_4 = __this->get_m_LookAtAttachment_13();
		float L_5 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(L_4, /*hidden argument*/NULL);
		__this->set_m_LookAtAttachment_13(L_5);
		// }
		return;
	}
}
// System.Void CinemachineRecomposer::PrePipelineMutateCameraStateCallback(Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CameraState&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineRecomposer_PrePipelineMutateCameraStateCallback_mA5E2B2DEEA117854554E6A4B31F2ADB010CBDC97 (CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD * __this, CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___vcam0, CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * ___curState1, float ___deltaTime2, const RuntimeMethod* method)
{
	{
		// vcam.FollowTargetAttachment = m_FollowAttachment;
		CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_0 = ___vcam0;
		float L_1 = __this->get_m_FollowAttachment_12();
		NullCheck(L_0);
		CinemachineVirtualCameraBase_set_FollowTargetAttachment_mF7DCDD0C1EAD8B1ADCFA58DA84C140C304E3C937_inline(L_0, L_1, /*hidden argument*/NULL);
		// vcam.LookAtTargetAttachment = m_LookAtAttachment;
		CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_2 = ___vcam0;
		float L_3 = __this->get_m_LookAtAttachment_13();
		NullCheck(L_2);
		CinemachineVirtualCameraBase_set_LookAtTargetAttachment_mF4C1319B7CFCB69F54DC8FA1114A17C704EB7F12_inline(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CinemachineRecomposer::PostPipelineStageCallback(Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/Stage,Cinemachine.CameraState&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineRecomposer_PostPipelineStageCallback_m6571EAB849AE1FB94A5019D2E766C088073D98D7 (CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD * __this, CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___vcam0, int32_t ___stage1, CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * ___state2, float ___deltaTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineRecomposer_PostPipelineStageCallback_m6571EAB849AE1FB94A5019D2E766C088073D98D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	{
		// if (stage == m_ApplyAfter)
		int32_t L_0 = ___stage1;
		int32_t L_1 = __this->get_m_ApplyAfter_7();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00b9;
		}
	}
	{
		// var lens = state.Lens;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_3 = ___state2;
		LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  L_4 = CameraState_get_Lens_m87EB12E38DA5AD3B2DB3C55E727E58C7D3162AF6_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// var qTilted = state.RawOrientation * Quaternion.AngleAxis(m_Tilt, Vector3.right);
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_5 = ___state2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = CameraState_get_RawOrientation_mEB165F5AB11D2EE2BCD0D9797103539EEA297623_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_5, /*hidden argument*/NULL);
		float L_7 = __this->get_m_Tilt_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_7, L_8, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_6, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// var qDesired = Quaternion.AngleAxis(m_Pan, state.ReferenceUp) * qTilted;
		float L_11 = __this->get_m_Pan_9();
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_12 = ___state2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = CameraState_get_ReferenceUp_mC19FC2F8C4846C140CC7EBE45C16DD07DEA9809B_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_12, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_11, L_13, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		// state.OrientationCorrection = Quaternion.Inverse(state.CorrectedOrientation) * qDesired;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_17 = ___state2;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_18 = ___state2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = CameraState_get_CorrectedOrientation_m34E9DD430137D2B017C560027AF7B3632B2A3DAC((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_18, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_19, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = V_3;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_20, L_21, /*hidden argument*/NULL);
		CameraState_set_OrientationCorrection_m1D4C1A494488F9877416DC7246575D2FA62B75F9_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_17, L_22, /*hidden argument*/NULL);
		// lens.Dutch += m_Dutch;
		float* L_23 = (&V_1)->get_address_of_Dutch_5();
		float* L_24 = L_23;
		float L_25 = *((float*)L_24);
		float L_26 = __this->get_m_Dutch_10();
		*((float*)L_24) = (float)((float)il2cpp_codegen_add((float)L_25, (float)L_26));
		// if (m_ZoomScale != 1)
		float L_27 = __this->get_m_ZoomScale_11();
		V_4 = (bool)((((int32_t)((((float)L_27) == ((float)(1.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_4;
		if (!L_28)
		{
			goto IL_00b0;
		}
	}
	{
		// lens.OrthographicSize *= m_ZoomScale;
		float* L_29 = (&V_1)->get_address_of_OrthographicSize_2();
		float* L_30 = L_29;
		float L_31 = *((float*)L_30);
		float L_32 = __this->get_m_ZoomScale_11();
		*((float*)L_30) = (float)((float)il2cpp_codegen_multiply((float)L_31, (float)L_32));
		// lens.FieldOfView *= m_ZoomScale;
		float* L_33 = (&V_1)->get_address_of_FieldOfView_1();
		float* L_34 = L_33;
		float L_35 = *((float*)L_34);
		float L_36 = __this->get_m_ZoomScale_11();
		*((float*)L_34) = (float)((float)il2cpp_codegen_multiply((float)L_35, (float)L_36));
	}

IL_00b0:
	{
		// state.Lens = lens;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_37 = ___state2;
		LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  L_38 = V_1;
		CameraState_set_Lens_m5425E9638FC8D57DBBABBC48D48266C482F8ABF8_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_37, L_38, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		// }
		return;
	}
}
// System.Void CinemachineRecomposer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineRecomposer__ctor_m967AA6CF0D901DC5E535633751C9ED84D2C2B351 (CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD * __this, const RuntimeMethod* method)
{
	{
		CinemachineExtension__ctor_mF3457052C6CEDAB03B20CFBDF3C9760307CC68DC(__this, /*hidden argument*/NULL);
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
// UnityEngine.Playables.Playable CinemachineShot::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  CinemachineShot_CreatePlayable_m9FF5653D04CAFD839568D784D68DDE4F63C1A04F (CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5 * __this, PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___owner1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineShot_CreatePlayable_m9FF5653D04CAFD839568D784D68DDE4F63C1A04F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var playable = ScriptPlayable<CinemachineShotPlayable>.Create(graph);
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_1 = ScriptPlayable_1_Create_mF1204C0279C018CD6130BBFFA0F9D3E5CFA026D3(L_0, 0, /*hidden argument*/ScriptPlayable_1_Create_mF1204C0279C018CD6130BBFFA0F9D3E5CFA026D3_RuntimeMethod_var);
		V_0 = L_1;
		// playable.GetBehaviour().VirtualCamera = VirtualCamera.Resolve(graph.GetResolver());
		CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * L_2 = ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8((ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A *)(&V_0), /*hidden argument*/ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8_RuntimeMethod_var);
		ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F * L_3 = __this->get_address_of_VirtualCamera_5();
		RuntimeObject* L_4 = PlayableGraph_GetResolver_m52F92B131B65F7412D220BB853C562C5983E884E((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), /*hidden argument*/NULL);
		CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_5 = ExposedReference_1_Resolve_m97A5CBAEBA1062ED36BF724510A76204AF114E74((ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F *)L_3, L_4, /*hidden argument*/ExposedReference_1_Resolve_m97A5CBAEBA1062ED36BF724510A76204AF114E74_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_VirtualCamera_0(L_5);
		// return playable;
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_6 = V_0;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_7 = ScriptPlayable_1_op_Implicit_m9388F54AB0598505CA6ED126475CB8DC2172407B(L_6, /*hidden argument*/ScriptPlayable_1_op_Implicit_m9388F54AB0598505CA6ED126475CB8DC2172407B_RuntimeMethod_var);
		V_1 = L_7;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_8 = V_1;
		return L_8;
	}
}
// System.Void CinemachineShot::GatherProperties(UnityEngine.Playables.PlayableDirector,UnityEngine.Timeline.IPropertyCollector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineShot_GatherProperties_m503ED5DE1E71FCCCAACE2E6DE385B1179CBA66EB (CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5 * __this, PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * ___director0, RuntimeObject* ___driver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineShot_GatherProperties_m503ED5DE1E71FCCCAACE2E6DE385B1179CBA66EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// driver.AddFromName<Transform>("m_LocalPosition.x");
		RuntimeObject* L_0 = ___driver1;
		NullCheck(L_0);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var, L_0, _stringLiteral76F5995D7A1D434E1D7C4046772BDE3F81E26ADA);
		// driver.AddFromName<Transform>("m_LocalPosition.y");
		RuntimeObject* L_1 = ___driver1;
		NullCheck(L_1);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var, L_1, _stringLiteral20B7AF975FE61D31242708B325C2EBE54C427D42);
		// driver.AddFromName<Transform>("m_LocalPosition.z");
		RuntimeObject* L_2 = ___driver1;
		NullCheck(L_2);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var, L_2, _stringLiteralCC357B8329982D47F9D2DAC70F02E7F8E8217DD0);
		// driver.AddFromName<Transform>("m_LocalRotation.x");
		RuntimeObject* L_3 = ___driver1;
		NullCheck(L_3);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var, L_3, _stringLiteral25A7D94AE338306D36C6374758F830F411BC7709);
		// driver.AddFromName<Transform>("m_LocalRotation.y");
		RuntimeObject* L_4 = ___driver1;
		NullCheck(L_4);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var, L_4, _stringLiteralD0BDB1A683AF21C4D3907C91B62158B7170DC94B);
		// driver.AddFromName<Transform>("m_LocalRotation.z");
		RuntimeObject* L_5 = ___driver1;
		NullCheck(L_5);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var, L_5, _stringLiteral7DE47ED25C8CD4D0D230E6261B3C1BE71F746BD6);
		// driver.AddFromName<Camera>("field of view");
		RuntimeObject* L_6 = ___driver1;
		NullCheck(L_6);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m947A59E8BC6D05E58F58A13170DEAE422D5EE674_RuntimeMethod_var, L_6, _stringLiteralD8EE6A18D5B371A364BE13F498C76E11E321DECB);
		// driver.AddFromName<Camera>("near clip plane");
		RuntimeObject* L_7 = ___driver1;
		NullCheck(L_7);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m947A59E8BC6D05E58F58A13170DEAE422D5EE674_RuntimeMethod_var, L_7, _stringLiteral9975DAF0085BA0D080E112D87C20E40CD439A2CC);
		// driver.AddFromName<Camera>("far clip plane");
		RuntimeObject* L_8 = ___driver1;
		NullCheck(L_8);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m947A59E8BC6D05E58F58A13170DEAE422D5EE674_RuntimeMethod_var, L_8, _stringLiteralAEEEC79135C627C521C9AF016C69BE1561778B7C);
		// }
		return;
	}
}
// System.Void CinemachineShot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineShot__ctor_mE8034DC1F44E98008686FE5F5B9B09B0EF40E574 (CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5 * __this, const RuntimeMethod* method)
{
	{
		PlayableAsset__ctor_m669F459CFACFE65873346E428F206C457B488167(__this, /*hidden argument*/NULL);
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
// System.Boolean CinemachineShotPlayable::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CinemachineShotPlayable_get_IsValid_mB1F51FF9816FBC56D680EB7F47919C5C69C35331 (CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineShotPlayable_get_IsValid_mB1F51FF9816FBC56D680EB7F47919C5C69C35331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// public bool IsValid { get { return VirtualCamera != null; } }
		CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_0 = __this->get_VirtualCamera_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// public bool IsValid { get { return VirtualCamera != null; } }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void CinemachineShotPlayable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineShotPlayable__ctor_mA942BB3C8DF3156FCB5C7E7BB8F82B3719336D5B (CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * __this, const RuntimeMethod* method)
{
	{
		PlayableBehaviour__ctor_mE96A877D927BEEC8C9368A0673FEAD77A78C35EE(__this, /*hidden argument*/NULL);
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
// System.Void CinemachineTouchInputMapper::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineTouchInputMapper_Start_m15388C86B79D1CA2833E5408D1CA2151519F5424 (CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineTouchInputMapper_Start_m15388C86B79D1CA2833E5408D1CA2151519F5424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CinemachineCore.GetInputAxis = GetInputAxis;
		AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE * L_0 = (AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE *)il2cpp_codegen_object_new(AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE_il2cpp_TypeInfo_var);
		AxisInputDelegate__ctor_m78B42AB90C54B8EF03079E7FBE1A1D8E56DD86A2(L_0, __this, (intptr_t)((intptr_t)CinemachineTouchInputMapper_GetInputAxis_m7A2342D7913F4BF3711C35E69AD6F61FBCD37A37_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_il2cpp_TypeInfo_var);
		((CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_il2cpp_TypeInfo_var))->set_GetInputAxis_4(L_0);
		// }
		return;
	}
}
// System.Single CinemachineTouchInputMapper::GetInputAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineTouchInputMapper_GetInputAxis_m7A2342D7913F4BF3711C35E69AD6F61FBCD37A37 (CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815 * __this, String_t* ___axisName0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		// if (Input.touchCount > 0)
		int32_t L_0 = Input_get_touchCount_m497E19AA4FA22DB659F631B20FAEF65572D1B44E(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_006d;
		}
	}
	{
		// if (axisName == TouchXInputMapTo)
		String_t* L_2 = ___axisName0;
		String_t* L_3 = __this->get_TouchXInputMapTo_6();
		bool L_4 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		// return Input.touches[0].deltaPosition.x / TouchSensitivityX;
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_6 = Input_get_touches_mD31418E8B2487DBC9641A15677B41B459859011A(/*hidden argument*/NULL);
		NullCheck(L_6);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = Touch_get_deltaPosition_m4AAD6521D88FE10B3786039892B1BB9438ED2D64((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		float L_8 = L_7.get_x_0();
		float L_9 = __this->get_TouchSensitivityX_4();
		V_2 = ((float)((float)L_8/(float)L_9));
		goto IL_0076;
	}

IL_003d:
	{
		// if (axisName == TouchYInputMapTo)
		String_t* L_10 = ___axisName0;
		String_t* L_11 = __this->get_TouchYInputMapTo_7();
		bool L_12 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_10, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_006c;
		}
	}
	{
		// return Input.touches[0].deltaPosition.y / TouchSensitivityY;
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_14 = Input_get_touches_mD31418E8B2487DBC9641A15677B41B459859011A(/*hidden argument*/NULL);
		NullCheck(L_14);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = Touch_get_deltaPosition_m4AAD6521D88FE10B3786039892B1BB9438ED2D64((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		float L_16 = L_15.get_y_1();
		float L_17 = __this->get_TouchSensitivityY_5();
		V_2 = ((float)((float)L_16/(float)L_17));
		goto IL_0076;
	}

IL_006c:
	{
	}

IL_006d:
	{
		// return Input.GetAxis(axisName);
		String_t* L_18 = ___axisName0;
		float L_19 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		goto IL_0076;
	}

IL_0076:
	{
		// }
		float L_20 = V_2;
		return L_20;
	}
}
// System.Void CinemachineTouchInputMapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineTouchInputMapper__ctor_mD73B04A8718E3A899F4359C9CD4ACA08E9D1305E (CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineTouchInputMapper__ctor_mD73B04A8718E3A899F4359C9CD4ACA08E9D1305E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float TouchSensitivityX = 10f;
		__this->set_TouchSensitivityX_4((10.0f));
		// public float TouchSensitivityY = 10f;
		__this->set_TouchSensitivityY_5((10.0f));
		// public string TouchXInputMapTo = "Mouse X";
		__this->set_TouchXInputMapTo_6(_stringLiteral294D359ECE148A430F19981912277E5154CA19E0);
		// public string TouchYInputMapTo = "Mouse Y";
		__this->set_TouchYInputMapTo_7(_stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// UnityEngine.Playables.Playable CinemachineTrack::CreateTrackMixer(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  CinemachineTrack_CreateTrackMixer_m879E9C56FBCAE3C28F1BAD6CF247A904BBDAC1A7 (CinemachineTrack_t6B531D379A33136302768D59460F3E8B1AC6D79D * __this, PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___go1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineTrack_CreateTrackMixer_m879E9C56FBCAE3C28F1BAD6CF247A904BBDAC1A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var mixer = ScriptPlayable<CinemachineMixer>.Create(graph);
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  L_1 = ScriptPlayable_1_Create_mDE5946292E4A4165D00B39EACF469071ADA73189(L_0, 0, /*hidden argument*/ScriptPlayable_1_Create_mDE5946292E4A4165D00B39EACF469071ADA73189_RuntimeMethod_var);
		V_0 = L_1;
		// mixer.SetInputCount(inputCount);
		ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  L_2 = V_0;
		int32_t L_3 = ___inputCount2;
		PlayableExtensions_SetInputCount_TisScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_m847F542F39A4F6792F586FE306664FB4E37E649F(L_2, L_3, /*hidden argument*/PlayableExtensions_SetInputCount_TisScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_m847F542F39A4F6792F586FE306664FB4E37E649F_RuntimeMethod_var);
		// return mixer;
		ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  L_4 = V_0;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_5 = ScriptPlayable_1_op_Implicit_m6F1FE1C8EFB32C6564EAB7C8E44FB9DF276102D8(L_4, /*hidden argument*/ScriptPlayable_1_op_Implicit_m6F1FE1C8EFB32C6564EAB7C8E44FB9DF276102D8_RuntimeMethod_var);
		V_1 = L_5;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_6 = V_1;
		return L_6;
	}
}
// System.Void CinemachineTrack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineTrack__ctor_m0C7D2958AD95C45518C9BEAB9418AEB192B0DBAE (CinemachineTrack_t6B531D379A33136302768D59460F3E8B1AC6D79D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineTrack__ctor_m0C7D2958AD95C45518C9BEAB9418AEB192B0DBAE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_il2cpp_TypeInfo_var);
		TrackAsset__ctor_mB57EE24087931D858028EE79112A1FABDC95E5C6(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float PositionPredictor_get_Smoothing_m43507C6CC60936FB413A8D351CD3F0A1766E0CB7_inline (PositionPredictor_t8A79BF0A72B44EF8AC2F3B0C0D51A399C5C7E223 * __this, const RuntimeMethod* method)
{
	{
		// public float Smoothing { get; set; }
		float L_0 = __this->get_U3CSmoothingU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  CameraState_get_RawOrientation_mEB165F5AB11D2EE2BCD0D9797103539EEA297623_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion RawOrientation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_U3CRawOrientationU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CameraState_get_ReferenceLookAt_m3FCCFB59361130B202C526D5F88FA11E1CC796EC_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ReferenceLookAt { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CReferenceLookAtU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CameraState_get_ReferenceUp_mC19FC2F8C4846C140CC7EBE45C16DD07DEA9809B_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ReferenceUp { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CReferenceUpU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CameraState_get_PositionCorrection_m81476CD9BBC93E1AE8A47E6BA8D6E08F112D1CFD_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 PositionCorrection { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CPositionCorrectionU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_PositionCorrection_m2CEDE7298CE80A5E020285AD21C2F39353563CB8_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 PositionCorrection { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CPositionCorrectionU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_ReferenceLookAt_m33C644687C407C4208346D59D6DCFA911E2B5588_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 ReferenceLookAt { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CReferenceLookAtU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_RawOrientation_m366411C5A4E24AAB88BAF5DDC5174397F099B976_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion RawOrientation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_U3CRawOrientationU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TargetPositionCache_get_CacheMode_m7C4D3FC799E34E324A56B695AC9D6E6844B8725C_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetPositionCache_get_CacheMode_m7C4D3FC799E34E324A56B695AC9D6E6844B8725CCinemachine3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => m_CacheMode;
		IL2CPP_RUNTIME_CLASS_INIT(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_il2cpp_TypeInfo_var);
		int32_t L_0 = ((TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_StaticFields*)il2cpp_codegen_static_fields_for(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_il2cpp_TypeInfo_var))->get_m_CacheMode_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_set_FollowTargetAttachment_mF7DCDD0C1EAD8B1ADCFA58DA84C140C304E3C937_inline (CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float FollowTargetAttachment { get; set; }
		float L_0 = ___value0;
		__this->set_U3CFollowTargetAttachmentU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_set_LookAtTargetAttachment_mF4C1319B7CFCB69F54DC8FA1114A17C704EB7F12_inline (CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float LookAtTargetAttachment { get; set; }
		float L_0 = ___value0;
		__this->set_U3CLookAtTargetAttachmentU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  CameraState_get_Lens_m87EB12E38DA5AD3B2DB3C55E727E58C7D3162AF6_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method)
{
	{
		// public LensSettings Lens { get; set; }
		LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  L_0 = __this->get_U3CLensU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_OrientationCorrection_m1D4C1A494488F9877416DC7246575D2FA62B75F9_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion OrientationCorrection { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_U3COrientationCorrectionU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_Lens_m5425E9638FC8D57DBBABBC48D48266C482F8ABF8_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  ___value0, const RuntimeMethod* method)
{
	{
		// public LensSettings Lens { get; set; }
		LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  L_0 = ___value0;
		__this->set_U3CLensU3Ek__BackingField_0(L_0);
		return;
	}
}
