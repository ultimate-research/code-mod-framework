#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEventDrumShake {
        u64 load_from_l2c_table(app::GimmickEventDrumShake *,lib::L2CValue const&) asm("_ZN3app8lua_bind47GimmickEventDrumShake__load_from_l2c_table_implEPNS_21GimmickEventDrumShakeERKN3lib8L2CValueE");
        u64 store_l2c_table(app::GimmickEventDrumShake const*) asm("_ZN3app8lua_bind43GimmickEventDrumShake__store_l2c_table_implEPKNS_21GimmickEventDrumShakeE");
        u64 store_l2c_table(app::GimmickEventDrumShake const*,lib::L2CValue const&) asm("_ZN3app8lua_bind43GimmickEventDrumShake__store_l2c_table_implEPKNS_21GimmickEventDrumShakeERKN3lib8L2CValueE");
    }
}
