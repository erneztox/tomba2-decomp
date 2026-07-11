// FUN_0801c398

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0801c398(void)

{
  int iVar1;
  
  iVar1 = func_0x0007a980(0,3,1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80115174;
    *(undefined1 *)(iVar1 + 2) = 1;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

