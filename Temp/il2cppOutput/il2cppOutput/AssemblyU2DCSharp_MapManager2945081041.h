#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapManager
struct  MapManager_t2945081041  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject MapManager::playManager
	GameObject_t3674682005 * ___playManager_2;
	// System.Int32 MapManager::blockZ
	int32_t ___blockZ_3;
	// System.Single MapManager::blockXY
	float ___blockXY_4;
	// System.Int32 MapManager::maxBlock
	int32_t ___maxBlock_5;
	// System.Int32 MapManager::nowStep
	int32_t ___nowStep_6;
	// System.Int32 MapManager::coinCount
	int32_t ___coinCount_7;
	// UnityEngine.Vector3 MapManager::lastPosition
	Vector3_t4282066566  ___lastPosition_8;
	// UnityEngine.Vector3 MapManager::newPosition
	Vector3_t4282066566  ___newPosition_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MapManager::mapBlockList
	List_1_t747900261 * ___mapBlockList_10;
	// UnityEngine.GameObject[] MapManager::blockPrefab
	GameObjectU5BU5D_t2662109048* ___blockPrefab_11;
	// System.Int32 MapManager::matChangeCount
	int32_t ___matChangeCount_12;
	// System.Int32 MapManager::verticalChangeRate
	int32_t ___verticalChangeRate_13;
	// System.Boolean MapManager::isUp
	bool ___isUp_14;
	// System.Boolean MapManager::isFeaver
	bool ___isFeaver_15;

