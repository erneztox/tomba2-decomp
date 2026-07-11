// FUN_080181e8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_080181e8(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0x32;
  if ((*(byte *)(param_1 + 0xd) & 0x10) != 0) {
    iVar8 = 0x5a;
  }
  if ((*(short *)(param_1 + 0x32) <= *(short *)(param_3 + 0x30)) || (_DAT_1f800094 == 0)) {
    if ((int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) + 300 +
              (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff) <=
        (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) + 600) {
      uVar1 = *(ushort *)(param_1 + 0x2e);
      uVar2 = *(ushort *)(param_3 + 0x2c);
      if ((iVar8 + ((uint)uVar1 - (uint)uVar2) + 0x8c & 0xffff) <= iVar8 * 2 + 0x118U) {
        iVar4 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
        if ((int)(iVar4 + iVar8 + (uint)*(ushort *)(param_2 + 0x80) & 0xffff) <=
            iVar8 * 2 + (int)*(short *)(param_2 + 0x82)) {
          iVar8 = iVar4 * 0x10000 >> 0x10;
          if (iVar8 < 0) {
            iVar8 = -iVar8;
          }
          if (iVar8 < 0x141) {
            sVar6 = 0x8c;
            if (((short)uVar2 + 0x8c < (int)(short)uVar1) ||
               (sVar6 = -0x8c, (int)(short)uVar1 < (short)uVar2 + -0x8c)) {
              *(ushort *)(param_1 + 0x2e) = uVar2 + sVar6;
            }
            *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -10;
            iVar8 = func_0x00083e80(0x199);
            *(short *)(param_1 + 0x32) = (short)(iVar8 * 10 >> 0xc) + *(short *)(param_1 + 0x32) + 4
            ;
            uVar1 = *(ushort *)(param_3 + 0x34);
            uVar2 = *(ushort *)(param_2 + 0x80);
            uVar3 = *(ushort *)(param_1 + 0x36);
            iVar8 = func_0x00083e80(0x199);
            iVar8 = iVar8 * ((int)(((uint)uVar3 - ((uint)uVar1 - (uint)uVar2)) * 0x10000) >> 0x10)
                    >> 0xc;
            uVar5 = (uint)((int)*(short *)(param_1 + 0x32) <
                          ((int)*(short *)(param_3 + 0x30) - ((short)iVar8 + -0xfa)) -
                          (int)*(short *)(param_1 + 0x84));
            if (uVar5 != 0) {
              return uVar5;
            }
            func_0x00022c78(param_1);
            uVar5 = iVar8 - 0xfa;
            *(short *)(param_1 + 0x32) =
                 (*(short *)(param_3 + 0x30) - (short)uVar5) - *(short *)(param_1 + 0x84);
            return uVar5;
          }
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    return 0;
  }
  iVar7 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
  iVar4 = iVar7 * 0x10000 >> 0x10;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if (0x140 < iVar4) {
    halt_baddata();
  }
  iVar4 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
  if (iVar8 * 2 + 0x118U < (iVar4 + iVar8 + 0x8c & 0xffffU)) {
    halt_baddata();
  }
  if (iVar8 * 2 + 0x140U < (iVar7 + 0x140U & 0xffff)) {
    halt_baddata();
  }
  if (iVar4 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (-1 < iVar7 * 0x10000) {
    sVar6 = (short)(iVar8 + 0x8c);
    if ((int)(short)iVar8 - (int)(short)iVar7 <= (int)sVar6 - (int)(short)iVar4) {
      *(short *)(param_1 + 0x36) = *(short *)(param_3 + 0x34) + (short)iVar8;
      halt_baddata();
    }
    *(short *)(param_1 + 0x2e) = *(short *)(param_3 + 0x2c) + sVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

