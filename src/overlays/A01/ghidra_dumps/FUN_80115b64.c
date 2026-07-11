// FUN_80115b64

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_80115b64(char *param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined4 in_zero;
  char cVar2;
  char cVar3;
  undefined4 *puVar4;
  uint *puVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *unaff_s3;
  int unaff_s5;
  int iVar10;
  undefined4 *unaff_s6;
  int unaff_s7;
  int *unaff_s8;
  int in_stack_0000001c;
  
  bVar1 = param_1[4];
  uVar8 = (uint)bVar1;
  pcVar6 = param_1;
  if (uVar8 == 1) {
    iVar10 = func_0x8007778c();
    if (iVar10 == 0) {
LAB_80115d20:
      if (param_1[1] != '\0') {
        pcVar6 = param_1;
        func_0x800518fc();
      }
      param_1[0x2b] = '\0';
      goto LAB_8011ece4;
    }
    pcVar6 = (char *)(uint)(byte)param_1[5];
    if (pcVar6 == (char *)0x0) {
      if (param_1[0x2b] != '\x03') {
LAB_80115d18:
        pcVar6 = param_1;
        func_0x8004190c();
        goto LAB_80115d20;
      }
      func_0x80042354(1,1);
      param_2 = (undefined1 *)0x800a3d70;
      pcVar6 = param_1;
      func_0x80040d68(param_1,0x800a3d70);
      cVar2 = '\x02';
      param_1[0x70] = '\x02';
      param_1[6] = '\0';
      param_1[5] = param_1[5] + '\x01';
    }
    else {
      cVar2 = -1;
      if (pcVar6 == (char *)0x1) {
        if (param_1[0x70] != -1) {
LAB_80115d10:
          func_0x80041098(param_1);
          goto LAB_80115d18;
        }
        param_2 = &DAT_80130000;
        if (param_1[6] == '\0') {
          param_2 = (undefined1 *)0x801367d8;
          pcVar6 = param_1;
          func_0x80040d68(param_1,0x801367d8);
          param_1[0x70] = '\x02';
          param_1[6] = param_1[6] + '\x01';
        }
        else if (param_1[6] == '\x01') {
          param_1[5] = '\0';
          goto LAB_80115d10;
        }
        cVar2 = pcVar6[3];
      }
    }
    if (cVar2 == '\0') {
      param_1[0x58] = '\0';
      param_1[0x59] = -4;
    }
    else {
      param_1[0x58] = '\0';
      param_1[0x59] = '\0';
    }
  }
  else {
    if (uVar8 < 2) {
      param_2 = (undefined1 *)0x1a;
      if (uVar8 == 0) {
        func_0x80051b04(*(undefined4 *)(param_1 + ((byte)param_1[9] - 1) * 4 + 0xc0),0x1a,3);
        func_0x80040cdc(param_1,0x801393c0,0x800a3d70);
        param_2 = (undefined1 *)0x1;
        param_1[0x7b] = '\x01';
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
      }
    }
    else {
      if (uVar8 == 2) {
        return (undefined4 *)0x3;
      }
      if (uVar8 == 3) {
        puVar4 = (undefined4 *)func_0x8007a624(param_1);
        return puVar4;
      }
    }
LAB_8011ece4:
    if ((pcVar6[3] == '\0') || (*(short *)(param_1 + 0x58) != 0)) {
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
        pcVar6 = param_1;
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
          iVar10 = FUN_801279ac(param_1);
          if (iVar10 != 0) {
            DAT_800bf9f0 = DAT_800bf9f0 & 0xfd;
            cVar3 = param_1[5] + '\x01';
            goto LAB_8011eddc;
          }
          goto LAB_8011ede0;
        }
        *param_1 = cVar2 + bVar1;
        puVar5 = (uint *)(in_stack_0000001c + iRam00000001 * 4);
        pcVar6 = (char *)0x9000000;
        *unaff_s3 = *puVar5 | 0x9000000;
        *puVar5 = (uint)unaff_s3;
        param_1 = param_1 + 0x28;
      }
    }
    else {
      func_0x800517f8(param_1);
      param_1[1] = bVar1;
      pcVar6 = param_1;
      func_0x80077ebc(param_1);
    }
  }
  do {
    do {
      do {
        do {
          uVar9 = uVar8 + 0x24;
          puVar4 = unaff_s6 + 9;
          iVar10 = unaff_s5 + -1;
          if (unaff_s5 == 0) {
            _DAT_800bf544 = unaff_s3 + 10;
            return puVar4;
          }
          setCopReg(2,in_zero,unaff_s6[0xd]);
          setCopReg(2,unaff_s5,unaff_s6[0xf]);
          setCopReg(2,0x800,unaff_s6[0xe]);
          setCopReg(2,pcVar6,unaff_s6[0x10]);
          setCopReg(2,0x1800,(uint)unaff_s6[0xe] >> 0x10);
          setCopReg(2,param_2,unaff_s6[0x11]);
          *(undefined4 *)(param_1 + -0x21) = *puVar4;
          copFunction(2,0x280030);
          *(undefined4 *)(param_1 + -0x19) = *(undefined4 *)(uVar8 + 0xc);
          *(undefined4 *)(param_1 + -0xd) = *(undefined4 *)(uVar8 + 0x10);
          pcVar6 = *(char **)(uVar8 + 8);
          iVar7 = getCopControlWord(2,0xf800);
          *unaff_s8 = iVar7;
          uVar8 = uVar9;
          unaff_s5 = iVar10;
          unaff_s6 = puVar4;
        } while (*unaff_s8 < 0);
        copFunction(2,0x1400006);
        *(uint *)(param_1 + -0x15) = (uint)pcVar6 & 0xf0f0f0;
        iVar10 = getCopReg(2,0x18);
        *unaff_s8 = iVar10;
      } while (*unaff_s8 < 1);
      uVar9 = getCopReg(2,0xc);
      unaff_s3[0xc] = uVar9;
      uVar9 = getCopReg(2,0xd);
      unaff_s3[0xf] = uVar9;
      uVar9 = getCopReg(2,0xe);
      unaff_s3[0x12] = uVar9;
    } while ((((0x13f < *(ushort *)(param_1 + -0x1d)) && (0x13f < *(ushort *)(param_1 + -0x11))) &&
             (0x13f < *(ushort *)(param_1 + -5))) ||
            (((0xef < *(ushort *)(param_1 + -0x1b) && (0xef < *(ushort *)(param_1 + -0xf))) &&
             (0xef < *(ushort *)(param_1 + -3)))));
    *(uint *)(param_1 + -9) = ((uint)pcVar6 & 0xf0f0f) << 4;
    _DAT_1f800084 = getCopReg(2,0x11);
    _DAT_1f800088 = getCopReg(2,0x12);
    _DAT_1f80008c = getCopReg(2,0x13);
  } while ((((uint)pcVar6 >> 0x18 & 0x40) != 0) && (_DAT_1f80009c != 0));
  uVar8 = (uint)pcVar6 >> 0x18 & 3;
  if (uVar8 == 1) {
    if (_DAT_1f800084 <= _DAT_1f800088) {
      puVar4 = (undefined4 *)FUN_80130aac();
      return puVar4;
    }
    iVar10 = *(int *)(unaff_s7 + 0x8c) >> 2;
    if (_DAT_1f800084 <= *(int *)(unaff_s7 + 0x8c)) goto LAB_80127b20;
  }
  else if (uVar8 == 2) {
    if (_DAT_1f800084 < _DAT_1f800088) {
      puVar4 = (undefined4 *)FUN_80130a5c();
      return puVar4;
    }
    iVar10 = *(int *)(unaff_s7 + 0x8c) >> 2;
    if (_DAT_1f800088 < *(int *)(unaff_s7 + 0x8c)) {
      iVar10 = _DAT_1f800088 >> 2;
    }
LAB_80127b20:
    iRam00000001 = iVar10;
    puVar4 = (undefined4 *)FUN_80130acc();
    return puVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

