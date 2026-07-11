// FUN_80127d70

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_80127d70(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 in_zero;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  char *unaff_s0;
  int unaff_s1;
  int iVar6;
  int *unaff_s2;
  uint *unaff_s3;
  int unaff_s5;
  int iVar7;
  undefined4 *unaff_s6;
  int unaff_s7;
  int *unaff_s8;
  int in_stack_0000003c;
  
  *unaff_s0 = *unaff_s0 + (&DAT_ffff88ee)[param_4];
  puVar3 = (uint *)(in_stack_0000003c + *unaff_s2 * 4);
  uVar4 = 0x9000000;
  *unaff_s3 = *puVar3 | 0x9000000;
  *puVar3 = (uint)unaff_s3;
  do {
    do {
      do {
        do {
          iVar6 = unaff_s1 + 0x24;
          puVar2 = unaff_s6 + 9;
          iVar7 = unaff_s5 + -1;
          if (unaff_s5 == 0) {
            _DAT_800bf544 = unaff_s3 + 10;
            return puVar2;
          }
          setCopReg(2,in_zero,unaff_s6[0xd]);
          setCopReg(2,unaff_s5,unaff_s6[0xf]);
          setCopReg(2,0x800,unaff_s6[0xe]);
          setCopReg(2,uVar4,unaff_s6[0x10]);
          setCopReg(2,0x1800,(uint)unaff_s6[0xe] >> 0x10);
          setCopReg(2,param_2,unaff_s6[0x11]);
          *(undefined4 *)(unaff_s0 + 7) = *puVar2;
          copFunction(2,0x280030);
          *(undefined4 *)(unaff_s0 + 0xf) = *(undefined4 *)(unaff_s1 + 0xc);
          *(undefined4 *)(unaff_s0 + 0x1b) = *(undefined4 *)(unaff_s1 + 0x10);
          uVar4 = *(uint *)(unaff_s1 + 8);
          iVar5 = getCopControlWord(2,0xf800);
          *unaff_s8 = iVar5;
          unaff_s1 = iVar6;
          unaff_s5 = iVar7;
          unaff_s6 = puVar2;
        } while (*unaff_s8 < 0);
        copFunction(2,0x1400006);
        *(uint *)(unaff_s0 + 0x13) = uVar4 & 0xf0f0f0;
        iVar6 = getCopReg(2,0x18);
        *unaff_s8 = iVar6;
      } while (*unaff_s8 < 1);
      uVar1 = getCopReg(2,0xc);
      unaff_s3[0xc] = uVar1;
      uVar1 = getCopReg(2,0xd);
      unaff_s3[0xf] = uVar1;
      uVar1 = getCopReg(2,0xe);
      unaff_s3[0x12] = uVar1;
    } while ((((0x13f < *(ushort *)(unaff_s0 + 0xb)) && (0x13f < *(ushort *)(unaff_s0 + 0x17))) &&
             (0x13f < *(ushort *)(unaff_s0 + 0x23))) ||
            (((0xef < *(ushort *)(unaff_s0 + 0xd) && (0xef < *(ushort *)(unaff_s0 + 0x19))) &&
             (0xef < *(ushort *)(unaff_s0 + 0x25)))));
    *(uint *)(unaff_s0 + 0x1f) = (uVar4 & 0xf0f0f) << 4;
    _DAT_1f800084 = getCopReg(2,0x11);
    _DAT_1f800088 = getCopReg(2,0x12);
    _DAT_1f80008c = getCopReg(2,0x13);
  } while (((uVar4 >> 0x18 & 0x40) != 0) && (_DAT_1f80009c != 0));
  uVar4 = uVar4 >> 0x18 & 3;
  if (uVar4 == 1) {
    if (_DAT_1f800084 <= _DAT_1f800088) {
      puVar2 = (undefined4 *)FUN_80130aac();
      return puVar2;
    }
    iVar6 = *(int *)(unaff_s7 + 0x8c) >> 2;
    if (_DAT_1f800084 <= *(int *)(unaff_s7 + 0x8c)) goto LAB_80127b20;
  }
  else if (uVar4 == 2) {
    if (_DAT_1f800084 < _DAT_1f800088) {
      puVar2 = (undefined4 *)FUN_80130a5c();
      return puVar2;
    }
    iVar6 = *(int *)(unaff_s7 + 0x8c) >> 2;
    if (_DAT_1f800088 < *(int *)(unaff_s7 + 0x8c)) {
      iVar6 = _DAT_1f800088 >> 2;
    }
LAB_80127b20:
    *unaff_s2 = iVar6;
    puVar2 = (undefined4 *)FUN_80130acc();
    return puVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

