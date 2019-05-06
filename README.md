# Ultimate Code Mod Framework

A C project framework/template for those starting off with function replacement through SaltyNX.

## What it provides:

* The ability to replace functions with C reimplementations on runtime, either by symbol or by non-relocated address
* An IMPORT macro for automatically getting a relocated addresses from a non-relocated address
* A project set up for devkitpro targetting SaltyNX's plugin setup
* A set of lua2cpp and ACMD imports for calling back to the base game's functions

## Getting started

NOTE: Either Windows Subsystem for Linux, MinGW, or a Mac/Linux system is required. This is due to essential developer tools such as `make` and `git` are needed. Setting these up properly will make your life easier.

1. Install devkitpro (and devkitA64), make sure you have DEVKITPRO in path. Windows Subsystem for Linux is recommended for windows users.
Instructions on how to do so can be found here: [https://switchbrew.org/wiki/Setting_up_Development_Environment](https://switchbrew.org/wiki/Setting_up_Development_Environment).
2. Create a folder where ever you'd like to create your projects in the future. Think of this as your "workbench" of sorts.
3. From within said folder, run the following commands:
```sh
git clone https://github.com/ultimate-research/code-mod-framework.git
rm -rf code-mod-framework/.git/
```

## Creating a new project

NOTE: this section is written under the assumption you have you are setup in a similar manner as to the "Getting Started" section.

1. Make a copy of the code-mod-framework folder, name it whatever you'd like (this is just so you don't have to redownload the template every time you start a new project). Alternatively, if there has been an update, you may want to reclone the reposititory.
2. Edit the Makefile within the copy you've made, changing [Line 32](https://github.com/ultimate-research/code-mod-framework/blob/master/Makefile#L32) and replace "my_plugin" with the name of your project.
```make
TARGET		:=	my_plugin
```

## Moveset Edits

### Replacing an AnimCMD function
AnimCMD controls how each of a character's animations work, and it is split into four categories: `game`, `effect`, `expression`, and `sound`. AnimCMD is frame-based, and takes care of a lot of the scripting required to make up what we consider a character's moveset. For example, almost all normal hitboxes are defined in a character's `game` AnimCMD scripts. From here on, "ACMD" and "AnimCMD" will be used interchangeably.

#### Using this framework to replace animcmd functions
We'll be working in `script_replacement.h`, specifically `replace_scripts()`. Notice how the code is already laid out:
```C
void replace_scripts(L2CAgent* l2c_agent, u8 category, uint kind) {
    // fighter
    if (category == 0) {
        // fox
        if (kind == 0x7) {
            lib_L2CAgent_sv_set_function_hash(l2c_agent, &shine_replace, hash40("game_speciallwstart"));
            lib_L2CAgent_sv_set_function_hash(l2c_agent, &shine_replace, hash40("game_specialairlwstart"));
        }

        // peach
        if (kind == 0xD) {
        }
    }
}
```

