    .include "macros/scrcmd.inc"

    .data

    .long _0022-.-4
    .long _0026-.-4
    .long _0041-.-4
    .long _009E-.-4
    .long _00C4-.-4
    .long _020A-.-4
    .long _021D-.-4
    .long _0232-.-4
    .short 0xFD13

_0022:
    ScrCmd_2F2
    ScrCmd_002

_0026:
    ScrCmd_020 142
    ScrCmd_01C 1, _0033
    ScrCmd_002

_0033:
    ScrCmd_31F
    ScrCmd_028 0x4055, 14
    ScrCmd_065 128
    ScrCmd_002

_0041:
    ScrCmd_049 0x5DC
    ScrCmd_060
    ScrCmd_02C 13
    ScrCmd_03E 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 1, _0061
    ScrCmd_034
    ScrCmd_061
    ScrCmd_002

_0061:
    ScrCmd_0CD 0
    ScrCmd_02C 14
    ScrCmd_034
    ScrCmd_270 2, 1
    ScrCmd_028 0x40AA, 1
    ScrCmd_049 0x5D2
    ScrCmd_0BC 6, 1, 0, 0
    ScrCmd_0BD
    ScrCmd_0BE 0x10B, 0, 32, 17, 1
    ScrCmd_0BC 6, 1, 1, 0
    ScrCmd_0BD
    ScrCmd_002

_009E:
    ScrCmd_0BC 6, 1, 0, 0
    ScrCmd_0BD
    ScrCmd_0BE 0x245, 0, 89, 57, 1
    ScrCmd_0BC 6, 1, 1, 0
    ScrCmd_0BD
    ScrCmd_002

_00C4:
    ScrCmd_049 0x5DC
    ScrCmd_060
    ScrCmd_04C 0x1E7, 0
    ScrCmd_02C 2
    ScrCmd_04D
    ScrCmd_034
    ScrCmd_01E 142
    ScrCmd_319 0x1E7, 47
    ScrCmd_01F 142
    ScrCmd_0EC 0x800C
    ScrCmd_314 0x800C
    ScrCmd_011 0x800C, 2
    ScrCmd_01C 1, _0204
    ScrCmd_011 0x800C, 3
    ScrCmd_01C 1, _0204
    ScrCmd_011 0x800C, 5
    ScrCmd_01C 1, _014E
    ScrCmd_011 0x800C, 6
    ScrCmd_01C 1, _014E
    ScrCmd_011 0x800C, 4
    ScrCmd_01C 1, _016E
    ScrCmd_311 130
    ScrCmd_311 129
    ScrCmd_05E 129, _0250
    ScrCmd_05F
    ScrCmd_02C 3
    ScrCmd_034
    ScrCmd_02C 4
    ScrCmd_016 _0194

_014E:
    ScrCmd_311 130
    ScrCmd_311 129
    ScrCmd_05E 129, _0250
    ScrCmd_05F
    ScrCmd_02C 3
    ScrCmd_034
    ScrCmd_02C 6
    ScrCmd_016 _0194

_016E:
    ScrCmd_01E 0x121
    ScrCmd_01E 0x250
    ScrCmd_01F 0x278
    ScrCmd_311 130
    ScrCmd_311 129
    ScrCmd_05E 129, _0250
    ScrCmd_05F
    ScrCmd_02C 3
    ScrCmd_034
    ScrCmd_02C 5
_0194:
    ScrCmd_034
    ScrCmd_069 0x8004, 0x8005
    ScrCmd_066 0x8004, 0x8005
    ScrCmd_05E 241, _0280
    ScrCmd_05E 130, _026C
    ScrCmd_05E 129, _0258
    ScrCmd_05E 0xFF, _0244
    ScrCmd_05F
    ScrCmd_02C 7
    ScrCmd_02C 8
    ScrCmd_02C 9
    ScrCmd_02C 10
    ScrCmd_034
    ScrCmd_05E 130, _0274
    ScrCmd_05F
    ScrCmd_312 130
    ScrCmd_05E 241, _0288
    ScrCmd_05F
    ScrCmd_067
    ScrCmd_02C 11
    ScrCmd_05E 129, _0264
    ScrCmd_05F
    ScrCmd_02C 12
    ScrCmd_031
    ScrCmd_034
    ScrCmd_061
    ScrCmd_002

_0204:
    ScrCmd_0EB
    ScrCmd_061
    ScrCmd_002

_020A:
    ScrCmd_049 0x5DC
    ScrCmd_060
    ScrCmd_068
    ScrCmd_02C 12
    ScrCmd_031
    ScrCmd_034
    ScrCmd_061
    ScrCmd_002

_021D:
    ScrCmd_060
    ScrCmd_04C 0x1E7, 0
    ScrCmd_02C 0
    ScrCmd_04D
    ScrCmd_032
    ScrCmd_034
    ScrCmd_061
    ScrCmd_002

_0232:
    ScrCmd_060
    ScrCmd_0CD 0
    ScrCmd_02C 1
    ScrCmd_032
    ScrCmd_034
    ScrCmd_061
    ScrCmd_002

    .balign 4, 0
_0244:
    .short 33, 1
    .short 75, 1
    .short 0xFE, 0x00

    .balign 4, 0
_0250:
    .short 117, 2
    .short 0xFE, 0x00

    .balign 4, 0
_0258:
    .short 33, 1
    .short 75, 1
    .short 0xFE, 0x00

    .balign 4, 0
_0264:
    .short 32, 1
    .short 0xFE, 0x00

    .balign 4, 0
_026C:
    .short 117, 1
    .short 0xFE, 0x00

    .balign 4, 0
_0274:
    .short 118, 1
    .short 13, 5
    .short 0xFE, 0x00

    .balign 4, 0
_0280:
    .short 13, 5
    .short 0xFE, 0x00

    .balign 4, 0
_0288:
    .short 12, 5
    .short 0xFE, 0x00