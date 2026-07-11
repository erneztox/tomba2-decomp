// FUN_08014bf4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08014bf4(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_1f80024c;
  _DAT_1f8000c0 = 0;
  _DAT_1f8000c2 = 0xff38;
  _DAT_1f8000c4 = 0;
  func_0x000844c0(*(int *)(_DAT_1f80024c + 0xe4) + 0x18,&DAT_1f8000c0,&DAT_1f8000c8);
  *(short *)(param_1 + 0x2e) = *(short *)(*(int *)(iVar1 + 0xe4) + 0x2c) + _DAT_1f8000c8;
  *(short *)(param_1 + 0x32) = *(short *)(*(int *)(iVar1 + 0xe4) + 0x30) + _DAT_1f8000ca;
  *(short *)(param_1 + 0x36) = *(short *)(*(int *)(iVar1 + 0xe4) + 0x34) + _DAT_1f8000cc;
  return;
}

