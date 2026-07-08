
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_800953b0(short param_1,short param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_800962b0((int)param_1,(int)param_2);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    iVar1 = param_2 * 0x10;
    *(undefined1 *)(iVar1 + _DAT_80105cdc + 1) = param_3;
    uVar2 = (uint)*(byte *)(iVar1 + _DAT_80105cdc + 1);
  }
  return uVar2;
}

