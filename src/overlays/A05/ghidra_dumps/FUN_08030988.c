// FUN_08030988

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08030988(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(0,1,4,0x1f);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801297ec;
    *(undefined1 *)(iVar1 + 3) = param_2;
    *(undefined2 *)(iVar1 + 0x58) = 0;
    *(undefined2 *)(iVar1 + 0x56) = 0;
    *(undefined2 *)(iVar1 + 0x54) = 0;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

