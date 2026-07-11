// FUN_08018450

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018450(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x0010d288(param_1,param_2,*(undefined4 *)(param_2 + 200));
  if (iVar1 != 0) {
    _DAT_1f800080 = param_2;
    *(undefined1 *)(param_1 + 0x15c) = 0;
    *(undefined1 *)(param_1 + 0x164) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = func_0x0010d288(param_1,param_2,*(undefined4 *)(param_2 + 0xcc));
  if (iVar1 != 0) {
    _DAT_1f800080 = param_2;
    *(undefined1 *)(param_1 + 0x15c) = 1;
    *(undefined1 *)(param_1 + 0x164) = 1;
    *(undefined1 *)(param_2 + 0x29) = 0x81;
  }
  return;
}

