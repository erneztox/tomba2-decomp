// FUN_08022fe8

/* WARNING: Control flow encountered bad instruction data */

void FUN_08022fe8(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = func_0x0007a980(1,4,0);
  if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0x8011be48;
  *(undefined1 *)(iVar1 + 2) = 0x28;
  *(undefined1 *)(iVar1 + 3) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  return;
}

