// FUN_8012def4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_8012def4(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 in_zero;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *in_t1;
  int iVar7;
  uint *in_t5;
  int unaff_s0;
  
  iVar3 = func_0x8018cdc4();
  iVar3 = *(int *)(iVar3 + -0xabc);
  if (param_3 != 0) {
    iVar7 = unaff_s0 + 0x10;
    do {
      iVar6 = param_3 + -1;
      setCopReg(2,in_zero,in_t5[5]);
      setCopReg(2,0x800,in_t5[6]);
      setCopReg(2,0x1800,in_t5[6] >> 0x10);
      setCopReg(2,param_3,in_t5[7]);
      setCopReg(2,unaff_s0,in_t5[8]);
      setCopReg(2,0x2800,in_t5[9]);
      uVar4 = *in_t5;
      *(uint *)(iVar3 + 4) = uVar4 & 0xfff0f0f0;
      copFunction(2,0x280030);
      *(uint *)(iVar3 + 0x10) = (uVar4 & 0xf0f0f) << 4;
      uVar4 = *(uint *)(iVar7 + -0xc);
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar7 + -8);
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar2 = getCopReg(2,0xc);
          *(undefined4 *)(iVar3 + 8) = uVar2;
          uVar2 = getCopReg(2,0xd);
          *(undefined4 *)(iVar3 + 0x14) = uVar2;
          uVar2 = getCopReg(2,0xe);
          *(undefined4 *)(iVar3 + 0x20) = uVar2;
          setCopReg(2,in_zero,in_t5[10]);
          setCopReg(2,0x800,in_t5[9] >> 0x10);
          *(uint *)(iVar3 + 0x1c) = uVar4 & 0xf0f0f0;
          copFunction(2,0x180001);
          *(uint *)(iVar3 + 0x28) = (uVar4 & 0xf0f0f) << 4;
          *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar7 + -4);
          _DAT_1f800000 = getCopControlWord(2,0xf800);
          if (-1 < _DAT_1f800000) {
            uVar2 = getCopReg(2,0xe);
            *(undefined4 *)(iVar3 + 0x2c) = uVar2;
            if (((((*(ushort *)(iVar3 + 8) < 0x140) || (*(ushort *)(iVar3 + 0x14) < 0x140)) ||
                 (*(ushort *)(iVar3 + 0x20) < 0x140)) || (*(ushort *)(iVar3 + 0x2c) < 0x140)) &&
               (((*(ushort *)(iVar3 + 10) < 0xf0 || (*(ushort *)(iVar3 + 0x16) < 0xf0)) ||
                ((*(ushort *)(iVar3 + 0x22) < 0xf0 || (*(ushort *)(iVar3 + 0x2e) < 0xf0)))))) {
              uVar4 = uVar4 >> 0x18 & 3;
              if (uVar4 == 1) {
                iVar3 = getCopReg(2,0x10);
                iVar7 = getCopReg(2,0x11);
                iVar6 = getCopReg(2,0x12);
                iVar5 = getCopReg(2,0x13);
                if (iVar7 < iVar3) {
                  iVar7 = iVar3;
                }
                bVar1 = iVar5 < iVar7;
                if (iVar5 < iVar6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else {
                if (uVar4 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                iVar3 = getCopReg(2,0x10);
                iVar7 = getCopReg(2,0x11);
                iVar6 = getCopReg(2,0x12);
                iVar5 = getCopReg(2,0x13);
                if (iVar3 < iVar7) {
                  iVar7 = iVar3;
                }
                bVar1 = iVar7 < iVar5;
                if (iVar6 < iVar5) {
                  bVar1 = iVar7 < iVar6;
                  iVar5 = iVar6;
                }
              }
              if (bVar1) {
                iVar5 = iVar7;
              }
              *in_t1 = iVar5 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
      }
      iVar7 = iVar7 + 0x2c;
      in_t5 = in_t5 + 0xb;
      param_3 = iVar6;
    } while (iVar6 != 0);
  }
  _DAT_800bf544 = iVar3;
  return in_t5;
}

