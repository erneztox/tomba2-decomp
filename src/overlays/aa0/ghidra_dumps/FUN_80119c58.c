// FUN_80119c58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80119c58(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xb) == '\x01') {
    iVar1 = *(int *)(param_1 + 0xe8);
    _DAT_1f8000c0 = 0;
    _DAT_1f8000c2 = 0xff89;
    _DAT_1f8000c4 = 0;
    func_0x800844c0(iVar1 + 0x18,&DAT_1f8000c0,&DAT_1f8000c8);
    *(short *)(param_1 + 0x4e) = _DAT_1f8000c8 + *(short *)(iVar1 + 0x2c);
    *(short *)(param_1 + 0x50) = _DAT_1f8000ca + *(short *)(iVar1 + 0x30);
    *(short *)(param_1 + 0x52) = _DAT_1f8000cc + *(short *)(iVar1 + 0x34);
  }
  return;
}

