// FUN_0801b970

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801b970(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined4 *)(param_1 + 0x3c) = 0x80132db0;
    *(undefined2 *)(param_1 + 0x32) = 0xfffc;
    *(undefined2 *)(param_1 + 0x2c) = 0x222e;
    *(undefined2 *)(param_1 + 0x2e) = 0xf600;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined2 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined2 *)(param_1 + 0x30) = 0x277e;
    sVar4 = func_0x0009a450();
    uVar5 = func_0x0009a450();
    iVar7 = (uVar5 & 3) + 1;
    iVar6 = func_0x00083f50((int)sVar4);
    *(short *)(param_1 + 0x5a) = (short)(iVar6 * iVar7 >> 0xc);
    iVar6 = func_0x00083e80((int)sVar4);
    *(short *)(param_1 + 0x5c) = (short)(iVar6 * iVar7 >> 0xc);
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0x30;
  }
  cVar2 = *(char *)(param_1 + 5);
  *(char *)(param_1 + 5) = cVar2 + -1;
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + *(short *)(param_1 + 0x5a);
    uVar3 = _DAT_1f80017c;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x40;
    *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + *(short *)(param_1 + 0x5c);
    if ((uVar3 & 3) == 0) {
      *(ushort *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 1U & 0xf;
    }
    iVar6 = func_0x00083e80(*(uint *)(param_1 + 0x54) >> 2);
    uVar5 = ((iVar6 >> 8) + 1) * 0x10000 >> 0x10;
    *(uint *)(param_1 + 0x50) = uVar5 << 0x10 | uVar5 | 0x1000;
    func_0x0002b278();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

