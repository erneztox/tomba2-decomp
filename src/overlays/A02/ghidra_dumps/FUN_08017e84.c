// FUN_08017e84

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_08017e84(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0x32;
  if ((*(byte *)(param_1 + 0xd) & 0x10) != 0) {
    iVar7 = 0x5a;
  }
  if (_DAT_1f800094 == 0) {
    uVar6 = 0;
    if ((int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) + 300 +
              (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff) <=
        (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) + 600) {
      uVar6 = 0;
      if ((iVar7 + ((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c)) + 0xfa &
          0xffff) <= iVar7 * 2 + 0x334U) {
        uVar1 = *(ushort *)(param_1 + 0x36);
        uVar2 = *(ushort *)(param_3 + 0x34);
        if (iVar7 * 2 + 0x118U < (iVar7 + ((uint)uVar1 - (uint)uVar2) + 0x8c & 0xffff)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        sVar4 = 0x8c;
        if (((short)uVar2 + 0x8c < (int)(short)uVar1) ||
           (sVar4 = -0x8c, (int)(short)uVar1 < (short)uVar2 + -0x8c)) {
          *(ushort *)(param_1 + 0x36) = uVar2 + sVar4;
        }
        uVar6 = (uint)((int)(((uint)*(ushort *)(param_1 + 0x2e) -
                             ((uint)*(ushort *)(param_3 + 0x2c) - (uint)*(ushort *)(param_2 + 0x80))
                             ) * 0x10000) >> 0x10 < 0x104);
        if (uVar6 == 0) {
          *(ushort *)(param_1 + 0x2e) = *(ushort *)(param_1 + 0x2e) - 10;
          iVar7 = func_0x00083e80(0x155);
          *(short *)(param_1 + 0x32) = (short)(iVar7 * 10 >> 0xc) + *(short *)(param_1 + 0x32) + 4;
          uVar1 = *(ushort *)(param_3 + 0x2c);
          uVar2 = *(ushort *)(param_2 + 0x80);
          uVar3 = *(ushort *)(param_1 + 0x2e);
          iVar7 = func_0x00083e80(0x155);
          iVar8 = iVar7 * ((int)(((uint)uVar3 - ((uint)uVar1 - (uint)uVar2)) * 0x10000) >> 0x10) >>
                  0xc;
          iVar7 = ((int)*(short *)(param_3 + 0x30) - ((short)iVar8 + -0xa4)) -
                  (int)(short)*(ushort *)(param_1 + 0x84);
          if (iVar7 <= (int)((((uint)*(ushort *)(*(int *)(param_2 + 0xd0) + 0x30) -
                              (uint)*(ushort *)(param_2 + 0x84)) - (uint)*(ushort *)(param_1 + 0x84)
                             ) * 0x10000) >> 0x10) {
            func_0x00022c78(param_1);
            *(short *)(param_1 + 0x32) =
                 (*(short *)(*(int *)(param_2 + 0xd0) + 0x30) - *(short *)(param_2 + 0x84)) -
                 *(short *)(param_1 + 0x84);
            halt_baddata();
          }
          uVar6 = (uint)(*(short *)(param_1 + 0x32) < iVar7);
          if (uVar6 == 0) {
            func_0x00022c78(param_1);
            uVar6 = iVar8 - 0xa4;
            *(short *)(param_1 + 0x32) =
                 (*(short *)(param_3 + 0x30) - (short)uVar6) - *(short *)(param_1 + 0x84);
          }
        }
      }
    }
    return uVar6;
  }
  iVar8 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
  if (iVar7 * 2 + 0x230U < (iVar8 + iVar7 + 0x118 & 0xffffU)) {
    halt_baddata();
  }
  iVar5 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
  if (iVar7 * 2 + 0x118U < (iVar5 + iVar7 + 0x8c & 0xffffU)) {
    halt_baddata();
  }
  if (iVar8 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (-1 < iVar5 * 0x10000) {
    sVar4 = (short)iVar7;
    if ((int)(short)(sVar4 + 0x8c) - (int)(short)iVar5 <= (int)sVar4 - (int)(short)iVar8) {
      *(short *)(param_1 + 0x36) = *(short *)(param_3 + 0x34) + sVar4 + 0x8c;
      halt_baddata();
    }
    *(short *)(param_1 + 0x2e) = *(short *)(param_3 + 0x2c) + sVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

