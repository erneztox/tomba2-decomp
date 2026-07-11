// FUN_080415ac

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080415ac(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 auStack_20 [2];
  
  iVar2 = param_1 + 0x50;
  uVar1 = 0;
  auStack_20[0] = _DAT_8010a2a4;
  do {
    func_0x000318a0(iVar2,auStack_20,param_1 + 0x48);
    if ((uVar1 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0003f698(*(undefined4 *)(param_1 + 0x3c),_DAT_800ed8c8,0);
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 0x10;
  } while ((int)uVar1 < 3);
  return;
}

