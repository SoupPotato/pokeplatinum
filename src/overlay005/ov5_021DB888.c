#include <nitro.h>
#include <string.h>

#include "struct_decls/struct_0200B358_decl.h"
#include "struct_decls/sys_task.h"
#include "struct_decls/struct_020507E4_decl.h"
#include "struct_decls/struct_020508D4_decl.h"
#include "struct_decls/struct_02061AB4_decl.h"

#include "struct_defs/struct_0203CDB0.h"
#include "overlay005/struct_ov5_021F8E3C.h"

#include "unk_02005474.h"
#include "unk_0200B358.h"
#include "unk_0200D9E8.h"
#include "heap.h"
#include "unk_0201D15C.h"
#include "unk_0203A378.h"
#include "unk_0203E880.h"
#include "unk_020507CC.h"
#include "unk_020508D4.h"
#include "unk_0205E7D0.h"
#include "unk_02061804.h"
#include "unk_020655F4.h"
#include "unk_0206A8DC.h"
#include "unk_0206AFE0.h"
#include "unk_0207D3B8.h"
#include "overlay005/ov5_021DB888.h"
#include "overlay005/ov5_021DFB54.h"

typedef struct {
    u16 unk_00[6];
} UnkStruct_ov5_021F8E48;

typedef struct {
    u32 unk_00;
    UnkStruct_0203CDB0 * unk_04;
    UnkStruct_020507E4 * unk_08;
    const UnkStruct_ov5_021F8E48 * unk_0C;
    UnkStruct_02061AB4 * unk_10[64];
    u16 unk_110;
    u16 unk_112;
    u16 * unk_114;
    UnkStruct_0200B358 * unk_118;
    SysTask * unk_11C;
} UnkStruct_ov5_021DBA58;

typedef struct {
    SysTask * unk_00;
    SysTask * unk_04;
    UnkStruct_ov5_021DBA58 * unk_08;
} UnkStruct_ov5_021DBC64;

void ov5_021DB888(UnkStruct_020508D4 * param0, UnkStruct_0200B358 * param1, u16 * param2);
u16 ov5_021DBD98(UnkStruct_0203CDB0 * param0, UnkStruct_02061AB4 * param1, u16 param2);
BOOL ov5_021DBB94(UnkStruct_0203CDB0 * param0);
static BOOL ov5_021DBB70(u32 param0);
static BOOL ov5_021DB8D8(UnkStruct_020508D4 * param0);
static int ov5_021DBA58(UnkStruct_ov5_021DBA58 * param0);
static void ov5_021DBA54(UnkStruct_ov5_021DBA58 * param0, u32 param1);
static void ov5_021DBA7C(UnkStruct_ov5_021DBA58 * param0);
static void ov5_021DBC40(UnkStruct_ov5_021DBA58 * param0, UnkStruct_02061AB4 * param1, const UnkStruct_ov5_021F8E3C * param2);
static void ov5_021DBC64(UnkStruct_ov5_021DBA58 * param0, SysTask * param1);
static void ov5_021DBC94(SysTask * param0, void * param1);
static BOOL ov5_021DBCD4(UnkStruct_ov5_021DBA58 * param0);
static BOOL ov5_021DBCE0(UnkStruct_ov5_021DBA58 * param0);
static u16 ov5_021DBD88(UnkStruct_02061AB4 * param0);
static void ov5_021DBC08(UnkStruct_0203CDB0 * param0);
static u16 ov5_021DBDDC(UnkStruct_0203CDB0 * param0, u16 param1);
static u16 ov5_021DBDFC(UnkStruct_0203CDB0 * param0, u16 param1);
static u16 ov5_021DBE48(UnkStruct_0203CDB0 * param0, u16 param1, u16 param2);
static u16 ov5_021DBE70(u16 param0, u16 param1);
static u16 ov5_021DBEA4(u16 param0, u16 param1);
static BOOL ov5_021DBEB8(UnkStruct_02061AB4 * param0);
static void ov5_021DBECC(UnkStruct_02061AB4 * param0, u16 param1);
void ov5_021DBED4(UnkStruct_0203CDB0 * param0, UnkStruct_02061AB4 * param1);
static BOOL ov5_021DBF20(UnkStruct_0203CDB0 * param0);
static UnkStruct_02061AB4 * ov5_021DBF70(UnkStruct_0203CDB0 * param0, UnkStruct_02061AB4 * param1, int param2);

