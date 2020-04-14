#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterEntry {
        u64 fighter_num(app::FighterEntry *) asm("_ZN3app8lua_bind30FighterEntry__fighter_num_implEPNS_12FighterEntryE");
        u64 get_fighter_id(app::FighterEntry *,int,bool) asm("_ZN3app8lua_bind33FighterEntry__get_fighter_id_implEPNS_12FighterEntryEib");
        u64 current_fighter_id(app::FighterEntry *) asm("_ZN3app8lua_bind37FighterEntry__current_fighter_id_implEPNS_12FighterEntryE");
        u64 heal(app::FighterEntry *,float,bool,int,phx::Hash40) asm("_ZN3app8lua_bind23FighterEntry__heal_implEPNS_12FighterEntryEfbiN3phx6Hash40E");
        u64 eat_item(app::FighterEntry *,app::LinkEventTouchItem &,bool) asm("_ZN3app8lua_bind27FighterEntry__eat_item_implEPNS_12FighterEntryERNS_18LinkEventTouchItemEb");
    }
}
