#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEventTornadoEscape {
        u64 load_from_l2c_table(app::GimmickEventTornadoEscape *,lib::L2CValue const&) asm("_ZN3app8lua_bind51GimmickEventTornadoEscape__load_from_l2c_table_implEPNS_25GimmickEventTornadoEscapeERKN3lib8L2CValueE");
        u64 store_l2c_table(app::GimmickEventTornadoEscape const*) asm("_ZN3app8lua_bind47GimmickEventTornadoEscape__store_l2c_table_implEPKNS_25GimmickEventTornadoEscapeE");
        u64 store_l2c_table(app::GimmickEventTornadoEscape const*,lib::L2CValue const&) asm("_ZN3app8lua_bind47GimmickEventTornadoEscape__store_l2c_table_implEPKNS_25GimmickEventTornadoEscapeERKN3lib8L2CValueE");
    }
}
