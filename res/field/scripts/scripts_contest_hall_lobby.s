#include "macros/scrcmd.inc"
#include "res/text/bank/contest_hall_lobby.h"

    .data

    ScriptEntry _002E
    ScriptEntry _01EC
    ScriptEntry _0229
    ScriptEntry _0266
    ScriptEntry _02A3
    ScriptEntry _02E0
    ScriptEntry _0328
    ScriptEntry _033B
    ScriptEntry _034E
    ScriptEntry _0361
    ScriptEntry _04A4
    ScriptEntryEnd

_002E:
    LockAll
    ApplyMovement 6, _0140
    WaitMovement
    Message 0
    CloseMessage
    ApplyMovement 5, _0174
    WaitMovement
    BufferPlayerName 0
    Message 1
    CloseMessage
    ApplyMovement LOCALID_PLAYER, _0138
    WaitMovement
    ApplyMovement 6, _014C
    WaitMovement
    Message 2
    BufferPlayerName 0
    Message 3
    Message 4
    SetVar 0x8004, 49
    SetVar 0x8005, 1
    CallCommonScript 0x7FF
    Message 5
    ApplyMovement 6, _0158
    ApplyMovement 5, _017C
    WaitMovement
    Message 6
    CloseMessage
    ApplyMovement 6, _0160
    ApplyMovement LOCALID_PLAYER, _01DC
    WaitMovement
    RemoveObject 6
    SetVar 0x40F7, 1
    ApplyMovement 5, _0190
    ApplyMovement LOCALID_PLAYER, _01E4
    WaitMovement
    BufferPlayerName 0
    Message 7
    CloseMessage
    PlaySound SEQ_FANFA4
    GetPlayerGender 0x800C
    GoToIfEq 0x800C, GENDER_MALE, _00EE
    GoTo _00F9
    End

_00EE:
    Message 8
    GoTo _0104
    End

_00F9:
    Message 9
    GoTo _0104
    End

_0104:
    WaitSound
    Message 10
    CloseMessage
    WaitTime 15, 0x800C
    ApplyMovement LOCALID_PLAYER, _01C8
    ApplyMovement 5, _01B0
    WaitMovement
    PlayFanfare SEQ_SE_DP_KAIDAN2
    RemoveObject 5
    WaitFanfare SEQ_SE_DP_KAIDAN2
    SetFlag 0x978
    ReleaseAll
    End

    .balign 4, 0
_0138:
    MoveAction_012 2
    EndMovement

    .balign 4, 0
_0140:
    MoveAction_033
    MoveAction_075
    EndMovement

    .balign 4, 0
_014C:
    MoveAction_038
    MoveAction_033
    EndMovement

    .balign 4, 0
_0158:
    MoveAction_034
    EndMovement

    .balign 4, 0
_0160:
    MoveAction_015 3
    MoveAction_012 3
    MoveAction_015 3
    MoveAction_012 6
    EndMovement

    .balign 4, 0
_0174:
    MoveAction_033
    EndMovement

    .balign 4, 0
_017C:
    MoveAction_062
    MoveAction_035
    EndMovement

    .byte 35
    .byte 0
    .byte 1
    .byte 0
    .byte 254
    .byte 0
    .byte 0
    .byte 0

    .balign 4, 0
_0190:
    MoveAction_033
    EndMovement

    .byte 14
    .byte 0
    .byte 8
    .byte 0
    .byte 254
    .byte 0
    .byte 0
    .byte 0
    .byte 12
    .byte 0
    .byte 6
    .byte 0
    .byte 254
    .byte 0
    .byte 0
    .byte 0
    .byte 15
    .byte 0
    .byte 8
    .byte 0
    .byte 254
    .byte 0
    .byte 0
    .byte 0

    .balign 4, 0
_01B0:
    MoveAction_014
    MoveAction_013 2
    MoveAction_015
    MoveAction_013
    MoveAction_033
    EndMovement

    .balign 4, 0
_01C8:
    MoveAction_062
    MoveAction_034
    MoveAction_063
    MoveAction_033
    EndMovement

    .balign 4, 0
_01DC:
    MoveAction_035
    EndMovement

    .balign 4, 0
_01E4:
    MoveAction_032
    EndMovement

_01EC:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    ScrCmd_12F 0, 0x800C
    GoToIfEq 0x800C, 0, _031D
    FadeScreen 6, 1, 0, 0
    WaitFadeScreen
    ScrCmd_0A8 0, 0x800C
    ReturnToField
    FadeScreen 6, 1, 1, 0
    WaitFadeScreen
    ReleaseAll
    End

_0229:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    ScrCmd_12F 1, 0x800C
    GoToIfEq 0x800C, 0, _031D
    FadeScreen 6, 1, 0, 0
    WaitFadeScreen
    ScrCmd_0A8 1, 0x800C
    ReturnToField
    FadeScreen 6, 1, 1, 0
    WaitFadeScreen
    ReleaseAll
    End

_0266:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    ScrCmd_12F 2, 0x800C
    GoToIfEq 0x800C, 0, _031D
    FadeScreen 6, 1, 0, 0
    WaitFadeScreen
    ScrCmd_0A8 2, 0x800C
    ReturnToField
    FadeScreen 6, 1, 1, 0
    WaitFadeScreen
    ReleaseAll
    End

_02A3:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    ScrCmd_12F 3, 0x800C
    GoToIfEq 0x800C, 0, _031D
    FadeScreen 6, 1, 0, 0
    WaitFadeScreen
    ScrCmd_0A8 3, 0x800C
    ReturnToField
    FadeScreen 6, 1, 1, 0
    WaitFadeScreen
    ReleaseAll
    End

