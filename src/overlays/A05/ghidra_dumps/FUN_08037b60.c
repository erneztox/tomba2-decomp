// FUN_08037b60

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08037b60(int param_1)

{
  int iVar1;
  
  if ((_DAT_800bfe56 & 0x20) != 0) {
    *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_800bf8cd == -1) {
    iVar1 = func_0x00072ddc(0,1,3,0x10);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x1c) = 0x801300f4;
      *(undefined1 *)(iVar1 + 3) = 5;
      *(undefined1 *)(iVar1 + 0x5e) = 1;
      *(int *)(iVar1 + 0x10) = param_1;
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
    }
    *(undefined1 *)(param_1 + 5) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 6) = 0;
  DAT_800bf9eb = 0;
  iVar1 = func_0x00051b70(param_1,0xc,0x27);
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x56) = 0xfe89;
  }
  return;
}

