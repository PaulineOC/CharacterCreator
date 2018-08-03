#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// SimpleObjectPool
struct SimpleObjectPool_t1737383141;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// System.Collections.Generic.List`1<Item>
struct List_1_t1809589323;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneController
struct  SceneController_t38942716  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject SceneController::playerFace
	GameObject_t1756533147 * ___playerFace_2;
	// UnityEngine.GameObject SceneController::playerFaceBase
	GameObject_t1756533147 * ___playerFaceBase_3;
	// UnityEngine.GameObject SceneController::playerBody
	GameObject_t1756533147 * ___playerBody_4;
	// UnityEngine.GameObject SceneController::playerBodyBase
	GameObject_t1756533147 * ___playerBodyBase_5;
	// SimpleObjectPool SceneController::RowObjectPool1
	SimpleObjectPool_t1737383141 * ___RowObjectPool1_6;
	// SimpleObjectPool SceneController::buttonObjectPool1
	SimpleObjectPool_t1737383141 * ___buttonObjectPool1_7;
	// UnityEngine.GameObject SceneController::content
	GameObject_t1756533147 * ___content_8;
	// UnityEngine.GameObject SceneController::viewport
	GameObject_t1756533147 * ___viewport_9;
	// UnityEngine.GameObject SceneController::categoryHeader
	GameObject_t1756533147 * ___categoryHeader_10;
	// UnityEngine.GameObject SceneController::buttons
	GameObject_t1756533147 * ___buttons_11;
	// UnityEngine.Sprite[] SceneController::allIcons
	SpriteU5BU5D_t3359083662* ___allIcons_12;
	// System.Int32 SceneController::mode
	int32_t ___mode_13;
	// System.Collections.Generic.List`1<Item> SceneController::currentFace
	List_1_t1809589323 * ___currentFace_14;
	// System.Collections.Generic.List`1<Item> SceneController::currentClothes
	List_1_t1809589323 * ___currentClothes_15;

