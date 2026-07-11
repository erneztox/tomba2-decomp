// FUN_0803808c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803808c(int param_1)

{
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
  func_0x00077b38(param_1,0x80140e40,4);
  *(undefined1 *)(param_1 + 0xb) = 0x10;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  if ((DAT_800bf9c0 & 8) == 0) {
    DAT_800bf9c0 = DAT_800bf9c0 | 8;
    *(undefined1 *)(param_1 + 0x5e) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 0x5e) = 1;
  return;
}

