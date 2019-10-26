#ifndef APP_SV_MODULE_ACCESS_H
#define APP_SV_MODULE_ACCESS_H

#include <switch_min.h>
#include "useful/useful.h"

namespace app::sv_module_access {
    extern void color_blend(u64) asm("_ZN3app16sv_module_access11color_blendEP9lua_State") LINKABLE; 
    extern void search(u64) asm("_ZN3app16sv_module_access6searchEP9lua_State") LINKABLE; 
    extern void article(u64) asm("_ZN3app16sv_module_access7articleEP9lua_State") LINKABLE; 
    extern void _catch(u64) asm("_ZN3app16sv_module_access6_catchEP9lua_State") LINKABLE; 
    extern void link(u64) asm("_ZN3app16sv_module_access4linkEP9lua_State") LINKABLE; 
    extern void shield(u64) asm("_ZN3app16sv_module_access6shieldEP9lua_State") LINKABLE; 
    extern void camera(u64) asm("_ZN3app16sv_module_access6cameraEP9lua_State") LINKABLE; 
    extern void attack(u64) asm("_ZN3app16sv_module_access6attackEP9lua_State") LINKABLE; 
    extern void sound(u64) asm("_ZN3app16sv_module_access5soundEP9lua_State") LINKABLE; 
    extern void physics(u64) asm("_ZN3app16sv_module_access7physicsEP9lua_State") LINKABLE; 
    extern void capture(u64) asm("_ZN3app16sv_module_access7captureEP9lua_State") LINKABLE; 
    extern void effect(u64) asm("_ZN3app16sv_module_access6effectEP9lua_State") LINKABLE; 
    extern void slope(u64) asm("_ZN3app16sv_module_access5slopeEP9lua_State") LINKABLE; 
    extern void grab(u64) asm("_ZN3app16sv_module_access4grabEP9lua_State") LINKABLE; 
    extern void cancel(u64) asm("_ZN3app16sv_module_access6cancelEP9lua_State") LINKABLE; 
    extern void item(u64) asm("_ZN3app16sv_module_access4itemEP9lua_State") LINKABLE; 
    extern void damage(u64) asm("_ZN3app16sv_module_access6damageEP9lua_State") LINKABLE; 
}

#endif