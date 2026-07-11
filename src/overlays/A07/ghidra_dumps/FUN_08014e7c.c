// FUN_08014e7c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_08014e7c(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_800bf8dc == -1) {
    if (DAT_800bf816 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_800bf817 == '\f') {
      iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)_DAT_80131c90) * 0x10000) >> 0x10;
      iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)_DAT_80131c94) * 0x10000) >> 0x10;
      uVar2 = func_0x00084080(iVar4 * iVar4 + iVar3 * iVar3);
      bVar1 = false;
      if (((int)(uVar2 & 0xffff) <= *(short *)(param_1 + 0x80) + 0x96) &&
         (bVar1 = false,
         (int)((uint)*(ushort *)(param_1 + 0x84) +
               ((uint)*(ushort *)(param_1 + 0x32) - (uint)_DAT_80131c92) + 0x32 & 0xffff) <=
         *(short *)(param_1 + 0x86) + 100)) {
        if (_DAT_80131c96 == 0) {
          func_0x00085690(-iVar3,iVar4);
          halt_baddata();
        }
        bVar1 = ((_DAT_80131c96 - *(short *)(param_1 + 0x56)) + 0x100U & 0xfff) < 0x201;
      }
      return bVar1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

