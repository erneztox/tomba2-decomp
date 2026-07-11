// FUN_801279ac

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_801279ac(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_zero;
  uint in_v0;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int unaff_s0;
  int unaff_s1;
  int *unaff_s2;
  int unaff_s3;
  int unaff_s5;
  int iVar6;
  undefined4 *unaff_s6;
  int unaff_s7;
  int *unaff_s8;
  
  do {
    iVar4 = unaff_s1;
    iVar6 = unaff_s5;
    puVar3 = unaff_s6;
    if ((((in_v0 != 0) || (*(ushort *)(unaff_s0 + -0x11) < 0x140)) ||
        (*(ushort *)(unaff_s0 + -5) < 0x140)) &&
       (((*(ushort *)(unaff_s0 + -0x1b) < 0xf0 || (*(ushort *)(unaff_s0 + -0xf) < 0xf0)) ||
        (*(ushort *)(unaff_s0 + -3) < 0xf0)))) {
      *(uint *)(unaff_s0 + -9) = (param_1 & 0xf0f0f) << 4;
      _DAT_1f800084 = getCopReg(2,0x11);
      _DAT_1f800088 = getCopReg(2,0x12);
      _DAT_1f80008c = getCopReg(2,0x13);
      if (((param_1 >> 0x18 & 0x40) == 0) || (_DAT_1f80009c == 0)) {
        uVar5 = param_1 >> 0x18 & 3;
        if (uVar5 == 1) {
          if (_DAT_1f800084 <= _DAT_1f800088) {
            puVar3 = (undefined4 *)FUN_80130aac();
            return puVar3;
          }
          iVar4 = *(int *)(unaff_s7 + 0x8c) >> 2;
          if (_DAT_1f800084 <= *(int *)(unaff_s7 + 0x8c)) goto LAB_80127b20;
        }
        else if (uVar5 == 2) {
          if (_DAT_1f800084 < _DAT_1f800088) {
            puVar3 = (undefined4 *)FUN_80130a5c();
            return puVar3;
          }
          iVar4 = *(int *)(unaff_s7 + 0x8c) >> 2;
          if (_DAT_1f800088 < *(int *)(unaff_s7 + 0x8c)) {
            iVar4 = _DAT_1f800088 >> 2;
          }
LAB_80127b20:
          *unaff_s2 = iVar4;
          puVar3 = (undefined4 *)FUN_80130acc();
          return puVar3;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    do {
      do {
        unaff_s1 = iVar4 + 0x24;
        unaff_s6 = puVar3 + 9;
        unaff_s5 = iVar6 + -1;
        if (iVar6 == 0) {
          _DAT_800bf544 = unaff_s3;
          return unaff_s6;
        }
        setCopReg(2,in_zero,puVar3[0xd]);
        setCopReg(2,iVar6,puVar3[0xf]);
        setCopReg(2,0x800,puVar3[0xe]);
        setCopReg(2,param_1,puVar3[0x10]);
        setCopReg(2,0x1800,(uint)puVar3[0xe] >> 0x10);
        setCopReg(2,param_2,puVar3[0x11]);
        *(undefined4 *)(unaff_s0 + -0x21) = *unaff_s6;
        copFunction(2,0x280030);
        *(undefined4 *)(unaff_s0 + -0x19) = *(undefined4 *)(iVar4 + 0xc);
        *(undefined4 *)(unaff_s0 + -0xd) = *(undefined4 *)(iVar4 + 0x10);
        param_1 = *(uint *)(iVar4 + 8);
        iVar4 = getCopControlWord(2,0xf800);
        *unaff_s8 = iVar4;
        iVar4 = unaff_s1;
        iVar6 = unaff_s5;
        puVar3 = unaff_s6;
      } while (*unaff_s8 < 0);
      copFunction(2,0x1400006);
      *(uint *)(unaff_s0 + -0x15) = param_1 & 0xf0f0f0;
      iVar1 = getCopReg(2,0x18);
      *unaff_s8 = iVar1;
    } while (*unaff_s8 < 1);
    uVar2 = getCopReg(2,0xc);
    *(undefined4 *)(unaff_s3 + 8) = uVar2;
    uVar2 = getCopReg(2,0xd);
    *(undefined4 *)(unaff_s3 + 0x14) = uVar2;
    uVar2 = getCopReg(2,0xe);
    *(undefined4 *)(unaff_s3 + 0x20) = uVar2;
    in_v0 = (uint)(*(ushort *)(unaff_s0 + -0x1d) < 0x140);
  } while( true );
}

