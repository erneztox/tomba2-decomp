// FUN_8011ba9c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8011bc1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011ba9c(undefined1 *param_1,int *param_2,int *param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  short sVar5;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 extraout_at_01;
  short sVar6;
  int iVar7;
  undefined1 *puVar8;
  uint *puVar9;
  uint in_t0;
  undefined4 *in_t1;
  undefined4 *in_t2;
  int in_t3;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 unaff_s0;
  undefined4 *unaff_s1;
  undefined4 *puVar13;
  uint *puVar14;
  char unaff_s3;
  int unaff_s4;
  undefined4 uStackX_0;
  undefined4 uStackX_4;
  undefined4 uStackX_8;
  undefined4 uStackX_c;
  undefined4 uStack00000020;
  undefined4 in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  
  bVar1 = param_1[5];
  puVar9 = (uint *)0x1;
  puVar14 = (uint *)&DAT_800e7e80;
  sVar5 = (short)param_1;
  if (bVar1 == 1) {
    puVar9 = (uint *)&DAT_00000042;
    if (param_1[6] == '\0') {
      param_1[6] = 1;
      func_0x8004ed94(0x42,0x41);
      func_0x80074590(0x19,0,0xf);
      DAT_1f800137 = 0;
      in_t3 = 0x1f800000;
      in_at = extraout_at;
    }
    else if (param_1[6] == '\x01') {
      if ((param_1[0x29] != '\0') || ((DAT_800e7fc7 & 1) != param_1[0x5f])) {
        if (DAT_800bf916 < 3) {
          return;
        }
        cVar2 = param_1[0x46];
        puVar13 = (undefined4 *)0x0;
        if (cVar2 != '\0') goto joined_r0x8011bc4c;
        sVar6 = *(short *)(param_1 + 0x50);
        *(short *)(param_1 + 0x50) = sVar6 + -0x10;
        iVar7 = -0x300;
        if (-0x301 < (short)(sVar6 + -0x10)) goto LAB_8011bcbc;
        *(undefined2 *)(param_1 + 0x50) = 0xfd00;
        puVar8 = (undefined1 *)0x0;
        goto LAB_80124c50;
      }
      param_1[6] = 0;
    }
    uVar10 = getCopReg(2,0x4800);
    uVar11 = getCopReg(2,0x5000);
    uVar12 = getCopReg(2,0x5800);
    *(short *)(in_t3 + 4) = (short)uVar10;
    *(short *)(in_t3 + 10) = (short)uVar11;
    *(short *)(in_t3 + 0x10) = (short)uVar12;
    uStack00000020 = CONCAT22(*(undefined2 *)(unaff_s4 + 0x32),*(undefined2 *)(unaff_s4 + 0x2e));
    in_stack_00000024 = CONCAT22(in_stack_00000024._2_2_,*(undefined2 *)(unaff_s4 + 0x36));
    setCopReg(2,in_zero,uStack00000020);
    setCopReg(2,in_at,in_stack_00000024);
    copFunction(2,0x486012);
    _DAT_1f800014 = getCopReg(2,0x19);
    _DAT_1f800018 = getCopReg(2,0x1a);
    _DAT_1f80001c = getCopReg(2,0x1b);
    unaff_s1[5] = unaff_s1[5] + _DAT_1f80010c;
    iVar7 = unaff_s1[6] + _DAT_1f800110;
    puVar8 = (undefined1 *)(unaff_s1[7] + (int)_DAT_1f800114);
    puVar9 = _DAT_1f800114;
    puVar13 = unaff_s1;
  }
  else {
    if (1 < bVar1) {
      sVar6 = 3;
      if (bVar1 != 2) goto code_r0x80124ce4;
      param_1[5] = 3;
      DAT_1f800236 = 1;
      DAT_800bf80f = 2;
      DAT_800bf839 = 1;
      _DAT_800bf83a = 0x1000;
      return;
    }
    sVar6 = 0;
    if (bVar1 != 0) goto code_r0x80124ce4;
    if (DAT_800bf916 < 3) {
      if (param_1[0x29] == '\0') {
        return;
      }
      if (DAT_800e7ea9 != '\0') {
        if (DAT_800e7ffb == '\0') {
          sVar6 = 2;
          param_1[5] = 1;
          DAT_1f800137 = 2;
          goto code_r0x80124ce4;
        }
        return;
      }
      return;
    }
    cVar2 = param_1[0x46];
    puVar13 = (undefined4 *)0x0;
    if (cVar2 != '\0') {
joined_r0x8011bc4c:
      puVar13 = (undefined4 *)0x0;
      if (cVar2 == '\x01') {
        puVar13 = (undefined4 *)0x0;
        sVar6 = *(short *)(param_1 + 0x50);
        *(short *)(param_1 + 0x50) = sVar6 + 0x10;
        if (0x300 < (short)(sVar6 + 0x10)) {
          *(undefined2 *)(param_1 + 0x50) = 0x300;
          puVar13 = (undefined4 *)0x1;
        }
LAB_8011bcbc:
        puVar9 = (uint *)(uint)*(ushort *)(param_1 + 0x50);
        uVar3 = _DAT_1f80017c & 0xf;
        *(ushort *)(param_1 + 0x56) = *(short *)(param_1 + 0x5a) + *(ushort *)(param_1 + 0x50);
        if (uVar3 == 0) {
          puVar9 = (uint *)&DAT_0000000d;
          param_2 = (int *)&DAT_ffffffe3;
          param_3 = (int *)0x0;
          func_0x80074590(0xd);
          in_at = extraout_at_00;
        }
        if (puVar13 == (undefined4 *)0x0) {
          return;
        }
        param_1[5] = 2;
        *param_1 = 2;
        *(undefined2 *)(param_1 + 0x40) = 0xf;
        DAT_800e7e84 = 4;
        DAT_800e7e85 = 0x24;
        sVar6 = 0;
        DAT_800e7e86 = 0;
        DAT_800bf81f = 0;
        goto code_r0x80124ce4;
      }
      goto LAB_80124c58;
    }
    sVar6 = *(short *)(param_1 + 0x50);
    *(short *)(param_1 + 0x50) = sVar6 + -0x10;
    iVar7 = -0x300;
    if (-0x301 < (short)(sVar6 + -0x10)) goto LAB_8011bcbc;
    *(undefined2 *)(param_1 + 0x50) = 0xfd00;
    puVar8 = (undefined1 *)0x0;
  }
