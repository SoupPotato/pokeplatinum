#include "macros/btlcmd.inc"

    .data

_000:
    CheckAbility CHECK_HAVE, BTLSCR_ATTACKER, ABILITY_MULTITYPE, _015
    CompareMonDataToValue OPCODE_EQU, BTLSCR_ATTACKER, BATTLEMON_HELD_ITEM, ITEM_GRISEOUS_ORB, _015
    UpdateVar OPCODE_SET, BTLVAR_SIDE_EFFECT_FLAGS_DIRECT, MOVE_SIDE_EFFECT_CHECK_HP|MOVE_SIDE_EFFECT_TO_DEFENDER|MOVE_SUBSCRIPT_PTR_COPY_ABILITY
    End 

_015:
    UpdateVar OPCODE_FLAG_ON, BTLVAR_MOVE_STATUS_FLAGS, MOVE_STATUS_FAILED
    End 
