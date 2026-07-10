// FUN_800887bc

bool FUN_800887bc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*DAT_800abe54)();
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x46) = 1;
    *(undefined1 **)(param_1 + 0x14) = &LAB_80088824;
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(undefined1 **)(param_1 + 0x18) = &LAB_80088840;
  }
  return iVar1 == 0;
}

