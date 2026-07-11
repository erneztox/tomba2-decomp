// FUN_08043a34

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08043a34(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 uVar1;
  undefined4 extraout_at_00;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  byte abStack_8028 [32768];
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = _DAT_8010a49c;
  local_24 = _DAT_8010a4a0;
  if (*(int *)(param_1 + 0x34) != 0) {
    func_0x000329e0(6);
    iVar4 = 0;
    puVar3 = (undefined4 *)(param_1 + 0x50);
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    _DAT_1f800090 = 0;
    func_0x00031780(param_1);
    uVar1 = extraout_at;
    do {
      setCopReg(2,in_zero,*puVar3);
      setCopReg(2,uVar1,puVar3[1]);
      iVar2 = func_0x000317cc((int)*(short *)(param_1 + 0x32));
      if (iVar2 != 0) {
        func_0x00031780(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar3 = puVar3 + 2;
      _DAT_1f800084 =
           (int)(_DAT_1f800084 * (uint)*(byte *)((int)&local_28 + (int)(short)iVar4)) >> 8;
      _DAT_1f800088 = _DAT_1f800084;
      func_0x000328bc(param_1,uVar5);
      iVar4 = iVar4 + 1;
      uVar1 = extraout_at_00;
    } while (iVar4 * 0x10000 >> 0x10 < (int)*(short *)(param_1 + 0x4e));
  }
  return;
}

