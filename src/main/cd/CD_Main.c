/**
 * @brief CD main: full CD-ROM command processor
 * @note Original: func_80098330 at 0x80098330
 */
// CD_Main



#include "tomba.h"
s32 CD_Main(uint *param_1)

{
  s32 bVar1;
  u8 uVar2;
  s32 bVar3;
  s32 bVar4;
  u16 uVar5;
  s32 bVar6;
  int iVar7;
  s32 uVar8;
  void *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  u16 uVar13;
  uint local_78;
  s16 local_74;
  s16 local_72;
  s16 local_66;
  s16 local_60;
  s16 local_5e;
  s16 local_5c;
  s16 local_5a;
  s16 local_54;
  s16 local_52;
  s16 local_40;
  s16 local_3e;
  s16 local_3c;
  s16 local_3a;
  uint local_30;
  
  uVar13 = 0;
  bVar1 = false;
  bVar4 = false;
  local_30 = 0;
  uVar12 = *param_1;
  bVar6 = false;
  bVar3 = uVar12 == 0;
  local_78 = 0;
  if ((bVar3) || ((uVar12 & 1) != 0)) {
    uVar11 = param_1->flags;
    bVar1 = (uVar11 & 0x100) != 0;
    if (bVar1) {
      uVar11 = uVar11 & 0xfffffeff;
    }
    local_30 = (uint)bVar1;
    if (uVar11 < 10) {
      iVar7 = CD_AllocDMA((&DAT_800acb94)[uVar11]);
      bVar1 = true;
      if (iVar7 == 0) {
        puVar10 = &local_78;
        iVar7 = 0x43;
        DAT_800ac5a0 = (&DAT_800acb94)[uVar11];
        puVar9 = &DAT_800acbc4 + uVar11 * 0x44;
        do {
          uVar2 = *puVar9;
          puVar9 = puVar9 + 1;
          iVar7 = iVar7 + -1;
          *(u8 *)puVar10 = uVar2;
          puVar10 = (uint *)((int)puVar10 + 1);
        } while (iVar7 != -1);
        DAT_800ac5a8 = uVar11;
        if (uVar11 == 7) {
          DAT_800ac5b4 = 0x7f;
          DAT_800ac5b0 = 0x7f;
        }
        else if (uVar11 == 8) {
          DAT_800ac5b4 = 0;
          DAT_800ac5b0 = 0x7f;
        }
        else {
          DAT_800ac5b4 = 0;
          DAT_800ac5b0 = 0;
        }
        goto LAB_80098498;
      }
    }
    uVar8 = 0xffffffff;
  }
  else {
LAB_80098498:
    if ((((bVar3) || ((uVar12 & 8) != 0)) && ((int)DAT_800ac5a8 < 9)) && (6 < (int)DAT_800ac5a8)) {
      bVar4 = true;
      if (!bVar1) {
        puVar10 = &local_78;
        iVar7 = 0x43;
        puVar9 = &DAT_800acbc4 + DAT_800ac5a8 * 0x44;
        do {
          uVar2 = *puVar9;
          puVar9 = puVar9 + 1;
          iVar7 = iVar7 + -1;
          *(u8 *)puVar10 = uVar2;
          puVar10 = (uint *)((int)puVar10 + 1);
        } while (iVar7 != -1);
        local_78 = 0xc011c00;
      }
      DAT_800ac5b0 = param_1->sub_type;
      local_60 = (s16)((int)(DAT_800ac5b0 * 0x2000) / 0x7f) - local_74;
      local_40 = (s16)((int)(DAT_800ac5b0 * 0x1000) / 0x7f);
      local_5e = local_40 - local_72;
      local_54 = local_52 + local_40;
      local_5c = local_5a + local_40;
      local_3e = local_3a + local_40;
      local_40 = local_3c + local_40;
    }
    if (((bVar3) || ((uVar12 & 0x10) != 0)) && (((int)DAT_800ac5a8 < 9 && (6 < (int)DAT_800ac5a8))))
    {
      bVar6 = true;
      if (!bVar1) {
        puVar10 = &local_78;
        if (bVar4) {
          local_78 = local_78 | 0x80;
        }
        else {
          iVar7 = 0x43;
          puVar9 = &DAT_800acbc4 + DAT_800ac5a8 * 0x44;
          do {
            uVar2 = *puVar9;
            puVar9 = puVar9 + 1;
            iVar7 = iVar7 + -1;
            *(u8 *)puVar10 = uVar2;
            puVar10 = (uint *)((int)puVar10 + 1);
          } while (iVar7 != -1);
          local_78 = 0x80;
        }
      }
      DAT_800ac5b4 = param_1->state;
      local_66 = (s16)((int)(DAT_800ac5b4 * 0x8100) / 0x7f);
    }
    if (bVar1) {
      uVar5 = *(u16 *)(g_SPU_Regs + 0x1aa) >> 7;
      uVar13 = uVar5 & 1;
      if ((uVar5 & 1) != 0) {
        *(u16 *)(g_SPU_Regs + 0x1aa) = *(u16 *)(g_SPU_Regs + 0x1aa) & 0xff7f;
      }
      iVar7 = g_SPU_Regs;
      *(s16 *)(g_SPU_Regs + 0x184) = 0;
      *(s16 *)(iVar7 + 0x186) = 0;
      DAT_800ac5ac = 0;
      DAT_800ac5ae = 0;
    }
    else {
      if ((bVar3) || ((uVar12 & 2) != 0)) {
        *(s16 *)(g_SPU_Regs + 0x184) = (s16)param_1->kind;
        DAT_800ac5ac = (s16)param_1->kind;
      }
      if ((bVar3) || ((uVar12 & 4) != 0)) {
        *(s16 *)(g_SPU_Regs + 0x186) = *(s16 *)((int)param_1 + 10);
        DAT_800ac5ae = *(s16 *)((int)param_1 + 10);
      }
    }
    if (((bVar1) || (bVar4)) || (bVar6)) {
      CD_SPU_Transfer2(&local_78);
    }
    if (local_30 != 0) {
      CD_SPU_Transfer(DAT_800ac5a8);
    }
    if (bVar1) {
      MC_Read(0xd1,DAT_800ac5a0,0);
      if (uVar13 == 0) {
        return 0;
      }
      *(u16 *)(g_SPU_Regs + 0x1aa) = *(u16 *)(g_SPU_Regs + 0x1aa) | 0x80;
    }
    uVar8 = 0;
  }
  return uVar8;
}
