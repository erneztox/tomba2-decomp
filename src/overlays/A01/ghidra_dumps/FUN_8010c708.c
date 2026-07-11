// FUN_8010c708

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 * FUN_8010c708(char *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 in_zero;
  char cVar2;
  char cVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  int unaff_s1;
  int iVar11;
  int *unaff_s2;
  uint *unaff_s3;
  int unaff_s5;
  int iVar12;
  undefined4 *unaff_s6;
  int unaff_s7;
  int *unaff_s8;
  int in_stack_00000014;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(param_1[3]) {
    case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      return (undefined4 *)0x80110000;
    }
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1[4] = '\x01';
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(param_1[3]) {
      case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        return (undefined4 *)0x0;
      }
    }
  }
  else if (bVar1 == 2) {
    return (undefined4 *)0x2;
  }
  func_0x80051b04(_DAT_000000c2,param_2,3);
  func_0x80040cdc(param_1,0x801393c0,0x800a3d70);
  uVar9 = 1;
  param_1[0x7b] = (char)unaff_s2;
  pcVar7 = param_1;
  func_0x80041718(param_1,1,0);
  param_1[0x2a] = '\x10';
  param_1[0x2e] = -0x18;
  param_1[0x2f] = '5';
  param_1[0x32] = -3;
  param_1[0x33] = -0x19;
  param_1[0x36] = '`';
  param_1[0x37] = ';';
  param_1[0x56] = '\0';
  param_1[0x57] = '\0';
  param_1[0x2b] = '\0';
  param_1[4] = param_1[4] + '\x01';
  pcVar8 = param_1;
  if ((pcVar7[3] == '\0') || (*(short *)(param_1 + 0x58) != 0)) {
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      if ((DAT_800bfa06 & 4) != 0) {
        DAT_800bf9f0 = DAT_800bf9f0 | 2;
        param_1[0x5e] = '\0';
        puVar4 = (undefined4 *)FUN_80127d70();
        return puVar4;
      }
LAB_8011ede0:
      FUN_801276e4(param_1);
      param_1[1] = '\x01';
      func_0x80077ebc(param_1);
      func_0x800517f8(param_1);
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
            param_1[5] = cVar3;
            goto LAB_8011ede0;
          }
          param_1[5] = '\x01';
        }
      }
      else if (bVar1 == 2) {
        iVar11 = FUN_801279ac(param_1);
        if (iVar11 != 0) {
          DAT_800bf9f0 = DAT_800bf9f0 & 0xfd;
          cVar3 = param_1[5] + '\x01';
          goto LAB_8011eddc;
        }
        goto LAB_8011ede0;
      }
      *param_1 = cVar2 + bVar1;
      puVar5 = (uint *)(in_stack_00000014 + *unaff_s2 * 4);
      pcVar8 = (char *)0x9000000;
      *unaff_s3 = *puVar5 | 0x9000000;
      *puVar5 = (uint)unaff_s3;
      param_1 = param_1 + 0x28;
    }
  }
  else {
    func_0x800517f8(param_1);
    param_1[1] = (char)unaff_s1;
    func_0x80077ebc(param_1);
  }
  do {
    do {
      do {
        do {
          iVar11 = unaff_s1 + 0x24;
          puVar4 = unaff_s6 + 9;
          iVar12 = unaff_s5 + -1;
          if (unaff_s5 == 0) {
            _DAT_800bf544 = unaff_s3 + 10;
            return puVar4;
          }
          setCopReg(2,in_zero,unaff_s6[0xd]);
          setCopReg(2,unaff_s5,unaff_s6[0xf]);
          setCopReg(2,0x800,unaff_s6[0xe]);
          setCopReg(2,pcVar8,unaff_s6[0x10]);
          setCopReg(2,0x1800,(uint)unaff_s6[0xe] >> 0x10);
          setCopReg(2,uVar9,unaff_s6[0x11]);
          *(undefined4 *)(param_1 + -0x21) = *puVar4;
          copFunction(2,0x280030);
          *(undefined4 *)(param_1 + -0x19) = *(undefined4 *)(unaff_s1 + 0xc);
          *(undefined4 *)(param_1 + -0xd) = *(undefined4 *)(unaff_s1 + 0x10);
          pcVar8 = *(char **)(unaff_s1 + 8);
          iVar10 = getCopControlWord(2,0xf800);
          *unaff_s8 = iVar10;
          unaff_s1 = iVar11;
          unaff_s5 = iVar12;
          unaff_s6 = puVar4;
        } while (*unaff_s8 < 0);
        copFunction(2,0x1400006);
        *(uint *)(param_1 + -0x15) = (uint)pcVar8 & 0xf0f0f0;
        iVar11 = getCopReg(2,0x18);
        *unaff_s8 = iVar11;
      } while (*unaff_s8 < 1);
      uVar6 = getCopReg(2,0xc);
      unaff_s3[0xc] = uVar6;
      uVar6 = getCopReg(2,0xd);
      unaff_s3[0xf] = uVar6;
      uVar6 = getCopReg(2,0xe);
      unaff_s3[0x12] = uVar6;
    } while ((((0x13f < *(ushort *)(param_1 + -0x1d)) && (0x13f < *(ushort *)(param_1 + -0x11))) &&
             (0x13f < *(ushort *)(param_1 + -5))) ||
            (((0xef < *(ushort *)(param_1 + -0x1b) && (0xef < *(ushort *)(param_1 + -0xf))) &&
             (0xef < *(ushort *)(param_1 + -3)))));
    *(uint *)(param_1 + -9) = ((uint)pcVar8 & 0xf0f0f) << 4;
    _DAT_1f800084 = getCopReg(2,0x11);
    _DAT_1f800088 = getCopReg(2,0x12);
    _DAT_1f80008c = getCopReg(2,0x13);
  } while ((((uint)pcVar8 >> 0x18 & 0x40) != 0) && (_DAT_1f80009c != 0));
  uVar6 = (uint)pcVar8 >> 0x18 & 3;
  if (uVar6 == 1) {
    if (_DAT_1f800084 <= _DAT_1f800088) {
      puVar4 = (undefined4 *)FUN_80130aac();
      return puVar4;
    }
    iVar11 = *(int *)(unaff_s7 + 0x8c) >> 2;
    if (_DAT_1f800084 <= *(int *)(unaff_s7 + 0x8c)) goto LAB_80127b20;
  }
  else if (uVar6 == 2) {
    if (_DAT_1f800084 < _DAT_1f800088) {
      puVar4 = (undefined4 *)FUN_80130a5c();
      return puVar4;
    }
    iVar11 = *(int *)(unaff_s7 + 0x8c) >> 2;
    if (_DAT_1f800088 < *(int *)(unaff_s7 + 0x8c)) {
      iVar11 = _DAT_1f800088 >> 2;
    }
LAB_80127b20:
    *unaff_s2 = iVar11;
    puVar4 = (undefined4 *)FUN_80130acc();
    return puVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

