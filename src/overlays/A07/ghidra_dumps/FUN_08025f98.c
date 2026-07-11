// FUN_08025f98

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08025f98(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xf;
  if ((*(byte *)(param_1 + 3) & 0x20) != 0) {
    uVar2 = 0x10;
  }
  if ((_DAT_800bfe56 & 0x80) != 0) {
    if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
      iVar1 = func_0x000519e0(param_1,uVar2,_DAT_800ecfb0,0x80131690);
      if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      iVar1 = func_0x000519e0(param_1,uVar2,_DAT_800ecfb4,0x80131780);
      if (iVar1 != 0) {
        return 0;
      }
    }
    return 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

