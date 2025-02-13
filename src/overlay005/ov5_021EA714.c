#include "overlay005/ov5_021EA714.h"

#include <nitro.h>
#include <string.h>

#include "field/field_system.h"
#include "field/field_system_sub2_t.h"
#include "overlay024/pre_poketch_display.h"

#include "game_overlay.h"
#include "poketch.h"
#include "render_oam.h"
#include "system_flags.h"
#include "vars_flags.h"

FS_EXTERN_OVERLAY(overlay24);
FS_EXTERN_OVERLAY(overlay25);

void ov5_021EA714(FieldSystem *fieldSystem, enum PoketchEventID eventID, u32 dummy)
{
    if (fieldSystem->unk_04 != NULL && fieldSystem->unk_04->poketchSys != NULL) {
        PoketchSystem_SendEvent(fieldSystem->unk_04->poketchSys, eventID, dummy);
    }
}

void ov5_021EA728(FieldSystem *fieldSystem)
{
    Poketch *poketch = SaveData_PoketchData(fieldSystem->saveData);
    VarsFlags *varsFlags = SaveData_GetVarsFlags(fieldSystem->saveData);

    if (Poketch_IsEnabled(poketch)
        && (SystemFlag_CheckPoketchHidden(varsFlags) == 0)) {
        Overlay_LoadByID(FS_OVERLAY_ID(overlay25), 2);
        PoketchSystem_Create(fieldSystem, &fieldSystem->unk_04->poketchSys, fieldSystem->saveData, fieldSystem->bgConfig, RenderOam_GetScreenOam(1));
    } else {
        Overlay_LoadByID(FS_OVERLAY_ID(overlay24), 2);
        PrePoketchDisplay_DisplayBg(fieldSystem->bgConfig);
    }
}

void ov5_021EA790(FieldSystem *fieldSystem)
{
    Poketch *poketch = SaveData_PoketchData(fieldSystem->saveData);
    VarsFlags *varsFlags = SaveData_GetVarsFlags(fieldSystem->saveData);

    if (Poketch_IsEnabled(poketch)
        && (SystemFlag_CheckPoketchHidden(varsFlags) == 0)) {
        PoketchSystem_StartShutdown(fieldSystem->unk_04->poketchSys);
    } else {
        PrePoketchDisplay_FreeBg(fieldSystem->bgConfig);
    }
}

u8 ov5_021EA7CC(FieldSystem *fieldSystem)
{
    Poketch *poketch = SaveData_PoketchData(fieldSystem->saveData);
    VarsFlags *varsFlags = SaveData_GetVarsFlags(fieldSystem->saveData);

    if (Poketch_IsEnabled(poketch)
        && (SystemFlag_CheckPoketchHidden(varsFlags) == 0)) {
        if (PoketchSystem_IsSystemShutdown(fieldSystem->unk_04->poketchSys)) {
            fieldSystem->unk_04->poketchSys = NULL;
            Overlay_UnloadByID(FS_OVERLAY_ID(overlay25));
            return 1;
        }
    } else {
        if (PrePoketchDisplay_AlwaysTrue(fieldSystem->bgConfig)) {
            Overlay_UnloadByID(FS_OVERLAY_ID(overlay24));
            return 1;
        }
    }

    return 0;
}

void ov5_021EA830(FieldSystem *fieldSystem)
{
    Overlay_LoadByID(FS_OVERLAY_ID(overlay24), 2);
    PrePoketchDisplay_DisplayBg(fieldSystem->bgConfig);
}

void ov5_021EA848(FieldSystem *fieldSystem)
{
    PrePoketchDisplay_FreeBg(fieldSystem->bgConfig);
}

BOOL ov5_021EA854(FieldSystem *fieldSystem)
{
    if (PrePoketchDisplay_AlwaysTrue(fieldSystem->bgConfig)) {
        Overlay_UnloadByID(FS_OVERLAY_ID(overlay24));
        return 1;
    }

    return 0;
}
