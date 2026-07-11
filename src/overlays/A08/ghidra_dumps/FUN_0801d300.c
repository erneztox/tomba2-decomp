// FUN_0801d300

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0801d300(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,1,5,3);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80115d10;
    *(undefined1 *)(iVar1 + 3) = 0;
    *(undefined1 *)(iVar1 + 5) = 1;
    *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(*(int *)(param_1 + 0xd4) + 0x2c);
    *(undefined2 *)(iVar1 + 0x32) = *(undefined2 *)(*(int *)(param_1 + 0xd4) + 0x30);
    *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(*(int *)(param_1 + 0xd4) + 0x34);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

