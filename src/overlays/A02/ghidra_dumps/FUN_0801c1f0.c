// FUN_0801c1f0

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0801c1f0(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  int iVar3;
  
  iVar10 = 0;
  puVar4 = (ushort *)&DAT_80129bdc;
  do {
    iVar6 = (uint)*(ushort *)(param_1 + 2) - (uint)*puVar4;
    sVar11 = (short)iVar6;
    iVar5 = (uint)puVar4[1] + param_2;
    sVar1 = (short)iVar5;
    iVar9 = iVar5 * 0x10000 >> 0x10;
    if ((int)(iVar6 + iVar5 & 0xffffU) <= iVar9 << 1) {
      iVar3 = (uint)*(ushort *)(param_1 + 10) - (uint)puVar4[2];
      sVar2 = (short)iVar3;
      iVar5 = (uint)puVar4[3] + param_2;
      sVar8 = (short)iVar5;
      iVar7 = iVar5 * 0x10000 >> 0x10;
      if ((int)(iVar3 + iVar5 & 0xffffU) <= iVar7 << 1) {
        if (iVar6 * 0x10000 < 0) {
          sVar11 = -sVar11;
          sVar1 = -sVar1;
        }
        if (iVar3 * 0x10000 < 0) {
          sVar2 = -sVar2;
          sVar8 = -sVar8;
        }
        if (iVar9 - sVar11 < iVar7 - sVar2) {
          *(ushort *)(param_1 + 2) = *puVar4 + sVar1;
        }
        else {
          *(ushort *)(param_1 + 10) = puVar4[2] + sVar8;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    iVar10 = iVar10 + 1;
    puVar4 = puVar4 + 4;
  } while (iVar10 < 3);
  return 0;
}

