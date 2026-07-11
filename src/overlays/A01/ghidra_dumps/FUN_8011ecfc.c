// FUN_8011ecfc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_8011ecfc(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 in_zero;
  char cVar2;
  char cVar3;
  int in_v0;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  char *unaff_s0;
  int unaff_s1;
  int iVar9;
  int *unaff_s2;
  uint *unaff_s3;
  int unaff_s5;
  int iVar10;
  undefined4 *unaff_s6;
  int unaff_s7;
  int *unaff_s8;
  int in_stack_0000003c;
  
  pcVar7 = unaff_s0;
  if (in_v0 == 0) {
    func_0x800517f8();
    unaff_s0[1] = (char)unaff_s1;
    func_0x80077ebc();
  }
  else {
    bVar1 = unaff_s0[5];
    if (bVar1 == 1) {
      if ((DAT_800bfa06 & 4) != 0) {
        DAT_800bf9f0 = DAT_800bf9f0 | 2;
        unaff_s0[0x5e] = '\0';
        puVar4 = (undefined4 *)FUN_80127d70();
        return puVar4;
      }
LAB_8011ede0:
      FUN_801276e4();
      unaff_s0[1] = '\x01';
      func_0x80077ebc();
      func_0x800517f8();
    }
    else {
      cVar2 = '\x02';
      if (bVar1 < 2) {
        cVar2 = '\0';
        if (bVar1 == 0) {
          cVar2 = '\x03';
          cVar3 = '\x03';
          if ((DAT_800bfa06 & 4) != 0) {
LAB_8011eddc:
            unaff_s0[5] = cVar3;
            goto LAB_8011ede0;
          }
          unaff_s0[5] = '\x01';
        }
      }
      else if (bVar1 == 2) {
        iVar9 = FUN_801279ac();
        if (iVar9 != 0) {
          DAT_800bf9f0 = DAT_800bf9f0 & 0xfd;
          cVar3 = unaff_s0[5] + '\x01';
          goto LAB_8011eddc;
        }
        goto LAB_8011ede0;
      }
      *unaff_s0 = cVar2 + bVar1;
      puVar5 = (uint *)(in_stack_0000003c + *unaff_s2 * 4);
      pcVar7 = (char *)0x9000000;
      *unaff_s3 = *puVar5 | 0x9000000;
      *puVar5 = (uint)unaff_s3;
      unaff_s0 = unaff_s0 + 0x28;
    }
  }
  do {
    do {
      do {
        do {
          iVar9 = unaff_s1 + 0x24;
          puVar4 = unaff_s6 + 9;
          iVar10 = unaff_s5 + -1;
          if (unaff_s5 == 0) {
            _DAT_800bf544 = unaff_s3 + 10;
            return puVar4;
          }
          setCopReg(2,in_zero,unaff_s6[0xd]);
          setCopReg(2,unaff_s5,unaff_s6[0xf]);
          setCopReg(2,0x800,unaff_s6[0xe]);
          setCopReg(2,pcVar7,unaff_s6[0x10]);
          setCopReg(2,0x1800,(uint)unaff_s6[0xe] >> 0x10);
          setCopReg(2,param_2,unaff_s6[0x11]);
          *(undefined4 *)(unaff_s0 + -0x21) = *puVar4;
          copFunction(2,0x280030);
          *(undefined4 *)(unaff_s0 + -0x19) = *(undefined4 *)(unaff_s1 + 0xc);
          *(undefined4 *)(unaff_s0 + -0xd) = *(undefined4 *)(unaff_s1 + 0x10);
          pcVar7 = *(char **)(unaff_s1 + 8);
          iVar8 = getCopControlWord(2,0xf800);
          *unaff_s8 = iVar8;
          unaff_s1 = iVar9;
          unaff_s5 = iVar10;
          unaff_s6 = puVar4;
        } while (*unaff_s8 < 0);
        copFunction(2,0x1400006);
        *(uint *)(unaff_s0 + -0x15) = (uint)pcVar7 & 0xf0f0f0;
        iVar9 = getCopReg(2,0x18);
        *unaff_s8 = iVar9;
      } while (*unaff_s8 < 1);
      uVar6 = getCopReg(2,0xc);
      unaff_s3[0xc] = uVar6;
      uVar6 = getCopReg(2,0xd);
      unaff_s3[0xf] = uVar6;
      uVar6 = getCopReg(2,0xe);
      unaff_s3[0x12] = uVar6;
    } while ((((0x13f < *(ushort *)(unaff_s0 + -0x1d)) && (0x13f < *(ushort *)(unaff_s0 + -0x11)))
             && (0x13f < *(ushort *)(unaff_s0 + -5))) ||
            (((0xef < *(ushort *)(unaff_s0 + -0x1b) && (0xef < *(ushort *)(unaff_s0 + -0xf))) &&
             (0xef < *(ushort *)(unaff_s0 + -3)))));
    *(uint *)(unaff_s0 + -9) = ((uint)pcVar7 & 0xf0f0f) << 4;
    _DAT_1f800084 = getCopReg(2,0x11);
    _DAT_1f800088 = getCopReg(2,0x12);
    _DAT_1f80008c = getCopReg(2,0x13);
  } while ((((uint)pcVar7 >> 0x18 & 0x40) != 0) && (_DAT_1f80009c != 0));
  uVar6 = (uint)pcVar7 >> 0x18 & 3;
  if (uVar6 == 1) {
    if (_DAT_1f800084 <= _DAT_1f800088) {
      puVar4 = (undefined4 *)FUN_80130aac();
      return puVar4;
    }
    iVar9 = *(int *)(unaff_s7 + 0x8c) >> 2;
    if (_DAT_1f800084 <= *(int *)(unaff_s7 + 0x8c)) goto LAB_80127b20;
  }
  else if (uVar6 == 2) {
    if (_DAT_1f800084 < _DAT_1f800088) {
      puVar4 = (undefined4 *)FUN_80130a5c();
      return puVar4;
    }
    iVar9 = *(int *)(unaff_s7 + 0x8c) >> 2;
    if (_DAT_1f800088 < *(int *)(unaff_s7 + 0x8c)) {
      iVar9 = _DAT_1f800088 >> 2;
    }
LAB_80127b20:
    *unaff_s2 = iVar9;
    puVar4 = (undefined4 *)FUN_80130acc();
    return puVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

