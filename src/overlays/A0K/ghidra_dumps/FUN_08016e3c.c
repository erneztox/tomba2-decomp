// FUN_08016e3c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08016e3c(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(ushort *)(param_1 + 6);
  uVar3 = (uint)_DAT_1f8000c2;
  iVar5 = (int)(((uint)*(ushort *)(param_1 + 4) - (uint)_DAT_1f8000c0) * 0x10000) >> 0x10;
  iVar4 = (int)(((uint)*(ushort *)(param_1 + 8) - (uint)_DAT_1f8000c4) * 0x10000) >> 0x10;
  iVar2 = func_0x000781e0(iVar5,iVar4);
  if ((iVar2 < 0x1201) && (0x1ff < iVar2)) {
    iVar2 = (int)((uVar1 - uVar3) * 0x10000) >> 0x10;
    func_0x00077fb0(iVar5 * iVar5 + iVar2 * iVar2 + iVar4 * iVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

