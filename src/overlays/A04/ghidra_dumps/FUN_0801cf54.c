// FUN_0801cf54

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0801cf54(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x158);
  uVar1 = 0;
  if (*(char *)(iVar2 + 2) == '\x01') {
    if (0x61 < *(byte *)(iVar2 + 3)) {
      func_0x001133cc(param_1,iVar2,param_2,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x001133cc(param_1,iVar2,param_2,0);
    uVar1 = 0;
    if (((_DAT_800bfe56 & 0x10) == 0) && (uVar1 = 1, (*(ushort *)(param_1 + 0x17e) & 0x40) != 0)) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

