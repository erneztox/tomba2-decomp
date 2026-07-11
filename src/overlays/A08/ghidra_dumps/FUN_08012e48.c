// FUN_08012e48

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08012e48(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  
  if ((*(byte *)(param_1 + 0x145) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar10 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e);
  iVar5 = iVar10 * 0x10000 >> 0x10;
  iVar9 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36);
  iVar6 = iVar9 * 0x10000 >> 0x10;
  uVar7 = func_0x00084080(iVar5 * iVar5 + iVar6 * iVar6);
  uVar8 = 0xffffffff;
  if ((int)(uVar7 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    uVar1 = *(ushort *)(param_2 + 0x84);
    uVar2 = *(ushort *)(param_1 + 0x84);
    iVar5 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
    uVar3 = *(ushort *)(param_1 + 0x86);
    uVar4 = *(ushort *)(param_2 + 0x86);
    if ((int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) <
        (int)(iVar5 + (uint)uVar1 + (uint)uVar2 & 0xffff)) {
      halt_baddata();
    }
    if (iVar5 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_1f80009c = func_0x00085690(-(int)(short)iVar9,(int)(short)iVar10);
    *(undefined1 *)(param_2 + 0x29) = 1;
    *(int *)(param_1 + 0x30) =
         ((int)*(short *)(param_2 + 0x32) +
         ((int)((((uint)uVar4 - (uint)uVar1) + ((uint)uVar3 - (uint)uVar2)) * 0x10000) >> 0x10)) *
         0x10000;
    func_0x00022c78();
    uVar8 = 2;
  }
  return uVar8;
}

