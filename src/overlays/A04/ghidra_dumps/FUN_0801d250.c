// FUN_0801d250

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0801d250(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x158);
  uVar1 = 0;
  if ((*(char *)(iVar2 + 0xc) == '\x04') && (uVar1 = 0, *(char *)(iVar2 + 2) == '\b')) {
    iVar3 = *(int *)(param_1 + 0x10);
    *(undefined1 *)(iVar2 + 0x29) = 1;
    *(short *)(iVar2 + 0x60) = -*(short *)(param_1 + 0x152);
    func_0x000635d4(param_1,1);
    func_0x00076d68(param_1);
    if ((*(char *)(param_1 + 0x169) == '\0') && ((_DAT_800ecf54 & (_DAT_1f800172 | 0x50)) != 0)) {
      *(undefined2 *)(param_1 + 0x58) = 0;
      func_0x00115534(param_1,iVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00115534(param_1,iVar2);
    iVar2 = (int)*(short *)(iVar3 + 0xc);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    uVar1 = 0;
    if (0x200 < iVar2) {
      *(undefined2 *)(param_1 + 0x58) = 0;
      uVar1 = 0x40;
    }
  }
  return uVar1;
}