const UnkStruct_ov5_021F8E48 Unk_ov5_021F8E48[] = {
	{ 0xE, 0xE, 0x0, 0x0, 0x0, 0x0 },
	{ 0x15, 0x273, 0x274, 0xffff, 0x275, 0x0 },
	{ 0x2C, 0x2C, 0x0, 0x0, 0x0, 0x0 },
	{ 0x2D, 0xffff, 0x276, 0x277, 0xffff, 0x278 },
	{ 0x14, 0x14, 0x0, 0x0, 0x0, 0x0 },
	{ 0x26, 0xffff, 0x279, 0x27A, 0xffff, 0x27B },
	{ 0x4A, 0xffff, 0xffff, 0x27C, 0xffff, 0x27D },
	{ 0x4C, 0x4C, 0x0, 0x0, 0x0, 0x0 },
	{ 0x51, 0x51, 0x0, 0x0, 0x0, 0x0 },
	{ 0x22A, 0xffff, 0xffff, 0xffff, 0xffff, 0x27E },
	{ 0x22B, 0x22B, 0x0, 0x0, 0x0, 0x0 },
	{ 0x2E, 0xffff, 0x27F, 0x280, 0x281, 0x0 },
	{ 0x38, 0x38, 0x0, 0x0, 0x0, 0x0 },
	{ 0x2F, 0xffff, 0x282, 0x283, 0x284, 0x0 },
	{ 0x39, 0x39, 0x0, 0x0, 0x0, 0x0 },
	{ 0x10, 0x10, 0x0, 0x0, 0x0, 0x0 },
	{ 0x22, 0x22, 0x0, 0x0, 0x0, 0x0 },
	{ 0x179, 0x285, 0x286, 0xffff, 0x287, 0x0 },
	{ 0x84, 0x84, 0x0, 0x0, 0x0, 0x0 },
	{ 0x85, 0x85, 0x0, 0x0, 0x0, 0x0 },
	{ 0x8C, 0xffff, 0xffff, 0xffff, 0x288, 0x0 },
	{ 0x86, 0x86, 0x0, 0x0, 0x0, 0x0 },
	{ 0x87, 0x87, 0x0, 0x0, 0x0, 0x0 },
	{ 0x8D, 0xffff, 0xffff, 0xffff, 0x289, 0x0 },
	{ 0x57, 0x57, 0x0, 0x0, 0x0, 0x0 },
	{ 0x110, 0x110, 0x0, 0x0, 0x0, 0x0 },
	{ 0x111, 0x111, 0x0, 0x0, 0x0, 0x0 },
	{ 0x112, 0xffff, 0xffff, 0xffff, 0x28A, 0x0 },
	{ 0x17D, 0x17D, 0x0, 0x0, 0x0, 0x0 },
	{ 0x17E, 0x17E, 0x0, 0x0, 0x0, 0x0 },
	{ 0x30, 0x30, 0x0, 0x0, 0x0, 0x0 },
	{ 0x3A, 0xffff, 0xffff, 0x28B, 0xffff, 0x28C },
	{ 0x19, 0x19, 0x0, 0x0, 0x0, 0x0 },
	{ 0x1A, 0x1A, 0x0, 0x0, 0x0, 0x0 },
	{ 0x1B, 0xffff, 0x28D, 0x28E, 0xffff, 0x28F },
	{ 0x1C, 0x1C, 0x0, 0x0, 0x0, 0x0 },
	{ 0x1D, 0x1D, 0x0, 0x0, 0x0, 0x0 },
	{ 0x1E, 0x1E, 0x0, 0x0, 0x0, 0x0 },
	{ 0x1F, 0xffff, 0x290, 0x291, 0xffff, 0x292 },
	{ 0x20, 0x20, 0x0, 0x0, 0x0, 0x0 },
	{ 0x4B, 0x4B, 0x0, 0x0, 0x0, 0x0 },
	{ 0x49, 0xffff, 0xffff, 0x293, 0xffff, 0x294 },
	{ 0x115, 0xffff, 0xffff, 0xffff, 0xffff, 0x295 },
	{ 0x22D, 0xffff, 0xffff, 0xffff, 0xffff, 0x296 },
	{ 0x22E, 0x22E, 0x0, 0x0, 0x0, 0x0 },
	{ 0x22F, 0x22F, 0x0, 0x0, 0x0, 0x0 },
	{ 0x230, 0x230, 0x0, 0x0, 0x0, 0x0 },
	{ 0x42, 0x42, 0x0, 0x0, 0x0, 0x0 },
	{ 0xAA, 0xffff, 0xffff, 0xffff, 0x297, 0x0 },
	{ 0x116, 0xffff, 0xffff, 0x298, 0xffff, 0x299 },
	{ 0x11A, 0x11A, 0x0, 0x0, 0x0, 0x0 },
	{ 0x233, 0xffff, 0xffff, 0xffff, 0xffff, 0x29A },
	{ 0x234, 0xffff, 0xffff, 0xffff, 0xffff, 0x29B },
	{ 0x235, 0x235, 0x0, 0x0, 0x0, 0x0 },
	{ 0x236, 0x236, 0x0, 0x0, 0x0, 0x0 },
	{ 0x237, 0x237, 0x0, 0x0, 0x0, 0x0 },
	{ 0x238, 0x238, 0x0, 0x0, 0x0, 0x0 },
	{ 0x43, 0x43, 0x0, 0x0, 0x0, 0x0 },
	{ 0xAB, 0xffff, 0xffff, 0xffff, 0x29C, 0x0 },
	{ 0x11E, 0x11E, 0x0, 0x0, 0x0, 0x0 },
	{ 0x11F, 0xffff, 0xffff, 0x29D, 0xffff, 0x29E },
	{ 0x23D, 0xffff, 0xffff, 0xffff, 0xffff, 0x29F },
	{ 0x23E, 0xffff, 0xffff, 0xffff, 0xffff, 0x2A0 },
	{ 0x23F, 0x23F, 0x0, 0x0, 0x0, 0x0 },
	{ 0x240, 0x240, 0x0, 0x0, 0x0, 0x0 },
	{ 0x241, 0x241, 0x0, 0x0, 0x0, 0x0 },
	{ 0x242, 0x242, 0x0, 0x0, 0x0, 0x0 },
	{ 0x77, 0xffff, 0xffff, 0x2A1, 0xffff, 0x2A2 },
	{ 0x120, 0xffff, 0xffff, 0xffff, 0xffff, 0x2A3 },
	{ 0x247, 0xffff, 0xffff, 0xffff, 0xffff, 0x2A4 },
	{ 0x78, 0xffff, 0xffff, 0x2A5, 0xffff, 0x2A6 },
	{ 0x121, 0xffff, 0xffff, 0xffff, 0xffff, 0x2A7 },
	{ 0x249, 0xffff, 0xffff, 0xffff, 0xffff, 0x2A8 },
	{ 0x122, 0x122, 0x0, 0x0, 0x0, 0x0 },
	{ 0x123, 0x123, 0x0, 0x0, 0x0, 0x0 },
	{ 0x124, 0xffff, 0xffff, 0x2A9, 0xffff, 0x2AA },
	{ 0x16, 0x16, 0x0, 0x0, 0x0, 0x0 },
	{ 0x17, 0xffff, 0x2AB, 0xffff, 0x2AC, 0x0 },
	{ 0x18, 0x18, 0x0, 0x0, 0x0, 0x0 },
	{ 0x2B, 0x2B, 0x0, 0x0, 0x0, 0x0 },
	{ 0x5B, 0x5B, 0x0, 0x0, 0x0, 0x0 },
	{ 0x5C, 0x5C, 0x0, 0x0, 0x0, 0x0 },
	{ 0x5D, 0x5D, 0x0, 0x0, 0x0, 0x0 },
	{ 0x6F, 0x6F, 0x0, 0x0, 0x0, 0x0 },
	{ 0x99, 0xffff, 0xffff, 0xffff, 0x2AD, 0x0 },
	{ 0x9A, 0x9A, 0x0, 0x0, 0x0, 0x0 },
	{ 0xA8, 0xA8, 0x0, 0x0, 0x0, 0x0 },
	{ 0xAC, 0xAC, 0x0, 0x0, 0x0, 0x0 },
	{ 0xAD, 0xffff, 0xffff, 0xffff, 0x2AE, 0x0 },
	{ 0xAE, 0xAE, 0x0, 0x0, 0x0, 0x0 },
	{ 0xAF, 0xAF, 0x0, 0x0, 0x0, 0x0 },
	{ 0xF, 0xF, 0x0, 0x0, 0x0, 0x0 },
	{ 0x41, 0xffff, 0xffff, 0x2AF, 0xffff, 0x2B0 },
	{ 0x126, 0x126, 0x0, 0x0, 0x0, 0x0 },
	{ 0x79, 0xffff, 0xffff, 0x2B1, 0xffff, 0x2B2 },
	{ 0x54, 0xffff, 0x2B3, 0x2B4, 0xffff, 0x2B5 },
	{ 0x12C, 0xffff, 0xffff, 0xffff, 0x2B6, 0x0 },
	{ 0x71, 0x71, 0x0, 0x0, 0x0, 0x0 },
	{ 0x72, 0x72, 0x0, 0x0, 0x0, 0x0 },
	{ 0x130, 0x130, 0x0, 0x0, 0x0, 0x0 },
	{ 0x131, 0x131, 0x0, 0x0, 0x0, 0x0 },
	{ 0x1B9, 0x1B9, 0x0, 0x0, 0x0, 0x0 },
	{ 0x1BA, 0xffff, 0xffff, 0x2B7, 0x2B8, 0x0 },
	{ 0x31, 0x31, 0x0, 0x0, 0x0, 0x0 },
	{ 0x82, 0x82, 0x0, 0x0, 0x0, 0x0 },
	{ 0x132, 0x132, 0x0, 0x0, 0x0, 0x0 },
	{ 0x133, 0xffff, 0xffff, 0x2B9, 0xffff, 0x2BA },
	{ 0x134, 0x134, 0x0, 0x0, 0x0, 0x0 },
	{ 0x2A, 0x2A, 0x0, 0x0, 0x0, 0x0 },
	{ 0x45, 0x45, 0x0, 0x0, 0x0, 0x0 },
	{ 0x4F, 0x4F, 0x0, 0x0, 0x0, 0x0 },
	{ 0x7E, 0x7E, 0x0, 0x0, 0x0, 0x0 },
	{ 0x7F, 0x7F, 0x0, 0x0, 0x0, 0x0 },
	{ 0x80, 0x80, 0x0, 0x0, 0x0, 0x0 },
	{ 0x81, 0x81, 0x0, 0x0, 0x0, 0x0 },
	{ 0x94, 0x94, 0x0, 0x0, 0x0, 0x0 },
	{ 0x102, 0xffff, 0xffff, 0xffff, 0x2BB, 0x0 },
	{ 0x139, 0x139, 0x0, 0x0, 0x0, 0x0 },
	{ 0x24B, 0xffff, 0xffff, 0xffff, 0xffff, 0x2BC },
	{ 0x24C, 0x24C, 0x0, 0x0, 0x0, 0x0 },
	{ 0x37, 0x37, 0x0, 0x0, 0x0, 0x0 },
	{ 0x55, 0xffff, 0xffff, 0x2BD, 0xffff, 0x2BE },
	{ 0x3, 0x3, 0x0, 0x0, 0x0, 0x0 },
	{ 0xB, 0x2BF, 0x2C0, 0xffff, 0x2C1, 0x0 },
	{ 0xC, 0xC, 0x0, 0x0, 0x0, 0x0 },
	{ 0x142, 0x2C2, 0x2C3, 0x2C4, 0x0, 0x0 },
	{ 0x143, 0x143, 0x0, 0x0, 0x0, 0x0 },
	{ 0x12, 0x12, 0x0, 0x0, 0x0, 0x0 },
	{ 0x13, 0x13, 0x0, 0x0, 0x0, 0x0 },
	{ 0x24, 0x24, 0x0, 0x0, 0x0, 0x0 },
	{ 0x25, 0x25, 0x0, 0x0, 0x0, 0x0 },
	{ 0x27, 0x27, 0x0, 0x0, 0x0, 0x0 },
	{ 0x28, 0x28, 0x0, 0x0, 0x0, 0x0 },
	{ 0x29, 0x29, 0x0, 0x0, 0x0, 0x0 },
	{ 0x146, 0x146, 0x0, 0x0, 0x0, 0x0 },
	{ 0x1C3, 0xffff, 0x2C5, 0x2C6, 0xffff, 0x2C7 },
	{ 0xD, 0x2C8, 0x2C9, 0xffff, 0x2CA, 0x0 },
	{ 0x147, 0xffff, 0x2CB, 0x2CC, 0x2CD, 0x0 },
	{ 0x148, 0x148, 0x0, 0x0, 0x0, 0x0 },
	{ 0x11, 0x11, 0x0, 0x0, 0x0, 0x0 },
	{ 0x23, 0x23, 0x0, 0x0, 0x0, 0x0 },
	{ 0x1C8, 0x2CE, 0x2CF, 0xffff, 0x2D0, 0x0 },
	{ 0x35, 0xffff, 0x2D1, 0x2D2, 0x2D3, 0x0 },
	{ 0x58, 0x58, 0x0, 0x0, 0x0, 0x0 },
	{ 0x59, 0x59, 0x0, 0x0, 0x0, 0x0 },
	{ 0x5A, 0x5A, 0x0, 0x0, 0x0, 0x0 },
	{ 0x66, 0x66, 0x0, 0x0, 0x0, 0x0 },
	{ 0x14C, 0xffff, 0x2D4, 0x2D5, 0x2D6, 0x0 },
	{ 0x14D, 0x14D, 0x0, 0x0, 0x0, 0x0 },
	{ 0x52, 0x52, 0x0, 0x0, 0x0, 0x0 },
	{ 0x14F, 0xffff, 0xffff, 0xffff, 0x2D7, 0x2D8 },
	{ 0x53, 0xffff, 0x2D9, 0x2DA, 0xffff, 0x2DB },
	{ 0x5E, 0xffff, 0x2DC, 0x2DD, 0xffff, 0x2DE },
	{ 0x5F, 0x5F, 0x0, 0x0, 0x0, 0x0 },
	{ 0x24F, 0xffff, 0xffff, 0xffff, 0xffff, 0x2DF },
	{ 0x250, 0x250, 0x0, 0x0, 0x0, 0x0 },
	{ 0x251, 0x251, 0x0, 0x0, 0x0, 0x0 },
	{ 0x60, 0xffff, 0x2E0, 0x2E1, 0xffff, 0x2E2 },
	{ 0x61, 0x61, 0x0, 0x0, 0x0, 0x0 },
	{ 0x252, 0xffff, 0xffff, 0xffff, 0xffff, 0x2E3 },
	{ 0x253, 0x253, 0x0, 0x0, 0x0, 0x0 },
	{ 0x254, 0x254, 0x0, 0x0, 0x0, 0x0 },
	{ 0x6E, 0x6E, 0x0, 0x0, 0x0, 0x0 },
	{ 0xB4, 0xB4, 0x0, 0x0, 0x0, 0x0 },
	{ 0x151, 0xffff, 0xffff, 0xffff, 0x2E4, 0x2E5 },
	{ 0x152, 0x152, 0x0, 0x0, 0x0, 0x0 },
	{ 0x1E2, 0xffff, 0xffff, 0xffff, 0xffff, 0x2E6 },
	{ 0x62, 0x62, 0x0, 0x0, 0x0, 0x0 },
	{ 0x63, 0x63, 0x0, 0x0, 0x0, 0x0 },
	{ 0x1E6, 0xffff, 0x2E7, 0x2E8, 0x2E9, 0x0 },
	{ 0x46, 0x46, 0x0, 0x0, 0x0, 0x0 },
	{ 0x47, 0x47, 0x0, 0x0, 0x0, 0x0 },
	{ 0x48, 0x48, 0x0, 0x0, 0x0, 0x0 },
	{ 0x4E, 0xffff, 0x2EA, 0x2EB, 0x2EC, 0x0 },
	{ 0x50, 0x50, 0x0, 0x0, 0x0, 0x0 },
	{ 0x92, 0x92, 0x0, 0x0, 0x0, 0x0 },
	{ 0x93, 0x93, 0x0, 0x0, 0x0, 0x0 },
	{ 0x1E8, 0x1E8, 0x0, 0x0, 0x0, 0x0 },
	{ 0x1E9, 0x1E9, 0x0, 0x0, 0x0, 0x0 },
	{ 0x1EA, 0x1EA, 0x0, 0x0, 0x0, 0x0 },
	{ 0x15A, 0xffff, 0xffff, 0x2ED, 0xffff, 0x2EE },
	{ 0x1EB, 0x1EB, 0x0, 0x0, 0x0, 0x0 },
	{ 0x1EC, 0x1EC, 0x0, 0x0, 0x0, 0x0 },
	{ 0x88, 0x88, 0x0, 0x0, 0x0, 0x0 },
	{ 0x89, 0xffff, 0xffff, 0x2EF, 0x2F0, 0x0 },
	{ 0x8E, 0x8E, 0x0, 0x0, 0x0, 0x0 },
	{ 0x8F, 0xffff, 0xffff, 0x2F1, 0xffff, 0x2F2 },
	{ 0x8A, 0x8A, 0x0, 0x0, 0x0, 0x0 },
	{ 0x8B, 0xffff, 0xffff, 0x2F3, 0x2F4, 0x0 },
	{ 0x90, 0x90, 0x0, 0x0, 0x0, 0x0 },
	{ 0x91, 0xffff, 0xffff, 0x2F5, 0x2F6, 0x0 },
	{ 0x67, 0x67, 0x0, 0x0, 0x0, 0x0 },
	{ 0x68, 0x68, 0x0, 0x0, 0x0, 0x0 },
	{ 0x9F, 0x9F, 0x0, 0x0, 0x0, 0x0 },
	{ 0xA0, 0xA0, 0x0, 0x0, 0x0, 0x0 },
	{ 0xA1, 0xA1, 0x0, 0x0, 0x0, 0x0 },
	{ 0xA6, 0xA6, 0x0, 0x0, 0x0, 0x0 },
	{ 0xB7, 0xffff, 0xffff, 0xffff, 0xffff, 0x2F7 },
	{ 0xB8, 0xB8, 0x0, 0x0, 0x0, 0x0 },
	{ 0xB9, 0xffff, 0xffff, 0xffff, 0xffff, 0x2F8 },
	{ 0xBA, 0xBA, 0x0, 0x0, 0x0, 0x0 },
	{ 0xBB, 0xBB, 0x0, 0x0, 0x0, 0x0 },
	{ 0xBC, 0xBC, 0x0, 0x0, 0x0, 0x0 },
	{ 0x255, 0xffff, 0xffff, 0xffff, 0xffff, 0x2F9 },
	{ 0x256, 0x256, 0x0, 0x0, 0x0, 0x0 },
	{ 0x257, 0x257, 0x0, 0x0, 0x0, 0x0 },
	{ 0x258, 0x258, 0x0, 0x0, 0x0, 0x0 },
	{ 0x69, 0x69, 0x0, 0x0, 0x0, 0x0 },
	{ 0x6A, 0x6A, 0x0, 0x0, 0x0, 0x0 },
	{ 0xA2, 0xA2, 0x0, 0x0, 0x0, 0x0 },
	{ 0xA3, 0xA3, 0x0, 0x0, 0x0, 0x0 },
	{ 0xA4, 0xA4, 0x0, 0x0, 0x0, 0x0 },
	{ 0xA7, 0xA7, 0x0, 0x0, 0x0, 0x0 },
	{ 0xBD, 0xffff, 0xffff, 0xffff, 0xffff, 0x2FA },
	{ 0xBE, 0xBE, 0x0, 0x0, 0x0, 0x0 },
	{ 0xBF, 0xBF, 0x0, 0x0, 0x0, 0x0 },
	{ 0xC0, 0xffff, 0xffff, 0xffff, 0xffff, 0x2FB },
	{ 0xC1, 0xC1, 0x0, 0x0, 0x0, 0x0 },
	{ 0xC2, 0xC2, 0x0, 0x0, 0x0, 0x0 },
	{ 0x1EE, 0x1EE, 0x0, 0x0, 0x0, 0x0 },
	{ 0x259, 0xffff, 0xffff, 0xffff, 0xffff, 0x2FC },
	{ 0x25A, 0x25A, 0x0, 0x0, 0x0, 0x0 },
	{ 0x25B, 0x25B, 0x0, 0x0, 0x0, 0x0 },
	{ 0x25C, 0x25C, 0x0, 0x0, 0x0, 0x0 },
	{ 0x1, 0x2FD, 0x2FE, 0x2FF, 0x0, 0x0 },
	{ 0x2, 0x2, 0x0, 0x0, 0x0, 0x0 },
	{ 0x4, 0x4, 0x0, 0x0, 0x0, 0x0 },
	{ 0xA, 0xA, 0x0, 0x0, 0x0, 0x0 },
	{ 0x21, 0x21, 0x0, 0x0, 0x0, 0x0 },
	{ 0x163, 0x300, 0x301, 0xffff, 0x302, 0x0 },
	{ 0x164, 0x164, 0x0, 0x0, 0x0, 0x0 },
	{ 0x6B, 0xffff, 0x303, 0xffff, 0x304, 0x0 },
	{ 0x166, 0x166, 0x0, 0x0, 0x0, 0x0 },
	{ 0x167, 0x167, 0x0, 0x0, 0x0, 0x0 },
	{ 0x6C, 0xffff, 0xffff, 0x305, 0x307, 0x0 },
	{ 0x168, 0x168, 0x0, 0x0, 0x0, 0x0 },
	{ 0x169, 0x169, 0x0, 0x0, 0x0, 0x0 },
	{ 0x44, 0xffff, 0xffff, 0x306, 0xffff, 0x308 },
	{ 0x16A, 0xffff, 0xffff, 0xffff, 0xffff, 0x309 },
	{ 0x25D, 0xffff, 0xffff, 0xffff, 0xffff, 0x30A }
};

