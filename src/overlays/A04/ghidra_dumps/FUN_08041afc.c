// FUN_08041afc

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08041afc(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,1,2,0xcf);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8013a8e4;
    *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(short *)(iVar1 + 0x32) = *(short *)(param_1 + 0x32) + -0x32;
    *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 0x36);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

