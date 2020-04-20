#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace OnCalcParamEvent {
        u64 load_from_l2c_table(app::OnCalcParamEvent *,lib::L2CValue const&) asm("_ZN3app8lua_bind42OnCalcParamEvent__load_from_l2c_table_implEPNS_16OnCalcParamEventERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::OnCalcParamEvent const*) asm("_ZN3app8lua_bind38OnCalcParamEvent__store_l2c_table_implEPKNS_16OnCalcParamEventE") LINKABLE;
        u64 store_l2c_table(app::OnCalcParamEvent const*,lib::L2CValue const&) asm("_ZN3app8lua_bind38OnCalcParamEvent__store_l2c_table_implEPKNS_16OnCalcParamEventERKN3lib8L2CValueE") LINKABLE;
    }
}
