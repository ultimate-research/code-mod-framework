#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEventPipe {
        u64 load_from_l2c_table(app::GimmickEventPipe *,lib::L2CValue const&) asm("_ZN3app8lua_bind42GimmickEventPipe__load_from_l2c_table_implEPNS_16GimmickEventPipeERKN3lib8L2CValueE");
        u64 store_l2c_table(app::GimmickEventPipe const*) asm("_ZN3app8lua_bind38GimmickEventPipe__store_l2c_table_implEPKNS_16GimmickEventPipeE");
        u64 store_l2c_table(app::GimmickEventPipe const*,lib::L2CValue const&) asm("_ZN3app8lua_bind38GimmickEventPipe__store_l2c_table_implEPKNS_16GimmickEventPipeERKN3lib8L2CValueE");
    }
}
