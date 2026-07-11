// FUN_80114168

/* WARNING: Control flow encountered bad instruction data */

void FUN_80114168(uint param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint in_t0;
  uint in_t1;
  uint in_t2;
  int unaff_s3;
  uint unaff_s6;
  uint uVar10;
  uint unaff_s8;
  undefined8 uVar11;
  
  iVar3 = 1;
  if (*(char *)(param_1 + 6) == '\0') {
    param_4 = (uint *)0x3;
    *(undefined1 *)(param_1 + 0x5e) = 0;
    FUN_8011de34(param_1,9,0);
    iVar3 = func_0x80077768((uint)*(byte *)(param_1 + 0x2b) << 4,(int)*(short *)(param_1 + 0x56),0);
    if (iVar3 != 0) {
      iVar3 = func_0x80083f50((int)*(short *)(param_1 + 0x56));
      *(short *)(param_1 + 0x48) = (short)(-iVar3 >> 4);
      uVar11 = func_0x80083e80((int)*(short *)(param_1 + 0x56));
      uVar7 = (uint)((ulonglong)uVar11 >> 0x20);
      iVar3 = (int)uVar11 >> 4;
      bVar1 = *(byte *)(param_1 + 5);
      uVar4 = (uint)bVar1;
      uVar6 = iVar3 + 0x7e80;
      if (uVar4 == 1) {
        *(undefined1 *)(param_1 + 5) = 2;
        *(byte *)(param_1 + 0x29) = bVar1;
        DAT_800bf81f = (bVar1 - *(char *)(param_1 + 0x5f)) * '\x10';
LAB_8011d254:
        uVar4 = param_1;
        uVar11 = func_0x80073328();
        uVar7 = (uint)((ulonglong)uVar11 >> 0x20);
        if ((int)uVar11 == 0) {
          return;
        }
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      }
      else if (uVar4 < 2) {
        if (uVar4 == 0) {
          if (*(char *)(iVar3 + 0x7eaa) != *(char *)(param_1 + 0x2a)) {
            return;
          }
          uVar7 = 0x1f800000;
          if (*(char *)(iVar3 + 0x7e85) != '\0') {
            return;
          }
          *(undefined1 *)(param_1 + 5) = 1;
          DAT_1f800137 = 2;
        }
      }
      else {
        if (uVar4 == 2) goto LAB_8011d254;
        if (uVar4 == 3) {
          if (*(char *)(iVar3 + 0x7eaa) == *(char *)(param_1 + 0x2a)) {
            return;
          }
          *(undefined1 *)(param_1 + 5) = 0;
          return;
        }
      }
      unaff_s8 = param_4[1];
      if ((unaff_s6 == uVar6) && (unaff_s6 == unaff_s8)) {
        return;
      }
      uVar5 = uVar7;
      uVar8 = uVar6;
      uVar10 = unaff_s6;
      if ((int)unaff_s6 < (int)uVar6) {
        uVar5 = uVar4;
        uVar4 = uVar7;
        uVar8 = unaff_s6;
        uVar10 = uVar6;
      }
      uVar6 = uVar5;
      uVar7 = uVar8;
      in_t0 = *param_4;
      if ((int)unaff_s8 < (int)uVar8) {
        uVar6 = *param_4;
        uVar7 = unaff_s8;
        in_t0 = uVar5;
        unaff_s8 = uVar8;
      }
      uVar5 = uVar4;
      unaff_s6 = uVar10;
      if ((int)unaff_s8 < (int)uVar10) {
        uVar5 = in_t0;
        in_t0 = uVar4;
        unaff_s6 = unaff_s8;
        unaff_s8 = uVar10;
      }
      in_t1 = uVar5 - uVar6;
      in_t2 = in_t0 - uVar6;
      iVar9 = unaff_s6 - uVar7;
      param_4 = (uint *)(unaff_s8 - uVar7);
      if (unaff_s6 == uVar7) {
        if ((int)uVar5 <= (int)uVar6) {
          thunk_EXT_FUN_8e5a5a58();
          return;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (iVar9 == 0) {
        trap(0x1c00);
      }
      if ((iVar9 == -1) && ((in_t1 & 0xffff) == 0x8000)) {
        trap(0x1800);
      }
      if (unaff_s6 == unaff_s8) {
        FUN_8012f308();
        return;
      }
      goto LAB_8012632c;
    }
    iVar3 = func_0x80083f50((int)*(short *)(param_1 + 0x56));
    *(short *)(param_1 + 0x48) = (short)(iVar3 >> 4);
    iVar3 = func_0x80083e80((int)*(short *)(param_1 + 0x56));
    *(short *)(param_1 + 0x4c) = (short)(-iVar3 >> 4);
    *(undefined2 *)(param_1 + 0x4a) = 0xfe00;
    *(undefined2 *)(param_1 + 0x44) = 0x1000;
    iVar3 = *(byte *)(param_1 + 6) + 1;
    *(char *)(param_1 + 6) = (char)iVar3;
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    iVar3 = (int)*(short *)(param_1 + 0x44);
    in_t1 = *(short *)(param_1 + 0x48) * iVar3;
    *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + in_t1;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * iVar3;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar3;
    func_0x8004766c(param_1);
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x180;
    iVar3 = func_0x800495dc(param_1,0x46,0);
    if (iVar3 == 0) {
      sVar2 = *(short *)(param_1 + 0x4a) + 0x30;
      *(short *)(param_1 + 0x4a) = sVar2;
      if (0x1000 < sVar2) {
        *(undefined2 *)(param_1 + 0x4a) = 0x1000;
      }
      return;
    }
    if (*(char *)(param_1 + 1) != '\0') {
      func_0x80074590(0x1b,0,0);
      func_0x800315d4(param_1 + 0x2c);
    }
    iVar3 = 3;
    *(undefined1 *)(param_1 + 4) = 3;
  }
  bVar1 = *(byte *)(param_1 + 5);
  uVar5 = (uint)bVar1;
  iVar9 = 1;
  uVar7 = iVar3 + 0x7e80;
  if (uVar5 == 1) {
    *(undefined1 *)(param_1 + 5) = 2;
    *(byte *)(param_1 + 0x29) = bVar1;
    DAT_800bf81f = (bVar1 - *(char *)(param_1 + 0x5f)) * '\x10';
  }
  else {
    if (uVar5 < 2) {
      if (uVar5 != 0) {
LAB_8012632c:
        if (unaff_s8 == unaff_s6) {
          trap(0x1c00);
        }
        if ((unaff_s8 - unaff_s6 == -1) && ((in_t0 - uVar5 & 0xffff) == 0x8000)) {
          trap(0x1800);
        }
        if (param_4 == (uint *)0x0) {
          trap(0x1c00);
        }
        if ((param_4 == (uint *)0xffffffff) && ((in_t2 & 0xffff) == 0x8000)) {
          trap(0x1800);
        }
        if ((int)(-(int)param_4 * in_t1 + in_t2 * iVar9) < 1) {
          for (; (int)uVar7 < (int)unaff_s6; uVar7 = uVar7 + 1) {
            if ((-1 < (int)uVar7) && ((int)uVar7 < (int)*(short *)(unaff_s3 + 10))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          for (; (int)uVar7 <= (int)unaff_s8; uVar7 = uVar7 + 1) {
            if ((-1 < (int)uVar7) && ((int)uVar7 < (int)*(short *)(unaff_s3 + 10))) {
              FUN_8012f804();
              return;
            }
          }
        }
        else {
          for (; (int)uVar7 < (int)unaff_s6; uVar7 = uVar7 + 1) {
            if ((-1 < (int)uVar7) && ((int)uVar7 < (int)*(short *)(unaff_s3 + 10))) {
              FUN_8012f468();
              return;
            }
          }
          if ((int)uVar7 <= (int)unaff_s8) {
            while (((int)uVar7 < 0 || ((int)*(short *)(unaff_s3 + 10) <= (int)uVar7))) {
              uVar7 = uVar7 + 1;
              if ((int)unaff_s8 < (int)uVar7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        return;
      }
      if ((*(char *)(iVar3 + 0x7eaa) == *(char *)(param_1 + 0x2a)) &&
         (*(char *)(iVar3 + 0x7e85) == '\0')) {
        *(undefined1 *)(param_1 + 5) = 1;
        DAT_1f800137 = 2;
        FUN_80126328();
        return;
      }
      goto LAB_8011d390;
    }
    if (uVar5 != 2) {
      if (uVar5 == 3) {
        if (*(char *)(iVar3 + 0x7eaa) != *(char *)(param_1 + 0x2a)) {
          *(undefined1 *)(param_1 + 5) = 0;
        }
        goto LAB_8011d390;
      }
      goto LAB_8012632c;
    }
  }
  iVar3 = func_0x80073328(param_1);
  if (iVar3 != 0) {
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    FUN_80126328();
    return;
  }
LAB_8011d390:
  if (DAT_800bf873 == '\0') {
    func_0x800735f4(param_1,0x48);
  }
  return;
}

