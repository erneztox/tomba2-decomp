// FUN_0801c128

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801c128(int param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  
  if (*(char *)(param_1 + 6) == '\0') {
    func_0x00053d90(param_1);
    func_0x00074590(0x82,0,0);
    *(undefined1 *)(param_1 + 0x145) = 0;
    *(undefined1 *)(param_1 + 0x146) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    func_0x00054e24(param_1,1,0);
    *(undefined2 *)(param_1 + 0x14e) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(undefined2 *)(param_1 + 0x42) = 0;
    if (-1 < *(short *)(param_1 + 0x44)) {
      *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 0x600;
      *(undefined1 *)(param_1 + 0x147) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + -0x600;
    *(undefined1 *)(param_1 + 0x147) = 1;
    *(byte *)(param_1 + 0x177) = *(byte *)(param_1 + 0x177) | 1;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    *(short *)(param_1 + 0x14e) = *(short *)(param_1 + 0x14e) + (*(short *)(param_1 + 0x44) >> 4);
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
    halt_baddata();
  }
  sVar5 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar5 + 1;
  if (0xb < sVar5) {
    func_0x00074590(0x83,0,0);
    *(undefined2 *)(param_1 + 0x40) = 0;
  }
  if ((_DAT_800ecf54 & 0xf0) == 0) {
    func_0x00054e24(param_1,1,0);
  }
  else {
    func_0x00054e24(param_1,1,1);
    if ((_DAT_800e7e68 & 0xf0) != 0) {
      uVar3 = (uint)*(short *)(param_1 + 0x44);
      if ((int)uVar3 < 0) {
        uVar3 = -uVar3;
      }
      sVar5 = (short)uVar3;
      if (((uVar3 & 0xffff) != 0) &&
         (sVar5 = (short)(uVar3 - 0xa0), (int)((uVar3 - 0xa0) * 0x10000) < 1)) {
        sVar5 = 0;
      }
      if (*(char *)(param_1 + 0x147) == '\0') {
        *(short *)(param_1 + 0x44) = sVar5;
      }
      else {
        *(short *)(param_1 + 0x44) = -sVar5;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  func_0x00056b48(param_1,1);
  func_0x00055d5c(param_1);
  func_0x00076d68(param_1);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
  func_0x0005444c(param_1);
  sVar5 = *(short *)(param_1 + 0x142);
  sVar1 = *(short *)(param_1 + 0x142);
  if (sVar5 < 0) {
    sVar5 = -sVar5;
  }
  if ((*(ushort *)(param_1 + 0x17e) & 0x640) == 0) {
    if (sVar5 < 0x81) {
      uVar3 = (uint)*(short *)(param_1 + 0x44);
      if ((int)uVar3 < 0) {
        uVar3 = -uVar3;
      }
      sVar5 = (short)uVar3;
      if (((uVar3 & 0xffff) != 0) &&
         (sVar5 = (short)(uVar3 - 0x80), (int)((uVar3 - 0x80) * 0x10000) < 1)) {
        sVar5 = 0;
      }
      if (*(char *)(param_1 + 0x147) != '\0') {
        *(short *)(param_1 + 0x44) = -sVar5;
        halt_baddata();
      }
      goto LAB_0801c428;
    }
    uVar2 = *(short *)(param_1 + 0x44) + sVar1;
    *(ushort *)(param_1 + 0x44) = uVar2;
    if (*(char *)(param_1 + 0x147) == '\0') {
      if ((int)((uint)uVar2 << 0x10) < 0) {
        *(undefined2 *)(param_1 + 0x44) = 0;
        halt_baddata();
      }
    }
    else if (0 < (int)((uint)uVar2 << 0x10)) {
      *(undefined2 *)(param_1 + 0x44) = 0;
    }
  }
  else {
    if (sVar5 < 0xa1) {
      uVar3 = (uint)*(short *)(param_1 + 0x44);
      if ((int)uVar3 < 0) {
        uVar3 = -uVar3;
      }
      sVar5 = (short)uVar3;
      if (((uVar3 & 0xffff) != 0) &&
         (sVar5 = (short)(uVar3 - 0xa0), (int)((uVar3 - 0xa0) * 0x10000) < 1)) {
        sVar5 = 0;
      }
      if (*(char *)(param_1 + 0x147) != '\0') {
        *(short *)(param_1 + 0x44) = -sVar5;
        halt_baddata();
      }
LAB_0801c428:
      *(short *)(param_1 + 0x44) = sVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 0x147) != '\0') {
      *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + sVar1 + 0x40;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = (*(short *)(param_1 + 0x44) + sVar1) - 0x40;
    *(ushort *)(param_1 + 0x44) = uVar2;
    if ((int)((uint)uVar2 << 0x10) < 0) {
      *(undefined2 *)(param_1 + 0x44) = 0;
      halt_baddata();
    }
  }
  if (0x2400 < *(short *)(param_1 + 0x44)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(short *)(param_1 + 0x44) < -0x2400) {
    *(undefined2 *)(param_1 + 0x44) = 0xdc00;
  }
  func_0x00056c00(param_1,0);
  if (*(char *)(param_1 + 5) == '7') {
    *(byte *)(param_1 + 0x177) = *(byte *)(param_1 + 0x177) | 1;
    *(short *)(param_1 + 0x14e) = *(short *)(param_1 + 0x14e) + (*(short *)(param_1 + 0x44) >> 4);
    if ((*(byte *)(param_1 + 0x29) & 0x80) != 0) {
      iVar4 = func_0x00055824();
      if (iVar4 == 0) {
        iVar4 = func_0x000532a0(param_1);
        if (iVar4 == 0) {
          if ((*(short *)(param_1 + 0x44) == 0) ||
             ((*(byte *)(param_1 + 0x5f) != 0 &&
              ((*(byte *)(param_1 + 0x5f) & 1) == *(byte *)(param_1 + 0x147))))) {
            *(undefined1 *)(param_1 + 0x16a) = 0;
            *(undefined1 *)(param_1 + 0x177) = 0;
            *(undefined1 *)(param_1 + 5) = 0;
            *(undefined1 *)(param_1 + 6) = 0;
            *(undefined1 *)(param_1 + 7) = 0;
            func_0x00054198(param_1);
          }
          goto LAB_0801c580;
        }
        func_0x000551c4(param_1);
      }
      else {
        *(undefined1 *)(param_1 + 0x16a) = 0;
        *(undefined1 *)(param_1 + 0x177) = 0;
        *(undefined1 *)(param_1 + 5) = 2;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        func_0x000551c4(param_1);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
LAB_0801c580:
  func_0x000551c4(param_1);
  return;
}

