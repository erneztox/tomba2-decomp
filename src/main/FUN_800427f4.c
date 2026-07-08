
undefined4 FUN_800427f4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    iVar2 = FUN_80040c00((int)*(short *)(param_1 + 0x72));
    uVar1 = 1;
    if ((iVar2 == 1) && (uVar1 = 1, *(short *)(param_1 + 0x74) == 0)) {
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
    if (*(char *)(param_1 + 0x78) == '\x01') {
      uVar1 = FUN_80042728();
    }
  }
  return uVar1;
}

