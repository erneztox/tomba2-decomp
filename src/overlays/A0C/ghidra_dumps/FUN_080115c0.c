// FUN_080115c0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080115c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  uint uVar8;
  
  if (600 < (ushort)((*(short *)(param_1 + 0x14c) - *(short *)(param_3 + 0x2c)) + 600U)) {
    halt_baddata();
  }
  iVar1 = (uint)*(ushort *)(param_1 + 0x150) - (uint)*(ushort *)(param_3 + 0x34);
  uVar2 = 0;
  if (((int)((uint)*(ushort *)(param_2 + 0x80) + iVar1 & 0xffff) <= (int)*(short *)(param_2 + 0x82))
     && (uVar2 = 0,
        (int)((uint)*(ushort *)(param_2 + 0x80) +
              ((uint)*(ushort *)(param_1 + 0x14e) - (uint)*(ushort *)(param_3 + 0x30)) & 0xffff) <=
        (int)*(short *)(param_2 + 0x82))) {
    iVar3 = func_0x00083f50((int)*(short *)(param_3 + 0xc));
    uVar8 = (uint)(iVar3 * *(short *)(param_2 + 0x80)) >> 0xc;
    if (*(char *)(param_2 + 3) != '\0') {
      func_0x00083e80((int)*(short *)(param_3 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = func_0x00083e80((int)*(short *)(param_3 + 0xc));
    uVar5 = (uint)(iVar3 * *(short *)(param_2 + 0x80)) >> 0xc;
    uVar6 = uVar8;
    if ((int)(uVar8 << 0x10) < 0) {
      uVar6 = -uVar8;
    }
    iVar3 = uVar5 << 0x10;
    if (iVar3 < 0) {
      iVar3 = uVar5 * -0x10000;
    }
    sVar7 = (short)iVar1;
    if (iVar3 == 0) {
      if (iVar1 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar2 = 0;
      if (iVar1 * 0x10000 <= (int)(uVar6 << 0x10)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (iVar1 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar2 = 0;
      if (iVar1 * 0x10000 <= (int)(uVar6 << 0x10)) {
        iVar3 = (int)sVar7 * (int)(short)uVar5;
        iVar4 = (int)(short)uVar8;
        if (iVar4 == 0) {
          trap(0x1c00);
        }
        if ((iVar4 == -1) && (iVar3 == -0x80000000)) {
          trap(0x1800);
        }
        uVar2 = 0;
        if ((ushort)((*(short *)(param_1 + 0x14e) -
                     (*(short *)(param_3 + 0x30) - (short)(iVar3 / iVar4))) + 0x40U) < 0x81) {
          if (*(char *)(param_2 + 3) == '\0') {
            iVar1 = -iVar1;
          }
          if (0x54 < (ushort)((short)uVar6 - sVar7)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (iVar1 << 0x10 < 0) {
            if ((*(byte *)(param_1 + 0x147) & 1) != 0) {
              halt_baddata();
            }
          }
          else if ((*(byte *)(param_1 + 0x147) & 1) == 0) {
            return 0;
          }
          *(undefined1 *)(param_2 + 0x29) = 1;
          *(short *)(param_2 + 0x60) = (short)iVar1;
          *(undefined2 *)(param_1 + 0x156) = 0xffc0;
          if (0 < iVar1 << 0x10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(short *)(param_1 + 0x152) = *(short *)(param_2 + 0x80) + -0x1e;
          uVar2 = 1;
          _DAT_1f800080 = param_2;
          _DAT_1f800084 = param_3;
          *(undefined1 *)(param_1 + 0x164) = 8;
          DAT_1f800182 = 0;
        }
      }
    }
  }
  return uVar2;
}

