// FUN_080324b0

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_080324b0(void)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(0,1,5,3);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 3) = 1;
    *(undefined4 *)(iVar1 + 0x1c) = 0x8012b1b4;
    *(undefined4 *)(iVar1 + 0x10) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

