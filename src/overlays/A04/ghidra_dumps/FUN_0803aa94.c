// FUN_0803aa94

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0803aa94(undefined4 param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = func_0x0007a980(3,2,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801337dc;
    *(undefined1 *)(iVar1 + 2) = 0x28;
    *(byte *)(iVar1 + 3) = param_2 | 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

