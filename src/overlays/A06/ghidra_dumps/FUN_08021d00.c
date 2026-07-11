// FUN_08021d00

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08021d00(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(0,0,3,0x18);
  if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0x8011ab30;
  *(undefined1 *)(iVar1 + 3) = 0;
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 0x3c) = _DAT_800ecf80;
  func_0x00077b38(iVar1,0x8014cef0,7);
  *(undefined1 *)(iVar1 + 0xd) = 0;
  *(undefined2 *)(iVar1 + 0x5c) = 0;
  *(undefined2 *)(iVar1 + 0x5a) = 0;
  *(undefined1 *)(iVar1 + 0x47) = 0;
  *(undefined1 *)(iVar1 + 8) = 0;
  return;
}

