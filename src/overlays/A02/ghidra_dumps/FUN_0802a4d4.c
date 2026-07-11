// FUN_0802a4d4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802a4d4(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(byte *)(param_1 + 3) < 2) {
      func_0x00122f6c(param_1);
    }
    else if (*(byte *)(param_1 + 3) == 2) {
      if (DAT_800bf816 != '\0') {
        func_0x0012328c(param_1);
        func_0x0007778c(param_1);
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 4) = 3;
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (1 < bVar1) {
    if (3 < bVar1) {
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 0xb) = 0x11;
  *(undefined2 *)(param_1 + 0x7a) = 0x1000;
  *(undefined2 *)(param_1 + 0x7c) = 0x1000;
  *(undefined2 *)(param_1 + 0x7e) = 0x1000;
  *(undefined2 *)(param_1 + 0x80) = 0x32;
  *(undefined2 *)(param_1 + 0x82) = 100;
  *(undefined2 *)(param_1 + 0x84) = 0x50;
  *(undefined2 *)(param_1 + 0x86) = 0x50;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  bVar1 = *(byte *)(param_1 + 3);
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(undefined2 *)(param_1 + 0x2e) = 0x1270;
        *(undefined2 *)(param_1 + 0x32) = 0xf380;
        halt_baddata();
      }
    }
    else if (bVar1 == 2) {
      *(undefined2 *)(param_1 + 0x2e) = 0x1f57;
      *(undefined2 *)(param_1 + 0x32) = 0xf268;
      *(undefined2 *)(param_1 + 0x36) = 0x2b3f;
      func_0x00077b38(param_1,0x80139100,0x17);
      *(undefined2 *)(param_1 + 0x42) = 0xe;
      *(undefined2 *)(param_1 + 0x40) = 0x20;
      *(undefined2 *)(param_1 + 0x44) = 0xe800;
      *(short *)(param_1 + 0x4e) = (short)((0x13f6 - *(short *)(param_1 + 0x2e)) / 0x1e);
      *(short *)(param_1 + 0x50) = (short)((-0xd52 - *(short *)(param_1 + 0x32)) / 0x1e);
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x2e) = 0x1270;
  *(undefined2 *)(param_1 + 0x32) = 0xf380;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

