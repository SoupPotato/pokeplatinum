#include "overlay006/ov6_02247078.h"

#include <nitro.h>
#include <string.h>

#include "struct_defs/struct_02055130.h"

#include "field/field_system.h"
#include "overlay005/area_data.h"
#include "overlay005/map_prop.h"
#include "overlay005/ov5_021D37AC.h"

#include "unk_02054D00.h"

void ov6_02247078(FieldSystem *fieldSystem, const u8 param1)
{
    BOOL v0;
    MapProp *v1;
    UnkStruct_02055130 v2;
    int v3;
    int v4[] = { 119, 112, 115, 248 };

    v0 = sub_02055324(fieldSystem, v4, 4, &v1, &v3);

    if (v0) {
        NNSG3dResTex *v5;

        v5 = AreaDataManager_GetMapPropTexture(fieldSystem->areaDataManager);
        ov5_021D41C8(fieldSystem->unk_50, fieldSystem->unk_54, param1, v3, MapProp_GetRenderObj(v1), MapProp_GetModel(v1), v5, 2, 1, 0);
    } else {
        GF_ASSERT(0);
    }
}

void ov6_022470E8(FieldSystem *fieldSystem, const u8 param1)
{
    ov5_021D4250(fieldSystem->unk_54, param1, 0);
}

void ov6_022470F4(FieldSystem *fieldSystem, const u8 param1)
{
    ov5_021D4250(fieldSystem->unk_54, param1, 1);
}
