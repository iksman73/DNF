#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[,]
struct Int32U5BU2CU5D_t3230847822;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.Animator
struct Animator_t2776330603;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_PlayManager_GameState1155171017.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayManager
struct  PlayManager_t1926332857  : public MonoBehaviour_t667441552
{
public:
	// PlayManager/GameState PlayManager::gState
	int32_t ___gState_3;
	// System.Boolean PlayManager::isEnd
	bool ___isEnd_4;
	// System.Boolean PlayManager::isFeaver
	bool ___isFeaver_5;
	// System.Int32 PlayManager::getCoin
	int32_t ___getCoin_6;
	// System.Int32 PlayManager::combo
	int32_t ___combo_7;
	// System.Int32 PlayManager::coinLevel
	int32_t ___coinLevel_8;
	// System.Int32[,] PlayManager::coinValue
	Int32U5BU2CU5D_t3230847822* ___coinValue_9;
	// UnityEngine.GameObject PlayManager::panel_Ready
	GameObject_t3674682005 * ___panel_Ready_10;
	// UnityEngine.GameObject PlayManager::panel_GameOver
	GameObject_t3674682005 * ___panel_GameOver_11;
	// UnityEngine.GameObject PlayManager::panel_Play
	GameObject_t3674682005 * ___panel_Play_12;
	// UnityEngine.GameObject PlayManager::getCoinEffectObj
	GameObject_t3674682005 * ___getCoinEffectObj_13;
	// UnityEngine.UI.Text PlayManager::text_distance
	Text_t9039225 * ___text_distance_14;
	// UnityEngine.UI.Text PlayManager::text_getCoin
	Text_t9039225 * ___text_getCoin_15;
	// UnityEngine.UI.Text PlayManager::text_combo
	Text_t9039225 * ___text_combo_16;
	// UnityEngine.UI.Text PlayManager::text_FPS
	Text_t9039225 * ___text_FPS_17;
	// UnityEngine.GameObject PlayManager::player
	GameObject_t3674682005 * ___player_18;
	// UnityEngine.Animator PlayManager::playerAnim
	Animator_t2776330603 * ___playerAnim_19;
	// UnityEngine.Rigidbody PlayManager::playerRig
	Rigidbody_t3346577219 * ___playerRig_20;
	// System.Single PlayManager::playerSpeed
	float ___playerSpeed_21;
	// System.Single PlayManager::playerUpForce
	float ___playerUpForce_22;
	// UnityEngine.Vector3 PlayManager::forwardVelocity
	Vector3_t4282066566  ___forwardVelocity_23;
	// System.Boolean PlayManager::isUp
	bool ___isUp_24;
	// System.Single PlayManager::cameraDampX
	float ___cameraDampX_25;
	// System.Single PlayManager::cameraDampY
	float ___cameraDampY_26;
	// System.Single PlayManager::cameraDistance
	float ___cameraDistance_27;
	// UnityEngine.GameObject PlayManager::mapManager
	GameObject_t3674682005 * ___mapManager_28;
	// System.Single PlayManager::deltaTime
	float ___deltaTime_29;

public:
	inline static int32_t get_offset_of_gState_3() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___gState_3)); }
	inline int32_t get_gState_3() const { return ___gState_3; }
	inline int32_t* get_address_of_gState_3() { return &___gState_3; }
	inline void set_gState_3(int32_t value)
	{
		___gState_3 = value;
	}

	inline static int32_t get_offset_of_isEnd_4() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___isEnd_4)); }
	inline bool get_isEnd_4() const { return ___isEnd_4; }
	inline bool* get_address_of_isEnd_4() { return &___isEnd_4; }
	inline void set_isEnd_4(bool value)
	{
		___isEnd_4 = value;
	}

	inline static int32_t get_offset_of_isFeaver_5() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___isFeaver_5)); }
	inline bool get_isFeaver_5() const { return ___isFeaver_5; }
	inline bool* get_address_of_isFeaver_5() { return &___isFeaver_5; }
	inline void set_isFeaver_5(bool value)
	{
		___isFeaver_5 = value;
	}

	inline static int32_t get_offset_of_getCoin_6() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___getCoin_6)); }
	inline int32_t get_getCoin_6() const { return ___getCoin_6; }
	inline int32_t* get_address_of_getCoin_6() { return &___getCoin_6; }
	inline void set_getCoin_6(int32_t value)
	{
		___getCoin_6 = value;
	}

	inline static int32_t get_offset_of_combo_7() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___combo_7)); }
	inline int32_t get_combo_7() const { return ___combo_7; }
	inline int32_t* get_address_of_combo_7() { return &___combo_7; }
	inline void set_combo_7(int32_t value)
	{
		___combo_7 = value;
	}

	inline static int32_t get_offset_of_coinLevel_8() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___coinLevel_8)); }
	inline int32_t get_coinLevel_8() const { return ___coinLevel_8; }
	inline int32_t* get_address_of_coinLevel_8() { return &___coinLevel_8; }
	inline void set_coinLevel_8(int32_t value)
	{
		___coinLevel_8 = value;
	}

	inline static int32_t get_offset_of_coinValue_9() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___coinValue_9)); }
	inline Int32U5BU2CU5D_t3230847822* get_coinValue_9() const { return ___coinValue_9; }
	inline Int32U5BU2CU5D_t3230847822** get_address_of_coinValue_9() { return &___coinValue_9; }
	inline void set_coinValue_9(Int32U5BU2CU5D_t3230847822* value)
	{
		___coinValue_9 = value;
		Il2CppCodeGenWriteBarrier(&___coinValue_9, value);
	}

	inline static int32_t get_offset_of_panel_Ready_10() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___panel_Ready_10)); }
	inline GameObject_t3674682005 * get_panel_Ready_10() const { return ___panel_Ready_10; }
	inline GameObject_t3674682005 ** get_address_of_panel_Ready_10() { return &___panel_Ready_10; }
	inline void set_panel_Ready_10(GameObject_t3674682005 * value)
	{
		___panel_Ready_10 = value;
		Il2CppCodeGenWriteBarrier(&___panel_Ready_10, value);
	}

	inline static int32_t get_offset_of_panel_GameOver_11() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___panel_GameOver_11)); }
	inline GameObject_t3674682005 * get_panel_GameOver_11() const { return ___panel_GameOver_11; }
	inline GameObject_t3674682005 ** get_address_of_panel_GameOver_11() { return &___panel_GameOver_11; }
	inline void set_panel_GameOver_11(GameObject_t3674682005 * value)
	{
		___panel_GameOver_11 = value;
		Il2CppCodeGenWriteBarrier(&___panel_GameOver_11, value);
	}

	inline static int32_t get_offset_of_panel_Play_12() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___panel_Play_12)); }
	inline GameObject_t3674682005 * get_panel_Play_12() const { return ___panel_Play_12; }
	inline GameObject_t3674682005 ** get_address_of_panel_Play_12() { return &___panel_Play_12; }
	inline void set_panel_Play_12(GameObject_t3674682005 * value)
	{
		___panel_Play_12 = value;
		Il2CppCodeGenWriteBarrier(&___panel_Play_12, value);
	}

	inline static int32_t get_offset_of_getCoinEffectObj_13() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___getCoinEffectObj_13)); }
	inline GameObject_t3674682005 * get_getCoinEffectObj_13() const { return ___getCoinEffectObj_13; }
	inline GameObject_t3674682005 ** get_address_of_getCoinEffectObj_13() { return &___getCoinEffectObj_13; }
	inline void set_getCoinEffectObj_13(GameObject_t3674682005 * value)
	{
		___getCoinEffectObj_13 = value;
		Il2CppCodeGenWriteBarrier(&___getCoinEffectObj_13, value);
	}

	inline static int32_t get_offset_of_text_distance_14() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___text_distance_14)); }
	inline Text_t9039225 * get_text_distance_14() const { return ___text_distance_14; }
	inline Text_t9039225 ** get_address_of_text_distance_14() { return &___text_distance_14; }
	inline void set_text_distance_14(Text_t9039225 * value)
	{
		___text_distance_14 = value;
		Il2CppCodeGenWriteBarrier(&___text_distance_14, value);
	}

	inline static int32_t get_offset_of_text_getCoin_15() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___text_getCoin_15)); }
	inline Text_t9039225 * get_text_getCoin_15() const { return ___text_getCoin_15; }
	inline Text_t9039225 ** get_address_of_text_getCoin_15() { return &___text_getCoin_15; }
	inline void set_text_getCoin_15(Text_t9039225 * value)
	{
		___text_getCoin_15 = value;
		Il2CppCodeGenWriteBarrier(&___text_getCoin_15, value);
	}

	inline static int32_t get_offset_of_text_combo_16() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___text_combo_16)); }
	inline Text_t9039225 * get_text_combo_16() const { return ___text_combo_16; }
	inline Text_t9039225 ** get_address_of_text_combo_16() { return &___text_combo_16; }
	inline void set_text_combo_16(Text_t9039225 * value)
	{
		___text_combo_16 = value;
		Il2CppCodeGenWriteBarrier(&___text_combo_16, value);
	}

	inline static int32_t get_offset_of_text_FPS_17() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___text_FPS_17)); }
	inline Text_t9039225 * get_text_FPS_17() const { return ___text_FPS_17; }
	inline Text_t9039225 ** get_address_of_text_FPS_17() { return &___text_FPS_17; }
	inline void set_text_FPS_17(Text_t9039225 * value)
	{
		___text_FPS_17 = value;
		Il2CppCodeGenWriteBarrier(&___text_FPS_17, value);
	}

	inline static int32_t get_offset_of_player_18() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___player_18)); }
	inline GameObject_t3674682005 * get_player_18() const { return ___player_18; }
	inline GameObject_t3674682005 ** get_address_of_player_18() { return &___player_18; }
	inline void set_player_18(GameObject_t3674682005 * value)
	{
		___player_18 = value;
		Il2CppCodeGenWriteBarrier(&___player_18, value);
	}

	inline static int32_t get_offset_of_playerAnim_19() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___playerAnim_19)); }
	inline Animator_t2776330603 * get_playerAnim_19() const { return ___playerAnim_19; }
	inline Animator_t2776330603 ** get_address_of_playerAnim_19() { return &___playerAnim_19; }
	inline void set_playerAnim_19(Animator_t2776330603 * value)
	{
		___playerAnim_19 = value;
		Il2CppCodeGenWriteBarrier(&___playerAnim_19, value);
	}

	inline static int32_t get_offset_of_playerRig_20() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___playerRig_20)); }
	inline Rigidbody_t3346577219 * get_playerRig_20() const { return ___playerRig_20; }
	inline Rigidbody_t3346577219 ** get_address_of_playerRig_20() { return &___playerRig_20; }
	inline void set_playerRig_20(Rigidbody_t3346577219 * value)
	{
		___playerRig_20 = value;
		Il2CppCodeGenWriteBarrier(&___playerRig_20, value);
	}

	inline static int32_t get_offset_of_playerSpeed_21() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___playerSpeed_21)); }
	inline float get_playerSpeed_21() const { return ___playerSpeed_21; }
	inline float* get_address_of_playerSpeed_21() { return &___playerSpeed_21; }
	inline void set_playerSpeed_21(float value)
	{
		___playerSpeed_21 = value;
	}

	inline static int32_t get_offset_of_playerUpForce_22() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___playerUpForce_22)); }
	inline float get_playerUpForce_22() const { return ___playerUpForce_22; }
	inline float* get_address_of_playerUpForce_22() { return &___playerUpForce_22; }
	inline void set_playerUpForce_22(float value)
	{
		___playerUpForce_22 = value;
	}

	inline static int32_t get_offset_of_forwardVelocity_23() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___forwardVelocity_23)); }
	inline Vector3_t4282066566  get_forwardVelocity_23() const { return ___forwardVelocity_23; }
	inline Vector3_t4282066566 * get_address_of_forwardVelocity_23() { return &___forwardVelocity_23; }
	inline void set_forwardVelocity_23(Vector3_t4282066566  value)
	{
		___forwardVelocity_23 = value;
	}

	inline static int32_t get_offset_of_isUp_24() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___isUp_24)); }
	inline bool get_isUp_24() const { return ___isUp_24; }
	inline bool* get_address_of_isUp_24() { return &___isUp_24; }
	inline void set_isUp_24(bool value)
	{
		___isUp_24 = value;
	}

	inline static int32_t get_offset_of_cameraDampX_25() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___cameraDampX_25)); }
	inline float get_cameraDampX_25() const { return ___cameraDampX_25; }
	inline float* get_address_of_cameraDampX_25() { return &___cameraDampX_25; }
	inline void set_cameraDampX_25(float value)
	{
		___cameraDampX_25 = value;
	}

	inline static int32_t get_offset_of_cameraDampY_26() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___cameraDampY_26)); }
	inline float get_cameraDampY_26() const { return ___cameraDampY_26; }
	inline float* get_address_of_cameraDampY_26() { return &___cameraDampY_26; }
	inline void set_cameraDampY_26(float value)
	{
		___cameraDampY_26 = value;
	}

	inline static int32_t get_offset_of_cameraDistance_27() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___cameraDistance_27)); }
	inline float get_cameraDistance_27() const { return ___cameraDistance_27; }
	inline float* get_address_of_cameraDistance_27() { return &___cameraDistance_27; }
	inline void set_cameraDistance_27(float value)
	{
		___cameraDistance_27 = value;
	}

	inline static int32_t get_offset_of_mapManager_28() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___mapManager_28)); }
	inline GameObject_t3674682005 * get_mapManager_28() const { return ___mapManager_28; }
	inline GameObject_t3674682005 ** get_address_of_mapManager_28() { return &___mapManager_28; }
	inline void set_mapManager_28(GameObject_t3674682005 * value)
	{
		___mapManager_28 = value;
		Il2CppCodeGenWriteBarrier(&___mapManager_28, value);
	}

	inline static int32_t get_offset_of_deltaTime_29() { return static_cast<int32_t>(offsetof(PlayManager_t1926332857, ___deltaTime_29)); }
	inline float get_deltaTime_29() const { return ___deltaTime_29; }
	inline float* get_address_of_deltaTime_29() { return &___deltaTime_29; }
	inline void set_deltaTime_29(float value)
	{
		___deltaTime_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
