// FUN_08035890

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08035890(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x29) < '\x02') {
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 != 1) {
        return;
      }
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + -1;
    }
    else {
      *(undefined2 *)(param_1 + 0x66) = 0;
      *(undefined2 *)(param_1 + 0x40) = 0x28;
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar3 = (int)(((uint)_DAT_800e7eae - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10;
      iVar4 = (int)(((uint)_DAT_800e7eb6 - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10;
      uVar5 = func_0x00084080(iVar3 * iVar3 + iVar4 * iVar4);
      if (((int)(uVar5 & 0xffff) <= (int)_DAT_800e7f00) &&
         ((int)(((uint)_DAT_800e7eb2 - (uint)*(ushort *)(param_1 + 0x32)) + 600 +
                (uint)_DAT_800e7f04 + (uint)*(ushort *)(param_1 + 0x84) & 0xffff) <=
          (int)_DAT_800e7f06 + (int)*(short *)(param_1 + 0x86) + 600)) {
        *(undefined1 *)(param_1 + 0x29) = 0x80;
      }
      if (*(char *)(param_1 + 0x29) == '\0') {
        if ((_DAT_1f80017c + (ushort)*(byte *)(param_1 + 3) * 4 & 0x10) == 0) {
          *(undefined2 *)(param_1 + 0x66) = 200;
        }
        else {
          *(undefined2 *)(param_1 + 0x66) = 0x96;
        }
      }
      else {
        *(undefined2 *)(param_1 + 0x40) = 0x1e;
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
        if ((*(byte *)(param_1 + 0x29) & 0x80) == 0) {
          if (*(byte *)(param_1 + 0x29) == 1) {
            *(undefined2 *)(param_1 + 0x66) = 300;
          }
          else {
            *(undefined2 *)(param_1 + 0x66) = 0;
          }
        }
        else if (*(byte *)(param_1 + 3) < 3) {
          *(undefined2 *)(param_1 + 0x66) = 600;
        }
        else {
          *(undefined2 *)(param_1 + 0x66) = 700;
        }
      }
    }
  }
  else if (bVar1 == 2) {
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

