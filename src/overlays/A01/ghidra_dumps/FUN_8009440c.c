// FUN_8009440c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_8009440c(short param_1,short param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = (((int)DAT_80105d04 + DAT_80105cff * 0x10) * 0x10000 >> 0xb) + _DAT_80105ce8;
  uVar1 = FUN_80094474((int)param_1,(int)param_2,*(undefined1 *)(iVar2 + 4),
                       *(undefined1 *)(iVar2 + 5));
  return uVar1;
}

