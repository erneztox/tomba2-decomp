// FUN_080207a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080207a0(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 extraout_at_01;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_stack_ffffffd4;
  
  if (*(char *)(param_1 + 2) == '\x10') {
    sVar1 = *(short *)(param_1 + 0x80);
    iVar5 = 0x80 - sVar1;
    iVar6 = iVar5 * 0x20;
    if (iVar5 < 0) {
      iVar6 = 0;
    }
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    func_0x000329e0(6,param_2,0,0);
    iVar5 = 0;
    uVar2 = extraout_at;
    do {
      uVar4 = iVar5 + (uint)_DAT_1f80017c * 0x40 & 0x3ff;
      in_stack_ffffffd4 =
           CONCAT22((short)((uint)in_stack_ffffffd4 >> 0x10),*(undefined2 *)(param_1 + 0x36));
      uVar7 = CONCAT22(*(short *)(param_1 + 0x32) + (short)(uVar4 * 0x19 >> 7),
                       *(undefined2 *)(param_1 + 0x2e));
      setCopReg(2,in_zero,uVar7);
      setCopReg(2,uVar2,in_stack_ffffffd4);
      iVar3 = func_0x000317cc(3);
      uVar2 = extraout_at_00;
      if (iVar3 == 0) {
        iVar3 = _DAT_1f800084 * sVar1;
        _DAT_1f800088 = _DAT_1f800084;
        _DAT_1f800084 = iVar3 >> 8;
        _DAT_1f800090 = iVar6;
        func_0x00027a4c((uVar4 >> 6) * 8 + -0x7febbe00,_DAT_801441fc,&DAT_1f800088,iVar3,uVar7,
                        in_stack_ffffffd4);
        uVar2 = extraout_at_01;
      }
      iVar5 = iVar5 + 0x155;
    } while (iVar5 < 0x400);
  }
  else if (*(short *)(param_1 + 0x60) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

