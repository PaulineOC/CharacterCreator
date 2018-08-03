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
// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_t2844261301;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleObjectPool
struct  SimpleObjectPool_t1737383141  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject SimpleObjectPool::prefab
	GameObject_t1756533147 * ___prefab_2;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> SimpleObjectPool::inactiveInstances
	Stack_1_t2844261301 * ___inactiveInstances_3;

public:
	inline static int32_t get_offset_of_prefab_2() { return static_cast<int32_t>(offsetof(SimpleObjectPool_t1737383141, ___prefab_2)); }
	inline GameObject_t1756533147 * get_prefab_2() const { return ___prefab_2; }
	inline GameObject_t1756533147 ** get_address_of_prefab_2() { return &___prefab_2; }
	inline void set_prefab_2(GameObject_t1756533147 * value)
	{
		___prefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_2, value);
	}

	inline static int32_t get_offset_of_inactiveInstances_3() { return static_cast<int32_t>(offsetof(SimpleObjectPool_t1737383141, ___inactiveInstances_3)); }
	inline Stack_1_t2844261301 * get_inactiveInstances_3() const { return ___inactiveInstances_3; }
	inline Stack_1_t2844261301 ** get_address_of_inactiveInstances_3() { return &___inactiveInstances_3; }
	inline void set_inactiveInstances_3(Stack_1_t2844261301 * value)
	{
		___inactiveInstances_3 = value;
		Il2CppCodeGenWriteBarrier(&___inactiveInstances_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
