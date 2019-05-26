#include <switch.h>

#include <stdint.h>

#include "crc32.h"

#include "l2c.hpp"
#include "l2c_imports.hpp"
#include "acmd_wrapper.hpp"
#include "const_value_table.h"

using namespace lib;
using namespace app::sv_animcmd;
using namespace app::lua_bind;

u64 shine_replace(L2CAgent* l2c_agent, void* variadic);
u64 ivy_upsmash(L2CAgent* l2c_agent, void* variadic);
u64 squirtle_utilt(L2CAgent* l2c_agent, void* variadic);

void replace_scripts(L2CAgent* l2c_agent, u8 category, int kind) {
	// fighter
	if (category == BATTLE_OBJECT_CATEGORY_FIGHTER) {
		// fox
		if (kind == FIGHTER_KIND_FOX) {
			l2c_agent->sv_set_function_hash(&shine_replace, hash40("game_speciallwstart"));
			l2c_agent->sv_set_function_hash(&shine_replace, hash40("game_specialairlwstart"));
		}

		// ivysaur
		if (kind == FIGHTER_KIND_PFUSHIGISOU) {
			l2c_agent->sv_set_function_hash(&ivy_upsmash, hash40("game_attackhi4"));
		}

		// squirtle
		if (kind == FIGHTER_KIND_PZENIGAME) {
			l2c_agent->sv_set_function_hash(&squirtle_utilt, hash40("game_attackhi3"));
		}
	}
}

// AnimCMD replacement functions
u64 shine_replace(L2CAgent* l2c_agent, void* variadic) {
	ACMD acmd = ACMD(l2c_agent);

	acmd.frame(1);
	if(acmd.is_excute()) {
		acmd.ATTACK(0, 0, hash40("top"), 10.0, 10, 32, 0, 66, 7.5, 0.0, 6.5, 0.0, 1.0, 1.0, ATTACK_SETOFF_KIND_OFF, ATTACK_LR_CHECK_POS, false, 0, 0.0, 0, false, false, false, false, true, COLLISION_SITUATION_MASK_G, COLLISION_CATEGORY_MASK_ALL, COLLISION_PART_MASK_ALL, false, hash40("collision_attr_elec"), ATTACK_SOUND_LEVEL_L, COLLISION_SOUND_ATTR_ELEC, ATTACK_REGION_ENERGY);
		acmd.ATTACK(1, 0, hash40("top"),  1.0, 24, 45, 0, 66, 7.5, 0.0, 6.5, 0.0, 1.0, 1.0, ATTACK_SETOFF_KIND_OFF, ATTACK_LR_CHECK_POS, false, 0, 0.0, 0, false, false, false, false, true, COLLISION_SITUATION_MASK_A, COLLISION_CATEGORY_MASK_ALL, COLLISION_PART_MASK_ALL, false, hash40("collision_attr_elec"), ATTACK_SOUND_LEVEL_L, COLLISION_SOUND_ATTR_ELEC, ATTACK_REGION_ENERGY);
	}

	return 0;
}

u64 squirtle_utilt(L2CAgent* l2c_agent, void* variadic) {
	ACMD acmd = ACMD(l2c_agent);

	acmd.frame(5);
	if (acmd.is_excute()) {
		acmd.ATTACK(0, 0, hash40("head"), 15.0, 88, 100, 0, 30, 10.0, 1.7, 0.7, 0.7, 1.7, 0.7, 0.7, 1.0, 1.0, ATTACK_SETOFF_KIND_ON, ATTACK_LR_CHECK_POS, false, 0, 0.0, 0, false, false, false, false, true, COLLISION_SITUATION_MASK_GA, COLLISION_CATEGORY_MASK_ALL, COLLISION_PART_MASK_ALL, false, hash40("collision_attr_fire"), ATTACK_SOUND_LEVEL_M, COLLISION_SOUND_ATTR_PUNCH, ATTACK_REGION_HEAD);
		acmd.ATTACK(1, 0, hash40("hip"),  15.0, 88, 100, 0, 30, 10.0, 1.7, 1.2, 1.2, 1.7, 1.2, 1.2, 1.0, 1.0, ATTACK_SETOFF_KIND_ON, ATTACK_LR_CHECK_POS, false, 0, 0.0, 0, false, false, false, false, true, COLLISION_SITUATION_MASK_GA, COLLISION_CATEGORY_MASK_ALL, COLLISION_PART_MASK_ALL, false, hash40("collision_attr_fire"), ATTACK_SOUND_LEVEL_M, COLLISION_SOUND_ATTR_PUNCH, ATTACK_REGION_HEAD);
	}

	acmd.wait(2);
	if (acmd.is_excute()) {
		AttackModule::clear_all(acmd.module_accessor);
	}

	return 0;
}

