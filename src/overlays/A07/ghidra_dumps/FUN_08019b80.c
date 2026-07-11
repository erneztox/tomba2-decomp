// FUN_08019b80

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019b80(int param_1,int param_2,uint param_3)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 100) == '\x01') {
    if (DAT_800bf816 == '\0') {
      func_0x00083f50((int)*(short *)(param_1 + 10));
    }
    else {
      func_0x00083f50((int)*(short *)(param_1 + 0x6e));
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar4 = func_0x00083f50((int)*(short *)(param_1 + 10));
  iVar6 = (int)_DAT_1f8000ee;
  iVar7 = *(int *)(param_1 + 0x58);
  iVar5 = func_0x00083f50(param_3 & 0xfff);
  iVar6 = (int)(short)((uint)-(iVar4 * (iVar6 + iVar7)) >> 0xc);
  uVar1 = *(ushort *)(param_2 + 0x2e);
  iVar4 = func_0x00083e80(param_3 & 0xfff);
  iVar4 = (int)((((uint)*(ushort *)(param_2 + 0x36) - (iVar4 * iVar6 >> 0xc)) -
                (_DAT_1f8000d8 >> 0x10)) * 0x10000) >> 0x10;
  iVar5 = (int)((((uint)uVar1 + (iVar5 * iVar6 >> 0xc)) - (_DAT_1f8000d0 >> 0x10)) * 0x10000) >>
          0x10;
  sVar2 = func_0x00085690(-iVar4,iVar5);
  sVar3 = func_0x00084080(iVar5 * iVar5 + iVar4 * iVar4);
  iVar4 = func_0x00083f50((int)sVar2);
  iVar5 = (int)sVar3;
  _DAT_1f8000d0 = _DAT_1f8000d0 + iVar4 * iVar5;
  iVar4 = func_0x00083e80((int)sVar2);
  _DAT_1f8000d8 = _DAT_1f8000d8 - iVar4 * iVar5;
  if (iVar5 < 0x191) {
    *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 1;
  }
  return;
}

