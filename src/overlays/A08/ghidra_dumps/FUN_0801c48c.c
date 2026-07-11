// FUN_0801c48c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801c48c(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    iVar3 = func_0x00026ad0(param_1);
    if (iVar3 != 0) {
      func_0x00114cf8(param_1,*(undefined1 *)(param_1 + 3));
    }
    if ((((DAT_800bf8e2 != -1) && (DAT_800e7eaa == '\x15')) && (0x313c < _DAT_1f800160)) &&
       (0x18f7 < _DAT_1f800164)) {
      _DAT_800e7eae = 0x313c;
      _DAT_800e7eb6 = 0x18f7;
    }
    func_0x001152f0(1);
    func_0x00026a68(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007add0(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      func_0x00114cf8(param_1,0);
      uVar4 = 0x17;
      if ((8 < DAT_800bf871) && (uVar4 = 0x1c, DAT_800bf871 < 0x10)) {
        uVar4 = 0x1a;
      }
      func_0x0004d8d8(uVar4,0);
      if ((DAT_800bf816 != '\0') && (uVar2 = DAT_800bf817 + 1, DAT_800bf817 - 7 < 3)) {
        *(char *)(param_1 + 3) = (char)uVar2;
        func_0x00114cf8(param_1,uVar2 & 0xff);
        *(undefined1 *)(param_1 + 5) = 3;
      }
      func_0x0012aadc();
      func_0x000310f4(0x901,0);
      func_0x001152f0(0);
      func_0x0011b900();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

