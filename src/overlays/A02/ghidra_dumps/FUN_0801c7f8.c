// FUN_0801c7f8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801c7f8(int param_1,int param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  undefined1 auStack_28 [2];
  ushort local_26;
  ushort local_1e;
  
  if (*(char *)(param_1 + 100) == '\x01') {
    if ((DAT_800bf816 == '\0') || (DAT_800bf817 == '\a')) {
      func_0x00083f50((int)*(short *)(param_1 + 10));
    }
    else {
      func_0x00083f50((int)*(short *)(param_1 + 0x6e));
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = func_0x00083f50((int)*(short *)(param_1 + 10));
  iVar5 = (int)_DAT_1f8000ee;
  iVar6 = *(int *)(param_1 + 0x58);
  iVar4 = func_0x00083f50(param_3 & 0xfff);
  iVar5 = (int)(short)((uint)-(iVar3 * (iVar5 + iVar6)) >> 0xc);
  uVar7 = *(short *)(param_2 + 0x2e) + (short)(iVar4 * iVar5 >> 0xc);
  iVar3 = func_0x00083e80(param_3 & 0xfff);
  local_1e = *(short *)(param_2 + 0x36) - (short)(iVar3 * iVar5 >> 0xc);
  local_26 = uVar7;
  if (DAT_800bf816 == '\0') {
    func_0x0011518c(auStack_28,600);
  }
  iVar4 = (int)(((uint)local_1e - (_DAT_1f8000d8 >> 0x10)) * 0x10000) >> 0x10;
  iVar3 = (int)(((uint)local_26 - (_DAT_1f8000d0 >> 0x10)) * 0x10000) >> 0x10;
  sVar1 = func_0x00085690(-iVar4,iVar3);
  sVar2 = func_0x00084080(iVar3 * iVar3 + iVar4 * iVar4);
  iVar3 = func_0x00083f50((int)sVar1);
  iVar4 = (int)sVar2;
  _DAT_1f8000d0 = _DAT_1f8000d0 + iVar3 * iVar4;
  iVar3 = func_0x00083e80((int)sVar1);
  _DAT_1f8000d8 = _DAT_1f8000d8 - iVar3 * iVar4;
  if (iVar4 < 0x191) {
    *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 1;
  }
  return;
}

