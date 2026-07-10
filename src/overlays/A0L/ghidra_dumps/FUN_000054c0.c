// FUN_000054c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000054c0(int param_1)

{
  int iVar1;
  
  _DAT_1f8000c0 = 0xffab;
  _DAT_1f8000c2 = 0xff82;
  _DAT_1f8000c4 = 0x1f;
  func_0x00084470(_DAT_1f800248 + 0x98,&DAT_1f8000c0,&DAT_1f8000a0);
  iVar1 = _DAT_1f800248;
  *(short *)(param_1 + 0x2e) = *(short *)(_DAT_1f800248 + 0x2e) + _DAT_1f8000a0;
  *(short *)(param_1 + 0x32) = *(short *)(iVar1 + 0x32) + _DAT_1f8000a4;
  *(short *)(param_1 + 0x36) = *(short *)(iVar1 + 0x36) + _DAT_1f8000a8;
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(iVar1 + 0x56);
  return;
}

