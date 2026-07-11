// FUN_08012fb4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08012fb4(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  if ((*(byte *)(param_1 + 0x145) & 1) == 0) {
    iVar9 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
    iVar5 = iVar9 * 0x10000 >> 0x10;
    iVar8 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
    iVar6 = iVar8 * 0x10000 >> 0x10;
    uVar7 = func_0x00084080(iVar5 * iVar5 + iVar6 * iVar6);
    if ((int)(uVar7 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80))
    {
      uVar1 = *(ushort *)(param_2 + 0x84);
      uVar2 = *(ushort *)(param_1 + 0x84);
      iVar5 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
      uVar3 = *(ushort *)(param_1 + 0x86);
      uVar4 = *(ushort *)(param_2 + 0x86);
      if ((int)(iVar5 + (uint)uVar1 + (uint)uVar2 & 0xffff) <=
          (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86)) {
        if (iVar5 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        _DAT_1f80009c = func_0x00085690(-(int)(short)iVar8,(int)(short)iVar9);
        *(undefined1 *)(param_2 + 0x29) = 1;
        *(int *)(param_1 + 0x30) =
             ((int)*(short *)(param_3 + 0x30) +
             ((int)((((uint)uVar4 - (uint)uVar1) + ((uint)uVar3 - (uint)uVar2)) * 0x10000) >> 0x10))
             * 0x10000;
        func_0x00022c78();
      }
    }
  }
  return;
}

