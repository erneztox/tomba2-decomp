// FUN_08020ecc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08020ecc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_800bf844;
  if (param_2 == 1) {
    func_0x0006fc34(param_1,(int)*(short *)(param_1 + 0x60));
  }
  else if (param_2 < 2) {
    if (param_2 == 0) {
      func_0x0011c94c(param_1,0);
    }
  }
  else if (param_2 == 2) {
    iVar2 = func_0x0006fb0c(param_1,(int)*(short *)(param_1 + 0x60));
    if (iVar2 != 0) {
      *(undefined2 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(_DAT_800bf844 + 4) = 2;
      _DAT_800bf844 = iVar2;
      *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(iVar1 + 0x2e);
      *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(iVar1 + 0x32);
      *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(iVar1 + 0x36);
      *(undefined1 *)(iVar2 + 5) = 1;
      *(undefined2 *)(iVar2 + 0x60) = 0;
      *(byte *)(iVar2 + 0x5f) = *(byte *)(iVar2 + 0x5f) | 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