static const UnkStruct_ov5_021F8E3C Unk_ov5_021F8E3C[] = {
    {0x1, 0x1},
    {0x67, 0x1},
    {0xfe, 0x0}
};

static const UnkStruct_ov5_021F8E3C Unk_ov5_021F8E34[] = {
    {0x4B, 0x1},
    {0xfe, 0x0}
};

void ov5_021DB888 (UnkStruct_020508D4 * param0, UnkStruct_0200B358 * param1, u16 * param2)
{
    UnkStruct_ov5_021DBA58 * v0;
    UnkStruct_0203CDB0 * v1 = sub_02050A60(param0);

    v0 = Heap_AllocFromHeap(4, sizeof(UnkStruct_ov5_021DBA58));

    if (v0 == NULL) {
        GF_ASSERT(FALSE);
        return;
    }

    memset(v0, 0, sizeof(UnkStruct_ov5_021DBA58));

    v0->unk_04 = v1;
    v0->unk_08 = sub_020507E4(v1->unk_0C);
    v0->unk_114 = param2;
    v0->unk_118 = param1;

    sub_02050944(param0, ov5_021DB8D8, v0);
    return;
}

static BOOL ov5_021DB8D8 (UnkStruct_020508D4 * param0)
{
    s32 v0, v1;
    int v2;
    UnkStruct_ov5_021DBA58 * v3 = sub_02050A64(param0);

    switch (v3->unk_00) {
    case 0:
        if (ov5_021DBF20(v3->unk_04) == 1) {
            ov5_021DBA54(v3, 1);
        }
        break;
    case 1:
        ov5_021DBA7C(v3);
        v2 = ov5_021DBA58(v3);

        if (v2 == 2) {
            *v3->unk_114 = 0;
            ov5_021DBA54(v3, 2);
        } else if (v2 == 0) {
            *v3->unk_114 = 1;
            ov5_021DBA54(v3, 7);
        } else {
            *v3->unk_114 = 2;
            ov5_021DBA54(v3, 8);
        }
        break;
    case 2:
        v3->unk_11C = ov5_021E1014(v3->unk_04);
        Sound_PlayEffect(1568);
        sub_0206B0F8(v3->unk_08, 0);
        ov5_021DBA54(v3, 3);
        break;
    case 3:
        if (ov5_021DBCD4(v3) == 0) {
            ov5_021DBA54(v3, 4);
        }
        break;
    case 4:
        if (ov5_021DBCE0(v3) == 0) {
            *v3->unk_114 = 3;
        }

        ov5_021DBA54(v3, 5);
        break;
    case 5:
        if (ov5_021DBCD4(v3) == 0) {
            ov5_021DBA54(v3, 6);
        }
        break;
    case 6:
        if (sub_020057D4(1568) == 0) {
            ov5_021E1020(v3->unk_11C);
            ov5_021DBA54(v3, 9);
        }
        break;
    case 7:
        v0 = (100 - sub_0206B0E8(v3->unk_08));

        if ((v0 / 10) == 0) {
            v1 = 1;
        } else if ((v0 / 100) == 0) {
            v1 = 2;
        } else {
            v1 = 3;
        }

        sub_0200B60C(v3->unk_118, 0, v0, v1, 1, 1);
        ov5_021DBA54(v3, 9);
        break;
    case 8:
        ov5_021DBA54(v3, 9);
        break;
    case 9:
        Heap_FreeToHeap(v3);
        return 1;
    }

    return 0;
}