LAB_80124c50:
  puVar13[6] = iVar7;
  puVar13[7] = puVar8;
LAB_80124c58:
  setCopControlWord(2,0,*puVar13);
  setCopControlWord(2,0x800,puVar13[1]);
  setCopControlWord(2,0x1000,puVar13[2]);
  setCopControlWord(2,0x1800,puVar13[3]);
  setCopControlWord(2,0x2000,puVar13[4]);
  setCopControlWord(2,0x2800,puVar13[5]);
  setCopControlWord(2,0x3000,puVar13[6]);
  setCopControlWord(2,0x3800,puVar13[7]);
  param_4 = (int *)&DAT_80137e24;
  in_t2 = (undefined4 *)&stack0xfffffff8;
  in_t1 = &stack0x00000028;
  param_2 = (int *)&DAT_80137e3c;
  param_3 = (int *)&DAT_800e7eb0;
  do {
    in_t0 = param_2[-5];
    unaff_s0 = CONCAT22(*(char *)((int)param_2 + 6) * sVar5,(char)param_2[1] * sVar5);
    sVar6 = (short)*(char *)((int)param_2 + -9);
code_r0x80124ce4:
    unaff_s1 = (undefined4 *)CONCAT22((short)((uint)unaff_s1 >> 0x10),sVar6 * sVar5);
    uStackX_0 = CONCAT22(*(char *)((int)param_2 + 10) * sVar5,(char)param_2[2] * sVar5);
    uStackX_4 = CONCAT22(uStackX_4._2_2_,*(char *)((int)param_2 + -1) * sVar5);
    uStackX_8 = CONCAT22(*(char *)((int)param_2 + 0xb) * sVar5,*(char *)((int)param_2 + 9) * sVar5);
    uStackX_c = CONCAT22(uStackX_c._2_2_,*(char *)((int)param_2 + 3) * sVar5);
    setCopReg(2,in_zero,unaff_s0);
    setCopReg(2,in_at,unaff_s1);
    setCopReg(2,&stack0xfffffff0,*in_t2);
    setCopReg(2,&uStackX_0,in_t2[1]);
    setCopReg(2,puVar9,uStackX_0);
    setCopReg(2,param_2,uStackX_4);
    copFunction(2,0x280030);
    uVar10 = getCopControlWord(2,0xf800);
    *in_t1 = uVar10;
    if (-1 < in_stack_00000028) {
      uVar4 = getCopReg(2,0xc);
      puVar14[2] = uVar4;
      uVar4 = getCopReg(2,0xd);
      puVar14[5] = uVar4;
      uVar4 = getCopReg(2,0xe);
      puVar14[8] = uVar4;
      setCopReg(2,in_zero,uStackX_8);
      setCopReg(2,in_at,uStackX_c);
      copFunction(2,0x180001);
      uVar10 = getCopControlWord(2,0xf800);
      *in_t1 = uVar10;
      if (-1 < in_stack_00000028) {
        uVar4 = getCopReg(2,0xe);
        puVar14[0xb] = uVar4;
        copFunction(2,0x168002e);
        iVar7 = getCopReg(2,7);
        in_stack_0000002c = (iVar7 >> (iVar7 >> 10 & 0x1fU)) + (iVar7 >> 10) * 0x200;
        if (0x7fb < in_stack_0000002c - 4U) {
          in_stack_0000002c = -1;
        }
        iVar7 = in_stack_0000002c + -100;
        if (-1 < in_stack_0000002c) {
          in_stack_0000002c = iVar7;
          if (iVar7 < 4) {
            in_stack_0000002c = 4;
          }
          param_3[-0xb] = param_2[-3] & 0xffffffU | 0x3e000000;
          iVar7 = *param_4;
          param_3[-6] = in_t0 & 0x7fffff;
          param_3[-9] = iVar7;
          iVar7 = param_2[-4];
          param_3[-3] = iVar7;
          *param_3 = iVar7 >> 0x10;
          param_3[-8] = param_2[-2];
          param_3[-5] = param_2[-1];
          iVar7 = *param_2;
          *(char *)(param_3 + -6) = (char)param_3[-6] + unaff_s3;
          *(char *)(param_3 + -9) = (char)param_3[-9] + unaff_s3;
          *(char *)param_3 = (char)*param_3 + unaff_s3;
          param_3[-2] = iVar7;
          *(char *)(param_3 + -3) = (char)param_3[-3] + unaff_s3;
          puVar9 = (uint *)(_DAT_800ed8c8 + in_stack_0000002c * 4);
          *puVar14 = *puVar9 | 0xc000000;
          *puVar9 = (uint)puVar14;
          param_3 = param_3 + 0xd;
          puVar14 = puVar14 + 0xd;
        }
      }
    }
    param_2 = param_2 + 9;
    param_4 = param_4 + 9;
  } while (0 < (int)in_t0);
  uVar3 = *(ushort *)(unaff_s4 + 0x40);
  _DAT_800bf544 = puVar14;
  func_0x800329e0(6);
  setCopReg(2,in_zero,*(undefined4 *)(unaff_s4 + 0x60));
  setCopReg(2,extraout_at_01,*(undefined4 *)(unaff_s4 + 100));
  iVar7 = func_0x800317cc(0);
  if (iVar7 == 0) {
    _DAT_1f800080 = _DAT_1f800080 + -100;
    if (_DAT_1f800080 < 4) {
      _DAT_1f800080 = 4;
    }
    _DAT_1f800084 = _DAT_1f800084 * *(short *)(unaff_s4 + 0x70) >> 0xb;
    _DAT_1f800088 = _DAT_1f800084;
    if (*(char *)(unaff_s4 + 3) == '\b') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x800328ec(*(undefined4 *)(((int)((uint)uVar3 << 0x10) >> 0x18) * 4 + -0x7fec7870));
  }
  return;
}

