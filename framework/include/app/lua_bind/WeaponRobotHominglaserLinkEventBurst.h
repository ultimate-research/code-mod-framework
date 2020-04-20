#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace WeaponRobotHominglaserLinkEventBurst {
        u64 load_from_l2c_table(app::WeaponRobotHominglaserLinkEventBurst *,lib::L2CValue const&) asm("_ZN3app8lua_bind62WeaponRobotHominglaserLinkEventBurst__load_from_l2c_table_implEPNS_36WeaponRobotHominglaserLinkEventBurstERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::WeaponRobotHominglaserLinkEventBurst const*) asm("_ZN3app8lua_bind58WeaponRobotHominglaserLinkEventBurst__store_l2c_table_implEPKNS_36WeaponRobotHominglaserLinkEventBurstE") LINKABLE;
        u64 store_l2c_table(app::WeaponRobotHominglaserLinkEventBurst const*,lib::L2CValue const&) asm("_ZN3app8lua_bind58WeaponRobotHominglaserLinkEventBurst__store_l2c_table_implEPKNS_36WeaponRobotHominglaserLinkEventBurstERKN3lib8L2CValueE") LINKABLE;
    }
}
