/**
 * @brief Audio SPU processor: processes 0x38-byte entry, updates
 * @note Original: func_800950E0 at 0x800950E0
 */
// Audio_SPU_Process



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800950e0(short param_1,short param_2,short param_3,short param_4,int param_5)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = param_1 * 0x38;
  uVar2 = 0;
  if (((*(short *)(iVar5 + -0x7fefab28) == param_2) &&
      (uVar2 = 0, *(short *)(iVar5 + -0x7fefab20) == param_3)) &&
     (uVar2 = 0, *(short *)(iVar5 + -0x7fefab24) == param_4)) {
    uVar6 = (uint)*(ushort *)(iVar5 + -0x7fefab2a);
    uVar4 = (uint)*(ushort *)(iVar5 + -0x7fefab22) + DAT_80105cff * 0x10;
    iVar5 = (param_5 + -0x40) * 0x10000 >> 0x10;
    if (iVar5 < 1) {
      if (iVar5 < 0) {
        iVar5 = iVar5 * (uint)*(byte *)((uVar4 & 0xffff) * 0x20 + _DAT_80105ce8 + 0xc);
        iVar3 = iVar5;
        if (iVar5 < 0) {
          iVar3 = iVar5 + 0x3f;
        }
        uVar6 = (uVar6 + (iVar3 >> 6)) - 1;
        uVar4 = (iVar5 + (iVar3 >> 6) * -0x40) * 2 + 0x7f;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      iVar5 = iVar5 * (uint)*(byte *)((uVar4 & 0xffff) * 0x20 + _DAT_80105ce8 + 0xd);
      uVar6 = uVar6 + iVar5 / 0x3f;
      uVar4 = (iVar5 % 0x3f) * 2;
    }
    iVar5 = (int)param_1;
    DAT_80105d04 = *(undefined1 *)(iVar5 * 0x38 + -0x7fefab22);
    _DAT_80105d10 = param_1;
    uVar1 = FUN_8009440c(uVar6 & 0xffff,uVar4 & 0xffff);
    *(undefined2 *)(&DAT_80105a2c + iVar5 * 0x10) = uVar1;
    (&DAT_80105a08)[iVar5] = (&DAT_80105a08)[iVar5] | 4;
    uVar2 = 1;
  }
  return uVar2;
}
