// FUN_080377a0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080377a0(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00124a48();
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  func_0x00040cdc(param_1,0x80148e68,0x800a3d40);
  func_0x00041718(param_1,1,0);
  *(undefined2 *)(param_1 + 0x56) = 0x140;
  if (DAT_800bf8f8 == -1) {
    param_1[0x5e] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_800bf8f8 == '\0') {
    param_1[0x5e] = 0;
  }
  else {
    if (DAT_800bfad7 == '\0') {
      param_1[0x5e] = 1;
      *param_1 = 2;
      *(undefined2 *)(param_1 + 0x80) = 0xae;
      *(undefined2 *)(param_1 + 0x82) = 0x15c;
      *(undefined2 *)(param_1 + 0x84) = 0x96;
      *(undefined2 *)(param_1 + 0x86) = 300;
      return;
    }
    param_1[0x5e] = 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

