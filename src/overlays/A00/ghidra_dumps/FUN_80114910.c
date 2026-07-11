// FUN_80114910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_80114910(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = func_0x800519e0(param_1,0xd,_DAT_800ecfb8,0x8014c0bc);
  uVar1 = _DAT_800ecfbc;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 0x8014de54;
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
  }
  return iVar2 == 0;
}

