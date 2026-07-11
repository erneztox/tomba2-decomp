// FUN_80115734

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8011e930) */
/* WARNING: Removing unreachable block (ram,0x8011e940) */
/* WARNING: Removing unreachable block (ram,0x8011e950) */
/* WARNING: Removing unreachable block (ram,0x8011e958) */
/* WARNING: Removing unreachable block (ram,0x8011e968) */
/* WARNING: Removing unreachable block (ram,0x8011e97c) */
/* WARNING: Removing unreachable block (ram,0x8011e984) */
/* WARNING: Removing unreachable block (ram,0x8011e998) */
/* WARNING: Removing unreachable block (ram,0x8011e9ac) */
/* WARNING: Removing unreachable block (ram,0x8011e9b8) */
/* WARNING: Removing unreachable block (ram,0x8011e9bc) */
/* WARNING: Removing unreachable block (ram,0x8011e9cc) */
/* WARNING: Removing unreachable block (ram,0x8011e9e8) */
/* WARNING: Removing unreachable block (ram,0x8011e9f8) */
/* WARNING: Removing unreachable block (ram,0x8011e9fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_80115734(undefined1 *param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_zero;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  int *unaff_s2;
  int unaff_s3;
  int unaff_s5;
  undefined4 *unaff_s6;
  int *unaff_s8;
  
  if (param_1[0x71] != -1) {
    return (undefined4 *)0xff;
  }
  bVar2 = param_1[6];
  uVar4 = (uint)(bVar2 < 2);
  puVar6 = param_1;
  if (bVar2 == 1) {
    uVar7 = *(undefined4 *)((uint)(byte)param_1[0x5e] * 4 + -0x7fec9868);
    func_0x80040d68(param_1,uVar7);
    param_1[0x70] = 1;
    uVar4 = (byte)param_1[6] + 1;
    param_1[6] = (char)uVar4;
  }
  else {
    uVar7 = 0xff;
    if (uVar4 == 0) {
      uVar4 = 2;
      if (bVar2 == 2) {
        puVar5 = (undefined4 *)
                 func_0x80040d68(param_1,*(undefined4 *)
                                          ((uint)(byte)param_1[0x5e] * 4 + -0x7fec984c));
        param_1[0x70] = 1;
        param_1[6] = 0;
        return puVar5;
      }
    }
    else if (bVar2 == 0) {
      uVar4 = 0;
      if (param_1[0x5e] == '\0') {
        puVar6 = &DAT_800bf870;
        if (DAT_800bf906 == -1) {
          param_1[0x5e] = 1;
          goto LAB_801278f4;
        }
        if (DAT_800bfafa != '\0') {
          uVar7 = 0x801365b4;
          puVar6 = param_1;
          uVar4 = func_0x80040d68(param_1,0x801365b4);
          param_1[0x70] = 1;
          goto LAB_8011e7f0;
        }
        uVar7 = 0x800a3e58;
        puVar6 = param_1;
        uVar4 = func_0x80040d68(param_1,0x800a3e58);
        param_1[0x70] = 1;
      }
      param_1[5] = 0;
    }
  }
LAB_8011e7f0:
  if (0 < (int)(uVar4 << 0x10)) {
    *(undefined2 *)(param_1 + 0x58) = 0;
    param_1[6] = 2;
    param_1[7] = 0;
  }
  param_1[0xbf] = 1;
LAB_801278f4:
  puVar9 = puVar6 + 0x20;
  iVar8 = 1;
  do {
    setCopReg(2,in_zero,unaff_s6[4]);
    setCopReg(2,iVar8,unaff_s6[6]);
    setCopReg(2,0x800,unaff_s6[5]);
    setCopReg(2,puVar6,unaff_s6[7]);
    setCopReg(2,0x1800,(uint)unaff_s6[5] >> 0x10);
    setCopReg(2,uVar7,unaff_s6[8]);
    *(undefined4 *)(unaff_s3 + 4) = *unaff_s6;
    copFunction(2,0x280030);
    *(undefined4 *)(unaff_s3 + 0xc) = *(undefined4 *)(puVar9 + -0x18);
    *(undefined4 *)(unaff_s3 + 0x18) = *(undefined4 *)(puVar9 + -0x14);
    puVar6 = *(undefined1 **)(puVar9 + -0x1c);
    iVar8 = getCopControlWord(2,0xf800);
    *unaff_s8 = iVar8;
    if (-1 < *unaff_s8) {
      copFunction(2,0x1400006);
      *(uint *)(unaff_s3 + 0x10) = (uint)puVar6 & 0xf0f0f0;
      iVar8 = getCopReg(2,0x18);
      *unaff_s8 = iVar8;
      if (0 < *unaff_s8) {
        uVar3 = getCopReg(2,0xc);
        *(undefined4 *)(unaff_s3 + 8) = uVar3;
        uVar3 = getCopReg(2,0xd);
        *(undefined4 *)(unaff_s3 + 0x14) = uVar3;
        uVar3 = getCopReg(2,0xe);
        *(undefined4 *)(unaff_s3 + 0x20) = uVar3;
        if ((((*(ushort *)(unaff_s3 + 8) < 0x140) || (*(ushort *)(unaff_s3 + 0x14) < 0x140)) ||
            (*(ushort *)(unaff_s3 + 0x20) < 0x140)) &&
           (((*(ushort *)(unaff_s3 + 10) < 0xf0 || (*(ushort *)(unaff_s3 + 0x16) < 0xf0)) ||
            (*(ushort *)(unaff_s3 + 0x22) < 0xf0)))) {
          *(uint *)(unaff_s3 + 0x1c) = ((uint)puVar6 & 0xf0f0f) << 4;
          _DAT_1f800084 = getCopReg(2,0x11);
          _DAT_1f800088 = getCopReg(2,0x12);
          _DAT_1f80008c = getCopReg(2,0x13);
          if ((((uint)puVar6 >> 0x18 & 0x40) == 0) || (_DAT_1f80009c == 0)) {
            uVar4 = (uint)puVar6 >> 0x18 & 3;
            iVar8 = _DAT_1f80008c >> 2;
            if (uVar4 == 1) {
              if (_DAT_1f800084 <= _DAT_1f800088) {
                puVar5 = (undefined4 *)FUN_80130aac();
                return puVar5;
              }
              if (_DAT_1f800084 <= _DAT_1f80008c) goto LAB_80127b20;
            }
            else if (uVar4 == 2) {
              if (_DAT_1f800084 < _DAT_1f800088) {
                puVar5 = (undefined4 *)FUN_80130a5c();
                return puVar5;
              }
              if (_DAT_1f800088 < _DAT_1f80008c) {
                iVar8 = _DAT_1f800088 >> 2;
              }
LAB_80127b20:
              *unaff_s2 = iVar8;
              puVar5 = (undefined4 *)FUN_80130acc();
              return puVar5;
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
    }
    puVar9 = puVar9 + 0x24;
    unaff_s6 = unaff_s6 + 9;
    bVar1 = unaff_s5 == 0;
    iVar8 = unaff_s5;
    unaff_s5 = unaff_s5 + -1;
    if (bVar1) {
      _DAT_800bf544 = unaff_s3;
      return unaff_s6;
    }
  } while( true );
}

