#include "macros/scrcmd.inc"
#include "res/text/bank/sunyshore_city_gym_room_1.h"

    .data

    ScriptEntry _0012
    ScriptEntry _001D
    ScriptEntry _0022
    ScriptEntry _0056
    ScriptEntryEnd

_0012:
    SetVar 0x4000, 0
    ScrCmd_175 0
    End

_001D:
    ScrCmd_176 0
    End

_0022:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    FacePlayer
    CheckBadgeAcquired BADGE_ID_BEACON, 0x800C
    GoToIfEq 0x800C, 1, _0048
    Message 0
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_0048:
    BufferPlayerName 0
    Message 1
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_0056:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    CheckBadgeAcquired BADGE_ID_BEACON, 0x800C
    GoToIfEq 0x800C, 1, _007A
    Message 2
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_007A:
    GoToIfGe 0x40EF, 1, _0098
    BufferPlayerName 0
    BufferRivalName 1
    Message 3
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_0098:
    BufferPlayerName 0
    BufferRivalName 1
    Message 4
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

    .byte 0
    .byte 0
    .byte 0
