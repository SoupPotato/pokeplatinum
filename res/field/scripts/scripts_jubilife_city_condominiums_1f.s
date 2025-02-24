#include "macros/scrcmd.inc"
#include "res/text/bank/jubilife_city_condominiums_1f.h"

    .data

    ScriptEntry _0012
    ScriptEntry _0025
    ScriptEntry _0044
    ScriptEntry _0063
    ScriptEntryEnd

_0012:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    FacePlayer
    Message 0
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_0025:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    FacePlayer
    WaitFanfare SEQ_SE_CONFIRM
    PlayCry SPECIES_PIKACHU
    Message 1
    ScrCmd_04D
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_0044:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    FacePlayer
    WaitFanfare SEQ_SE_CONFIRM
    PlayCry SPECIES_PACHIRISU
    Message 2
    ScrCmd_04D
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_0063:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    FacePlayer
    GoToIfSet 191, _00B7
    BufferItemName 0, 217
    Message 3
    SetVar 0x8004, 217
    SetVar 0x8005, 1
    ScrCmd_07D 0x8004, 0x8005, 0x800C
    GoToIfEq 0x800C, 0, _00AD
    SetFlag 191
    CallCommonScript 0x7E0
    CloseMessage
    ReleaseAll
    End

_00AD:
    CallCommonScript 0x7E1
    CloseMessage
    ReleaseAll
    End

_00B7:
    Message 4
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

    .byte 0
    .byte 0
