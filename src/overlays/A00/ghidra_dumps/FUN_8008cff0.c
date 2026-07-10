// FUN_8008cff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8008cff0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = uVar2 + param_1;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(_DAT_80102728 + iVar1 * 0x20) = 0;
    } while (uVar2 < param_2);
  }
  return;
}

