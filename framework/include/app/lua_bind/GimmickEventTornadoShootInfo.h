#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEventTornadoShootInfo {
        u64 load_from_l2c_table(app::GimmickEventTornadoShootInfo *,lib::L2CValue const&) asm("_ZN3app8lua_bind54GimmickEventTornadoShootInfo__load_from_l2c_table_implEPNS_28GimmickEventTornadoShootInfoERKN3lib8L2CValueE");
        u64 store_l2c_table(app::GimmickEventTornadoShootInfo const*) asm("_ZN3app8lua_bind50GimmickEventTornadoShootInfo__store_l2c_table_implEPKNS_28GimmickEventTornadoShootInfoE");
        u64 store_l2c_table(app::GimmickEventTornadoShootInfo const*,lib::L2CValue const&) asm("_ZN3app8lua_bind50GimmickEventTornadoShootInfo__store_l2c_table_implEPKNS_28GimmickEventTornadoShootInfoERKN3lib8L2CValueE");
    }
}
