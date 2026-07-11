// FUN_801278f0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_801278f0(uint param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 in_zero;
  int in_v0;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *unaff_s2;
  int unaff_s3;
  int unaff_s5;
  undefined4 *unaff_s6;
  int *unaff_s8;
  undefined4 uStack0000003c;
  
  iVar6 = param_1 + 0x20;
  do {
    setCopReg(2,in_zero,unaff_s6[4]);
    setCopReg(2,in_v0,unaff_s6[6]);
    setCopReg(2,0x800,unaff_s6[5]);
    setCopReg(2,param_1,unaff_s6[7]);
    setCopReg(2,0x1800,(uint)unaff_s6[5] >> 0x10);
    setCopReg(2,param_2,unaff_s6[8]);
    *(undefined4 *)(unaff_s3 + 4) = *unaff_s6;
    copFunction(2,0x280030);
    *(undefined4 *)(unaff_s3 + 0xc) = *(undefined4 *)(iVar6 + -0x18);
    *(undefined4 *)(unaff_s3 + 0x18) = *(undefined4 *)(iVar6 + -0x14);
    param_1 = *(uint *)(iVar6 + -0x1c);
    iVar5 = getCopControlWord(2,0xf800);
    *unaff_s8 = iVar5;
    if (-1 < *unaff_s8) {
      copFunction(2,0x1400006);
      *(uint *)(unaff_s3 + 0x10) = param_1 & 0xf0f0f0;
      iVar5 = getCopReg(2,0x18);
      *unaff_s8 = iVar5;
      if (0 < *unaff_s8) {
        uVar2 = getCopReg(2,0xc);
        *(undefined4 *)(unaff_s3 + 8) = uVar2;
        uVar2 = getCopReg(2,0xd);
        *(undefined4 *)(unaff_s3 + 0x14) = uVar2;
        uVar2 = getCopReg(2,0xe);
        *(undefined4 *)(unaff_s3 + 0x20) = uVar2;
        if ((((*(ushort *)(unaff_s3 + 8) < 0x140) || (*(ushort *)(unaff_s3 + 0x14) < 0x140)) ||
            (*(ushort *)(unaff_s3 + 0x20) < 0x140)) &&
           (((*(ushort *)(unaff_s3 + 10) < 0xf0 || (*(ushort *)(unaff_s3 + 0x16) < 0xf0)) ||
            (*(ushort *)(unaff_s3 + 0x22) < 0xf0)))) {
          *(uint *)(unaff_s3 + 0x1c) = (param_1 & 0xf0f0f) << 4;
          _DAT_1f800084 = getCopReg(2,0x11);
          _DAT_1f800088 = getCopReg(2,0x12);
          _DAT_1f80008c = getCopReg(2,0x13);
          if (((param_1 >> 0x18 & 0x40) == 0) || (_DAT_1f80009c == 0)) {
            uVar4 = param_1 >> 0x18 & 3;
            iVar6 = _DAT_1f80008c >> 2;
            uStack0000003c = param_2;
            if (uVar4 == 1) {
              if (_DAT_1f800084 <= _DAT_1f800088) {
                puVar3 = (undefined4 *)FUN_80130aac();
                return puVar3;
              }
              if (_DAT_1f800084 <= _DAT_1f80008c) goto LAB_80127b20;
            }
            else if (uVar4 == 2) {
              if (_DAT_1f800084 < _DAT_1f800088) {
                puVar3 = (undefined4 *)FUN_80130a5c();
                return puVar3;
              }
              if (_DAT_1f800088 < _DAT_1f80008c) {
                iVar6 = _DAT_1f800088 >> 2;
              }
LAB_80127b20:
              *unaff_s2 = iVar6;
              puVar3 = (undefined4 *)FUN_80130acc();
              return puVar3;
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
    }
    iVar6 = iVar6 + 0x24;
    unaff_s6 = unaff_s6 + 9;
    bVar1 = unaff_s5 == 0;
    in_v0 = unaff_s5;
    unaff_s5 = unaff_s5 + -1;
    if (bVar1) {
      _DAT_800bf544 = unaff_s3;
      return unaff_s6;
    }
  } while( true );
}

