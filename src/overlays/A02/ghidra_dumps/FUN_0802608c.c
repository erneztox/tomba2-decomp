// FUN_0802608c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0802608c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x0006fde8(param_1,2);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x14) = iVar1;
    *(undefined1 *)(iVar1 + 5) = 1;
    *(undefined2 *)(iVar1 + 0x2e) = 0xd34;
    *(undefined2 *)(iVar1 + 0x32) = 0xf85f;
    *(undefined2 *)(iVar1 + 0x36) = 0x17a2;
    *(undefined2 *)(iVar1 + 0x60) = 0;
    iVar2 = func_0x0006fb0c(param_1,0x4b);
    if (iVar2 == 0) {
      *(undefined1 *)(iVar1 + 4) = 3;
      *(undefined4 *)(param_1 + 0x14) = 0;
      return 0;
    }
    _DAT_800bf844 = iVar2;
    *(undefined1 *)(iVar2 + 5) = 1;
    *(undefined2 *)(iVar2 + 0x2e) = 0xd34;
    *(undefined2 *)(iVar2 + 0x32) = 0xf85f;
    *(undefined2 *)(iVar2 + 0x36) = 0x17a2;
    *(undefined2 *)(iVar2 + 0x54) = 0x400;
    *(undefined2 *)(iVar2 + 0x60) = 0;
    *(byte *)(iVar2 + 0x5f) = *(byte *)(iVar2 + 0x5f) | 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

