// FUN_0801da4c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801da4c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x00075d24(0x1fff);
    iVar2 = func_0x00026ad0(param_1);
    if (iVar2 != 0) {
      func_0x0011635c(param_1,*(undefined1 *)(param_1 + 3));
    }
    func_0x00116884(1);
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
      func_0x0011635c(param_1,0);
      func_0x000752b4(0);
      if ((DAT_800bf816 != '\0') && (DAT_800bf817 == '\x01')) {
        *(undefined1 *)(param_1 + 3) = 2;
        func_0x0011635c(param_1,2);
        *(undefined1 *)(param_1 + 5) = 3;
        *(undefined1 *)(param_1 + 7) = 2;
      }
      func_0x00116884(0);
      func_0x00117e18();
      func_0x000310f4(0x500,0);
      func_0x000752b4(0);
      uVar3 = 6;
      if (DAT_800bf871 == '\a') {
        uVar3 = 0x1e;
      }
      func_0x0004d8d8(uVar3,0);
      func_0x0013cf70();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

