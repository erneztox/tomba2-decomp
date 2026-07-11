// FUN_080124d8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080124d8(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  if ((DAT_800bf870 != '\f') && (DAT_800bf870 != '\x0f')) {
    if (param_3 == 0) {
      uVar1 = *(ushort *)(param_2 + 0x56);
      sVar2 = -_DAT_1f8000ee;
      iVar4 = ((_DAT_1f8000d4 >> 0x10) + 400) - (uint)_DAT_1f8000e2;
      if (0x14 < (iVar4 + 10U & 0xffff)) {
        _DAT_1f8000d4 = _DAT_1f8000d4 - (iVar4 * 0x10000 >> 3);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      _DAT_1f8000d4 = CONCAT22(_DAT_1f8000e2 - 400,_DAT_1f8000d4);
      *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 2;
      iVar5 = (int)((uVar1 + 0x800) * 0x10000) >> 0x10;
      iVar4 = func_0x00083f50(iVar5);
      uVar1 = *(ushort *)(param_2 + 0x2e);
      iVar5 = func_0x00083e80(iVar5);
      iVar5 = (int)((((uint)*(ushort *)(param_2 + 0x36) - (iVar5 * sVar2 >> 0xc)) -
                    (_DAT_1f8000d8 >> 0x10)) * 0x10000) >> 0x10;
      iVar4 = (int)((((uint)uVar1 + (iVar4 * sVar2 >> 0xc)) - (_DAT_1f8000d0 >> 0x10)) * 0x10000) >>
              0x10;
      sVar2 = func_0x00085690(-iVar5,iVar4);
      sVar3 = func_0x00084080(iVar4 * iVar4 + iVar5 * iVar5);
      iVar4 = func_0x00083f50((int)sVar2);
      iVar5 = (int)sVar3;
      _DAT_1f8000d0 = _DAT_1f8000d0 + iVar4 * iVar5;
      iVar4 = func_0x00083e80((int)sVar2);
      _DAT_1f8000d8 = _DAT_1f8000d8 - iVar4 * iVar5;
      if (iVar5 < 0x191) {
        *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 1;
      }
    }
    else {
      if (DAT_1f800246 != '\x02') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (399 < *(int *)(param_1 + 0x60)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return;
}

