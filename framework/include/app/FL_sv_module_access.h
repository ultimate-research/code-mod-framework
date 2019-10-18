#ifndef APP_FL_SV_MODULE_ACCESS_H
#define APP_FL_SV_MODULE_ACCESS_H

#include <switch_min.h>
#include "useful/useful.h"

namespace app::FL_sv_module_access {
    extern void slope(u64) asm("_ZN3app19FL_sv_module_access5slopeEP9lua_State") LINKABLE; 
    extern void capture(u64) asm("_ZN3app19FL_sv_module_access7captureEP9lua_State") LINKABLE; 
    extern void link(u64) asm("_ZN3app19FL_sv_module_access4linkEP9lua_State") LINKABLE; 
}

#endif