// FUN_0804563c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0804563c(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 extraout_at_01;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_2f;
  
  iVar7 = *(int *)(param_1 + 0x34);
  local_38 = _DAT_8010a3e4;
  local_34 = _DAT_8010a3e8;
  local_30 = DAT_8010a3ec;
  local_2f = DAT_8010a3ed;
  puVar5 = (undefined4 *)(param_1 + 0x50);
  func_0x000329e0(6);
  if (*(char *)(param_1 + 5) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = _DAT_8014c1b0 & 0xffff0000;
  iVar6 = 0;
  uVar1 = extraout_at;
  do {
    setCopReg(2,in_zero,*puVar5);
    setCopReg(2,uVar1,puVar5[1]);
    iVar3 = func_0x000317cc(0xfffffff6);
    uVar1 = extraout_at_00;
    if (iVar3 == 0) {
      _DAT_1f800084 = (int)(_DAT_1f800084 * (uint)*(byte *)((int)&local_38 + iVar6)) >> 4;
      _DAT_1f800088 = _DAT_1f800084;
      uVar4 = func_0x0009a450();
      _DAT_1f800090 = (uint)*(byte *)(param_1 + 7) * 0x100 - (uVar4 & 0x3ff);
      func_0x00027a4c(iVar7 + *(short *)((int)puVar5 + 6) * 8,uVar2 | 0x33ff);
      uVar1 = extraout_at_01;
    }
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 2;
  } while (iVar6 < 7);
  return;
}

