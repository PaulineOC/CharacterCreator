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
// System.Collections.Generic.List`1<Item>
struct List_1_t1809589323;
// UnityEngine.Transform
struct Transform_t3275118058;
// SimpleObjectPool
struct SimpleObjectPool_t1737383141;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Table
struct  Table_t4160395208  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Table::control
	GameObject_t1756533147 * ___control_2;
	// System.Collections.Generic.List`1<Item> Table::clothesList
	List_1_t1809589323 * ___clothesList_3;
	// UnityEngine.Transform Table::contentPanel
	Transform_t3275118058 * ___contentPanel_4;
	// SimpleObjectPool Table::buttonObjectPool
	SimpleObjectPool_t1737383141 * ___buttonObjectPool_5;
	// SimpleObjectPool Table::RowObjectPool
	SimpleObjectPool_t1737383141 * ___RowObjectPool_6;
	// UnityEngine.GameObject Table::col
	GameObject_t1756533147 * ___col_7;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(Table_t4160395208, ___control_2)); }
	inline GameObject_t1756533147 * get_control_2() const { return ___control_2; }
	inline GameObject_t1756533147 ** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(GameObject_t1756533147 * value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}

	inline static int32_t get_offset_of_clothesList_3() { return static_cast<int32_t>(offsetof(Table_t4160395208, ___clothesList_3)); }
	inline List_1_t1809589323 * get_clothesList_3() const { return ___clothesList_3; }
	inline List_1_t1809589323 ** get_address_of_clothesList_3() { return &___clothesList_3; }
	inline void set_clothesList_3(List_1_t1809589323 * value)
	{
		___clothesList_3 = value;
		Il2CppCodeGenWriteBarrier(&___clothesList_3, value);
	}

	inline static int32_t get_offset_of_contentPanel_4() { return static_cast<int32_t>(offsetof(Table_t4160395208, ___contentPanel_4)); }
	inline Transform_t3275118058 * get_contentPanel_4() const { return ___contentPanel_4; }
	inline Transform_t3275118058 ** get_address_of_contentPanel_4() { return &___contentPanel_4; }
	inline void set_contentPanel_4(Transform_t3275118058 * value)
	{
		___contentPanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___contentPanel_4, value);
	}

	inline static int32_t get_offset_of_buttonObjectPool_5() { return static_cast<int32_t>(offsetof(Table_t4160395208, ___buttonObjectPool_5)); }
	inline SimpleObjectPool_t1737383141 * get_buttonObjectPool_5() const { return ___buttonObjectPool_5; }
	inline SimpleObjectPool_t1737383141 ** get_address_of_buttonObjectPool_5() { return &___buttonObjectPool_5; }
	inline void set_buttonObjectPool_5(SimpleObjectPool_t1737383141 * value)
	{
		___buttonObjectPool_5 = value;
		Il2CppCodeGenWriteBarrier(&___buttonObjectPool_5, value);
	}

	inline static int32_t get_offset_of_RowObjectPool_6() { return static_cast<int32_t>(offsetof(Table_t4160395208, ___RowObjectPool_6)); }
	inline SimpleObjectPool_t1737383141 * get_RowObjectPool_6() const { return ___RowObjectPool_6; }
	inline SimpleObjectPool_t1737383141 ** get_address_of_RowObjectPool_6() { return &___RowObjectPool_6; }
	inline void set_RowObjectPool_6(SimpleObjectPool_t1737383141 * value)
	{
		___RowObjectPool_6 = value;
		Il2CppCodeGenWriteBarrier(&___RowObjectPool_6, value);
	}

	inline static int32_t get_offset_of_col_7() { return static_cast<int32_t>(offsetof(Table_t4160395208, ___col_7)); }
	inline GameObject_t1756533147 * get_col_7() const { return ___col_7; }
	inline GameObject_t1756533147 ** get_address_of_col_7() { return &___col_7; }
	inline void set_col_7(GameObject_t1756533147 * value)
	{
		___col_7 = value;
		Il2CppCodeGenWriteBarrier(&___col_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
