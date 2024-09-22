#include "macros/btlcmd.inc"

    .data

_000:
    CompareMonDataToValue OPCODE_EQU, BTLSCR_ATTACKER, BATTLEMON_STOCKPILE_COUNT, 0, _078
    UpdateMonDataFromVar OPCODE_GET, BTLSCR_ATTACKER, BATTLEMON_STOCKPILE_COUNT, BTLVAR_HP_CALC_TEMP
    UpdateVar OPCODE_SUB, BTLVAR_HP_CALC_TEMP, 3
    UpdateVar OPCODE_MUL, BTLVAR_HP_CALC_TEMP, -1
    UpdateVar OPCODE_SET, BTLVAR_CALC_TEMP, 0x00000001
    UpdateVarFromVar OPCODE_LEFT_SHIFT, BTLVAR_CALC_TEMP, BTLVAR_HP_CALC_TEMP
    UpdateMonDataFromVar OPCODE_GET, BTLSCR_ATTACKER, BATTLEMON_MAX_HP, BTLVAR_HP_CALC_TEMP
    DivideVarByVar BTLVAR_HP_CALC_TEMP, BTLVAR_CALC_TEMP
    UpdateMonData OPCODE_SET, BTLSCR_ATTACKER, BATTLEMON_STOCKPILE_COUNT, 0
    UpdateMonDataFromVar OPCODE_GET, BTLSCR_ATTACKER, BATTLEMON_STOCKPILE_DEF_BOOSTS, BTLVAR_CALC_TEMP
    UpdateMonDataFromVar OPCODE_SUB_TO_ZERO, BTLSCR_ATTACKER, BATTLEMON_DEFENSE_STAGE, BTLVAR_CALC_TEMP
    UpdateMonDataFromVar OPCODE_GET, BTLSCR_ATTACKER, BATTLEMON_STOCKPILE_SPDEF_BOOSTS, BTLVAR_CALC_TEMP
    UpdateMonDataFromVar OPCODE_SUB_TO_ZERO, BTLSCR_ATTACKER, BATTLEMON_SP_DEFENSE_STAGE, BTLVAR_CALC_TEMP
    UpdateMonData OPCODE_SET, BTLSCR_ATTACKER, BATTLEMON_STOCKPILE_DEF_BOOSTS, 0
    UpdateMonData OPCODE_SET, BTLSCR_ATTACKER, BATTLEMON_STOCKPILE_SPDEF_BOOSTS, 0
    UpdateVarFromVar OPCODE_SET, BTLVAR_MSG_BATTLER_TEMP, BTLVAR_ATTACKER
    UpdateVar OPCODE_SET, BTLVAR_SIDE_EFFECT_FLAGS_DIRECT, MOVE_SIDE_EFFECT_ON_HIT|MOVE_SUBSCRIPT_PTR_SWALLOW
    End 

_078:
    PrintAttackMessage 
    Wait 
    WaitButtonABTime 30
    // But it failed to swallow a thing!
    PrintMessage pl_msg_00000368_00815, TAG_NONE
    Wait 
    WaitButtonABTime 30
    UpdateVar OPCODE_FLAG_ON, BTLVAR_MOVE_STATUS_FLAGS, MOVE_STATUS_NO_MORE_WORK
    End 