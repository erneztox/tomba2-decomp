// FUN_0803eab4

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803eab4(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
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
    *(undefined4 *)(param_1 + 0x3c) = 0x8013fa1c;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined2 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined2 *)(param_1 + 0x32) = 0xfffc;
    sVar3 = func_0x0009a450();
    uVar4 = func_0x0009a450();
    iVar6 = (uVar4 & 3) + 1;
    iVar5 = func_0x00083f50((int)sVar3);
    *(short *)(param_1 + 0x5a) = (short)(iVar5 * iVar6 >> 0xc);
    iVar5 = func_0x00083e80((int)sVar3);
    *(short *)(param_1 + 0x5c) = (short)(iVar5 * iVar6 >> 0xc);
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0x40;
  }
  cVar2 = *(char *)(param_1 + 5);
  *(char *)(param_1 + 5) = cVar2 + -1;
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    uVar4 = *(int *)(param_1 + 0x54) + 0x40;
    *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + *(short *)(param_1 + 0x5a);
    *(uint *)(param_1 + 0x54) = uVar4;
    *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + *(short *)(param_1 + 0x5c);
    iVar5 = func_0x00083e80(uVar4 >> 2);
    uVar4 = ((iVar5 >> 8) + 1) * 0x10000 >> 0x10;
    *(uint *)(param_1 + 0x50) = uVar4 << 0x10 | uVar4 | 0x1000;
    func_0x0002b278();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

