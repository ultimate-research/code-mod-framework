#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterEntry {
        u64 fighter_num(u64 /*fighter_entry*/) asm("_ZN3app8lua_bind30FighterEntry__fighter_num_implEPNS_12FighterEntryE") LINKABLE;
        u64 get_fighter_id(u64 /*fighter_entry*/,int,bool) asm("_ZN3app8lua_bind33FighterEntry__get_fighter_id_implEPNS_12FighterEntryEib") LINKABLE;
        u64 current_fighter_id(u64 /*fighter_entry*/) asm("_ZN3app8lua_bind37FighterEntry__current_fighter_id_implEPNS_12FighterEntryE") LINKABLE;
        u64 heal(u64 /*fighter_entry*/,float,bool,int,u64) asm("_ZN3app8lua_bind23FighterEntry__heal_implEPNS_12FighterEntryEfbiN3phx6Hash40E") LINKABLE;
        u64 eat_item(u64 /*fighter_entry*/,app::LinkEventTouchItem &,bool) asm("_ZN3app8lua_bind27FighterEntry__eat_item_implEPNS_12FighterEntryERNS_18LinkEventTouchItemEb") LINKABLE;
    }
}