static void ov5_021DBA54 (UnkStruct_ov5_021DBA58 * param0, u32 param1)
{
    param0->unk_00 = param1;
    return;
}

static int ov5_021DBA58 (UnkStruct_ov5_021DBA58 * param0)
{
    if (sub_0206B0E8(param0->unk_08) == 100) {
        if (param0->unk_110 == 0) {
            return 1;
        }

        return 2;
    }

    return 0;
}

static void ov5_021DBA7C (UnkStruct_ov5_021DBA58 * param0)
{
    int v0, v1;
    u32 v2;
    int v3, v4, v5, v6;
    int v7, v8, v9, v10;
    UnkStruct_02061AB4 * v11;
    u32 v12 = sub_0203A4B4(param0->unk_04);

    v6 = 0;

    for (v5 = 0; v5 < v12; v5++) {
        param0->unk_10[v5] = NULL;
    }

    v3 = sub_0205EABC(param0->unk_04->unk_3C);
    v4 = sub_0205EAC8(param0->unk_04->unk_3C);
    v7 = v3 - 7;
    v8 = v3 + 7;
    v9 = v4 - 7;
    v10 = v4 + 6;

    if (v7 < 0) {
        v7 = 0;
    }

    if (v9 < 0) {
        v9 = 0;
    }

    for (v5 = 0; v5 < v12; v5++) {
        v11 = sub_0206251C(param0->unk_04->unk_38, v5);

        if (v11 == NULL) {
            continue;
        }

        v2 = sub_02062950(v11);

        switch (v2) {
        case 0x1:
        case 0x2:
        case 0x4:
        case 0x5:
        case 0x6:
        case 0x7:
        case 0x8:
            v0 = sub_02063020(v11);
            v1 = sub_02063040(v11);

            if ((v0 >= v7) && (v0 <= v8) && (v1 >= v9) && (v1 <= v10)) {
                if (ov5_021DBB70(sub_02062948(v11)) == 0) {
                    param0->unk_10[v6] = v11;
                    v6++;
                }
            }
        }
    }

    param0->unk_110 = v6;
    return;
}

