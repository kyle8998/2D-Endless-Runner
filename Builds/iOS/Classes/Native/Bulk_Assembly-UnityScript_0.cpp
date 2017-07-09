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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E3783534214.h"
#include "AssemblyU2DUnityScript_fpsClass850960813.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_GUIText2411476300.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Behaviour955675639.h"
#include "mscorlib_System_Int322071877448.h"

// fpsClass
struct fpsClass_t850960813;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.GUIText
struct GUIText_t2411476300;
// System.Object
struct Il2CppObject;
// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.Behaviour
struct Behaviour_t955675639;
// System.String
struct String_t;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUIText_t2411476300_m1295194887_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral5091297;
extern const uint32_t fpsClass_Start_m1364408257_MetadataUsageId;
extern Il2CppClass* RuntimeServices_t1910041954_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral217279643;
extern Il2CppCodeGenString* _stringLiteral3231012694;
extern const uint32_t fpsClass_Update_m2958530620_MetadataUsageId;



// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUIText>()
#define Component_GetComponent_TisGUIText_t2411476300_m1295194887(__this, method) ((  GUIText_t2411476300 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m2856731593 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C"  void MonoBehaviour_print_m3437620292 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C"  void Behaviour_set_enabled_m1796096907 (Behaviour_t955675639 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m2233168104 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_timeScale()
extern "C"  float Time_get_timeScale_m3151482970 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString(System.String)
extern "C"  String_t* Single_ToString_m2359963436 (float* __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.String)
extern "C"  String_t* RuntimeServices_op_Addition_m1630013314 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIText::set_text(System.String)
extern "C"  void GUIText_set_text_m3758377277 (GUIText_t2411476300 * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void fpsClass::.ctor()
extern "C"  void fpsClass__ctor_m2682193913 (fpsClass_t850960813 * __this, const MethodInfo* method)
{
	{
		// #pragma strict
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		// var updateInterval = 0.5;
		__this->set_updateInterval_2((0.5f));
		return;
	}
}
// System.Void fpsClass::Start()
extern "C"  void fpsClass_Start_m1364408257 (fpsClass_t850960813 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (fpsClass_Start_m1364408257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( !GetComponent.<GUIText>() )
		GUIText_t2411476300 * L_0 = Component_GetComponent_TisGUIText_t2411476300_m1295194887(__this, /*hidden argument*/Component_GetComponent_TisGUIText_t2411476300_m1295194887_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		// print ("FramesPerSecond needs a GUIText component!");
		MonoBehaviour_print_m3437620292(NULL /*static, unused*/, _stringLiteral5091297, /*hidden argument*/NULL);
		// enabled = false;
		Behaviour_set_enabled_m1796096907(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		goto IL_0032;
	}

IL_0026:
	{
		// timeleft = updateInterval;
		float L_2 = __this->get_updateInterval_2();
		__this->set_timeleft_5(L_2);
	}

IL_0032:
	{
		return;
	}
}
// System.Void fpsClass::Update()
extern "C"  void fpsClass_Update_m2958530620 (fpsClass_t850960813 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (fpsClass_Update_m2958530620_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// timeleft -= Time.deltaTime;
		float L_0 = __this->get_timeleft_5();
		float L_1 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timeleft_5(((float)((float)L_0-(float)L_1)));
		// accum += Time.timeScale/Time.deltaTime;
		float L_2 = __this->get_accum_3();
		float L_3 = Time_get_timeScale_m3151482970(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_accum_3(((float)((float)L_2+(float)((float)((float)L_3/(float)L_4)))));
		// ++frames;
		int32_t L_5 = __this->get_frames_4();
		__this->set_frames_4(((int32_t)((int32_t)L_5+(int32_t)1)));
		// if( timeleft <= 0.0 )
		float L_6 = __this->get_timeleft_5();
		if ((((float)L_6) > ((float)(((float)((float)0))))))
		{
			goto IL_0090;
		}
	}
	{
		// GetComponent.<GUIText>().text = "fps: " + (accum/frames).ToString("f2");
		GUIText_t2411476300 * L_7 = Component_GetComponent_TisGUIText_t2411476300_m1295194887(__this, /*hidden argument*/Component_GetComponent_TisGUIText_t2411476300_m1295194887_MethodInfo_var);
		float L_8 = __this->get_accum_3();
		int32_t L_9 = __this->get_frames_4();
		V_0 = ((float)((float)L_8/(float)(((float)((float)L_9)))));
		String_t* L_10 = Single_ToString_m2359963436((&V_0), _stringLiteral3231012694, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1910041954_il2cpp_TypeInfo_var);
		String_t* L_11 = RuntimeServices_op_Addition_m1630013314(NULL /*static, unused*/, _stringLiteral217279643, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		GUIText_set_text_m3758377277(L_7, L_11, /*hidden argument*/NULL);
		// timeleft = updateInterval;
		float L_12 = __this->get_updateInterval_2();
		__this->set_timeleft_5(L_12);
		// accum = 0.0;
		__this->set_accum_3((((float)((float)0))));
		// frames = 0;
		__this->set_frames_4(0);
	}

IL_0090:
	{
		return;
	}
}
// System.Void fpsClass::Main()
extern "C"  void fpsClass_Main_m2104526328 (fpsClass_t850960813 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
