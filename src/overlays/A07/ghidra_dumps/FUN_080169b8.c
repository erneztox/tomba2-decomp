// FUN_080169b8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080169b8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar6 = *(int *)(param_1 + 0x10);
  if (bVar1 == 1) {
    cVar2 = *(char *)(iVar6 + 1);
    *(char *)(param_1 + 1) = cVar2;
    if (cVar2 != '\0') {
      if (DAT_800bfe55 != '\0') {
        iVar5 = (int)*(short *)(iVar6 + 0x44);
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        if ((0xc00 < iVar5) && ((_DAT_1f80017c & 7) == 0)) {
          func_0x000312d4(0x2c,iVar6 + 0x2c,0xffffffec);
        }
      }
      if (-1 < *(short *)(iVar6 + 0x17e)) {
        *(undefined2 *)(param_1 + 0x40) = 0x50;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x40) = 0x28;
      *(undefined2 *)(param_1 + 0x42) = 0x37;
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar6 + 0x2c);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar6 + 0x30);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar6 + 0x34);
      if (*(char *)(iVar6 + 0x29) == '\0') {
        if (*(char *)(iVar6 + 0x16b) == '\b') {
          *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x2e);
          uVar4 = _DAT_800bf812;
          uVar3 = _DAT_1f800210;
          *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(param_1 + 0x36);
          *(undefined2 *)(param_1 + 0x58) = 0;
          *(undefined2 *)(param_1 + 0x56) = uVar3;
          *(undefined2 *)(param_1 + 0x4a) = uVar4;
        }
        else {
          if (_DAT_1f80019e == 0) {
            *(undefined1 *)(param_1 + 1) = 0;
            if (*(char *)(param_1 + 1) == '\0') {
              return;
            }
            iVar5 = 0x80 - (((int)*(short *)(param_1 + 0x4a) - (int)*(short *)(iVar6 + 0x32)) +
                            -0x78 >> 2);
            *(short *)(param_1 + 0x4e) = (short)iVar5;
            iVar5 = iVar5 * 0x10000 >> 0x10;
            if (-1 < iVar5) {
              if (0x80 < iVar5) {
                *(undefined2 *)(param_1 + 0x4e) = 0x80;
              }
              iVar6 = 0x100 - (((int)*(short *)(param_1 + 0x4a) - (int)*(short *)(iVar6 + 0x32)) +
                               -0x78 >> 2);
              *(short *)(param_1 + 0x50) = (short)iVar6;
              iVar6 = iVar6 * 0x10000 >> 0x10;
              if (iVar6 < 0) {
                *(undefined2 *)(param_1 + 0x50) = 0;
                *(undefined1 *)(param_1 + 1) = 0;
              }
              else {
                if (iVar6 < 0x101) {
                  return;
                }
                *(undefined2 *)(param_1 + 0x50) = 0x100;
              }
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            *(undefined2 *)(param_1 + 0x4e) = 0;
            *(undefined1 *)(param_1 + 1) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(short *)(param_1 + 0x4a) = _DAT_1f80019e;
          *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x2e);
          *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(param_1 + 0x36);
        }
      }
      else {
        *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(iVar6 + 0x2e);
        *(short *)(param_1 + 0x4a) = *(short *)(iVar6 + 0x32) + *(short *)(iVar6 + 0x84);
        *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(iVar6 + 0x36);
        *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(iVar6 + 0x140);
        *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(iVar6 + 0x142);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      _DAT_1f80019e = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      if (*(short *)(iVar6 + 0x17e) < 0) {
        *(undefined2 *)(param_1 + 0x40) = 0x28;
        *(undefined2 *)(param_1 + 0x42) = 0x37;
        *(undefined2 *)(param_1 + 0xe) = 0;
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x40) = 0x50;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

