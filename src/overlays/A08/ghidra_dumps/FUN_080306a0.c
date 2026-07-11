// FUN_080306a0

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_080306a0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,1,3,0x10);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 3) = 0x14;
    *(undefined4 *)(iVar1 + 0x1c) = 0x801280d0;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined2 *)(iVar1 + 0x36) = 0;
    *(undefined2 *)(iVar1 + 0x2e) = 0;
    *(undefined2 *)(iVar1 + 0x32) = 0x140;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