static BOOL ov5_021DBB70 (u32 param0)
{
    switch (param0) {
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
        return 1;
    }

    return 0;
}

BOOL ov5_021DBB94 (UnkStruct_0203CDB0 * param0)
{
    UnkStruct_020507E4 * v0 = sub_020507E4(param0->unk_0C);
    u16 v1 = sub_0206B0E8(v0);
    u16 v2 = sub_0206B108(v0);

    if (sub_0207D688(sub_0207D990(param0->unk_0C), 443, 1, 4) == 1) {
        if (v1 < 100) {
            v1++;
            sub_0206B0F8(v0, v1);
        }
    }

    if (sub_0206A9E4(v0) == 1) {
        if (v2 < 100) {
            v2++;
            sub_0206B118(v0, v2);
        }

        if (v2 == 100) {
            sub_0206B0D4(v0);
            ov5_021DBC08(param0);
        }
    }

    return 0;
}

static void ov5_021DBC08 (UnkStruct_0203CDB0 * param0)
{
    int v0;
    UnkStruct_02061AB4 * v1;
    u32 v2 = sub_0203A4B4(param0);

    for (v0 = 0; v0 < v2; v0++) {
        v1 = sub_0206251C(param0->unk_38, v0);

        if (v1 == NULL) {
            continue;
        }

        if (sub_02062948(v1) == 0x31) {
            ov5_021DBECC(v1, 0x2);
        }
    }

    return;
}

