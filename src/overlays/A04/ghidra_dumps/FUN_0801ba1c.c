// FUN_0801ba1c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ba1c(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      sVar4 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar4 + 1;
      if (0xb < sVar4) {
        func_0x00074590(0x83,0,0);
        *(undefined2 *)(param_1 + 0x40) = 0;
      }
      if ((_DAT_800ecf54 & 0xf0) == 0) {
        func_0x00054e24(param_1,2,0);
      }
      else {
        func_0x00054e24(param_1,2,1);
        if ((_DAT_800e7e68 & 0xf0) != 0) {
          uVar7 = (uint)*(short *)(param_1 + 0x44);
          if ((int)uVar7 < 0) {
            uVar7 = -uVar7;
          }
          sVar4 = (short)uVar7;
          if (((uVar7 & 0xffff) != 0) &&
             (sVar4 = (short)(uVar7 - 0xa0), (int)((uVar7 - 0xa0) * 0x10000) < 1)) {
            sVar4 = 0;
          }
          if (*(char *)(param_1 + 0x147) == '\0') {
            *(short *)(param_1 + 0x44) = sVar4;
          }
          else {
            *(short *)(param_1 + 0x44) = -sVar4;
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
      sVar4 = *(short *)(param_1 + 0x142);
      sVar2 = *(short *)(param_1 + 0x142);
      if (sVar4 < 0) {
        sVar4 = -sVar4;
      }
      if ((*(ushort *)(param_1 + 0x17e) & 0x640) == 0) {
        if (sVar4 < 0x81) {
          uVar7 = (uint)*(short *)(param_1 + 0x44);
          if ((int)uVar7 < 0) {
            uVar7 = -uVar7;
          }
          sVar4 = (short)uVar7;
          if (((uVar7 & 0xffff) != 0) &&
             (sVar4 = (short)(uVar7 - 0x80), (int)((uVar7 - 0x80) * 0x10000) < 1)) {
            sVar4 = 0;
          }
          if (*(char *)(param_1 + 0x147) != '\0') {
            *(short *)(param_1 + 0x44) = -sVar4;
            halt_baddata();
          }
          goto LAB_0801bfb8;
        }
        uVar5 = *(short *)(param_1 + 0x44) + sVar2;
        *(ushort *)(param_1 + 0x44) = uVar5;
        if (*(char *)(param_1 + 0x147) == '\0') {
          if ((int)((uint)uVar5 << 0x10) < 0) {
            *(undefined2 *)(param_1 + 0x44) = 0;
            halt_baddata();
          }
        }
        else if (0 < (int)((uint)uVar5 << 0x10)) {
          *(undefined2 *)(param_1 + 0x44) = 0;
        }
      }
      else {
        if (sVar4 < 0xa1) {
          uVar7 = (uint)*(short *)(param_1 + 0x44);
          if ((int)uVar7 < 0) {
            uVar7 = -uVar7;
          }
          sVar4 = (short)uVar7;
          if (((uVar7 & 0xffff) != 0) &&
             (sVar4 = (short)(uVar7 - 0xa0), (int)((uVar7 - 0xa0) * 0x10000) < 1)) {
            sVar4 = 0;
          }
          if (*(char *)(param_1 + 0x147) != '\0') {
            *(short *)(param_1 + 0x44) = -sVar4;
            halt_baddata();
          }
LAB_0801bfb8:
          *(short *)(param_1 + 0x44) = sVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (*(char *)(param_1 + 0x147) != '\0') {
          *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + sVar2 + 0x40;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar5 = (*(short *)(param_1 + 0x44) + sVar2) - 0x40;
        *(ushort *)(param_1 + 0x44) = uVar5;
        if ((int)((uint)uVar5 << 0x10) < 0) {
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
      if (*(char *)(param_1 + 5) != '6') goto LAB_0801c110;
      *(byte *)(param_1 + 0x177) = *(byte *)(param_1 + 0x177) | 1;
      *(short *)(param_1 + 0x14e) = *(short *)(param_1 + 0x14e) + (*(short *)(param_1 + 0x44) >> 4);
      if ((*(byte *)(param_1 + 0x29) & 0x80) == 0) goto LAB_0801c110;
      iVar6 = func_0x00055824();
      if (iVar6 != 0) {
        *(undefined1 *)(param_1 + 0x16a) = 0;
        *(undefined1 *)(param_1 + 0x177) = 0;
        *(undefined1 *)(param_1 + 5) = 2;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        func_0x000551c4(param_1);
        halt_baddata();
      }
      iVar6 = func_0x000532a0(param_1);
      if (iVar6 == 0) {
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
        goto LAB_0801c110;
      }
      goto LAB_0801c0b8;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    func_0x00053d90(param_1);
    func_0x00074590(0x82,0,0);
    *(undefined1 *)(param_1 + 0x145) = 0;
    *(undefined1 *)(param_1 + 0x146) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    func_0x00054e24(param_1,2,0);
    *(undefined2 *)(param_1 + 0x14e) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(undefined2 *)(param_1 + 0x42) = 0;
    if (*(short *)(param_1 + 0x142) == 0) {
      if ((*(short *)(param_1 + 0x44) != 0) || (uVar3 = 0xf000, *(char *)(param_1 + 0x147) == '\0'))
      {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      uVar3 = 0x1200;
      if (*(short *)(param_1 + 0x142) < 1) {
        uVar3 = 0xee00;
      }
    }
    *(undefined2 *)(param_1 + 0x44) = uVar3;
    *(undefined1 *)(param_1 + 0x144) = 1;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  sVar4 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar4 + 1;
  if (0xb < sVar4) {
    func_0x00074590(0x83,0,0);
    *(undefined2 *)(param_1 + 0x40) = 0;
  }
  if (*(char *)(param_1 + 0x29) == '\0') {
    iVar6 = (uint)*(ushort *)(param_1 + 0x44) << 0x10;
    iVar6 = (iVar6 >> 0x10) - (iVar6 >> 0x1f) >> 1;
    *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar6;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar6;
    if ((*(char *)(param_1 + 0x16b) == '\0') && (*(char *)(param_1 + 0x61) == '\0')) {
      func_0x00054650(param_1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) & 0xfb;
    iVar6 = (int)*(short *)(param_1 + 0x44);
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar6 * 0x100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x42) = 0;
  func_0x00056b48(param_1,1);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 10;
  func_0x00055d5c(param_1);
  func_0x00076d68(param_1);
  if (*(short *)(param_1 + 0x142) == 0) {
    sVar4 = *(short *)(param_1 + 0x44) + 0x80;
    if (*(short *)(param_1 + 0x44) < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    sVar4 = *(short *)(param_1 + 0x44) + (*(short *)(param_1 + 0x142) >> 1);
  }
  *(short *)(param_1 + 0x44) = sVar4;
  if (0x2400 < *(short *)(param_1 + 0x44)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(short *)(param_1 + 0x44) < -0x2400) {
    *(undefined2 *)(param_1 + 0x44) = 0xdc00;
  }
  func_0x0005444c(param_1);
  if ((*(byte *)(param_1 + 0x29) & 0x80) == 0) {
    if (0x14 < *(short *)(param_1 + 0x42)) {
      iVar6 = (uint)*(ushort *)(param_1 + 0x44) << 0x10;
      *(short *)(param_1 + 0x44) = (short)((iVar6 >> 0x10) - (iVar6 >> 0x1f) >> 1);
      func_0x00056d44(param_1,0);
      halt_baddata();
    }
LAB_0801c110:
    func_0x000551c4(param_1);
    return;
  }
  *(undefined2 *)(param_1 + 0x42) = 0;
  func_0x0005314c();
  if (*(byte *)(param_1 + 0x144) < 2) {
    *(undefined1 *)(param_1 + 0x144) = 0;
  }
  iVar6 = func_0x000532a0(param_1);
  if (iVar6 == 0) {
    if (*(short *)(param_1 + 0x44) < 0) {
      *(undefined1 *)(param_1 + 0x147) = 1;
      *(byte *)(param_1 + 0x177) = *(byte *)(param_1 + 0x177) | 1;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      *(short *)(param_1 + 0x14e) = *(short *)(param_1 + 0x14e) + (*(short *)(param_1 + 0x44) >> 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x147) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_0801c0b8:
  func_0x000551c4(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

