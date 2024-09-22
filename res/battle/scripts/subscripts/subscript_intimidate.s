#include "macros/btlcmd.inc"

    .data

_000:
    WaitButtonABTime 15
    UpdateVar OPCODE_SET, BTLVAR_BATTLER_SPEED_TEMP, 0
    UpdateVarFromVar OPCODE_SET, BTLVAR_LAST_BATTLER_ID, BTLVAR_ATTACKER
    UpdateVarFromVar OPCODE_SET, BTLVAR_ATTACKER, BTLVAR_MSG_BATTLER_TEMP

_013:
    GetMonBySpeedOrder BTLVAR_SIDE_EFFECT_MON
    IfSameSide BTLSCR_ATTACKER, BTLSCR_SIDE_EFFECT_MON, _038
    CheckSubstitute BTLSCR_SIDE_EFFECT_MON, _038
    CompareMonDataToValue OPCODE_EQU, BTLSCR_SIDE_EFFECT_MON, BATTLEMON_CUR_HP, 0, _038
    UpdateVar OPCODE_SET, BTLVAR_SIDE_EFFECT_PARAM, MOVE_SUBSCRIPT_PTR_ATTACK_DOWN_1_STAGE
    UpdateVar OPCODE_SET, BTLVAR_SIDE_EFFECT_TYPE, SIDE_EFFECT_TYPE_ABILITY
    Call BATTLE_SUBSCRIPT_UPDATE_STAT_STAGE

_038:
    UpdateVar OPCODE_ADD, BTLVAR_BATTLER_SPEED_TEMP, 1
    GoToIfValidMon BTLVAR_BATTLER_SPEED_TEMP, _013
    UpdateVarFromVar OPCODE_SET, BTLVAR_ATTACKER, BTLVAR_LAST_BATTLER_ID
    End 