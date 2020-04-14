#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace Article {
        u64 get_battle_object_id(app::Article *) asm("_ZN3app8lua_bind34Article__get_battle_object_id_implEPNS_7ArticleE");
    }
}
