/**
 * @brief Entity position updater: computes new pos from velocity + angle
 * @note Original: func_8007101C at 0x8007101C
 */
// Entity_PosUpdate



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_8007101c(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  
  if (param_2 == 0) {
    iVar2 = FUN_80070f90((int)(((uint)_DAT_1f800160 - (uint)_DAT_800bf826) * 0x10000) >> 0x10,
                         param_1 + 0x4e);
    iVar3 = FUN_80070f90((int)(((uint)_DAT_1f800162 - (uint)_DAT_800bf82a) * 0x10000) >> 0x10,
                         param_1 + 0x50);
    iVar4 = FUN_80070f90((int)(((uint)_DAT_1f800164 - (uint)_DAT_800bf82e) * 0x10000) >> 0x10,
                         param_1 + 0x52);
    iVar2 = (iVar2 + iVar3 + iVar4) / 3;
    sVar6 = _DAT_1f800164 - param_1->sprite_y;
    sVar5 = _DAT_1f800160 - param_1->sprite_x;
    if (iVar2 != 0) goto LAB_800711e8;
    iVar3 = (int)param_1->pos_z - (int)(short)_DAT_1f800164;
    iVar4 = (int)(short)_DAT_1f800160 - (int)param_1->pos_y;
  }
  else {
    iVar2 = FUN_80070f90((int)(short)_DAT_800bf826,param_1 + 0x2e);
    iVar3 = FUN_80070f90((int)(short)_DAT_800bf82a,param_1 + 0x32);
    iVar4 = FUN_80070f90((int)(short)_DAT_800bf82e,param_1 + 0x36);
    iVar2 = (iVar2 + iVar3 + iVar4) / 3;
    iVar4 = (uint)_DAT_800bf826 - (uint)param_1->pos_y;
    sVar5 = (short)iVar4;
    iVar3 = (uint)_DAT_800bf82e - (uint)param_1->pos_z;
    sVar6 = (short)iVar3;
    if (iVar2 != 0) {
      param_1->sprite_x = param_1->pos_y;
      param_1->angle_offset = *(undefined2 *)(param_1 + 0x32);
      param_1->sprite_y = param_1->pos_z;
      goto LAB_800711e8;
    }
    if (param_2 == 2) {
      return 0;
    }
    iVar3 = -(iVar3 * 0x10000 >> 0x10);
    iVar4 = iVar4 * 0x10000 >> 0x10;
  }
  uVar1 = FUN_80085690(iVar3,iVar4);
  param_1->rot_y = uVar1 & 0xfff;
LAB_800711e8:
  if (param_2 != 2) {
    iVar3 = FUN_80084080((int)sVar5 * (int)sVar5 + (int)sVar6 * (int)sVar6);
    FUN_80041768(param_1,0x1c1 < iVar3,4);
  }
  return iVar2;
}
