// FUN_08024164

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08024564) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08024164(int param_1)

{
  short sVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  
  bVar3 = *(byte *)(param_1 + 6);
  if (bVar3 == 1) {
    if (*(char *)(param_1 + 0x29) == '\0') {
      *(undefined1 *)(param_1 + 6) = 2;
      if (DAT_800e7fe8 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (DAT_800e7fe8 < 2) {
        if (DAT_800e7fe8 == 0) {
          halt_baddata();
        }
        *(undefined2 *)(param_1 + 0x44) = 0x100;
      }
      else {
        if (DAT_800e7fe8 == 2) {
          *(undefined2 *)(param_1 + 0x44) = 0x80;
          if (DAT_800e7fc7 != '\0') {
            return;
          }
          *(short *)(param_1 + 0x44) = -*(short *)(param_1 + 0x44);
          halt_baddata();
        }
        *(undefined2 *)(param_1 + 0x44) = 0x100;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_800e7fc7 == '\0') {
      *(short *)(*(int *)(param_1 + 0xc0) + 0xc) = _DAT_800e7ed8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(*(int *)(param_1 + 0xc0) + 0xc) = -_DAT_800e7ed8;
    if (2 < DAT_800e7fe8) {
      if (DAT_800e7fc7 == '\0') {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * -0x100;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
      if (*(short *)(param_1 + 0x62) < *(short *)(param_1 + 0x32)) {
        *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x62);
        halt_baddata();
      }
    }
    return;
  }
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      halt_baddata();
    }
    if (*(char *)(param_1 + 0x29) == '\0') {
      if (*(char *)(param_1 + 0x2b) != '\0') {
        uVar2 = func_0x00077768((uint)*(byte *)(param_1 + 0x5f) << 4,0x1a,0);
        *(undefined1 *)(param_1 + 0x46) = uVar2;
        *(undefined1 *)(param_1 + 6) = 3;
        *(undefined1 *)(param_1 + 7) = 0;
        halt_baddata();
      }
      if (*(short *)(param_1 + 0x32) < *(short *)(param_1 + 0x62)) {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0xf0000;
        if (*(short *)(param_1 + 0x62) <= *(short *)(param_1 + 0x32)) {
          *(undefined2 *)(param_1 + 0x44) = 0x100;
          *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x62);
          halt_baddata();
        }
        return;
      }
      bVar3 = *(byte *)(param_1 + 7);
      if (bVar3 != 1) {
        if (bVar3 < 2) {
          if (bVar3 == 0) {
            *(undefined1 *)(param_1 + 7) = 1;
            *(undefined2 *)(param_1 + 0x52) = 0x40;
            *(undefined2 *)(param_1 + 0x4c) = 0;
            goto LAB_0011d230;
          }
        }
        else if (bVar3 == 2) {
          *(ushort *)(param_1 + 0x4c) =
               *(short *)(param_1 + 0x4c) + *(short *)(param_1 + 0x52) * 8 & 0xfff;
          if (*(short *)(param_1 + 0x4c) == 0) {
            bVar3 = func_0x0009a450(1,0x1a);
            *(byte *)(param_1 + 7) = (bVar3 & 1) + 1;
            halt_baddata();
          }
          return;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
LAB_0011d230:
      uVar4 = func_0x00083f50((int)*(short *)(param_1 + 0x4c));
      *(short *)(*(int *)(param_1 + 0xc0) + 0xc) = (short)(uVar4 >> 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar3 != 2) {
      if (bVar3 != 3) {
        halt_baddata();
      }
      bVar3 = *(byte *)(param_1 + 7);
      if (bVar3 != 1) {
        if (bVar3 < 2) {
          if (bVar3 == 0) {
            *(undefined1 *)(param_1 + 7) = 1;
            *(undefined2 *)(param_1 + 0x40) = 4;
            halt_baddata();
          }
        }
        else if (bVar3 == 2) {
          if (*(char *)(param_1 + 0x46) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined2 *)(param_1 + 0x44) = 0xffc0;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 0x46) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(*(int *)(param_1 + 0xc0) + 0xc) =
           *(short *)(*(int *)(param_1 + 0xc0) + 0xc) + 0x100;
      sVar1 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar1 + -1;
      if (sVar1 == 1) {
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (*(char *)(param_1 + 0x29) == '\0') {
      iVar5 = func_0x0011d014(param_1);
      if (iVar5 != 0) {
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        halt_baddata();
      }
      return;
    }
  }
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 7) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

