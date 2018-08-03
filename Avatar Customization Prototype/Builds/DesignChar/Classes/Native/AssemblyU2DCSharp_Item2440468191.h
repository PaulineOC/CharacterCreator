#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t309593783;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t1389513207;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Item
struct  Item_t2440468191  : public Il2CppObject
{
public:
	// System.String Item::itemName
	String_t* ___itemName_0;
	// System.String Item::category
	String_t* ___category_1;
	// UnityEngine.Sprite Item::icon
	Sprite_t309593783 * ___icon_2;
	// System.Single Item::whenAdded
	float ___whenAdded_3;
	// System.Collections.Generic.List`1<UnityEngine.Color> Item::options
	List_1_t1389513207 * ___options_4;

public:
	inline static int32_t get_offset_of_itemName_0() { return static_cast<int32_t>(offsetof(Item_t2440468191, ___itemName_0)); }
	inline String_t* get_itemName_0() const { return ___itemName_0; }
	inline String_t** get_address_of_itemName_0() { return &___itemName_0; }
	inline void set_itemName_0(String_t* value)
	{
		___itemName_0 = value;
		Il2CppCodeGenWriteBarrier(&___itemName_0, value);
	}

	inline static int32_t get_offset_of_category_1() { return static_cast<int32_t>(offsetof(Item_t2440468191, ___category_1)); }
	inline String_t* get_category_1() const { return ___category_1; }
	inline String_t** get_address_of_category_1() { return &___category_1; }
	inline void set_category_1(String_t* value)
	{
		___category_1 = value;
		Il2CppCodeGenWriteBarrier(&___category_1, value);
	}

	inline static int32_t get_offset_of_icon_2() { return static_cast<int32_t>(offsetof(Item_t2440468191, ___icon_2)); }
	inline Sprite_t309593783 * get_icon_2() const { return ___icon_2; }
	inline Sprite_t309593783 ** get_address_of_icon_2() { return &___icon_2; }
	inline void set_icon_2(Sprite_t309593783 * value)
	{
		___icon_2 = value;
		Il2CppCodeGenWriteBarrier(&___icon_2, value);
	}

	inline static int32_t get_offset_of_whenAdded_3() { return static_cast<int32_t>(offsetof(Item_t2440468191, ___whenAdded_3)); }
	inline float get_whenAdded_3() const { return ___whenAdded_3; }
	inline float* get_address_of_whenAdded_3() { return &___whenAdded_3; }
	inline void set_whenAdded_3(float value)
	{
		___whenAdded_3 = value;
	}

	inline static int32_t get_offset_of_options_4() { return static_cast<int32_t>(offsetof(Item_t2440468191, ___options_4)); }
	inline List_1_t1389513207 * get_options_4() const { return ___options_4; }
	inline List_1_t1389513207 ** get_address_of_options_4() { return &___options_4; }
	inline void set_options_4(List_1_t1389513207 * value)
	{
		___options_4 = value;
		Il2CppCodeGenWriteBarrier(&___options_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