static void ov5_021DBC40 (UnkStruct_ov5_021DBA58 * param0, UnkStruct_02061AB4 * param1, const UnkStruct_ov5_021F8E3C * param2)
{
    SysTask * v0;

    v0 = sub_02065700(param1, param2);
    param0->unk_112++;

    ov5_021DBC64(param0, v0);
    return;
}

static void ov5_021DBC64 (UnkStruct_ov5_021DBA58 * param0, SysTask * param1)
{
    UnkStruct_ov5_021DBC64 * v0 = NULL;

    v0 = Heap_AllocFromHeap(4, sizeof(UnkStruct_ov5_021DBC64));

    if (v0 == NULL) {
        GF_ASSERT(FALSE);
        return;
    }

    v0->unk_08 = param0;
    v0->unk_04 = param1;
    v0->unk_00 = SysTask_Start(ov5_021DBC94, v0, 0);

    return;
}

static void ov5_021DBC94 (SysTask * param0, void * param1)
{
    UnkStruct_ov5_021DBC64 * v0 = (UnkStruct_ov5_021DBC64 *)param1;

    if (sub_0206574C(v0->unk_04) == 1) {
        if (v0->unk_08->unk_112 == 0) {
            GF_ASSERT(FALSE);
        }

        v0->unk_08->unk_112--;

        sub_02065758(v0->unk_04);
        SysTask_Done(v0->unk_00);
        Heap_FreeToHeapExplicit(4, param1);
    }

    return;
}