_02E0:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    ScrCmd_12F 4, 0x800C
    GoToIfEq 0x800C, 0, _031D
    FadeScreen 6, 1, 0, 0
    WaitFadeScreen
    ScrCmd_0A8 4, 0x800C
    ReturnToField
    FadeScreen 6, 1, 1, 0
    WaitFadeScreen
    ReleaseAll
    End

_031D:
    Message 24
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_0328:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    FacePlayer
    Message 21
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_033B:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    FacePlayer
    Message 22
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_034E:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    FacePlayer
    Message 23
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_0361:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    FacePlayer
    GoToIfUnset 0x159, _03D3
    GoToIfUnset 0x15A, _038A
_037F:
    Message 18
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_038A:
    CheckItem ITEM_POFFIN_CASE, 1, 0x800C
    GoToIfEq 0x800C, 0, _037F
    Message 13
    ScrCmd_28A 0x800C
    GoToIfEq 0x800C, 0, _03C8
    Call _0437
    SetFlag 0x15A
    Message 17
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_03C8:
    Message 19
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_03D3:
    SetFlag 0x159
    CheckItem ITEM_POFFIN_CASE, 1, 0x800C
    GoToIfEq 0x800C, 0, _0428
    Message 13
    ScrCmd_28A 0x800C
    GoToIfEq 0x800C, 0, _0419
    Call _0437
    SetFlag 0x15A
    Message 16
    CloseMessage
    Call _0458
    ReleaseAll
    End

_0419:
    Message 20
    CloseMessage
    Call _0458
    ReleaseAll
    End

_0428:
    Message 12
    CloseMessage
    Call _0458
    ReleaseAll
    End

_0437:
    ScrCmd_289 0x800C, 60, 30, 30, 30, 30, 40
    PlaySound SEQ_FANFA4
    BufferPlayerName 0
    Message 14
    WaitSound
    Message 15
    Return

_0458:
    GetPlayerDir 0x800C
    GoToIfEq 0x800C, 2, _0475
    ApplyMovement 9, _0484
    WaitMovement
    Return

_0475:
    ApplyMovement 9, _0490
    WaitMovement
    Return

    .balign 4, 0
_0484:
    MoveAction_015 8
    MoveAction_037
    EndMovement

    .balign 4, 0
_0490:
    MoveAction_013
    MoveAction_015 8
    MoveAction_012
    MoveAction_037
    EndMovement

_04A4:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    FacePlayer
    WaitTime 30, 0x800C
    GetPlayerDir 0x800C
    GoToIfEq 0x800C, 0, _052B
    GoToIfEq 0x800C, 1, _053D
    GoToIfEq 0x800C, 2, _054F
    GoToIfEq 0x800C, 3, _0561
    End

_04EC:
    Message 11
    CloseMessage
    GetPlayerDir 0x8004
    GoToIfEq 0x8004, 1, _0573
    GoToIfEq 0x8004, 0, _058D
    GoToIfEq 0x8004, 2, _05A7
    GoToIfEq 0x8004, 3, _05B9
    End

_052B:
    ApplyMovement 10, _0624
    WaitMovement
    GoTo _04EC
    End

_053D:
    ApplyMovement 10, _0638
    WaitMovement
    GoTo _04EC
    End

_054F:
    ApplyMovement 10, _064C
    WaitMovement
    GoTo _04EC
    End

_0561:
    ApplyMovement 10, _0660
    WaitMovement
    GoTo _04EC
    End

_0573:
    ApplyMovement 10, _05E8
    ApplyMovement LOCALID_PLAYER, _0604
    WaitMovement
    GoTo _05D3
    End

_058D:
    ApplyMovement 10, _05E8
    ApplyMovement LOCALID_PLAYER, _0604
    WaitMovement
    GoTo _05D3
    End

_05A7:
    ApplyMovement 10, _05E8
    WaitMovement
    GoTo _05D3
    End

_05B9:
    ApplyMovement 10, _05F4
    ApplyMovement LOCALID_PLAYER, _0610
    WaitMovement
    GoTo _05D3
    End

_05D3:
    PlayFanfare SEQ_SE_DP_KAIDAN2
    RemoveObject 10
    WaitFanfare SEQ_SE_DP_KAIDAN2
    SetFlag 0x18D
    ReleaseAll
    End

    .balign 4, 0
_05E8:
    MoveAction_014 6
    MoveAction_013 4
    EndMovement

    .balign 4, 0
_05F4:
    MoveAction_012
    MoveAction_014 6
    MoveAction_013 5
    EndMovement

    .balign 4, 0
_0604:
    MoveAction_063
    MoveAction_034
    EndMovement

    .balign 4, 0
_0610:
    MoveAction_063 2
    MoveAction_032
    MoveAction_062
    MoveAction_034
    EndMovement

    .balign 4, 0
_0624:
    MoveAction_002 4
    MoveAction_000 4
    MoveAction_003 4
    MoveAction_001 4
    EndMovement

    .balign 4, 0
_0638:
    MoveAction_003 4
    MoveAction_001 4
    MoveAction_002 4
    MoveAction_000 4
    EndMovement

    .balign 4, 0
_064C:
    MoveAction_001 4
    MoveAction_002 4
    MoveAction_000 4
    MoveAction_003 4
    EndMovement

    .balign 4, 0
_0660:
    MoveAction_000 4
    MoveAction_003 4
    MoveAction_001 4
    MoveAction_002 4
    EndMovement
