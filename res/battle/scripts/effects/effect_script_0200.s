#include "macros/btlcmd.inc"

    .data

_000:
    UpdateVar OPCODE_ADD, BTLVAR_CRITICAL_BOOSTS, 1
    UpdateVar OPCODE_SET, BTLVAR_SIDE_EFFECT_FLAGS_INDIRECT, MOVE_SIDE_EFFECT_TO_DEFENDER|MOVE_SUBSCRIPT_PTR_BURN
    CalcCrit 
    CalcDamage 
    End 
