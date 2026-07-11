// FUN_0801ecd4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ecd4(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x2b) != '\0') {
      if (*(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) / 0x140 != 0) {
        *(undefined2 *)(param_1 + 0x7c) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = *(short *)(param_1 + 0x7c) + 0x1e0U & 0xfff;
    *(ushort *)(param_1 + 0x7c) = uVar2;
    if ((uVar2 < 0x1e0) && (*(short *)(param_1 + 0x7e) != 0)) {
      *(short *)(param_1 + 0x7e) = *(short *)(param_1 + 0x7e) + -8;
    }
    if (*(char *)(param_1 + 5) == '\0') {
      if (*(char *)(param_1 + 0x29) != '\0') {
        *(undefined1 *)(param_1 + 5) = 1;
        uVar4 = *(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) / 0x140;
        if (uVar4 != 0) {
          uVar3 = (undefined2)(uVar4 << 3);
          if (4 < uVar4) {
            uVar3 = 0x20;
          }
          *(undefined2 *)(param_1 + 0x7c) = 0;
          *(undefined2 *)(param_1 + 0x7e) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 0x29) == '\0') {
        *(undefined1 *)(param_1 + 5) = 0;
      }
    }
    *(short *)(param_1 + 0x56) = -_DAT_1f8000f2;
    func_0x000517f8(param_1);
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077ebc(param_1);
    *(undefined1 *)(param_1 + 0x2b) = 0;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      func_0x00117a64(param_1);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

