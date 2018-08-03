#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Image
struct Image_t2042527209;
// Item
struct Item_t2440468191;
// Table
struct Table_t4160395208;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SampleButton
struct  SampleButton_t803681550  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button SampleButton::button
	Button_t2872111280 * ___button_2;
	// UnityEngine.UI.Image SampleButton::iconImage
	Image_t2042527209 * ___iconImage_3;
	// Item SampleButton::item
	Item_t2440468191 * ___item_4;
	// Table SampleButton::table
	Table_t4160395208 * ___table_5;
	// UnityEngine.GameObject SampleButton::control
	GameObject_t1756533147 * ___control_6;
	// System.Boolean SampleButton::itemHasBeenSet
	bool ___itemHasBeenSet_7;

public:
	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(SampleButton_t803681550, ___button_2)); }
	inline Button_t2872111280 * get_button_2() const { return ___button_2; }
	inline Button_t2872111280 ** get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(Button_t2872111280 * value)
	{
		___button_2 = value;
		Il2CppCodeGenWriteBarrier(&___button_2, value);
	}

	inline static int32_t get_offset_of_iconImage_3() { return static_cast<int32_t>(offsetof(SampleButton_t803681550, ___iconImage_3)); }
	inline Image_t2042527209 * get_iconImage_3() const { return ___iconImage_3; }
	inline Image_t2042527209 ** get_address_of_iconImage_3() { return &___iconImage_3; }
	inline void set_iconImage_3(Image_t2042527209 * value)
	{
		___iconImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___iconImage_3, value);
	}

	inline static int32_t get_offset_of_item_4() { return static_cast<int32_t>(offsetof(SampleButton_t803681550, ___item_4)); }
	inline Item_t2440468191 * get_item_4() const { return ___item_4; }
	inline Item_t2440468191 ** get_address_of_item_4() { return &___item_4; }
	inline void set_item_4(Item_t2440468191 * value)
	{
		___item_4 = value;
		Il2CppCodeGenWriteBarrier(&___item_4, value);
	}

	inline static int32_t get_offset_of_table_5() { return static_cast<int32_t>(offsetof(SampleButton_t803681550, ___table_5)); }
	inline Table_t4160395208 * get_table_5() const { return ___table_5; }
	inline Table_t4160395208 ** get_address_of_table_5() { return &___table_5; }
	inline void set_table_5(Table_t4160395208 * value)
	{
		___table_5 = value;
		Il2CppCodeGenWriteBarrier(&___table_5, value);
	}

	inline static int32_t get_offset_of_control_6() { return static_cast<int32_t>(offsetof(SampleButton_t803681550, ___control_6)); }
	inline GameObject_t1756533147 * get_control_6() const { return ___control_6; }
	inline GameObject_t1756533147 ** get_address_of_control_6() { return &___control_6; }
	inline void set_control_6(GameObject_t1756533147 * value)
	{
		___control_6 = value;
		Il2CppCodeGenWriteBarrier(&___control_6, value);
	}

	inline static int32_t get_offset_of_itemHasBeenSet_7() { return static_cast<int32_t>(offsetof(SampleButton_t803681550, ___itemHasBeenSet_7)); }
	inline bool get_itemHasBeenSet_7() const { return ___itemHasBeenSet_7; }
	inline bool* get_address_of_itemHasBeenSet_7() { return &___itemHasBeenSet_7; }
	inline void set_itemHasBeenSet_7(bool value)
	{
		___itemHasBeenSet_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
