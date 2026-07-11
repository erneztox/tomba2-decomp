// FUN_08015440

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08015440(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = func_0x00022f04();
  if (iVar2 == 0) {
    iVar2 = 8;
    if (*(char *)(param_2 + 0x5e) != '\0') {
      do {
        if ((int)(uint)*(byte *)(param_2 + 8) <= iVar2) {
          return;
        }
        iVar5 = *(int *)(param_2 + iVar2 * 4 + 0xc0);
        iVar6 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(iVar5 + 0x2c)) *
                     0x10000) >> 0x10;
        iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(iVar5 + 0x34)) *
                     0x10000) >> 0x10;
        uVar3 = func_0x00084080(iVar6 * iVar6 + iVar4 * iVar4);
        bVar1 = false;
        if (((int)(uVar3 & 0xffff) <= *(short *)(param_1 + 0x80) + 100) &&
           (bVar1 = false,
           (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(iVar5 + 0x30)) +
                 *(ushort *)(param_1 + 0x84) + 0x28 & 0xffff) <= *(short *)(param_1 + 0x86) + 0x50))
        {
          _DAT_1f80009c = func_0x00085690(-iVar4,iVar6);
          bVar1 = true;
        }
        iVar2 = iVar2 + 1;
        if (bVar1) goto LAB_0010e524;
      } while (iVar2 < 0x10);
    }
    return;
  }
LAB_0010e524:
  *(char *)(param_1 + 0x2b) = (char)(_DAT_1f80009c >> 4);
  func_0x00022d08(param_1,param_2,1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

