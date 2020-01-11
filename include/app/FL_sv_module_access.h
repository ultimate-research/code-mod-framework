#ifndef APP_FL_SV_MODULE_ACCESS_H
#define APP_FL_SV_MODULE_ACCESS_H

#include "types.h"

namespace app::FL_sv_module_access {
   void slope(u64) asm("_ZN3app19FL_sv_module_access5slopeEP9lua_State"); 
   void capture(u64) asm("_ZN3app19FL_sv_module_access7captureEP9lua_State"); 
   void link(u64) asm("_ZN3app19FL_sv_module_access4linkEP9lua_State"); 
}

#endif