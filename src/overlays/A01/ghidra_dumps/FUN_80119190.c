// FUN_80119190

/* WARNING: Control flow encountered bad instruction data */

int FUN_80119190(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined2 *)(param_1 + 0xbc) = 0x1000;
    *(undefined2 *)(param_1 + 0xba) = 0x1000;
    *(undefined2 *)(param_1 + 0xb8) = 0x1000;
    func_0x8004130c(param_1,0);
    func_0x80051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x2f);
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    *(undefined2 *)(param_1 + 0xe) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 3;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined1 *)(param_1 + 0x5e) = 0;
    }
    *(undefined2 *)(param_1 + 0x40) = 0x50;
    *(undefined2 *)(param_1 + 0x4a) = 0xd000;
    *(undefined2 *)(param_1 + 0x44) = 0xa00;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
    copFunction(2,0x1400006);
    iVar5 = getCopReg(2,0x18);
    *param_3 = iVar5;
    iVar5 = *param_3;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (7 < iVar5) {
      setCopReg(2,in_zero,*(undefined4 *)(param_2 + 0x18));
      setCopReg(2,in_at,*(undefined4 *)(param_2 + 0x1c));
      copFunction(2,0x180001);
      iVar5 = getCopControlWord(2,0xf800);
      *param_3 = iVar5;
      if (-1 < *param_3) {
        uVar1 = getCopReg(2,0xe);
        *(undefined4 *)(param_1 + 0x2c) = uVar1;
        copFunction(2,0x168002e);
        getCopReg(2,7);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    return -1;
  }
  FUN_801208b4(param_1);
  sVar2 = *(short *)(param_1 + 0x4a) + 0x200;
  *(short *)(param_1 + 0x4a) = sVar2;
  *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + -0x200;
  if (0x3000 < sVar2) {
    *(undefined2 *)(param_1 + 0x4a) = 0x3000;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
  iVar5 = func_0x80083f50((uint)*(byte *)(param_1 + 0x2b) << 4);
  sVar2 = *(short *)(param_1 + 0x44);
  iVar4 = func_0x80083e80((uint)*(byte *)(param_1 + 0x2b) << 4);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar5 * sVar2 >> 4);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (iVar4 * *(short *)(param_1 + 0x44) >> 4);
  func_0x80041ac0(param_1);
  if ((*(short *)(param_1 + 0x4a) < 1) || (iVar5 = func_0x800495dc(param_1,0,0), iVar5 == 0)) {
    uVar3 = *(short *)(param_1 + 0x40) - 1;
    *(ushort *)(param_1 + 0x40) = uVar3;
    if (uVar3 != 0) {
      return (uint)uVar3 << 0x10;
    }
  }
  func_0x80074590(0x1b,0,0);
  func_0x800315d4(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 4) = 3;
  return 3;
}

