// FUN_800315d4

void FUN_800315d4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (6 < DAT_800e7e7c) {
    iVar1 = FUN_8007a980(0,6,1);
    iVar2 = 0;
    if (iVar1 != 0) {
      if (param_1 != 0) {
        *(undefined2 *)(iVar1 + 0x2c) = *(undefined2 *)(param_1 + 2);
        *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 6);
        *(undefined2 *)(iVar1 + 0x30) = *(undefined2 *)(param_1 + 10);
      }
      *(undefined2 *)(iVar1 + 0x32) = 0xffec;
      FUN_80028e10(iVar1,9);
      iVar2 = iVar1;
    }
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x48) = 0x1000100;
  }
  iVar2 = 0;
  if (6 < DAT_800e7e7c) {
    iVar1 = FUN_8007a980(0,6,1);
    iVar2 = 0;
    if (iVar1 != 0) {
      if (param_1 != 0) {
        *(undefined2 *)(iVar1 + 0x2c) = *(undefined2 *)(param_1 + 2);
        *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 6);
        *(undefined2 *)(iVar1 + 0x30) = *(undefined2 *)(param_1 + 10);
      }
      *(undefined2 *)(iVar1 + 0x32) = 0xffe7;
      FUN_80028e10(iVar1,5);
      iVar2 = iVar1;
    }
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x48) = 0x1000100;
  }
  return;
}