u64 ivy_upsmash(L2CAgent* l2c_agent, void* variadic) {
	ACMD acmd = ACMD(l2c_agent);

	acmd.frame(8);
	if (acmd.is_excute()) {
		WorkModule::on_flag(acmd.module_accessor, FIGHTER_STATUS_ATTACK_FLAG_START_SMASH_HOLD);
		/** 
		 * This return statement is unusual, but for some reason
		 * necessary. It may have to do with smash attacks in general.
		*/
		return 0;
	}

	acmd.frame(26);
	if (acmd.is_excute()) {
		acmd.wrap(HIT_NODE, { L2CValue(hash40("flower")), L2CValue(HIT_STATUS_XLU) });
		acmd.ATTACK(0, 0, hash40("top"), 100.0, 82, 78, 0, 78, 20.0, 0.0, 17.0, 0.0, 1.0, 1.0, ATTACK_SETOFF_KIND_ON, ATTACK_LR_CHECK_POS, false, 0, 0.0, 0, false, false, false, false, true, COLLISION_SITUATION_MASK_GA, COLLISION_CATEGORY_MASK_ALL, COLLISION_PART_MASK_ALL, false, hash40("collision_attr_death"), ATTACK_SOUND_LEVEL_L, COLLISION_SOUND_ATTR_FIRE, ATTACK_REGION_BOMB);
		acmd.ATTACK(1, 0, hash40("top"), 100.0, 82, 78, 0, 78, 12.0, 0.0,  5.0, 0.0, 1.0, 1.0, ATTACK_SETOFF_KIND_ON, ATTACK_LR_CHECK_POS, false, 0, 0.0, 0, false, false, false, false, true, COLLISION_SITUATION_MASK_GA, COLLISION_CATEGORY_MASK_ALL, COLLISION_PART_MASK_ALL, false, hash40("collision_attr_death"), ATTACK_SOUND_LEVEL_L, COLLISION_SOUND_ATTR_FIRE, ATTACK_REGION_BOMB);
	}

	acmd.wait(4);
	if (acmd.is_excute()) {
		AttackModule::clear_all(acmd.module_accessor);
		HitModule::set_status_all(acmd.module_accessor, HIT_STATUS_NORMAL, 0);
	}

	return 0;
}

void* sv_get_status_func(u64 l2c_agentbase, int status_kind, u64 key) {
	u64 unk48 = LOAD64(l2c_agentbase + 0x48);
	u64 unk50 = LOAD64(l2c_agentbase + 0x50);
	if (0x2E8BA2E8BA2E8BA3LL * ((unk50 - unk48) >> 4) > (u64)status_kind)
		return *(void **)(unk48 + 0xB0LL * status_kind + (key << 32 >> 29));
  
	return 0;
}

void sv_replace_status_func(u64 l2c_agentbase, int status_kind, u64 key, void* func) {
	u64 unk48 = LOAD64(l2c_agentbase + 0x48);
	u64 unk50 = LOAD64(l2c_agentbase + 0x50);
	if (0x2E8BA2E8BA2E8BA3LL * ((unk50 - unk48) >> 4) > (u64)status_kind) {
		*(void **)(unk48 + 0xB0LL * status_kind + (key << 32 >> 29)) = func;
	}
}

u64 clear_lua_stack_replace(u64 l2c_agent) {
	u64 lua_state = LOAD64(l2c_agent + 8);
	if ((lua_state - 8) && LOAD64(lua_state - 8) && (LOAD64(LOAD64(lua_state - 8) + 416LL))) {
		u8 battle_object_category = *(u8 *)(LOAD64(lua_state - 8) + 404LL);
		int battle_object_kind = *(int *)(LOAD64(lua_state - 8) + 408LL);
		replace_scripts((L2CAgent*)l2c_agent, battle_object_category, battle_object_kind);
	}

	// Original clear_lua_stack:
	u64 v1 = LOAD64(l2c_agent + 8);
	u64 v2 = LOAD64(v1 + 16);
	u64 i = LOAD64(LOAD64(v1 + 32)) + 16LL;
	for (; v2 < i; v2 = LOAD64(v1 + 16)) {
		LOAD64(v1 + 16) = v2 + 16;
		*(u32 *)(v2 + 8) = 0;
	}
	LOAD64(v1 + 16) = i;
	return l2c_agent;
}
