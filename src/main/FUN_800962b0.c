
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800962b0(ushort param_1,short param_2)

{
  int iVar1;
  
  if (param_1 < 0x10) {
    if (*(char *)((short)param_1 + -0x7fefa2e8) != '\x01') {
      return 0xffffffff;
    }
    iVar1 = (short)param_1 * 4;
    if ((int)param_2 < (int)_DAT_80105cda) {
      _DAT_80105cdc = *(int *)(iVar1 + -0x7fefa3f0);
      _DAT_80105ce4 = *(undefined4 *)(&DAT_80105c50 + iVar1);
      _DAT_80105ce8 = *(undefined4 *)(iVar1 + -0x7fefa368);
      DAT_80105cf9 = (char)param_1;
      DAT_80105cfe = (char)param_2;
      DAT_80105cff = *(undefined1 *)(param_2 * 0x10 + *(int *)(iVar1 + -0x7fefa3f0) + 8);
      return 0;
    }
  }
  return 0xffffffff;
}

