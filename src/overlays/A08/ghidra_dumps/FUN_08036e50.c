// FUN_08036e50

/* WARNING: Control flow encountered bad instruction data */

void FUN_08036e50(int param_1)

{
  undefined1 uVar1;
  
  func_0x00040cdc(param_1,0x80148e68,0x800a3d40);
  *(undefined2 *)(param_1 + 0x56) = 0x800;
  if (DAT_800bf933 == 0xff) {
    uVar1 = 3;
    if (DAT_800bf8f8 == -1) {
      uVar1 = 4;
    }
    *(undefined1 *)(param_1 + 0x5e) = uVar1;
  }
  else {
    if (DAT_800bfa31 < 10) {
      if ((DAT_800bf933 & 0x80) != 0) {
        *(undefined1 *)(param_1 + 0x5e) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 0x5e) = 0;
      func_0x00041718(param_1,0,0);
      *(undefined2 *)(param_1 + 0x80) = 0xa5;
      *(undefined2 *)(param_1 + 0x82) = 0x14a;
      *(undefined2 *)(param_1 + 0x84) = 0x96;
      *(undefined2 *)(param_1 + 0x86) = 0x1c2;
      if (9 < DAT_800bfa31) {
        *(undefined2 *)(param_1 + 0x2e) = 0x19a0;
        *(undefined2 *)(param_1 + 0x32) = 0xeaa7;
        *(undefined2 *)(param_1 + 0x36) = 0x2d50;
      }
      return;
    }
    *(undefined1 *)(param_1 + 0x5e) = 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

