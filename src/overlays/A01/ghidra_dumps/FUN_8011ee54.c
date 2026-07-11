// FUN_8011ee54

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_8011ee54(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 in_zero;
  undefined1 in_v0;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *in_t1;
  int in_t2;
  uint in_t4;
  int iVar9;
  int in_t5;
  uint *in_t6;
  int *in_t7;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  uint in_t8;
  
  *(undefined1 *)(unaff_s0 + 7) = in_v0;
  *(undefined1 *)(unaff_s0 + 0xbf) = 2;
  uVar6 = 0x800f0000;
  *(undefined2 *)(unaff_s0 + 0x42) = 8;
  DAT_800e807e = 1;
  if (DAT_800bf80f == '\0') {
    uVar6 = 0x84;
    param_3 = 0;
    func_0x80074590(0x84);
  }
  *(ushort *)(*(int *)(unaff_s0 + 0xc0) + 2) = ((_DAT_1f80017c & 3) - 2) * 0xc;
  sVar1 = *(short *)(unaff_s0 + 0x42);
  *(short *)(unaff_s0 + 0x42) = sVar1 + -1;
  if (sVar1 != 1) {
    return (uint *)0x0;
  }
  DAT_800e807e = 0;
  do {
    setCopReg(2,0x2800,in_t4);
    uVar5 = *in_t6;
    *(uint *)(param_4 + -0x2d) = uVar5 & 0xfff0f0f0;
    copFunction(2,0x280030);
    *(uint *)(param_4 + -0x21) = uVar5 << 4 & in_t8;
    uVar5 = *(uint *)(in_t5 + -0xc);
    iVar9 = getCopControlWord(2,0xf800);
    *in_t7 = iVar9;
    if (-1 < *in_t7) {
      copFunction(2,0x1400006);
      *(undefined4 *)(param_4 + -0x25) = *(undefined4 *)(in_t5 + -8);
      iVar9 = getCopReg(2,0x18);
      *in_t7 = iVar9;
      if (0 < *in_t7) {
        uVar3 = getCopReg(2,0xc);
        *(undefined4 *)(in_t2 + 8) = uVar3;
        uVar3 = getCopReg(2,0xd);
        *(undefined4 *)(in_t2 + 0x14) = uVar3;
        uVar3 = getCopReg(2,0xe);
        *(undefined4 *)(in_t2 + 0x20) = uVar3;
        setCopReg(2,in_zero,in_t6[10]);
        setCopReg(2,0x800,in_t6[9] >> 0x10);
        *(uint *)(param_4 + -0x15) = uVar5 & in_t8;
        copFunction(2,0x180001);
        *(uint *)(param_4 + -9) = uVar5 << 4 & in_t8;
        *(undefined4 *)(param_4 + -0x19) = *(undefined4 *)(in_t5 + -4);
        iVar9 = getCopControlWord(2,0xf800);
        *in_t7 = iVar9;
        if (-1 < *in_t7) {
          uVar3 = getCopReg(2,0xe);
          *(undefined4 *)(in_t2 + 0x2c) = uVar3;
          if ((((((*(ushort *)(param_4 + -0x29) < 0x140) || (*(ushort *)(param_4 + -0x1d) < 0x140))
                || (*(ushort *)(param_4 + -0x11) < 0x140)) || (*(ushort *)(param_4 + -5) < 0x140))
              && (((*(ushort *)(param_4 + -0x27) < 0xf0 || (*(ushort *)(param_4 + -0x1b) < 0xf0)) ||
                  ((*(ushort *)(param_4 + -0xf) < 0xf0 || (*(ushort *)(param_4 + -3) < 0xf0)))))) &&
             (((uVar5 >> 0x18 & 0x40) == 0 || (_DAT_1f80009c == 0)))) {
            _DAT_1f800084 = getCopReg(2,0x10);
            _DAT_1f800088 = getCopReg(2,0x11);
            _DAT_1f80008c = getCopReg(2,0x12);
            _DAT_1f800090 = getCopReg(2,0x13);
            uVar5 = uVar5 >> 0x18 & 3;
            iVar9 = _DAT_1f800090;
            if (uVar5 == 1) {
              iVar8 = *(int *)(unaff_s1 + 0x88);
              if (*(int *)(unaff_s1 + 0x88) < *(int *)(unaff_s2 + 0x84)) {
                iVar8 = *(int *)(unaff_s2 + 0x84);
              }
              bVar2 = _DAT_1f800090 < iVar8;
              if (_DAT_1f800090 < *(int *)(unaff_s0 + 0x8c)) {
                puVar4 = (uint *)FUN_80131074();
                return puVar4;
              }
            }
            else {
              if (uVar5 != 2) {
                halt_baddata();
              }
              iVar8 = *(int *)(unaff_s1 + 0x88);
              if (*(int *)(unaff_s2 + 0x84) < *(int *)(unaff_s1 + 0x88)) {
                iVar8 = *(int *)(unaff_s2 + 0x84);
              }
              iVar7 = *(int *)(unaff_s0 + 0x8c);
              bVar2 = iVar8 < _DAT_1f800090;
              if (iVar7 < _DAT_1f800090) {
                bVar2 = iVar8 < iVar7;
                iVar9 = iVar7;
              }
            }
            if (bVar2) {
              iVar9 = iVar8;
            }
            *in_t1 = iVar9 >> 2;
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
    setCopReg(2,uVar6,in_t6[0x13]);
    param_3 = param_3 + -1;
    in_t6 = in_t6 + 0xb;
  } while( true );
}

