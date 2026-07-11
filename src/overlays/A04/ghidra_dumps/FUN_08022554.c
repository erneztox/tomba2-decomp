// FUN_08022554

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08022554(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,1,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8011a9e4;
    *(undefined1 *)(iVar1 + 3) = 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

