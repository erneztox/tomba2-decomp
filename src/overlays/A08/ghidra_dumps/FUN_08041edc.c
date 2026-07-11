// FUN_08041edc

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08041edc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,2,3,0x10);
  if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0x801280d0;
  *(undefined1 *)(iVar1 + 3) = 0x1a;
  *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  func_0x0004d604(0x50,1);
  return 1;
}

