/**
 * @brief GPU sprite renderer variant 2: builds prims, submits
 * @note Original: func_80078CA8 at 0x80078CA8
 */
// GPU_SpriteRender2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
int FUN_80078ca8(uint param_1,uint param_2,s16 param_3,u8 *param_4,int param_5)

{
  u8 bVar1;
  uint *puVar2;
  uint uVar3;
  u16 uVar4;
  s16 sVar5;
  int iVar6;
  s8 cVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  
  if (param_3 < 0x10) {
    uVar4 = (param_3 + 0x1f0) * 0x40 | 0x3f;
  }
  else {
    uVar4 = (param_3 + 0x1e0) * 0x40 | 0x3e;
  }
  _g_GTE_DataC = CONCAT22(uVar4,_g_GTE_DataC);
  _g_GTE_Data4 = CONCAT13(0x65,_g_GTE_Data4);
  bVar1 = *param_4;
  uVar3 = param_1;
  puVar2 = _g_OT_Buffer;
  do {
    _g_GTE_Data8 = uVar3;
    _g_GTE_Data10 = param_2;
    _g_OT_Buffer = puVar2;
    if (bVar1 == 0) {
      FUN_80083de0(puVar2,0,0,0x1f,0);
      puVar9 = (uint *)(_g_EntityBuffer + param_5 * 4);
      *puVar2 = *puVar9 | 0x2000000;
      *puVar9 = (uint)puVar2;
      _g_OT_Buffer = _g_OT_Buffer + 3;
      iVar6 = (int)_g_GTE_Data8;
      return iVar6 - (param_1 & 0xffff);
    }
    _g_GTE_Data8 = (s16)uVar3;
    if (bVar1 == 0x20) {
LAB_80078f70:
      _g_GTE_Data8 = uVar3;
      sVar5 = _g_GTE_Data8 + 8;
      _g_GTE_Data8 = CONCAT22(_DAT_1f80000a,sVar5);
    }
    else {
      _DAT_1f80000a = (s16)(uVar3 >> 0x10);
      _DAT_1f800012 = (s16)(param_2 >> 0x10);
      if (bVar1 != 10) {
        iVar6 = (int)param_3;
        if (bVar1 == 1) {
          iVar8 = (int)_g_GTE_Data8;
          iVar10 = (int)_DAT_1f80000a;
          FUN_80078988(iVar8,iVar10,iVar6,&DAT_80016da8,param_5);
          uVar3 = _g_GTE_Data8;
        }
        else if (bVar1 == 2) {
          iVar8 = (int)_g_GTE_Data8;
          iVar10 = (int)_DAT_1f80000a;
          FUN_80078988(iVar8,iVar10,iVar6,&DAT_80016dac,param_5);
          uVar3 = _g_GTE_Data8;
        }
        else if (bVar1 == 3) {
          iVar8 = (int)_g_GTE_Data8;
          iVar10 = (int)_DAT_1f80000a;
          FUN_80078988(iVar8,iVar10,iVar6,&DAT_80016da4,param_5);
          uVar3 = _g_GTE_Data8;
        }
        else if (bVar1 == 4) {
          iVar8 = (int)_g_GTE_Data8;
          iVar10 = (int)_DAT_1f80000a;
          FUN_80078988(iVar8,iVar10,iVar6,&DAT_80016da0,param_5);
          uVar3 = _g_GTE_Data8;
        }
        else {
          iVar8 = (uint)*param_4 + (int)_DAT_1f800180;
          iVar6 = iVar8;
          if (iVar8 < 0) {
            iVar6 = iVar8 + 0x1f;
          }
          iVar10 = (uint)*param_4 + (int)_DAT_1f800180;
          if (iVar10 < 0) {
            iVar10 = iVar10 + 0x1f;
          }
          cVar7 = (char)(iVar10 >> 5) * (char)(param_2 >> 0x10);
          uVar3 = _g_GTE_DataC >> 0x10;
          if (_DAT_1f800012 == 0x10) {
            cVar7 = cVar7 + '\b';
          }
          _g_GTE_DataC =
               CONCAT22((s16)uVar3,
                        CONCAT11(cVar7,((char)iVar8 + (char)(iVar6 >> 5) * -0x20) * (char)param_2));
          puVar9 = (uint *)(_g_EntityBuffer + param_5 * 4);
          *puVar2 = *puVar9 | 0x4000000;
          *puVar9 = (uint)puVar2;
          puVar2->flags = _g_GTE_Data4;
          puVar2->kind = _g_GTE_Data8;
          puVar2->sub_type = _g_GTE_DataC;
          puVar2->state = _g_GTE_Data10;
          uVar3 = _g_GTE_Data8;
          _g_OT_Buffer = puVar2 + 5;
        }
        goto LAB_80078f70;
      }
      _g_GTE_Data8 = CONCAT22(_DAT_1f80000a + _DAT_1f800012,(s16)param_1) & 0xffff0fff;
    }
    param_4 = param_4 + 1;
    bVar1 = *param_4;
    uVar3 = _g_GTE_Data8;
    param_2 = _g_GTE_Data10;
    puVar2 = _g_OT_Buffer;
  } while( true );
}
