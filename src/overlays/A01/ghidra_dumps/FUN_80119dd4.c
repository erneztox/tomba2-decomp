// FUN_80119dd4

undefined4 FUN_80119dd4(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 7) == '\0') {
    *(undefined2 *)(param_1 + 0x58) = 0;
    if (*(char *)(param_1 + 0xbe) == '\0') {
      uVar2 = FUN_80122dcc();
      return uVar2;
    }
    *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_1 + 0x60);
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    uVar2 = FUN_80122e24();
    return uVar2;
  }
  if (*(char *)(param_1 + 7) != '\x01') {
    uVar2 = FUN_80122e28();
    return uVar2;
  }
  sVar1 = func_0x800776f8((int)*(short *)(param_1 + 100),(int)*(short *)(param_1 + 0x56),0x100);
  *(short *)(param_1 + 0x56) = sVar1;
  if (*(short *)(param_1 + 100) == sVar1) {
    *(char *)(param_1 + 0xbe) = '\x01' - *(char *)(param_1 + 0xbe);
    uVar2 = FUN_80122e28();
    return uVar2;
  }
  return 0;
}