static BOOL ov5_021DBCD4 (UnkStruct_ov5_021DBA58 * param0)
{
    return param0->unk_112;
}

static BOOL ov5_021DBCE0 (UnkStruct_ov5_021DBA58 * param0)
{
    UnkStruct_020507E4 * v0 = sub_020507E4(param0->unk_04->unk_0C);
    UnkStruct_02061AB4 * v1;
    u16 v2;
    int v3, v4;

    v4 = 0;

    for (v3 = 0; v3 < param0->unk_110; v3++) {
        v2 = ov5_021DBD88(param0->unk_10[v3]);

        if (sub_0203F2A0(param0->unk_04, v2) == 0) {
            ov5_021DBC40(param0, param0->unk_10[v3], Unk_ov5_021F8E34);
            v4 = 1;
        } else {
            if (((LCRNG_Next() % 100) < 50) && (ov5_021DBEB8(param0->unk_10[v3]) == 0)) {
                ov5_021DBECC(param0->unk_10[v3], 0x31);
                ov5_021DBC40(param0, param0->unk_10[v3], Unk_ov5_021F8E3C);

                v1 = ov5_021DBF70(param0->unk_04, param0->unk_10[v3], 0);

                if (v1 != NULL) {
                    ov5_021DBECC(v1, 0x31);
                    ov5_021DBC40(param0, v1, Unk_ov5_021F8E3C);
                }

                v4 = 1;
                sub_0206A9C4(v0);
            } else {
                (void)0;
            }
        }
    }

    return v4;
}

static u16 ov5_021DBD88 (UnkStruct_02061AB4 * param0)
{
    u32 v0 = sub_02062960(param0);
    return sub_0203F254(v0);
}

