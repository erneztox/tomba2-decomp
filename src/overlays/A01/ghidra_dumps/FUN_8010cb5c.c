// FUN_8010cb5c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_8010cb5c(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  short sVar2;
  undefined4 in_zero;
  char cVar3;
  char cVar4;
  int in_v0;
  undefined4 *puVar5;
  uint *puVar6;
  int in_v1;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  char *unaff_s0;
  int unaff_s1;
  int iVar12;
  int *unaff_s2;
  uint *unaff_s3;
  int unaff_s5;
  int iVar13;
  undefined4 *unaff_s6;
  int unaff_s7;
  int *unaff_s8;
  int in_stack_0000003c;
  
  if (in_v1 == in_v0) {
    sVar2 = *(short *)(unaff_s0 + 0x40);
    *(short *)(unaff_s0 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      unaff_s0[4] = '\x03';
    }
    *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x4a) * 0x100;
    *(short *)(unaff_s0 + 0x4a) = *(short *)(unaff_s0 + 0x4a) + *(short *)(unaff_s0 + 0x50);
    unaff_s0[1] = '\x01';
    func_0x80077b5c();
    puVar5 = (undefined4 *)FUN_80115bdc();
    return puVar5;
  }
  unaff_s0[1] = '\x01';
  func_0x80051b04(*(undefined4 *)(unaff_s0 + 0xc0),param_2,3);
  func_0x80040cdc();
  uVar10 = 1;
  unaff_s0[0x7b] = (char)unaff_s2;
  pcVar8 = unaff_s0;
  func_0x80041718();
  unaff_s0[0x2a] = '\x10';
  unaff_s0[0x2e] = -0x18;
  unaff_s0[0x2f] = '5';
  unaff_s0[0x32] = -3;
  unaff_s0[0x33] = -0x19;
  unaff_s0[0x36] = '`';
  unaff_s0[0x37] = ';';
  unaff_s0[0x56] = '\0';
  unaff_s0[0x57] = '\0';
  unaff_s0[0x2b] = '\0';
  unaff_s0[4] = unaff_s0[4] + '\x01';
  pcVar9 = unaff_s0;
  if ((pcVar8[3] == '\0') || (*(short *)(unaff_s0 + 0x58) != 0)) {
    bVar1 = unaff_s0[5];
    if (bVar1 == 1) {
      if ((DAT_800bfa06 & 4) != 0) {
        DAT_800bf9f0 = DAT_800bf9f0 | 2;
        unaff_s0[0x5e] = '\0';
        puVar5 = (undefined4 *)FUN_80127d70();
        return puVar5;
      }
LAB_8011ede0:
      FUN_801276e4();
      unaff_s0[1] = '\x01';
      func_0x80077ebc();
      func_0x800517f8();
    }
    else {
      cVar3 = '\x02';
      if (bVar1 < 2) {
        cVar3 = '\0';
        if (bVar1 == 0) {
          cVar3 = '\x03';
          cVar4 = '\x03';
          if ((DAT_800bfa06 & 4) != 0) {
LAB_8011eddc:
            unaff_s0[5] = cVar4;
            goto LAB_8011ede0;
          }
          unaff_s0[5] = '\x01';
        }
      }
      else if (bVar1 == 2) {
        iVar12 = FUN_801279ac();
        if (iVar12 != 0) {
          DAT_800bf9f0 = DAT_800bf9f0 & 0xfd;
          cVar4 = unaff_s0[5] + '\x01';
          goto LAB_8011eddc;
        }
        goto LAB_8011ede0;
      }
      *unaff_s0 = cVar3 + bVar1;
      puVar6 = (uint *)(in_stack_0000003c + *unaff_s2 * 4);
      pcVar9 = (char *)0x9000000;
      *unaff_s3 = *puVar6 | 0x9000000;
      *puVar6 = (uint)unaff_s3;
      unaff_s0 = unaff_s0 + 0x28;
    }
  }
  else {
    func_0x800517f8();
    unaff_s0[1] = (char)unaff_s1;
    func_0x80077ebc();
  }
  do {
    do {
      do {
        do {
          iVar12 = unaff_s1 + 0x24;
          puVar5 = unaff_s6 + 9;
          iVar13 = unaff_s5 + -1;
          if (unaff_s5 == 0) {
            _DAT_800bf544 = unaff_s3 + 10;
            return puVar5;
          }
          setCopReg(2,in_zero,unaff_s6[0xd]);
          setCopReg(2,unaff_s5,unaff_s6[0xf]);
          setCopReg(2,0x800,unaff_s6[0xe]);
          setCopReg(2,pcVar9,unaff_s6[0x10]);
          setCopReg(2,0x1800,(uint)unaff_s6[0xe] >> 0x10);
          setCopReg(2,uVar10,unaff_s6[0x11]);
          *(undefined4 *)(unaff_s0 + -0x21) = *puVar5;
          copFunction(2,0x280030);
          *(undefined4 *)(unaff_s0 + -0x19) = *(undefined4 *)(unaff_s1 + 0xc);
          *(undefined4 *)(unaff_s0 + -0xd) = *(undefined4 *)(unaff_s1 + 0x10);
          pcVar9 = *(char **)(unaff_s1 + 8);
          iVar11 = getCopControlWord(2,0xf800);
          *unaff_s8 = iVar11;
          unaff_s1 = iVar12;
          unaff_s5 = iVar13;
          unaff_s6 = puVar5;
        } while (*unaff_s8 < 0);
        copFunction(2,0x1400006);
        *(uint *)(unaff_s0 + -0x15) = (uint)pcVar9 & 0xf0f0f0;
        iVar12 = getCopReg(2,0x18);
        *unaff_s8 = iVar12;
      } while (*unaff_s8 < 1);
      uVar7 = getCopReg(2,0xc);
      unaff_s3[0xc] = uVar7;
      uVar7 = getCopReg(2,0xd);
      unaff_s3[0xf] = uVar7;
      uVar7 = getCopReg(2,0xe);
      unaff_s3[0x12] = uVar7;
    } while ((((0x13f < *(ushort *)(unaff_s0 + -0x1d)) && (0x13f < *(ushort *)(unaff_s0 + -0x11)))
             && (0x13f < *(ushort *)(unaff_s0 + -5))) ||
            (((0xef < *(ushort *)(unaff_s0 + -0x1b) && (0xef < *(ushort *)(unaff_s0 + -0xf))) &&
             (0xef < *(ushort *)(unaff_s0 + -3)))));
    *(uint *)(unaff_s0 + -9) = ((uint)pcVar9 & 0xf0f0f) << 4;
    _DAT_1f800084 = getCopReg(2,0x11);
    _DAT_1f800088 = getCopReg(2,0x12);
    _DAT_1f80008c = getCopReg(2,0x13);
  } while ((((uint)pcVar9 >> 0x18 & 0x40) != 0) && (_DAT_1f80009c != 0));
  uVar7 = (uint)pcVar9 >> 0x18 & 3;
  if (uVar7 == 1) {
    if (_DAT_1f800084 <= _DAT_1f800088) {
      puVar5 = (undefined4 *)FUN_80130aac();
      return puVar5;
    }
    iVar12 = *(int *)(unaff_s7 + 0x8c) >> 2;
    if (_DAT_1f800084 <= *(int *)(unaff_s7 + 0x8c)) goto LAB_80127b20;
  }
  else if (uVar7 == 2) {
    if (_DAT_1f800084 < _DAT_1f800088) {
      puVar5 = (undefined4 *)FUN_80130a5c();
      return puVar5;
    }
    iVar12 = *(int *)(unaff_s7 + 0x8c) >> 2;
    if (_DAT_1f800088 < *(int *)(unaff_s7 + 0x8c)) {
      iVar12 = _DAT_1f800088 >> 2;
    }
LAB_80127b20:
    *unaff_s2 = iVar12;
    puVar5 = (undefined4 *)FUN_80130acc();
    return puVar5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

