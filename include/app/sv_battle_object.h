#ifndef APP_SV_BATTLE_OBJECT_H
#define APP_SV_BATTLE_OBJECT_H

#include "types.h"
#include "../useful/useful.h"

namespace app::sv_battle_object {
   u64 add_speed_outside() asm("_ZN3app16sv_battle_object17add_speed_outsideEjiRKN3phx8Vector3fE"); 
   bool is_null(uint) asm("_ZN3app16sv_battle_object7is_nullEj"); 
   u64 notify_event_msc_cmd(u64) asm("_ZN3app16sv_battle_object20notify_event_msc_cmdEP9lua_State"); 
   bool is_active(uint) asm("_ZN3app16sv_battle_object9is_activeEj"); 
   int category() asm("_ZN3app16sv_battle_object8categoryEj"); 
   u64 fixed_scaling(uint,bool,int,int,float,int) asm("_ZN3app16sv_battle_object13fixed_scalingEjbiifi"); 
   u64 log_attack_kind(uint) asm("_ZN3app16sv_battle_object15log_attack_kindEj"); 
   u64 pos(uint) asm("_ZN3app16sv_battle_object3posEj"); 
   int get_item_hold_kind(uint) asm("_ZN3app16sv_battle_object18get_item_hold_kindEj"); 
   int get_founder_id(uint) asm("_ZN3app16sv_battle_object14get_founder_idEj"); 
   u64 set_float(uint,float,int) asm("_ZN3app16sv_battle_object9set_floatEjfi"); 
   u64 joint_global_position_with_offset(uint,u64,Vector3f*,Vector3f*) asm("_ZN3app16sv_battle_object33joint_global_position_with_offsetEjN3phx6Hash40ERKNS1_8Vector3fERS3_"); 
   u64 end_inhaled(uint,bool) asm("_ZN3app16sv_battle_object11end_inhaledEjb"); 
   u64 set_power_mul_region_attr_info(u64) asm("_ZN3app16sv_battle_object30set_power_mul_region_attr_infoERNS_26BattleObjectModuleAccessorES2_"); 
   u64 module_accessor(uint) asm("_ZN3app16sv_battle_object15module_accessorEj"); 
   int kind(uint) asm("_ZN3app16sv_battle_object4kindEj"); 
   u64 joint_global_position(uint,u64,Vector3f*) asm("_ZN3app16sv_battle_object21joint_global_positionEjN3phx6Hash40ERNS1_8Vector3fE"); 
   int entry_id(uint) asm("_ZN3app16sv_battle_object8entry_idEj"); 
}

#endif