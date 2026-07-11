// FUN_8011eec4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_8011eec4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 in_zero;
  short in_v0;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *in_t1;
  int in_t2;
  uint in_t4;
  int iVar7;
  int in_t5;
  uint *in_t6;
  int *in_t7;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  uint in_t8;
  
  *(short *)(unaff_s0 + 0x42) = in_v0 + -1;
  if ((short)(in_v0 + -1) != 0) {
    return (uint *)0x0;
  }
  DAT_800e807e = 0;
  do {
    setCopReg(2,0x2800,in_t4);
    uVar4 = *in_t6;
    *(uint *)(param_4 + -0x2d) = uVar4 & 0xfff0f0f0;
    copFunction(2,0x280030);
    *(uint *)(param_4 + -0x21) = uVar4 << 4 & in_t8;
    uVar4 = *(uint *)(in_t5 + -0xc);
    iVar7 = getCopControlWord(2,0xf800);
    *in_t7 = iVar7;
    if (-1 < *in_t7) {
      copFunction(2,0x1400006);
      *(undefined4 *)(param_4 + -0x25) = *(undefined4 *)(in_t5 + -8);
      iVar7 = getCopReg(2,0x18);
      *in_t7 = iVar7;
      if (0 < *in_t7) {
        uVar2 = getCopReg(2,0xc);
        *(undefined4 *)(in_t2 + 8) = uVar2;
        uVar2 = getCopReg(2,0xd);
        *(undefined4 *)(in_t2 + 0x14) = uVar2;
        uVar2 = getCopReg(2,0xe);
        *(undefined4 *)(in_t2 + 0x20) = uVar2;
        setCopReg(2,in_zero,in_t6[10]);
        setCopReg(2,0x800,in_t6[9] >> 0x10);
        *(uint *)(param_4 + -0x15) = uVar4 & in_t8;
        copFunction(2,0x180001);
        *(uint *)(param_4 + -9) = uVar4 << 4 & in_t8;
        *(undefined4 *)(param_4 + -0x19) = *(undefined4 *)(in_t5 + -4);
        iVar7 = getCopControlWord(2,0xf800);
        *in_t7 = iVar7;
        if (-1 < *in_t7) {
          uVar2 = getCopReg(2,0xe);
          *(undefined4 *)(in_t2 + 0x2c) = uVar2;
          if ((((((*(ushort *)(param_4 + -0x29) < 0x140) || (*(ushort *)(param_4 + -0x1d) < 0x140))
                || (*(ushort *)(param_4 + -0x11) < 0x140)) || (*(ushort *)(param_4 + -5) < 0x140))
              && (((*(ushort *)(param_4 + -0x27) < 0xf0 || (*(ushort *)(param_4 + -0x1b) < 0xf0)) ||
                  ((*(ushort *)(param_4 + -0xf) < 0xf0 || (*(ushort *)(param_4 + -3) < 0xf0)))))) &&
             (((uVar4 >> 0x18 & 0x40) == 0 || (_DAT_1f80009c == 0)))) {
            _DAT_1f800084 = getCopReg(2,0x10);
            _DAT_1f800088 = getCopReg(2,0x11);
            _DAT_1f80008c = getCopReg(2,0x12);
            _DAT_1f800090 = getCopReg(2,0x13);
            uVar4 = uVar4 >> 0x18 & 3;
            iVar7 = _DAT_1f800090;
            if (uVar4 == 1) {
              iVar6 = *(int *)(unaff_s1 + 0x88);
              if (*(int *)(unaff_s1 + 0x88) < *(int *)(unaff_s2 + 0x84)) {
                iVar6 = *(int *)(unaff_s2 + 0x84);
              }
              bVar1 = _DAT_1f800090 < iVar6;
              if (_DAT_1f800090 < *(int *)(unaff_s0 + 0x8c)) {
                puVar3 = (uint *)FUN_80131074();
                return puVar3;
              }
            }
            else {
              if (uVar4 != 2) {
                halt_baddata();
              }
              iVar6 = *(int *)(unaff_s1 + 0x88);
              if (*(int *)(unaff_s2 + 0x84) < *(int *)(unaff_s1 + 0x88)) {
                iVar6 = *(int *)(unaff_s2 + 0x84);
              }
              iVar5 = *(int *)(unaff_s0 + 0x8c);
              bVar1 = iVar6 < _DAT_1f800090;
              if (iVar5 < _DAT_1f800090) {
                bVar1 = iVar6 < iVar5;
                iVar7 = iVar5;
              }
            }
            if (bVar1) {
              iVar7 = iVar6;
            }
            *in_t1 = iVar7 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
    }
    in_t5 = in_t5 + 0x2c;
    if (param_3 == 0) {
      _DAT_800bf544 = in_t2;
      return in_t6 + 0xb;
    }
    setCopReg(2,in_zero,in_t6[0x10]);
    setCopReg(2,0x800,in_t6[0x11]);
    setCopReg(2,0x1800,in_t6[0x11] >> 0x10);
    setCopReg(2,param_3,in_t6[0x12]);
    in_t4 = in_t6[0x14];
    setCopReg(2,param_1,in_t6[0x13]);
    param_3 = param_3 + -1;
    in_t6 = in_t6 + 0xb;
  } while( true );
}

