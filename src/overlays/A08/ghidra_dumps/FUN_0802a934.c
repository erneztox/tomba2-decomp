// FUN_0802a934

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0802a934(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = func_0x0007a980(1,4,0);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 2) = 0x54;
    *(undefined1 *)(iVar1 + 3) = param_2;
    *(undefined4 *)(iVar1 + 0x1c) = 0x80123288;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

