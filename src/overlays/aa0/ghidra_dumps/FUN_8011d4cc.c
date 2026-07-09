// FUN_8011d4cc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8011d4cc(int param_1)

{
  undefined4 uVar1;
  
  *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
  uVar1 = _DAT_800ecf80;
  *(undefined1 *)(param_1 + 0xb) = 0x10;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_1 + 3)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    func_0x8004766c(param_1);
    func_0x80049760(param_1);
    return;
  }
}

