// FUN_0802a2f0

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802a2f0(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x2e) + *(short *)(param_1 + 0x42);
    *(short *)(param_1 + 0x2e) = sVar2;
    if (0x2308 < sVar2) {
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(undefined2 *)(param_1 + 0x44) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar2 = *(short *)(param_1 + 0x44) + 0x300;
    *(short *)(param_1 + 0x44) = sVar2;
    if (0x3000 < sVar2) {
      *(undefined2 *)(param_1 + 0x44) = 0x3000;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x44) * 0x100;
    if (-0x98d < *(short *)(param_1 + 0x32)) {
      *(undefined2 *)(param_1 + 0x32) = 0xf673;
      iVar3 = func_0x0003116c(0,param_1 + 0x2c,0);
      *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    iVar3 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_1 + 0x42);
    *(short *)(param_1 + 0x36) = (short)iVar3;
    if (iVar3 * 0x10000 >> 0x10 < 0x2968) {
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(undefined2 *)(param_1 + 0x44) = 0;
      halt_baddata();
    }
  }
  else {
    if (bVar1 != 3) {
      halt_baddata();
    }
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) - *(short *)(param_1 + 0x42);
    if (*(short *)(param_1 + 0x42) != 0) {
      *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + -1;
    }
    sVar2 = *(short *)(param_1 + 0x44) + 0x300;
    *(short *)(param_1 + 0x44) = sVar2;
    if (0x3000 < sVar2) {
      *(undefined2 *)(param_1 + 0x44) = 0x3000;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x44) * 0x100;
    if (-0x8b1 < *(short *)(param_1 + 0x32)) {
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(undefined2 *)(param_1 + 0x44) = 0;
      *(undefined1 *)(param_1 + 4) = 3;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
  }
  return;
}

