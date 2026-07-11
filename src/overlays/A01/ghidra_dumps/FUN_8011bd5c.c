// FUN_8011bd5c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011bd5c(undefined1 *param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 extraout_at;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  uint in_t0;
  undefined4 *in_t1;
  undefined4 *in_t2;
  undefined4 uVar10;
  undefined4 unaff_s1;
  uint *puVar11;
  char unaff_s3;
  int unaff_s4;
  undefined4 uStackX_0;
  undefined4 uStackX_4;
  undefined4 uStackX_8;
  undefined4 uStackX_c;
  int in_stack_00000028;
  uint in_stack_0000002c;
  
  bVar2 = param_1[5];
  puVar11 = (uint *)0x1;
  puVar8 = (uint *)&DAT_800e7e80;
  if (bVar2 == 1) {
    iVar6 = func_0x80072f14(param_1);
    if (iVar6 != 0) {
      *param_1 = 1;
      param_1[5] = param_1[5] + '\x01';
      DAT_800bf871 = 1;
      FUN_80124efc();
      return;
    }
  }
  else {
    if (bVar2 < 2) {
      if (bVar2 != 0) {
        FUN_80124efc();
        return;
      }
      if (DAT_800bf871 != '\x06') {
        param_1[5] = 2;
        FUN_80124efc();
        return;
      }
      *param_1 = 2;
      param_1[5] = 1;
      *(undefined2 *)(param_1 + 0x50) = 0x400;
      func_0x80072efc();
      FUN_80124efc();
      return;
    }
    if (bVar2 == 2) {
      if (((param_1[0x29] != '\0') && (DAT_800e7ea9 != '\0')) && (DAT_800e7ffb == '\0')) {
        param_1[5] = 3;
        DAT_1f800137 = bVar2;
        param_1[0xd] = param_1[0xd] | 4;
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0xd0;
        FUN_80124efc();
        return;
      }
    }
    else {
      if (bVar2 != 3) {
        FUN_80124efc();
        return;
      }
      uVar5 = (uint)(byte)param_1[0x46];
      bVar1 = false;
      if (uVar5 == 0) {
        sVar3 = *(short *)(param_1 + 0x50);
        *(short *)(param_1 + 0x50) = sVar3 + -0x10;
        iVar6 = -0x300;
        if ((short)(sVar3 + -0x10) < -0x300) {
          *(undefined2 *)(param_1 + 0x50) = 0xfd00;
          iVar7 = 3;
          goto LAB_80124e8c;
        }
      }
      else {
        if (uVar5 != 1) {
          do {
            if (0x7fb < uVar5 - 4) {
              in_stack_0000002c = 0xffffffff;
            }
            bVar1 = -1 < (int)in_stack_0000002c;
            in_stack_0000002c = in_stack_0000002c - 100;
            piVar9 = param_2;
            if (bVar1) {
              if ((int)in_stack_0000002c < 4) {
                in_stack_0000002c = 4;
              }
              param_3[-0xb] = param_2[-3] & 0xffffffU | 0x3e000000;
              iVar6 = *param_4;
              param_3[-6] = in_t0 & 0x7fffff;
              param_3[-9] = iVar6;
              iVar6 = param_2[-4];
              param_3[-3] = iVar6;
              *param_3 = iVar6 >> 0x10;
              param_3[-8] = param_2[-2];
              param_3[-5] = param_2[-1];
              iVar6 = *param_2;
              *(char *)(param_3 + -6) = (char)param_3[-6] + unaff_s3;
              *(char *)(param_3 + -9) = (char)param_3[-9] + unaff_s3;
              *(char *)param_3 = (char)*param_3 + unaff_s3;
              param_3[-2] = iVar6;
              *(char *)(param_3 + -3) = (char)param_3[-3] + unaff_s3;
              puVar8 = (uint *)(_DAT_800ed8c8 + in_stack_0000002c * 4);
              *puVar11 = *puVar8 | 0xc000000;
              *puVar8 = (uint)puVar11;
              param_3 = param_3 + 0xd;
              puVar11 = puVar11 + 0xd;
            }
            do {
              do {
                param_2 = piVar9 + 9;
                param_4 = param_4 + 9;
                if ((int)in_t0 < 1) {
                  uVar4 = *(ushort *)(unaff_s4 + 0x40);
                  _DAT_800bf544 = puVar11;
                  func_0x800329e0(6);
                  setCopReg(2,in_zero,*(undefined4 *)(unaff_s4 + 0x60));
                  setCopReg(2,extraout_at,*(undefined4 *)(unaff_s4 + 100));
                  iVar6 = func_0x800317cc(0);
                  if (iVar6 == 0) {
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
                    func_0x800328ec(*(undefined4 *)
                                     (((int)((uint)uVar4 << 0x10) >> 0x18) * 4 + -0x7fec7870));
                  }
                  return;
                }
                sVar3 = (short)param_1;
                in_t0 = piVar9[4];
                unaff_s1 = CONCAT22((short)((uint)unaff_s1 >> 0x10),
                                    *(char *)((int)piVar9 + 0x1b) * sVar3);
                uStackX_0 = CONCAT22(*(char *)((int)piVar9 + 0x2e) * sVar3,(char)piVar9[0xb] * sVar3
                                    );
                uStackX_4 = CONCAT22(uStackX_4._2_2_,*(char *)((int)piVar9 + 0x23) * sVar3);
                uStackX_8 = CONCAT22(*(char *)((int)piVar9 + 0x2f) * sVar3,
                                     *(char *)((int)piVar9 + 0x2d) * sVar3);
                uStackX_c = CONCAT22(uStackX_c._2_2_,*(char *)((int)piVar9 + 0x27) * sVar3);
                setCopReg(2,in_zero,
                          CONCAT22(*(char *)((int)piVar9 + 0x2a) * sVar3,(char)piVar9[10] * sVar3));
                setCopReg(2,in_at,unaff_s1);
                setCopReg(2,&stack0xfffffff0,*in_t2);
                setCopReg(2,&uStackX_0,in_t2[1]);
                setCopReg(2,puVar8,uStackX_0);
                setCopReg(2,param_2,uStackX_4);
                copFunction(2,0x280030);
                uVar10 = getCopControlWord(2,0xf800);
                *in_t1 = uVar10;
                piVar9 = param_2;
              } while (in_stack_00000028 < 0);
              uVar5 = getCopReg(2,0xc);
              puVar11[2] = uVar5;
              uVar5 = getCopReg(2,0xd);
              puVar11[5] = uVar5;
              uVar5 = getCopReg(2,0xe);
              puVar11[8] = uVar5;
              setCopReg(2,in_zero,uStackX_8);
              setCopReg(2,in_at,uStackX_c);
              copFunction(2,0x180001);
              uVar10 = getCopControlWord(2,0xf800);
              *in_t1 = uVar10;
            } while (in_stack_00000028 < 0);
            uVar5 = getCopReg(2,0xe);
            puVar11[0xb] = uVar5;
            copFunction(2,0x168002e);
            iVar7 = getCopReg(2,7);
            iVar6 = iVar7 >> (iVar7 >> 10 & 0x1fU);
            iVar7 = (iVar7 >> 10) << 9;
LAB_80124e8c:
            uVar5 = iVar6 + iVar7;
            in_stack_0000002c = uVar5;
          } while( true );
        }
        sVar3 = *(short *)(param_1 + 0x50);
        *(short *)(param_1 + 0x50) = sVar3 + 0x10;
        if (0x300 < (short)(sVar3 + 0x10)) {
          *(undefined2 *)(param_1 + 0x50) = 0x300;
          bVar1 = true;
        }
      }
      uVar4 = _DAT_1f80017c & 0xf;
      *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x5a) + *(short *)(param_1 + 0x50);
      if (uVar4 == 0) {
        func_0x80074590(0xd,0xffffffe3,0);
      }
      if (bVar1) {
        param_1[5] = param_1[5] + '\x01';
        DAT_1f800236 = 1;
        DAT_800bf839 = 1;
        DAT_800bf80f = 2;
        _DAT_800bf83a = 0x1000;
      }
    }
  }
  return;
}

