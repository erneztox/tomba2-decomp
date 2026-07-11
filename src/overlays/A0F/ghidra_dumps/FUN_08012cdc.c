// FUN_08012cdc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08012cdc(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = (uint)_DAT_800e7ed6;
  if (*(short *)(param_2 + 0x2e) < _DAT_800e7eae) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar4 = ((_DAT_1f8000d4 >> 0x10) + 200) - (uint)*(ushort *)(param_2 + 0x7c);
  if (0x14 < (iVar4 + 10U & 0xffff)) {
    _DAT_1f8000d4 = _DAT_1f8000d4 - (iVar4 * 0x10000 >> 3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_1f8000d4 = CONCAT22(*(ushort *)(param_2 + 0x7c) - 200,_DAT_1f8000d4);
  *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 2;
  iVar6 = (int)((uVar5 + 0x100) * 0x10000) >> 0x10;
  iVar4 = func_0x00083f50(iVar6);
  uVar1 = *(ushort *)(param_2 + 0x2e);
  iVar6 = func_0x00083e80(iVar6);
  iVar6 = (int)((((uint)*(ushort *)(param_2 + 0x36) - (iVar6 * 0x578 >> 0xc)) -
                (_DAT_1f8000d8 >> 0x10)) * 0x10000) >> 0x10;
  iVar4 = (int)((((uint)uVar1 + (iVar4 * 0x578 >> 0xc)) - (_DAT_1f8000d0 >> 0x10)) * 0x10000) >>
          0x10;
  sVar2 = func_0x00085690(-iVar6,iVar4);
  sVar3 = func_0x00084080(iVar4 * iVar4 + iVar6 * iVar6);
  iVar4 = func_0x00083f50((int)sVar2);
  iVar6 = (int)sVar3;
  _DAT_1f8000d0 = _DAT_1f8000d0 + iVar4 * iVar6;
  iVar4 = func_0x00083e80((int)sVar2);
  _DAT_1f8000d8 = _DAT_1f8000d8 - iVar4 * iVar6;
  if (iVar6 < 0x191) {
    *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 1;
  }
  return;
}

