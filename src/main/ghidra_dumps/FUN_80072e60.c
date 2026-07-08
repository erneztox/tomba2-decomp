
undefined4 FUN_80072e60(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (*(char *)(param_1 + 0x46) == '\0') {
    sVar1 = *(short *)(param_1 + 0x50) + -0x40;
    *(short *)(param_1 + 0x50) = sVar1;
    if (-0x401 < sVar1) goto LAB_80072ee0;
    uVar2 = 0xfc00;
  }
  else {
    if ((*(char *)(param_1 + 0x46) != '\x01') ||
       (sVar1 = *(short *)(param_1 + 0x50) + 0x40, *(short *)(param_1 + 0x50) = sVar1, sVar1 < 0x401
       )) goto LAB_80072ee0;
    uVar2 = 0x400;
  }
  *(undefined2 *)(param_1 + 0x50) = uVar2;
  uVar3 = 1;
LAB_80072ee0:
  *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x5a) + *(short *)(param_1 + 0x50);
  return uVar3;
}

