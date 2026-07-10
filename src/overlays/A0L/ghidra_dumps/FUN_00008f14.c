// FUN_00008f14

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00008f14(int param_1)

{
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
  if (*(char *)(param_1 + 0x5e) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00077b38(param_1,0x8011a6d4,2);
  *(undefined1 *)(param_1 + 0xb) = 0x10;
  *(undefined2 *)(param_1 + 0x2e) = 0x640;
  *(undefined2 *)(param_1 + 0x32) = 0xfca4;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined2 *)(param_1 + 0x36) = 0x960;
  return;
}

