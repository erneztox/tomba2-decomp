// FUN_08012904

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08012904(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = func_0x0001f40c(param_1,param_2,1);
  if (iVar2 < 0) {
    if (((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) && ((*(ushort *)(param_2 + 0x62) & 8) != 0)) {
      iVar4 = *(int *)(param_2 + 0xfc);
      iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(iVar4 + 0x2c)) * 0x10000)
              >> 0x10;
      iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(iVar4 + 0x34)) * 0x10000)
              >> 0x10;
      uVar3 = func_0x00084080(iVar5 * iVar5 + iVar2 * iVar2);
      bVar1 = false;
      if (((int)(uVar3 & 0xffff) <= *(short *)(param_1 + 0x80) + 100) &&
         (bVar1 = false,
         (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(iVar4 + 0x30)) +
               *(ushort *)(param_1 + 0x84) + 0x32 & 0xffff) <= *(short *)(param_1 + 0x86) + 100)) {
        _DAT_1f80009c = func_0x00085690(-iVar2,iVar5);
        bVar1 = true;
      }
      if ((bVar1) && (DAT_800bfad5 == '\0')) {
        *(char *)(param_1 + 0x2b) = (char)(_DAT_1f80009c >> 4);
        func_0x00022d08(param_1,param_2,1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  else {
    func_0x0001ff7c(param_1,param_2,iVar2,1);
  }
  return;
}

