// FUN_0801b2f8

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801b2f8(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    iVar2 = func_0x00113720(param_1);
    if (iVar2 != 0) {
      func_0x001138d0(param_1,*(undefined1 *)(param_1 + 3));
    }
    func_0x00113c20(1);
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
      func_0x001138d0(param_1,0);
      func_0x00113c20(0);
      func_0x0012e2a0();
      func_0x0004d8d8(0x16,0);
      if ((DAT_800bf816 != '\0') && (DAT_800bf817 == '\f')) {
        *(undefined1 *)(param_1 + 3) = 0xd;
        func_0x001138d0(param_1,0xd);
        *(undefined1 *)(param_1 + 5) = 3;
        *(undefined1 *)(param_1 + 7) = 2;
      }
      func_0x000752b4(2);
      func_0x00075d24(0x11ffc);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

