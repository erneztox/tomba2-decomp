
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004dd90(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_80049e54(param_1,1);
  if (iVar2 != 0) {
    sVar1 = *(short *)(param_1 + 0x42);
    *(short *)(param_1 + 0x42) = sVar1 + -1;
    if ((sVar1 == 1) || (_DAT_800e7fee == DAT_800bf87d)) {
      *(undefined1 *)(param_1 + 4) = 2;
    }
    else {
      *(undefined1 *)(param_1 + 7) = 0;
    }
  }
  return;
}

