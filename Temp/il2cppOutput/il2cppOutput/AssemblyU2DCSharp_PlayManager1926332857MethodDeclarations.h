#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// PlayManager
struct PlayManager_t1926332857;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PlayManager_GameState1155171017.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"

// System.Void PlayManager::.ctor()
extern "C"  void PlayManager__ctor_m109959634 (PlayManager_t1926332857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayManager::SetState(PlayManager/GameState)
extern "C"  void PlayManager_SetState_m1905448808 (PlayManager_t1926332857 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayManager::Start()
extern "C"  void PlayManager_Start_m3352064722 (PlayManager_t1926332857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayManager::Ready()
extern "C"  void PlayManager_Ready_m2034711507 (PlayManager_t1926332857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayManager::StartPlay()
extern "C"  void PlayManager_StartPlay_m2616368294 (PlayManager_t1926332857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayManager::GameOver()
extern "C"  void PlayManager_GameOver_m1216488216 (PlayManager_t1926332857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayManager::Update()
extern "C"  void PlayManager_Update_m840643451 (PlayManager_t1926332857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayManager::FixedUpdate()
extern "C"  void PlayManager_FixedUpdate_m2347602381 (PlayManager_t1926332857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayManager::UpdateCameraPosition()
extern "C"  void PlayManager_UpdateCameraPosition_m567951881 (PlayManager_t1926332857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayManager::playerCrash(UnityEngine.GameObject)
extern "C"  void PlayManager_playerCrash_m3684556430 (PlayManager_t1926332857 * __this, GameObject_t3674682005 * ___colObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayManager::playerGetCoin()
extern "C"  void PlayManager_playerGetCoin_m1523239798 (PlayManager_t1926332857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayManager::ResetCombo()
extern "C"  void PlayManager_ResetCombo_m486957617 (PlayManager_t1926332857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
