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
// UnityEngine.Material[]
struct MaterialU5BU5D_t170856778;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Block
struct  Block_t64279661  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject Block::playerObj
	GameObject_t3674682005 * ___playerObj_2;
	// UnityEngine.GameObject Block::parentObj
	GameObject_t3674682005 * ___parentObj_3;
	// UnityEngine.GameObject Block::Coin
	GameObject_t3674682005 * ___Coin_4;
	// UnityEngine.Material[] Block::blockMaterial
	MaterialU5BU5D_t170856778* ___blockMaterial_5;
	// System.Int32 Block::materialType
	int32_t ___materialType_6;

public:
	inline static int32_t get_offset_of_playerObj_2() { return static_cast<int32_t>(offsetof(Block_t64279661, ___playerObj_2)); }
	inline GameObject_t3674682005 * get_playerObj_2() const { return ___playerObj_2; }
	inline GameObject_t3674682005 ** get_address_of_playerObj_2() { return &___playerObj_2; }
	inline void set_playerObj_2(GameObject_t3674682005 * value)
	{
		___playerObj_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerObj_2, value);
	}

	inline static int32_t get_offset_of_parentObj_3() { return static_cast<int32_t>(offsetof(Block_t64279661, ___parentObj_3)); }
	inline GameObject_t3674682005 * get_parentObj_3() const { return ___parentObj_3; }
	inline GameObject_t3674682005 ** get_address_of_parentObj_3() { return &___parentObj_3; }
	inline void set_parentObj_3(GameObject_t3674682005 * value)
	{
		___parentObj_3 = value;
		Il2CppCodeGenWriteBarrier(&___parentObj_3, value);
	}

	inline static int32_t get_offset_of_Coin_4() { return static_cast<int32_t>(offsetof(Block_t64279661, ___Coin_4)); }
	inline GameObject_t3674682005 * get_Coin_4() const { return ___Coin_4; }
	inline GameObject_t3674682005 ** get_address_of_Coin_4() { return &___Coin_4; }
	inline void set_Coin_4(GameObject_t3674682005 * value)
	{
		___Coin_4 = value;
		Il2CppCodeGenWriteBarrier(&___Coin_4, value);
	}

	inline static int32_t get_offset_of_blockMaterial_5() { return static_cast<int32_t>(offsetof(Block_t64279661, ___blockMaterial_5)); }
	inline MaterialU5BU5D_t170856778* get_blockMaterial_5() const { return ___blockMaterial_5; }
	inline MaterialU5BU5D_t170856778** get_address_of_blockMaterial_5() { return &___blockMaterial_5; }
	inline void set_blockMaterial_5(MaterialU5BU5D_t170856778* value)
	{
		___blockMaterial_5 = value;
		Il2CppCodeGenWriteBarrier(&___blockMaterial_5, value);
	}

	inline static int32_t get_offset_of_materialType_6() { return static_cast<int32_t>(offsetof(Block_t64279661, ___materialType_6)); }
	inline int32_t get_materialType_6() const { return ___materialType_6; }
	inline int32_t* get_address_of_materialType_6() { return &___materialType_6; }
	inline void set_materialType_6(int32_t value)
	{
		___materialType_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
