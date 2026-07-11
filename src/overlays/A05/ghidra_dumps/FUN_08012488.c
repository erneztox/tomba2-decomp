// FUN_08012488

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08012488(int param_1,int param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_2 + 0x5e) != '\0') {
    if ((DAT_800e7ff4 & 8) == 0) {
      iVar3 = func_0x0001f830(param_1,param_2);
      if (iVar3 == 0) {
        return;
      }
      if (DAT_800bfad6 != '\0') {
        return;
      }
      *(char *)(param_1 + 0x2b) = (char)(_DAT_1f80009c >> 4);
      func_0x00022d08(param_1,param_2,1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar4 = (int)(((uint)*(ushort *)(param_2 + 0x2e) - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000)
            >> 0x10;
    iVar3 = (int)(((uint)*(ushort *)(param_2 + 0x36) - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000)
            >> 0x10;
    uVar2 = func_0x00084080(iVar4 * iVar4 + iVar3 * iVar3);
    bVar1 = false;
    if (((int)(uint)uVar2 <= *(short *)(param_1 + 0x80) + 0xdc) &&
       (bVar1 = false,
       (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) +
             *(ushort *)(param_1 + 0x84) + 0x6e & 0xffff) <= *(short *)(param_1 + 0x86) + 0xdc)) {
      _DAT_1f80008c = (int)(short)uVar2;
      _DAT_1f80009c = func_0x00085690(-iVar3,iVar4);
      bVar1 = true;
    }
    if (!bVar1) {
      return;
    }
    func_0x00058304(param_1,1);
    if (DAT_800bfad6 == '\0') {
      *(char *)(param_1 + 0x2b) = (char)(_DAT_1f80009c + 0x800 >> 4);
      func_0x00022d08(param_1,param_2,1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  func_0x0001f830(param_1,param_2);
  return;
}

