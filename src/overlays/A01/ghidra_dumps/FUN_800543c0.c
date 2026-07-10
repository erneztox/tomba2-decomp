// FUN_800543c0

void FUN_800543c0(int param_1)

{
  int iVar1;
  short sVar2;
  
  if ((*(char *)(param_1 + 0x16b) == '\0') && (*(char *)(param_1 + 0x29) == '\0')) {
    if (*(char *)(param_1 + 0x78) == '\0') {
      sVar2 = *(short *)(param_1 + 0x62);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x10);
      sVar2 = (*(short *)(iVar1 + 0x86) - *(short *)(iVar1 + 0x84)) -
              (*(short *)(param_1 + 0x32) - *(short *)(iVar1 + 0x32));
    }
    FUN_80049250(param_1,0,(int)sVar2);
  }
  return;
}

