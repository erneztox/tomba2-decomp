// FUN_080136dc

/* WARNING: Control flow encountered bad instruction data */

void FUN_080136dc(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  iVar10 = *(int *)(param_1 + 0x60);
  iVar11 = func_0x000310f4(0x400,0xffffffd8);
  if ((iVar11 != 0) && (*(char *)(param_1 + 4) == '\x01')) {
    sVar1 = *(short *)(param_1 + 0xa2);
    sVar2 = *(short *)(param_1 + 0xa8);
    sVar3 = *(short *)(param_1 + 0x32);
    sVar4 = *(short *)(param_1 + 0x36);
    sVar5 = *(short *)(param_1 + 0x9e);
    sVar6 = *(short *)(param_1 + 0xa4);
    sVar7 = *(short *)(param_1 + 0xa0);
    sVar8 = *(short *)(param_1 + 0xa6);
    *(short *)(iVar11 + 0x2c) =
         *(short *)(param_1 + 0x2e) + (short)(*(short *)(param_1 + 0x9c) * param_2 >> 0xc) +
         (short)(*(short *)(param_1 + 0x98) * -0x6e >> 0xc) +
         (short)(*(short *)(param_1 + 0x9a) * 3 >> 6);
    *(short *)(iVar11 + 0x2e) =
         sVar3 + (short)(sVar1 * param_2 >> 0xc) + (short)(sVar5 * -0x6e >> 0xc) +
         (short)(sVar7 * 3 >> 6);
    *(short *)(iVar11 + 0x30) =
         sVar4 + (short)(sVar2 * param_2 >> 0xc) + (short)(sVar6 * -0x6e >> 0xc) +
         (short)(sVar8 * 3 >> 6);
    iVar12 = func_0x0009a450();
    iVar15 = (iVar12 >> 8) + 0x300;
    iVar12 = func_0x0009a450();
    iVar13 = func_0x0009a450();
    if (param_2 < 0) {
      func_0x0009a450();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar14 = func_0x0009a450();
    iVar14 = (iVar14 >> 8) + -0x40;
    *(short *)(iVar11 + 0x34) =
         (short)(((int)((uint)*(ushort *)(iVar10 + 0x14) << 0x10) >> 0x14) * iVar15 >> 0xc);
    *(short *)(iVar11 + 0x36) =
         (short)(((int)((uint)*(ushort *)(iVar10 + 0x1a) << 0x10) >> 0x14) * iVar15 >> 0xc);
    uVar9 = *(ushort *)(iVar10 + 0x20);
    *(short *)(iVar11 + 0x36) =
         *(short *)(iVar11 + 0x36) - (short)(((iVar12 * iVar13 >> 0x10) + 0x3e00) * 0xd >> 0xc);
    *(short *)(iVar11 + 0x38) = (short)(((int)((uint)uVar9 << 0x10) >> 0x14) * iVar15 >> 0xc);
    *(short *)(iVar11 + 0x34) =
         *(short *)(iVar11 + 0x34) +
         (short)(((int)((uint)*(ushort *)(iVar10 + 0x10) << 0x10) >> 0x13) * iVar14 >> 0xc);
    *(short *)(iVar11 + 0x36) =
         *(short *)(iVar11 + 0x36) +
         (short)(((int)((uint)*(ushort *)(iVar10 + 0x16) << 0x10) >> 0x13) * iVar14 >> 0xc);
    *(short *)(iVar11 + 0x38) =
         *(short *)(iVar11 + 0x38) +
         (short)(((int)((uint)*(ushort *)(iVar10 + 0x1c) << 0x10) >> 0x13) * iVar14 >> 0xc);
  }
  return;
}

