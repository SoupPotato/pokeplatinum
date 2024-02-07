#ifndef POKEPLATINUM_UNK_020277A4_H
#define POKEPLATINUM_UNK_020277A4_H

#include "struct_defs/sentence.h"
#include "strbuf.h"
#include "struct_decls/struct_0202783C_decl.h"
#include "struct_decls/struct_02027854_decl.h"
#include "struct_decls/struct_02027860_decl.h"
#include "struct_decls/struct_021C0794_decl.h"

int MiscSaveBlock_SaveSize(void);
void MiscSaveBlock_Init(UnkStruct_0202783C * param0);
UnkStruct_0202783C * sub_0202783C(SaveData * param0);
const UnkStruct_0202783C * Save_MiscRO(const SaveData * param0);
UnkStruct_02027854 * sub_02027854(SaveData * param0);
UnkStruct_02027860 * sub_02027860(SaveData * param0);
const u16 * MiscSave_RivalName(const UnkStruct_0202783C * param0);
void sub_0202787C(UnkStruct_0202783C * param0, Strbuf *param1);
const u16 * sub_02027894(const UnkStruct_0202783C * param0);
void sub_020278A0(UnkStruct_0202783C * param0, Strbuf *param1);
void sub_020278B8(UnkStruct_0202783C * param0);
u32 sub_020278CC(const UnkStruct_0202783C * param0);
void sub_020278DC(UnkStruct_0202783C * param0, int param1, int param2, int param3);
void sub_02027914(const UnkStruct_0202783C * param0, int * param1, int * param2, int * param3);
void sub_02027938(const UnkStruct_0202783C * param0, Sentence * param1);
void sub_02027958(UnkStruct_0202783C * param0, const Sentence * param1);
void sub_0202797C(const UnkStruct_0202783C * param0, u8 * param1);
void sub_0202798C(UnkStruct_0202783C * param0, u8 param1);
void sub_020279A8(const UnkStruct_0202783C * param0, int param1, u32 * param2, u32 * param3, u8 * param4);
void sub_020279D0(UnkStruct_0202783C * param0, int param1, u32 param2, u32 param3, u8 param4);

#endif // POKEPLATINUM_UNK_020277A4_H