public:
	inline static int32_t get_offset_of_playerFace_2() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___playerFace_2)); }
	inline GameObject_t1756533147 * get_playerFace_2() const { return ___playerFace_2; }
	inline GameObject_t1756533147 ** get_address_of_playerFace_2() { return &___playerFace_2; }
	inline void set_playerFace_2(GameObject_t1756533147 * value)
	{
		___playerFace_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerFace_2, value);
	}

	inline static int32_t get_offset_of_playerFaceBase_3() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___playerFaceBase_3)); }
	inline GameObject_t1756533147 * get_playerFaceBase_3() const { return ___playerFaceBase_3; }
	inline GameObject_t1756533147 ** get_address_of_playerFaceBase_3() { return &___playerFaceBase_3; }
	inline void set_playerFaceBase_3(GameObject_t1756533147 * value)
	{
		___playerFaceBase_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerFaceBase_3, value);
	}

	inline static int32_t get_offset_of_playerBody_4() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___playerBody_4)); }
	inline GameObject_t1756533147 * get_playerBody_4() const { return ___playerBody_4; }
	inline GameObject_t1756533147 ** get_address_of_playerBody_4() { return &___playerBody_4; }
	inline void set_playerBody_4(GameObject_t1756533147 * value)
	{
		___playerBody_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerBody_4, value);
	}

	inline static int32_t get_offset_of_playerBodyBase_5() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___playerBodyBase_5)); }
	inline GameObject_t1756533147 * get_playerBodyBase_5() const { return ___playerBodyBase_5; }
	inline GameObject_t1756533147 ** get_address_of_playerBodyBase_5() { return &___playerBodyBase_5; }
	inline void set_playerBodyBase_5(GameObject_t1756533147 * value)
	{
		___playerBodyBase_5 = value;
		Il2CppCodeGenWriteBarrier(&___playerBodyBase_5, value);
	}

	inline static int32_t get_offset_of_RowObjectPool1_6() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___RowObjectPool1_6)); }
	inline SimpleObjectPool_t1737383141 * get_RowObjectPool1_6() const { return ___RowObjectPool1_6; }
	inline SimpleObjectPool_t1737383141 ** get_address_of_RowObjectPool1_6() { return &___RowObjectPool1_6; }
	inline void set_RowObjectPool1_6(SimpleObjectPool_t1737383141 * value)
	{
		___RowObjectPool1_6 = value;
		Il2CppCodeGenWriteBarrier(&___RowObjectPool1_6, value);
	}

	inline static int32_t get_offset_of_buttonObjectPool1_7() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___buttonObjectPool1_7)); }
	inline SimpleObjectPool_t1737383141 * get_buttonObjectPool1_7() const { return ___buttonObjectPool1_7; }
	inline SimpleObjectPool_t1737383141 ** get_address_of_buttonObjectPool1_7() { return &___buttonObjectPool1_7; }
	inline void set_buttonObjectPool1_7(SimpleObjectPool_t1737383141 * value)
	{
		___buttonObjectPool1_7 = value;
		Il2CppCodeGenWriteBarrier(&___buttonObjectPool1_7, value);
	}

	inline static int32_t get_offset_of_content_8() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___content_8)); }
	inline GameObject_t1756533147 * get_content_8() const { return ___content_8; }
	inline GameObject_t1756533147 ** get_address_of_content_8() { return &___content_8; }
	inline void set_content_8(GameObject_t1756533147 * value)
	{
		___content_8 = value;
		Il2CppCodeGenWriteBarrier(&___content_8, value);
	}

	inline static int32_t get_offset_of_viewport_9() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___viewport_9)); }
	inline GameObject_t1756533147 * get_viewport_9() const { return ___viewport_9; }
	inline GameObject_t1756533147 ** get_address_of_viewport_9() { return &___viewport_9; }
	inline void set_viewport_9(GameObject_t1756533147 * value)
	{
		___viewport_9 = value;
		Il2CppCodeGenWriteBarrier(&___viewport_9, value);
	}

	inline static int32_t get_offset_of_categoryHeader_10() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___categoryHeader_10)); }
	inline GameObject_t1756533147 * get_categoryHeader_10() const { return ___categoryHeader_10; }
	inline GameObject_t1756533147 ** get_address_of_categoryHeader_10() { return &___categoryHeader_10; }
	inline void set_categoryHeader_10(GameObject_t1756533147 * value)
	{
		___categoryHeader_10 = value;
		Il2CppCodeGenWriteBarrier(&___categoryHeader_10, value);
	}

	inline static int32_t get_offset_of_buttons_11() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___buttons_11)); }
	inline GameObject_t1756533147 * get_buttons_11() const { return ___buttons_11; }
	inline GameObject_t1756533147 ** get_address_of_buttons_11() { return &___buttons_11; }
	inline void set_buttons_11(GameObject_t1756533147 * value)
	{
		___buttons_11 = value;
		Il2CppCodeGenWriteBarrier(&___buttons_11, value);
	}

	inline static int32_t get_offset_of_allIcons_12() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___allIcons_12)); }
	inline SpriteU5BU5D_t3359083662* get_allIcons_12() const { return ___allIcons_12; }
	inline SpriteU5BU5D_t3359083662** get_address_of_allIcons_12() { return &___allIcons_12; }
	inline void set_allIcons_12(SpriteU5BU5D_t3359083662* value)
	{
		___allIcons_12 = value;
		Il2CppCodeGenWriteBarrier(&___allIcons_12, value);
	}

	inline static int32_t get_offset_of_mode_13() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___mode_13)); }
	inline int32_t get_mode_13() const { return ___mode_13; }
	inline int32_t* get_address_of_mode_13() { return &___mode_13; }
	inline void set_mode_13(int32_t value)
	{
		___mode_13 = value;
	}

	inline static int32_t get_offset_of_currentFace_14() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___currentFace_14)); }
	inline List_1_t1809589323 * get_currentFace_14() const { return ___currentFace_14; }
	inline List_1_t1809589323 ** get_address_of_currentFace_14() { return &___currentFace_14; }
	inline void set_currentFace_14(List_1_t1809589323 * value)
	{
		___currentFace_14 = value;
		Il2CppCodeGenWriteBarrier(&___currentFace_14, value);
	}

	inline static int32_t get_offset_of_currentClothes_15() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___currentClothes_15)); }
	inline List_1_t1809589323 * get_currentClothes_15() const { return ___currentClothes_15; }
	inline List_1_t1809589323 ** get_address_of_currentClothes_15() { return &___currentClothes_15; }
	inline void set_currentClothes_15(List_1_t1809589323 * value)
	{
		___currentClothes_15 = value;
		Il2CppCodeGenWriteBarrier(&___currentClothes_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
