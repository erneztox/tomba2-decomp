// FUN_08012180

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08012180(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  short sVar4;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 6) = 0;
        func_0x00077c40(param_1,0x8001b860,2);
        halt_baddata();
      }
      goto LAB_08012230;
    }
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(param_1 + 0x92) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(param_1 + 0x94) = *(undefined2 *)(param_1 + 0x36);
  }
  *(short *)(param_1 + 0xb8) = *(short *)(param_1 + 0xb8) + 0x80;
  *(short *)(param_1 + 0xba) = *(short *)(param_1 + 0xba) + 0x80;
  *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 0x80;
  if (0xfff < *(ushort *)(param_1 + 0xb8)) {
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
LAB_08012230:
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x90);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x92);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x94);
  iVar3 = func_0x00083f50((int)*(short *)(param_1 + 0x4e));
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar3 * 0xa00;
  iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x4e));
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -2;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar3 * 0xa00;
  sVar4 = *(short *)(param_1 + 0x94) + -1;
  *(short *)(param_1 + 0x94) = sVar4;
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -1;
  uVar2 = func_0x00085690((int)*(short *)(param_1 + 0x36) - (int)sVar4,
                          (int)*(short *)(param_1 + 0x90) - (int)*(short *)(param_1 + 0x2e));
  *(undefined2 *)(param_1 + 0x56) = uVar2;
  sVar4 = *(short *)(param_1 + 0x4e) + 0x80;
  *(short *)(param_1 + 0x4e) = sVar4;
  if (0x1bff < sVar4) {
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