public:
	inline static int32_t get_offset_of_playManager_2() { return static_cast<int32_t>(offsetof(MapManager_t2945081041, ___playManager_2)); }
	inline GameObject_t3674682005 * get_playManager_2() const { return ___playManager_2; }
	inline GameObject_t3674682005 ** get_address_of_playManager_2() { return &___playManager_2; }
	inline void set_playManager_2(GameObject_t3674682005 * value)
	{
		___playManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___playManager_2, value);
	}

	inline static int32_t get_offset_of_blockZ_3() { return static_cast<int32_t>(offsetof(MapManager_t2945081041, ___blockZ_3)); }
	inline int32_t get_blockZ_3() const { return ___blockZ_3; }
	inline int32_t* get_address_of_blockZ_3() { return &___blockZ_3; }
	inline void set_blockZ_3(int32_t value)
	{
		___blockZ_3 = value;
	}

	inline static int32_t get_offset_of_blockXY_4() { return static_cast<int32_t>(offsetof(MapManager_t2945081041, ___blockXY_4)); }
	inline float get_blockXY_4() const { return ___blockXY_4; }
	inline float* get_address_of_blockXY_4() { return &___blockXY_4; }
	inline void set_blockXY_4(float value)
	{
		___blockXY_4 = value;
	}

	inline static int32_t get_offset_of_maxBlock_5() { return static_cast<int32_t>(offsetof(MapManager_t2945081041, ___maxBlock_5)); }
	inline int32_t get_maxBlock_5() const { return ___maxBlock_5; }
	inline int32_t* get_address_of_maxBlock_5() { return &___maxBlock_5; }
	inline void set_maxBlock_5(int32_t value)
	{
		___maxBlock_5 = value;
	}

	inline static int32_t get_offset_of_nowStep_6() { return static_cast<int32_t>(offsetof(MapManager_t2945081041, ___nowStep_6)); }
	inline int32_t get_nowStep_6() const { return ___nowStep_6; }
	inline int32_t* get_address_of_nowStep_6() { return &___nowStep_6; }
	inline void set_nowStep_6(int32_t value)
	{
		___nowStep_6 = value;
	}

	inline static int32_t get_offset_of_coinCount_7() { return static_cast<int32_t>(offsetof(MapManager_t2945081041, ___coinCount_7)); }
	inline int32_t get_coinCount_7() const { return ___coinCount_7; }
	inline int32_t* get_address_of_coinCount_7() { return &___coinCount_7; }
	inline void set_coinCount_7(int32_t value)
	{
		___coinCount_7 = value;
	}

	inline static int32_t get_offset_of_lastPosition_8() { return static_cast<int32_t>(offsetof(MapManager_t2945081041, ___lastPosition_8)); }
	inline Vector3_t4282066566  get_lastPosition_8() const { return ___lastPosition_8; }
	inline Vector3_t4282066566 * get_address_of_lastPosition_8() { return &___lastPosition_8; }
	inline void set_lastPosition_8(Vector3_t4282066566  value)
	{
		___lastPosition_8 = value;
	}

	inline static int32_t get_offset_of_newPosition_9() { return static_cast<int32_t>(offsetof(MapManager_t2945081041, ___newPosition_9)); }
	inline Vector3_t4282066566  get_newPosition_9() const { return ___newPosition_9; }
	inline Vector3_t4282066566 * get_address_of_newPosition_9() { return &___newPosition_9; }
	inline void set_newPosition_9(Vector3_t4282066566  value)
	{
		___newPosition_9 = value;
	}

	inline static int32_t get_offset_of_mapBlockList_10() { return static_cast<int32_t>(offsetof(MapManager_t2945081041, ___mapBlockList_10)); }
	inline List_1_t747900261 * get_mapBlockList_10() const { return ___mapBlockList_10; }
	inline List_1_t747900261 ** get_address_of_mapBlockList_10() { return &___mapBlockList_10; }
	inline void set_mapBlockList_10(List_1_t747900261 * value)
	{
		___mapBlockList_10 = value;
		Il2CppCodeGenWriteBarrier(&___mapBlockList_10, value);
	}

	inline static int32_t get_offset_of_blockPrefab_11() { return static_cast<int32_t>(offsetof(MapManager_t2945081041, ___blockPrefab_11)); }
	inline GameObjectU5BU5D_t2662109048* get_blockPrefab_11() const { return ___blockPrefab_11; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_blockPrefab_11() { return &___blockPrefab_11; }
	inline void set_blockPrefab_11(GameObjectU5BU5D_t2662109048* value)
	{
		___blockPrefab_11 = value;
		Il2CppCodeGenWriteBarrier(&___blockPrefab_11, value);
	}

	inline static int32_t get_offset_of_matChangeCount_12() { return static_cast<int32_t>(offsetof(MapManager_t2945081041, ___matChangeCount_12)); }
	inline int32_t get_matChangeCount_12() const { return ___matChangeCount_12; }
	inline int32_t* get_address_of_matChangeCount_12() { return &___matChangeCount_12; }
	inline void set_matChangeCount_12(int32_t value)
	{
		___matChangeCount_12 = value;
	}

	inline static int32_t get_offset_of_verticalChangeRate_13() { return static_cast<int32_t>(offsetof(MapManager_t2945081041, ___verticalChangeRate_13)); }
	inline int32_t get_verticalChangeRate_13() const { return ___verticalChangeRate_13; }
	inline int32_t* get_address_of_verticalChangeRate_13() { return &___verticalChangeRate_13; }
	inline void set_verticalChangeRate_13(int32_t value)
	{
		___verticalChangeRate_13 = value;
	}

	inline static int32_t get_offset_of_isUp_14() { return static_cast<int32_t>(offsetof(MapManager_t2945081041, ___isUp_14)); }
	inline bool get_isUp_14() const { return ___isUp_14; }
	inline bool* get_address_of_isUp_14() { return &___isUp_14; }
	inline void set_isUp_14(bool value)
	{
		___isUp_14 = value;
	}

	inline static int32_t get_offset_of_isFeaver_15() { return static_cast<int32_t>(offsetof(MapManager_t2945081041, ___isFeaver_15)); }
	inline bool get_isFeaver_15() const { return ___isFeaver_15; }
	inline bool* get_address_of_isFeaver_15() { return &___isFeaver_15; }
	inline void set_isFeaver_15(bool value)
	{
		___isFeaver_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
