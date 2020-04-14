#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEventTornadoMoveInfo {
        u64 load_from_l2c_table(app::GimmickEventTornadoMoveInfo *,lib::L2CValue const&) asm("_ZN3app8lua_bind53GimmickEventTornadoMoveInfo__load_from_l2c_table_implEPNS_27GimmickEventTornadoMoveInfoERKN3lib8L2CValueE");
        u64 store_l2c_table(app::GimmickEventTornadoMoveInfo const*) asm("_ZN3app8lua_bind49GimmickEventTornadoMoveInfo__store_l2c_table_implEPKNS_27GimmickEventTornadoMoveInfoE");
        u64 store_l2c_table(app::GimmickEventTornadoMoveInfo const*,lib::L2CValue const&) asm("_ZN3app8lua_bind49GimmickEventTornadoMoveInfo__store_l2c_table_implEPKNS_27GimmickEventTornadoMoveInfoERKN3lib8L2CValueE");
    }
}
