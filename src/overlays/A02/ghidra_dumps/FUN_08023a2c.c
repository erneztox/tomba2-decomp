// FUN_08023a2c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08023a2c(int param_1)

{
  undefined1 uVar1;
  
  func_0x00051b04(*(undefined4 *)(param_1 + 0xd0),0x13,0x10);
  func_0x00051b04(*(undefined4 *)(param_1 + 0xdc),0x13,0x11);
  func_0x00040cdc(param_1,0x80139240,0x8012a3c0);
  func_0x00041718(param_1,0x2d,0);
  *(undefined2 *)(param_1 + 0x56) = 0xa00;
  func_0x00126c18(param_1);
  if (DAT_800bf91c == '\0') {
    *(undefined1 *)(param_1 + 0x5e) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = 2;
  if (DAT_800bfafd == '\0') {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x5e) = uVar1;
  return;
}