u16 ov5_021DBD98 (UnkStruct_0203CDB0 * param0, UnkStruct_02061AB4 * param1, u16 param2)
{
    u16 v0, v1, v2;

    if (ov5_021DBEB8(param1) == 0) {
        return 0;
    }

    v0 = ov5_021DBDDC(param0, param2);

    if (v0 == 0xff) {
        return 0;
    }

    v1 = ov5_021DBDFC(param0, v0);
    v1 = ov5_021DBE48(param0, v0, v1);
    v2 = ov5_021DBEA4(v0, v1);

    return v2;
}

static u16 ov5_021DBDDC (UnkStruct_0203CDB0 * param0, u16 param1)
{
    int v0, v1;
    const UnkStruct_ov5_021F8E48 * v2 = Unk_ov5_021F8E48;

    for (v0 = 0; v0 < (NELEMS(Unk_ov5_021F8E48)); v0++) {
        if (v2[v0].unk_00[0] != param1) {
            continue;
        }

        return v0;
    }

    return 0xff;
}

static u16 ov5_021DBDFC (UnkStruct_0203CDB0 * param0, u16 param1)
{
    int v0, v1;
    const UnkStruct_ov5_021F8E48 * v2 = Unk_ov5_021F8E48;

    for (v1 = 1; v1 < 6; v1++) {
        if (v2[param1].unk_00[v1] == 0) {
            return v1 - 1;
        }

        if (v2[param1].unk_00[v1] != 0xffff) {
            if (sub_0203F2A0(param0, v2[param1].unk_00[v1]) == 0) {
                return v1;
            }
        }
    }

    return v1 - 1;
}

static u16 ov5_021DBE48 (UnkStruct_0203CDB0 * param0, u16 param1, u16 param2)
{
    UnkStruct_020507E4 * v0 = sub_020507E4(param0->unk_0C);
    u16 v1 = param2;

    switch (param2) {
    case 0:
        break;
    default:
        if (sub_0206AB00(v0, param2) == 0) {
            v1 = ov5_021DBE70(param1, param2);
        }
        break;
    }

    return v1;
}

static u16 ov5_021DBE70 (u16 param0, u16 param1)
{
    u16 v0;
    const UnkStruct_ov5_021F8E48 * v1 = Unk_ov5_021F8E48;

    for (v0 = (param1 - 1); v0 > 0; v0--) {
        if (v1[param0].unk_00[v0] != 0xffff) {
            return v0;
        }
    }

    return 0;
}

static u16 ov5_021DBEA4 (u16 param0, u16 param1)
{
    const UnkStruct_ov5_021F8E48 * v0 = Unk_ov5_021F8E48;

    return v0[param0].unk_00[param1];
}

static BOOL ov5_021DBEB8 (UnkStruct_02061AB4 * param0)
{
    if (sub_02062948(param0) == 0x31) {
        return 1;
    }

    return 0;
}

static void ov5_021DBECC (UnkStruct_02061AB4 * param0, u16 param1)
{
    sub_020633A8(param0, param1);
    return;
}

void ov5_021DBED4 (UnkStruct_0203CDB0 * param0, UnkStruct_02061AB4 * param1)
{
    UnkStruct_02061AB4 * v0;
    u32 v1;
    int v2;

    if (param1 == NULL) {
        return;
    }

    v2 = sub_0206298C(param1);

    if (v2 == 0) {
        v1 = 0xe;
    } else if (v2 == 1) {
        v1 = 0xf;
    } else if (v2 == 2) {
        v1 = 0x10;
    } else {
        v1 = 0x11;
    }

    v0 = ov5_021DBF70(param0, param1, 1);

    if (v0 != NULL) {
        ov5_021DBECC(v0, v1);
    }

    ov5_021DBECC(param1, v1);
    return;
}

static BOOL ov5_021DBF20 (UnkStruct_0203CDB0 * param0)
{
    int v0, v1;
    UnkStruct_02061AB4 * v2;
    u32 v3 = sub_0203A4B4(param0);

    v1 = 0;

    for (v0 = 0; v0 < v3; v0++) {
        v2 = sub_0206251C(param0->unk_38, v0);

        if (v2 == NULL) {
            continue;
        }

        if (sub_02062D1C(v2) == 1) {
            sub_02062DDC(v2);
            v1 = 1;
        } else {
            sub_02062DD0(v2);
        }
    }

    if (v1 == 0) {
        return 1;
    } else {
        return 0;
    }
}

static UnkStruct_02061AB4 * ov5_021DBF70 (UnkStruct_0203CDB0 * param0, UnkStruct_02061AB4 * param1, int param2)
{
    UnkStruct_02061AB4 * v0;
    u32 v1, v2, v3, v4;
    u32 v5 = sub_0203A4B4(param0);
    u16 v6 = sub_02062960(param1);
    u16 v7 = sub_0203F254(v6);

    if (sub_0203F28C(v7) == 0) {
        return NULL;
    }

    for (v1 = 0; v1 < v5; v1++) {
        v0 = sub_0206251C(param0->unk_38, v1);

        if (v0 == NULL) {
            continue;
        }

        if (param2 == 0) {
            if (sub_02062948(v0) == 0x31) {
                continue;
            }
        }

        v2 = sub_02062950(v0);

        switch (v2) {
        case 0x1:
        case 0x2:
        case 0x4:
        case 0x5:
        case 0x6:
        case 0x7:
        case 0x8:
            v3 = sub_02062960(v0);
            v4 = sub_0203F254(v3);

            if ((v6 != v3) && (v7 == v4)) {
                return v0;
            }
        }
    }

    return NULL;
}
