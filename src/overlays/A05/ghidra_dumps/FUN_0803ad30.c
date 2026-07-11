// FUN_0803ad30

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803ad30(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x00133a3c(param_1);
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
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
      func_0x00077b38(param_1,0x80140e40,*(byte *)(param_1 + 3) + 0x14);
      *(undefined1 *)(param_1 + 0xb) = 0x11;
      *(undefined2 *)(param_1 + 0x7e) = 0x1800;
      *(undefined2 *)(param_1 + 0x7c) = 0x1800;
      *(undefined2 *)(param_1 + 0x7a) = 0x1800;
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined2 *)(param_1 + 0x5c) = 0;
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined2 *)(param_1 + 0x5a) = 0;
      *(undefined1 *)(param_1 + 8) = 10;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

