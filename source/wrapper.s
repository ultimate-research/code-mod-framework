.global __test_wrapper
.type  __test_wrapper, %function
__test_wrapper:
    SUB SP, SP, #0x50
    STR X21, [SP, #0x20]
    STP X20, X19, [SP, #0x30]
    STP X29, X30, [SP, #0x40]
    ADD X29, SP, #0x40

    MOV X20, X0
    MOV X0, X1
    MOV X19, X1
    BL _Z16get_format_thunkPv
    CBZ X0, no_format
        MOV X21, X0

        // test_func(l2c_value, l2c_agent)
        ADD X0, SP, #0x10
        MOV X1, X20
        BL _Z9test_funcPN3lib8L2CValueEPNS_8L2CAgentE

        // l2c_value->push_variadic(0, format, variadic);
        ADD X0, SP, #0x10
        MOV X1, XZR
        MOV X2, X21
        MOV X3, X19
        BL _Z19push_variadic_thunkPN3lib8L2CValueEmPKcPm
        ADD X0, SP, #0x10
        B post_variadic
    no_format:
        // test_func(l2c_value, l2c_agent)
        MOV X0, SP
        MOV X1, X20
        BL _Z9test_funcPN3lib8L2CValueEPNS_8L2CAgentE
        MOV X0, SP
    post_variadic:
    BL _Z18L2CValue_del_thunkPN3lib8L2CValueE
    LDP X29, X30, [SP, #0x40]
    LDR X21, [SP, 0x20]
    LDP X20, X19, [SP, 0x30]
    ADD SP, SP, #0x50
    RET
    
    // Catch exceptions.
    MOV X19, X0
    ADD X0, SP, #0x10
    BL _Z18L2CValue_del_thunkPN3lib8L2CValueE
    MOV X0, X19
    BL _Unwind_Resume