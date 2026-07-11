// FUN_08019e88

/* WARNING: Control flow encountered bad instruction data */

void FUN_08019e88(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 6) == '\0') {
    func_0x00053d90(param_1);
    *(undefined1 *)(param_1 + 0x145) = 0;
    *(undefined1 *)(param_1 + 0x146) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    func_0x00054e24(param_1,2,0);
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined2 *)(param_1 + 0x42) = 0;
    if (*(short *)(param_1 + 0x142) == 0) {
      if ((*(short *)(param_1 + 0x44) != 0) || (uVar1 = 0xf000, *(char *)(param_1 + 0x147) == '\0'))
      {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      uVar1 = 0x1200;
      if (*(short *)(param_1 + 0x142) < 1) {
        uVar1 = 0xee00;
      }
    }
    *(undefined2 *)(param_1 + 0x44) = uVar1;
    *(undefined1 *)(param_1 + 0x144) = 1;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
    halt_baddata();
  }
  if ((*(char *)(param_1 + 0x29) == '\0') && (*(char *)(param_1 + 0x181) == '\0')) {
    iVar3 = (uint)*(ushort *)(param_1 + 0x44) << 0x10;
    iVar3 = (iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1;
    *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar3;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar3;
    if ((*(char *)(param_1 + 0x16b) == '\0') && (*(char *)(param_1 + 0x61) == '\0')) {
      func_0x00054650(param_1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) & 0xfb;
    iVar3 = (int)*(short *)(param_1 + 0x44);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar3 * 0x100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x42) = 0;
  func_0x00056b48(param_1,1);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 10;
  func_0x00055d5c(param_1);
  func_0x00076d68(param_1);
  if (*(short *)(param_1 + 0x142) == 0) {
    sVar2 = *(short *)(param_1 + 0x44) + 0x80;
    if (*(short *)(param_1 + 0x44) < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    sVar2 = *(short *)(param_1 + 0x44) + (*(short *)(param_1 + 0x142) >> 1);
  }
  *(short *)(param_1 + 0x44) = sVar2;
  if (*(short *)(param_1 + 0x44) < 0x2401) {
    if (*(short *)(param_1 + 0x44) < -0x2400) {
      *(undefined2 *)(param_1 + 0x44) = 0xdc00;
    }
    func_0x0005444c(param_1);
    if ((*(byte *)(param_1 + 0x29) & 0x80) != 0) {
      if (*(byte *)(param_1 + 0x144) < 2) {
        *(undefined1 *)(param_1 + 0x144) = 0;
      }
      func_0x0005314c(param_1);
      *(undefined1 *)(param_1 + 0x16a) = 0;
      *(undefined1 *)(param_1 + 0x177) = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
      func_0x00054198(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (4 < *(short *)(param_1 + 0x42)) {
      iVar3 = (uint)*(ushort *)(param_1 + 0x44) << 0x10;
      *(short *)(param_1 + 0x44) = (short)((iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1);
      func_0x00056d44(param_1,0);
    }
    func_0x000551c4(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

