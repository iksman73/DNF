#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Coin
struct  Coin_t2106033  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean Coin::isCatched
	bool ___isCatched_2;

public:
	inline static int32_t get_offset_of_isCatched_2() { return static_cast<int32_t>(offsetof(Coin_t2106033, ___isCatched_2)); }
	inline bool get_isCatched_2() const { return ___isCatched_2; }
	inline bool* get_address_of_isCatched_2() { return &___isCatched_2; }
	inline void set_isCatched_2(bool value)
	{
		___isCatched_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
