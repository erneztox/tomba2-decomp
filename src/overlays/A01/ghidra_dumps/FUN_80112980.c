// FUN_80112980

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8011bb50) */
/* WARNING: Removing unreachable block (ram,0x8011bdc0) */
/* WARNING: Removing unreachable block (ram,0x8011bdf0) */
/* WARNING: Removing unreachable block (ram,0x8011bdd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80112980(undefined1 *param_1,undefined4 param_2,uint *param_3,uint *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 extraout_at_01;
  byte bVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  char cVar10;
  uint *puVar11;
  uint *puVar12;
  uint in_t0;
  undefined4 *in_t1;
  undefined4 *in_t2;
  undefined4 unaff_s0;
  undefined4 *unaff_s1;
  uint *unaff_s2;
  char unaff_s3;
  int unaff_s4;
  undefined4 unaff_retaddr;
  short sStackX_0;
  short sStackX_2;
  short sStackX_4;
  undefined4 uStackX_8;
  undefined4 uStackX_c;
  int in_stack_00000030;
  int in_stack_00000034;
  
  bVar1 = param_1[4];
  puVar12 = (uint *)0x1;
  sVar2 = (short)param_1;
  if (bVar1 == 1) {
    bVar1 = param_1[5];
    puVar11 = (uint *)0x1;
    if (bVar1 == 1) {
      bVar4 = param_1[6];
      if (bVar4 == 0) {
        sVar6 = 0x78;
        param_1[5] = 0;
        goto code_r0x80124ce4;
      }
LAB_80112c6c:
      if (bVar4 != 1) {
        if (bVar1 != bVar4) {
          setCopControlWord(2,0,*unaff_s1);
          setCopControlWord(2,0x800,unaff_s1[1]);
          setCopControlWord(2,0x1000,unaff_s1[2]);
          setCopControlWord(2,0x1800,unaff_s1[3]);
          setCopControlWord(2,0x2000,unaff_s1[4]);
          setCopControlWord(2,0x2800,unaff_s1[5]);
          setCopControlWord(2,0x3000,unaff_s1[6]);
          setCopControlWord(2,0x3800,unaff_s1[7]);
          param_4 = (uint *)&DAT_80137e24;
          in_t1 = &stack0x00000030;
          puVar12 = (uint *)&DAT_80137e3c;
          param_3 = unaff_s2 + 0xc;
          in_t2 = (undefined4 *)register0x00000074;
          goto LAB_80124cb0;
        }
        sVar6 = *(short *)(param_1 + 0x50);
        *(short *)(param_1 + 0x50) = sVar6 + 0x10;
        if (0x300 < (short)(sVar6 + 0x10)) {
          *(undefined2 *)(param_1 + 0x50) = 0x300;
          unaff_s1 = (undefined4 *)0x1;
        }
        goto LAB_8011bcbc;
      }
    }
    else {
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          FUN_8011bc84();
          return;
        }
        FUN_8011b100(param_1);
        FUN_8011bc84();
        return;
      }
      if (bVar1 != 2) {
        FUN_8011bc84();
        return;
      }
      bVar4 = param_1[6];
      if (bVar4 != 0) goto LAB_80112c6c;
      param_1[6] = 1;
      *(undefined2 *)(param_1 + 0x40) = 0x78;
    }
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[0x5e] = 0;
    }
    FUN_8011aff0(param_1);
    iVar7 = func_0x800778e4(param_1,(int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32))
                                         * 0x10000) >> 0x10);
    if (iVar7 != 0) {
      func_0x800517f8(param_1);
    }
    cVar10 = param_1[0x5e];
    if (cVar10 == '\0') {
      uVar5 = 0xa0;
      if (param_1[3] == '\x01') {
        FUN_80124efc();
        return;
      }
      goto LAB_80112df8;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        thunk_FUN_80124efc();
        return;
      }
      if (DAT_800bf873 != '\0') {
LAB_80112b14:
        param_1[4] = 3;
        thunk_FUN_80124efc();
        return;
      }
      if (DAT_800bf816 != '\0') {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 0x6e;
      *(undefined2 *)(param_1 + 0x82) = 0xdc;
      if (param_1[0x5e] == '\0') {
        uVar5 = 0xa0;
        if (param_1[3] == '\x01') {
          FUN_8011b9d4();
          return;
        }
      }
      else {
        if (param_1[0x5e] != '\x01') {
          func_0x80074590(param_1,0,0xf);
          DAT_1f800137 = 0;
          FUN_801249c8();
          return;
        }
        uVar5 = 0x78;
      }
      *(undefined2 *)(param_1 + 0x84) = uVar5;
      *(short *)(param_1 + 0x86) = *(short *)(param_1 + 0x84);
      func_0x80041194(param_1,(int)*(short *)(param_1 + 0x84) - (int)*(short *)(param_1 + 0x84),1,0)
      ;
      param_4 = (uint *)0x13;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      iVar7 = func_0x80072ddc(param_1,0,3);
      if (iVar7 != 0) {
        *(undefined4 *)(iVar7 + 0x1c) = 0x8011bed0;
        *(undefined1 *)(iVar7 + 3) = 0;
        *(ushort *)(iVar7 + 0x60) = (ushort)(byte)param_1[3];
        *(undefined2 *)(iVar7 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
        *(undefined2 *)(iVar7 + 0x32) = *(undefined2 *)(param_1 + 0x32);
        uVar5 = *(undefined2 *)(param_1 + 0x36);
        *(undefined1 *)(iVar7 + 0x5e) = 0;
        *(undefined2 *)(iVar7 + 0x36) = uVar5;
        *(int *)(param_1 + 0x14) = iVar7;
      }
      if (((int)(uint)DAT_800bf9f4 >> ((byte)param_1[3] & 0x1f) & 1U) != 0) {
        uVar8 = func_0x80133574(0);
        if (*(int *)(param_1 + 0x14) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14) = uVar8;
        }
        goto LAB_80112b14;
      }
      if (((byte)param_1[3] == 6) && ((DAT_800bf9fc & 0x20) == 0)) {
        param_4 = (uint *)0x1c;
        iVar7 = func_0x80072ddc(param_1,1,4);
        if (iVar7 != 0) {
          *(undefined4 *)(iVar7 + 0x1c) = 0x8012ac84;
          *(int *)(param_1 + 0x3c) = iVar7;
        }
      }
      if (param_1[5] != '\x02') {
        iVar7 = func_0x80051b70(param_1,0xc,0xd);
        if (iVar7 != 0) {
          return;
        }
        param_1[0x5e] = 0;
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0xbc) = 0x1000;
        *(undefined2 *)(param_1 + 0xba) = 0x1000;
        *(undefined2 *)(param_1 + 0xb8) = 0x1000;
        param_1[4] = param_1[4] + '\x01';
        param_1[0xd] = 0;
        param_1[0x29] = 0;
        param_1[0x2b] = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0xfc00;
        func_0x8004130c(param_1);
        param_1[0x46] = param_1[0xbe];
        thunk_FUN_80124efc();
        return;
      }
      puVar12 = (uint *)&DAT_0000000c;
      param_3 = (uint *)&DAT_00000026;
      iVar7 = func_0x80051b70(param_1);
      if (iVar7 != 0) {
        return;
      }
      param_1[0x5e] = 1;
      in_at = extraout_at;
LAB_8011bcbc:
      puVar11 = (uint *)(uint)*(ushort *)(param_1 + 0x50);
      uVar3 = _DAT_1f80017c & 0xf;
      *(ushort *)(param_1 + 0x56) = *(short *)(param_1 + 0x5a) + *(ushort *)(param_1 + 0x50);
      if (uVar3 == 0) {
        puVar11 = (uint *)&DAT_0000000d;
        puVar12 = (uint *)&DAT_ffffffe3;
        param_3 = (uint *)0x0;
        func_0x80074590(0xd);
        in_at = extraout_at_00;
      }
      if (unaff_s1 == (undefined4 *)0x0) {
        return;
      }
      param_1[5] = 2;
      *param_1 = 2;
      *(undefined2 *)(param_1 + 0x40) = 0xf;
      *(undefined1 *)(unaff_s2 + 1) = 4;
      *(undefined1 *)((int)unaff_s2 + 5) = 0x24;
      sVar6 = 0;
      *(undefined1 *)((int)unaff_s2 + 6) = 0;
      DAT_800bf81f = 0;
code_r0x80124ce4:
      while( true ) {
        unaff_retaddr = CONCAT22((short)((uint)unaff_retaddr >> 0x10),sVar6 * sVar2);
        sStackX_0 = *(char *)((int)puVar12 + 5) * sVar2;
        sStackX_2 = *(char *)((int)puVar12 + 7) * sVar2;
        sStackX_4 = *(char *)((int)puVar12 + -5) * sVar2;
        uStackX_8 = CONCAT22(*(char *)((int)puVar12 + 10) * sVar2,(char)puVar12[2] * sVar2);
        uStackX_c = CONCAT22(uStackX_c._2_2_,*(char *)((int)puVar12 + -1) * sVar2);
        param_5 = CONCAT22(*(char *)((int)puVar12 + 0xb) * sVar2,*(char *)((int)puVar12 + 9) * sVar2
                          );
        param_6 = CONCAT22(param_6._2_2_,*(char *)((int)puVar12 + 3) * sVar2);
        setCopReg(2,in_zero,unaff_s0);
        setCopReg(2,in_at,unaff_retaddr);
        setCopReg(2,&stack0xfffffff8,*in_t2);
        setCopReg(2,&uStackX_8,in_t2[1]);
        setCopReg(2,puVar11,uStackX_8);
        setCopReg(2,puVar12,uStackX_c);
        copFunction(2,0x280030);
        uVar8 = getCopControlWord(2,0xf800);
        *in_t1 = uVar8;
        if (-1 < in_stack_00000030) {
          uVar9 = getCopReg(2,0xc);
          unaff_s2[2] = uVar9;
          uVar9 = getCopReg(2,0xd);
          unaff_s2[5] = uVar9;
          uVar9 = getCopReg(2,0xe);
          unaff_s2[8] = uVar9;
          setCopReg(2,in_zero,param_5);
          setCopReg(2,in_at,param_6);
          copFunction(2,0x180001);
          uVar8 = getCopControlWord(2,0xf800);
          *in_t1 = uVar8;
          if (-1 < in_stack_00000030) {
            uVar9 = getCopReg(2,0xe);
            unaff_s2[0xb] = uVar9;
            copFunction(2,0x168002e);
            iVar7 = getCopReg(2,7);
            in_stack_00000034 = (iVar7 >> (iVar7 >> 10 & 0x1fU)) + (iVar7 >> 10) * 0x200;
            if (0x7fb < in_stack_00000034 - 4U) {
              in_stack_00000034 = -1;
            }
            iVar7 = in_stack_00000034 + -100;
            if (-1 < in_stack_00000034) {
              in_stack_00000034 = iVar7;
              if (iVar7 < 4) {
                in_stack_00000034 = 4;
              }
              param_3[-0xb] = puVar12[-3] & 0xffffff | 0x3e000000;
              uVar9 = *param_4;
              param_3[-6] = in_t0 & 0x7fffff;
              param_3[-9] = uVar9;
              uVar9 = puVar12[-4];
              param_3[-3] = uVar9;
              *param_3 = (int)uVar9 >> 0x10;
              param_3[-8] = puVar12[-2];
              param_3[-5] = puVar12[-1];
              uVar9 = *puVar12;
              *(char *)(param_3 + -6) = (char)param_3[-6] + unaff_s3;
              *(char *)(param_3 + -9) = (char)param_3[-9] + unaff_s3;
              *(char *)param_3 = (char)*param_3 + unaff_s3;
              param_3[-2] = uVar9;
              *(char *)(param_3 + -3) = (char)param_3[-3] + unaff_s3;
              puVar11 = (uint *)(_DAT_800ed8c8 + in_stack_00000034 * 4);
              *unaff_s2 = *puVar11 | 0xc000000;
              *puVar11 = (uint)unaff_s2;
              param_3 = param_3 + 0xd;
              unaff_s2 = unaff_s2 + 0xd;
            }
          }
        }
        puVar12 = puVar12 + 9;
        param_4 = param_4 + 9;
        if ((int)in_t0 < 1) break;
LAB_80124cb0:
        in_t0 = puVar12[-5];
        unaff_s0 = CONCAT22(*(char *)((int)puVar12 + 6) * sVar2,(char)puVar12[1] * sVar2);
        sVar6 = (short)*(char *)((int)puVar12 + -9);
      }
      uVar3 = *(ushort *)(unaff_s4 + 0x40);
      _DAT_800bf544 = unaff_s2;
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
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        func_0x8007a624(param_1);
        return;
      }
      thunk_FUN_80124efc();
      return;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(param_1[5]) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar10 = param_1[0x5e];
    if (cVar10 == '\0') {
      uVar5 = 0xa0;
      if (param_1[3] == '\x01') {
        uVar5 = 800;
      }
      goto LAB_80112df8;
    }
  }
  uVar5 = 0x78;
  if (cVar10 != '\x01') {
    FUN_8011bd98();
    return;
  }
LAB_80112df8:
  *(undefined2 *)(param_1 + 0x84) = uVar5;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  *(undefined2 *)(param_1 + 0x86) = *(undefined2 *)(param_1 + 0x84);
  thunk_FUN_80124efc();
  return;
}

