// FUN_8012702c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_8012702c(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 in_zero;
  undefined4 *puVar2;
  int iVar3;
  int in_v0;
  uint uVar4;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int *unaff_s3;
  int unaff_s6;
  undefined4 *unaff_s7;
  undefined4 in_f0;
  
  do {
    unaff_s6 = unaff_s6 + -1;
    if (in_v0 == 0) {
      _DAT_800bf544 = unaff_s2;
      return unaff_s7;
    }
    setCopReg(2,in_zero,unaff_s7[4]);
    setCopReg(2,in_v0,unaff_s7[6]);
    setCopReg(2,0x800,unaff_s7[5]);
    setCopReg(2,param_1,unaff_s7[7]);
    setCopReg(2,0x1800,(uint)unaff_s7[5] >> 0x10);
    setCopReg(2,param_2,unaff_s7[8]);
    *(undefined4 *)(unaff_s0 + -0x21) = *unaff_s7;
    copFunction(2,0x280030);
    *(undefined4 *)(unaff_s0 + -0x19) = *(undefined4 *)(unaff_s1 + -0x18);
    *(undefined4 *)(unaff_s0 + -0xd) = *(undefined4 *)(unaff_s1 + -0x14);
    param_1 = *(uint *)(unaff_s1 + -0x1c);
    _DAT_1f800000 = getCopControlWord(2,0xf800);
    if (-1 < _DAT_1f800000) {
      copFunction(2,0x1400006);
      *(uint *)(unaff_s0 + -0x15) = param_1 & 0xf0f0f0;
      _DAT_1f800000 = getCopReg(2,0x18);
      if (0 < _DAT_1f800000) {
        uVar1 = getCopReg(2,0xc);
        *(undefined4 *)(unaff_s2 + 8) = uVar1;
        uVar1 = getCopReg(2,0xd);
        *(undefined4 *)(unaff_s2 + 0x14) = uVar1;
        uVar1 = getCopReg(2,0xe);
        *(undefined4 *)(unaff_s2 + 0x20) = uVar1;
        if ((((*(ushort *)(unaff_s0 + -0x1d) < 0x140) || (*(ushort *)(unaff_s0 + -0x11) < 0x140)) ||
            (*(ushort *)(unaff_s0 + -5) < 0x140)) &&
           (((*(ushort *)(unaff_s0 + -0x1b) < 0xf0 || (*(ushort *)(unaff_s0 + -0xf) < 0xf0)) ||
            (*(ushort *)(unaff_s0 + -3) < 0xf0)))) {
          *(uint *)(unaff_s0 + -9) = (param_1 & 0xf0f0f) << 4;
          _DAT_1f800084 = getCopReg(2,0x11);
          _DAT_1f800088 = getCopReg(2,0x12);
          _DAT_1f80008c = getCopReg(2,0x13);
          uVar4 = param_1 >> 0x18 & 3;
          iVar3 = _DAT_1f80008c >> 2;
          if (uVar4 == 1) {
            if (_DAT_1f800084 <= _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (_DAT_1f80008c < _DAT_1f800084) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          else {
            if (uVar4 != 2) {
              puVar2 = (undefined4 *)FUN_8012fb58();
              return puVar2;
            }
            if (_DAT_1f800084 < _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (_DAT_1f800088 < _DAT_1f80008c) {
              iVar3 = _DAT_1f800088 >> 2;
            }
          }
          *unaff_s3 = iVar3;
          *(undefined4 *)(unaff_s0 + 0x393f) = in_f0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    unaff_s1 = unaff_s1 + 0x24;
    unaff_s7 = unaff_s7 + 9;
    in_v0 = unaff_s6;
  } while( true );
}