In order to specify which character (or weapon, or ...) we would like to replace an ACMD function for, we can use the BATTLE_OBJECT_CATEGORY and KIND of the battle_object associated to the current L2CAgent. Finding which categories correspond to what type of object and which "KIND"s are associated to which characters, search for "BATTLE_OBJECT_CATEGORY" and "FIGHTER_KIND" [here](https://gist.github.com/BenHall-7/4fbe4ae7a466271a24d75fd7589bdaf2).

So we can see that the syntax 
```C
lib_L2CAgent_sv_set_function_hash(l2c_agent, &shine_replace, hash40("game_speciallwstart"));
```
simply has arguments of the L2CAgent, our replacement function's address, and the hash40 of the animation name. Notice it is prepended by the ACMD type (the others being `"effect_", "expression_", and "sound_").

#### Writing AnimCMD functions
ACMD functions are completely controlled by frames, so the most important functions are related to frames.
In our replacement of Fox's shine, we can see the first method of declaring which frame we are working on:
```C
// Frame 1
app_sv_animcmd_frame(l2c_agent->lua_state_agent, 1);
lib_L2CAgent_clear_lua_stack(l2c_agent);
app_sv_animcmd_is_excute(l2c_agent->lua_state_agent);
L2CValue is_excute;
get_lua_stack(l2c_agent, 1, &is_excute);
if (is_excute.raw) { ... }
```

Another method that is frequently used is `wait(x)`, which means the frame `x` frames after the previous frame timer.
```C
// assuming the following code occurs after the previous frame check
// Frame 10
app_sv_animcmd_wait(l2c_agent->lua_state_agent, 9);
lib_L2CAgent_clear_lua_stack(l2c_agent);
app_sv_animcmd_is_excute(l2c_agent->lua_state_agent);
L2CValue is_excute;
get_lua_stack(l2c_agent, 1, &is_excute);
if (is_excute.raw) { ... }
``` 

Past this, ACMD functions are pretty self-explanatory given their symbol names in the character NROs or exported from the `main`. These functions all work based on the lua_State stack, so in order to use them, you must put your arguments into `L2CValue` variables and push them onto the stack with `push_lua_stack` before calling the ACMD function. However, in ACMD code, calling any function is possible, such as the `lua_bind` functions which do not have any such lua_State wrapping. 

### Replacing a status script function
[TODO]. It is done with `sv_replace_status_func(l2c_agent, status_kind, key, &replacement_function)`.

## Code Edits

### Replacing a function

There are 3 steps to replacing a function:

1. Research the function
2. Reimplement the function
3. Use `SaltySD_function_replace_sym`

So first of all you want to locate a function you want to reimplement. In order to do this, you'll need to use a software reverse engineering framework to inspect the game's NSO file. For this I'd recommend [GHIDRA](http://ghidra-sre.org) with [the switch GHIDRA loader](https://github.com/Adubbz/Ghidra-Switch-Loader/releases).
For my example, I'm going to convince the game we're always in training mode. I've found a function called app::smashball::is_training_mode(void) in GHIDRA, here's a small excerpt from the disassembly and decompilation of them offered by GHIDRA:
```
                             **************************************************************
                             * app::smashball::is_training_mode()                         *
                             **************************************************************
                             undefined is_training_mode(void)
             undefined         w0:1           <RETURN>                                XREF[1]:     710107aa50(W)  
             ulonglong         x0:8           isTraining                              XREF[1]:     710107aa50(W)  
             undefined8        Stack[-0x10]:8 local_10                                XREF[2]:     710107a9f0(W), 
                                                                                                   710107aa64(*)  
                             _ZN3app9smashball16is_training_modeEv           XREF[1]:     Entry Point(*)  
                             app::smashball::is_training_mode
      710107a9f0 fd 7b bf a9     stp        x29,x30,[sp, #local_10]!
      710107a9f4 fd 03 00 91     mov        x29,sp
      710107a9f8 48 b4 02 90     adrp       x8,0x7106702000
      710107a9fc 08 41 1f 91     add        x8,x8,#0x7d0
```
```C

// WARNING: Unknown calling convention yet parameter storage is locked
// app::smashball::is_training_mode()

ulonglong is_training_mode(void)

{
  int iVar1;
  ulonglong isTraining;
  
  if (((DAT_71067027d0 & 1) == 0) && (iVar1 = FUN_7102ff51d0(&DAT_71067027d0), iVar1 != 0)) {
    FUN_7102cf2500();
    FUN_71000001c0(&LAB_7102cf22a0,&DAT_71066b56f0,&PTR_ConstantUnitZ_710426e000);
    FUN_7102ff51e0(&DAT_71067027d0);
  }
  isTraining = 1;
  if (modeByte_71066b5720 != 0xc) {
    isTraining = (ulonglong)(modeByte_71066b5720 == 0x20);
  }
  return isTraining;
}

```

Important takeaways from this:
-is_training_mode takes no arguments (void) and returns a ulonglong (aka a 64 bit unsigned integer).
-is_training_mode has a "mangled" name of _ZN3app9smashball16is_training_modeEv

Now, when we reimplement this we need to make sure we match the arguments taken and the return value given, otherwise things will likely break. So our reimplementation should look something like this:

(in our main.c)
```C
uint64_t is_training_mode() {
  return 1;
}
```

In this case, the ulonglong represents a bool, so we return 1 to indicate it is true. Now to tell the framework to replace the game's training mode function with your own just add the following line to `main.c`'s main() function:
```C
SaltySD_function_replace_sym("_ZN3app9smashball16is_training_modeEv", &is_training_mode);
```

The first argument is our mangled name, the second is a pointer to the function we want to replace it with.

Now to build our plugin, run the following command in the root of our project:
```sh
make clean && make
```

this will generate an elf which can be placed into SaltyNX's plugin folder (with SaltyNX already installed) in order to apply our replacement when the game launches.
