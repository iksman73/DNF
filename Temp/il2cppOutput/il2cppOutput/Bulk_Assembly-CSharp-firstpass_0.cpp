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

// MouseLook
struct MouseLook_t2590096580;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// System.Object
struct Il2CppObject;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MouseLook2590096580.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MouseLook2590096580MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf4203372500MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MouseLook_RotationAxe276833102.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3071478659MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MouseLook_RotationAxe276833102MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t3346577219_m2213165263(__this, method) ((  Rigidbody_t3346577219 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MouseLook::.ctor()
extern "C"  void MouseLook__ctor_m1979543795 (MouseLook_t2590096580 * __this, const MethodInfo* method)
{
	{
		__this->set_sensitivityX_3((15.0f));
		__this->set_sensitivityY_4((15.0f));
		__this->set_minimumX_5((-360.0f));
		__this->set_maximumX_6((360.0f));
		__this->set_minimumY_7((-60.0f));
		__this->set_maximumY_8((60.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MouseLook::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2907718525;
extern Il2CppCodeGenString* _stringLiteral2907718526;
extern const uint32_t MouseLook_Update_m2963177594_MetadataUsageId;
extern "C"  void MouseLook_Update_m2963177594 (MouseLook_t2590096580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MouseLook_Update_m2963177594_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t4282066566  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_axes_2();
		if (L_0)
		{
			goto IL_008e;
		}
	}
	{
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t4282066566  L_2 = Transform_get_localEulerAngles_m3489183428(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_4 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2907718525, /*hidden argument*/NULL);
		float L_5 = __this->get_sensitivityX_3();
		V_0 = ((float)((float)L_3+(float)((float)((float)L_4*(float)L_5))));
		float L_6 = __this->get_rotationY_9();
		float L_7 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2907718526, /*hidden argument*/NULL);
		float L_8 = __this->get_sensitivityY_4();
		__this->set_rotationY_9(((float)((float)L_6+(float)((float)((float)L_7*(float)L_8)))));
		float L_9 = __this->get_rotationY_9();
		float L_10 = __this->get_minimumY_7();
		float L_11 = __this->get_maximumY_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, L_9, L_10, L_11, /*hidden argument*/NULL);
		__this->set_rotationY_9(L_12);
		Transform_t1659122786 * L_13 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_14 = __this->get_rotationY_9();
		float L_15 = V_0;
		Vector3_t4282066566  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector3__ctor_m2926210380(&L_16, ((-L_14)), L_15, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localEulerAngles_m3898859559(L_13, L_16, /*hidden argument*/NULL);
		goto IL_012f;
	}

IL_008e:
	{
		int32_t L_17 = __this->get_axes_2();
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_00c5;
		}
	}
	{
		Transform_t1659122786 * L_18 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_19 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2907718525, /*hidden argument*/NULL);
		float L_20 = __this->get_sensitivityX_3();
		NullCheck(L_18);
		Transform_Rotate_m3498734243(L_18, (0.0f), ((float)((float)L_19*(float)L_20)), (0.0f), /*hidden argument*/NULL);
		goto IL_012f;
	}

IL_00c5:
	{
		float L_21 = __this->get_rotationY_9();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_22 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2907718526, /*hidden argument*/NULL);
		float L_23 = __this->get_sensitivityY_4();
		__this->set_rotationY_9(((float)((float)L_21+(float)((float)((float)L_22*(float)L_23)))));
		float L_24 = __this->get_rotationY_9();
		float L_25 = __this->get_minimumY_7();
		float L_26 = __this->get_maximumY_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_27 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, L_24, L_25, L_26, /*hidden argument*/NULL);
		__this->set_rotationY_9(L_27);
		Transform_t1659122786 * L_28 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_29 = __this->get_rotationY_9();
		Transform_t1659122786 * L_30 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t4282066566  L_31 = Transform_get_localEulerAngles_m3489183428(L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		float L_32 = (&V_2)->get_y_2();
		Vector3_t4282066566  L_33;
		memset(&L_33, 0, sizeof(L_33));
		Vector3__ctor_m2926210380(&L_33, ((-L_29)), L_32, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_localEulerAngles_m3898859559(L_28, L_33, /*hidden argument*/NULL);
	}

IL_012f:
	{
		return;
	}
}
// System.Void MouseLook::Start()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t3346577219_m2213165263_MethodInfo_var;
extern const uint32_t MouseLook_Start_m926681587_MetadataUsageId;
extern "C"  void MouseLook_Start_m926681587 (MouseLook_t2590096580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MouseLook_Start_m926681587_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody_t3346577219 * L_0 = Component_GetComponent_TisRigidbody_t3346577219_m2213165263(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3346577219_m2213165263_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Rigidbody_t3346577219 * L_2 = Component_GetComponent_TisRigidbody_t3346577219_m2213165263(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3346577219_m2213165263_MethodInfo_var);
		NullCheck(L_2);
		Rigidbody_set_freezeRotation_m3989473889(L_2, (bool)1, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
