// FUN_0803136c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803136c(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if ((*(char *)(param_1 + 7) == '\0') &&
       (uVar2 = *(short *)(param_1 + 0x42) - 1, *(ushort *)(param_1 + 0x42) = uVar2,
       (int)((uint)uVar2 << 0x10) < 1)) {
      sVar3 = func_0x00127358(param_1,*(undefined1 *)(param_1 + 0x40));
      if (sVar3 != 0) {
        sVar3 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar3 + -1;
        if (sVar3 == 1) {
          *(undefined1 *)(param_1 + 0xbf) = 2;
          *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
        }
        else {
          *(undefined2 *)(param_1 + 0x42) = 0x10;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x42) = 0;
    }
    if (*(char *)(param_1 + 0x2b) != '\x03') {
      return;
    }
    func_0x00042354(1,1);
    *(undefined1 *)(param_1 + 0xbf) = 3;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    *(short *)(param_1 + 0x40) = 5 - *(short *)(param_1 + 0x40);
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
    }
    else {
      if (bVar1 == 2) {
        if (*(short *)(param_1 + 0x40) != 0) {
          return;
        }
        *(undefined1 *)(param_1 + 0xbf) = 0;
        *(undefined1 *)(param_1 + 6) = 0xff;
        return;
      }
      if (bVar1 != 0xff) {
        return;
      }
      *(undefined1 *)(param_1 + 0x2b) = 3;
    }
    if (*(char *)(param_1 + 0x2b) != '\x03') {
      uVar2 = *(short *)(param_1 + 0x40) - 1;
      *(ushort *)(param_1 + 0x40) = uVar2;
      if (0 < (int)((uint)uVar2 << 0x10)) {
        return;
      }
      func_0x00041768(param_1,0x29,4);
      *(undefined2 *)(param_1 + 0x40) = 5;
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined2 *)(param_1 + 0x42) = 0;
      *(undefined1 *)(param_1 + 0xbf) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_1f800137 == '\0') {
      func_0x00042354(1,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00041768(param_1,0x17,4);
    iVar4 = func_0x00130cf8();
    if (iVar4 == 0) {
      func_0x00040d68(param_1,0x801360c4);
      *(undefined1 *)(param_1 + 0x70) = 1;
      *(undefined1 *)(param_1 + 5) = 3;
    }
    else {
      func_0x00040d68(param_1,0x80135c34);
      *(undefined1 *)(param_1 + 0x70) = 1;
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

