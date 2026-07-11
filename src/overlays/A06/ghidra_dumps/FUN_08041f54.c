// FUN_08041f54

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08041f54(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,3,3,0x3f);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8012e194;
    *(undefined1 *)(iVar1 + 3) = 2;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
    if (DAT_800bf8d5 != -1) {
      func_0x0004d604(0x31,1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

