#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace ItemParamAccessor {
        u64 boss_common_param_int(app::ItemParamAccessor *,app::ItemKind,app::BossCommonParamInt) asm("_ZN3app8lua_bind45ItemParamAccessor__boss_common_param_int_implEPNS_17ItemParamAccessorENS_8ItemKindENS_18BossCommonParamIntE") LINKABLE;
        bool is_valid_self_param(app::ItemParamAccessor *,app::ItemKind,u64) asm("_ZN3app8lua_bind43ItemParamAccessor__is_valid_self_param_implEPNS_17ItemParamAccessorENS_8ItemKindEN3phx6Hash40E") LINKABLE;
        u64 get_self_param_float(app::ItemParamAccessor *,app::ItemKind,u64) asm("_ZN3app8lua_bind44ItemParamAccessor__get_self_param_float_implEPNS_17ItemParamAccessorENS_8ItemKindEN3phx6Hash40E") LINKABLE;
        u64 get_self_param_int(app::ItemParamAccessor *,app::ItemKind,u64) asm("_ZN3app8lua_bind42ItemParamAccessor__get_self_param_int_implEPNS_17ItemParamAccessorENS_8ItemKindEN3phx6Hash40E") LINKABLE;
    }
}
