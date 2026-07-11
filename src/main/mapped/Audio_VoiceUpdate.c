/**
 * @brief Audio voice updater: processes active voices, updates params
 * @note Original: func_80092FD0 at 0x80092FD0
 */
// Audio_VoiceUpdate



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80092fd0(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  uVar3 = (uint)_DAT_80105d10;
  puVar5 = (uint *)&DAT_80105bb0;
  *(undefined2 *)((short)_DAT_80105d10 * 0x38 + -0x7fefab32) = 0x7fff;
  do {
    iVar6 = iVar6 + 1;
    *puVar5 = *puVar5 & ~(1 << ((int)(short)_DAT_80105d10 & 0x1fU));
    puVar5 = puVar5 + 1;
  } while (iVar6 < 0x10);
  if ((_DAT_80105d0e & 1) == 0) {
    uVar2 = *(undefined2 *)((((short)_DAT_80105d0e + -1) / 2) * 0x10 + _DAT_80105cdc + 0xe);
  }
  else {
    uVar2 = *(undefined2 *)((((short)_DAT_80105d0e + -1) / 2) * 0x10 + _DAT_80105cdc + 0xc);
  }
  *(undefined2 *)(&DAT_80105a2e + ((int)(uVar3 << 0x13) >> 0xf)) = uVar2;
  (&DAT_80105a08)[(short)_DAT_80105d10] = (&DAT_80105a08)[(short)_DAT_80105d10] | 8;
  iVar7 = (int)(uVar3 << 0x13) >> 0xf;
  iVar6 = (DAT_80105cff * 0x10 + (int)DAT_80105d04) * 0x20 + _DAT_80105ce8;
  *(undefined2 *)(&DAT_80105a30 + iVar7) = *(undefined2 *)(iVar6 + 0x10);
  uVar1 = *(ushort *)(iVar6 + 0x12);
  uVar4 = _DAT_80105c90 + (uVar1 & 0x1f);
  if (0x1f < (short)uVar4) {
    uVar4 = 0x1f;
  }
  *(ushort *)(&DAT_80105a32 + iVar7) = uVar4 | uVar1 & 0xffe0;
  (&DAT_80105a08)[(short)_DAT_80105d10] = (&DAT_80105a08)[(short)_DAT_80105d10] | 0x30;
  return;
}
