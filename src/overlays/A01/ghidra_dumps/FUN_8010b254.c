// FUN_8010b254

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8010b254(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_t0;
  int in_t1;
  uint in_t2;
  int iVar10;
  int unaff_s3;
  int unaff_s6;
  undefined1 *puVar11;
  int unaff_s8;
  undefined4 uVar12;
  int in_lo;
  undefined1 auStack_30 [24];
  undefined1 auStack_18 [16];
  
  puVar11 = auStack_18;
  uVar12 = 0x8010b268;
  func_0x8007778c();
  bVar1 = *(byte *)(param_1 + 5);
  iVar8 = 1;
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 5) = 2;
    func_0x8006e1c0();
    _DAT_800e8074 = 0x578;
    _DAT_800e8076 = 0x100;
    _DAT_800e8078 = 0x400;
    _DAT_800e8042 = *(undefined2 *)(param_1 + 0x2e);
    _DAT_800e8046 = *(undefined2 *)(param_1 + 0x32);
    _DAT_800e804a = *(undefined2 *)(param_1 + 0x36);
LAB_8010b330:
    uVar12 = 0x8010b338;
    iVar8 = param_1;
    iVar9 = FUN_80114018(param_1);
    if (iVar9 == 0) {
LAB_8010b3bc:
      uVar6 = 0;
      if (*(char *)(param_1 + 1) != '\0') {
        uVar6 = func_0x800517f8(param_1);
      }
      return uVar6;
    }
    uVar6 = *(byte *)(param_1 + 5) + 1;
    *(char *)(param_1 + 5) = (char)uVar6;
  }
  else {
    uVar6 = 2;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (*(char *)(param_1 + 3) == '\x01') {
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + in_t1;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_3;
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + in_lo;
          func_0x8004766c();
          *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x180;
          iVar8 = func_0x800495dc(param_1,0x46,0);
          if (iVar8 == 0) {
            sVar5 = *(short *)(param_1 + 0x4a) + 0x30;
            *(short *)(param_1 + 0x4a) = sVar5;
            if (0x1000 < sVar5) {
              *(undefined2 *)(param_1 + 0x4a) = 0x1000;
            }
            return 0x1000;
          }
          if (*(char *)(param_1 + 1) != '\0') {
            func_0x80074590(0x1b,0,0);
            func_0x800315d4(param_1 + 0x2c);
          }
          *(undefined1 *)(param_1 + 4) = 3;
          bVar1 = *(byte *)(param_1 + 5);
          uVar6 = (uint)bVar1;
          iVar8 = 0x7e83;
          if (uVar6 == 1) {
            *(undefined1 *)(param_1 + 5) = 2;
            *(byte *)(param_1 + 0x29) = bVar1;
            DAT_800bf81f = (bVar1 - *(char *)(param_1 + 0x5f)) * '\x10';
          }
          else {
            if (uVar6 < 2) {
              if (uVar6 != 0) {
LAB_8012632c:
                if (unaff_s8 == unaff_s6) {
                  trap(0x1c00);
                }
                if ((unaff_s8 - unaff_s6 == -1) && ((in_t0 - uVar6 & 0xffff) == 0x8000)) {
                  trap(0x1800);
                }
                if (param_4 == 0) {
                  trap(0x1c00);
                }
                if ((param_4 == -1) && ((in_t2 & 0xffff) == 0x8000)) {
                  trap(0x1800);
                }
                if ((int)(-param_4 * in_t1 + in_t2) < 1) {
                  bVar2 = unaff_s8 < 0x7e83;
                  if (0x7e83 < unaff_s6) {
                    do {
                      if ((-1 < iVar8) && (iVar8 < *(short *)(unaff_s3 + 10))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                        halt_baddata();
                      }
                      iVar8 = iVar8 + 1;
                    } while (iVar8 < unaff_s6);
                    bVar2 = unaff_s8 < iVar8;
                  }
                  uVar6 = 0x800c0000;
                  if (!bVar2) {
                    do {
                      if ((-1 < iVar8) && (iVar8 < *(short *)(unaff_s3 + 10))) {
                        uVar6 = FUN_8012f804();
                        return uVar6;
                      }
                      iVar8 = iVar8 + 1;
                      uVar6 = (uint)(unaff_s8 < iVar8);
                    } while (uVar6 == 0);
                  }
                }
                else {
                  bVar2 = unaff_s8 < 0x7e83;
                  if (0x7e83 < unaff_s6) {
                    do {
                      if ((-1 < iVar8) && (iVar8 < *(short *)(unaff_s3 + 10))) {
                        uVar6 = FUN_8012f468();
                        return uVar6;
                      }
                      iVar8 = iVar8 + 1;
                    } while (iVar8 < unaff_s6);
                    bVar2 = unaff_s8 < iVar8;
                  }
                  uVar6 = 0x800c0000;
                  if (!bVar2) {
                    while ((iVar8 < 0 || (*(short *)(unaff_s3 + 10) <= iVar8))) {
                      iVar8 = iVar8 + 1;
                      if (unaff_s8 < iVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                        halt_baddata();
                      }
                    }
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                }
                return uVar6;
              }
              if ((DAT_00007ead == *(char *)(param_1 + 0x2a)) && (DAT_00007e88 == '\0')) {
                *(undefined1 *)(param_1 + 5) = 1;
                DAT_1f800137 = 2;
                uVar6 = FUN_80126328();
                return uVar6;
              }
              goto LAB_8011d390;
            }
            if (uVar6 != 2) {
              if (uVar6 != 3) goto LAB_8012632c;
              if (DAT_00007ead != *(char *)(param_1 + 0x2a)) {
                *(undefined1 *)(param_1 + 5) = 0;
              }
              goto LAB_8011d390;
            }
          }
          iVar8 = func_0x80073328(param_1);
          if (iVar8 != 0) {
            *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
            uVar6 = FUN_80126328();
            return uVar6;
          }
LAB_8011d390:
          uVar6 = (uint)DAT_800bf873;
          if (uVar6 == 0) {
            uVar6 = func_0x800735f4(param_1,0x48);
          }
          return uVar6;
        }
        uVar6 = DAT_800bf9fd & 2;
        if ((DAT_800bf9fd & 2) == 0) goto LAB_8010b3bc;
        *(undefined1 *)(param_1 + 5) = 1;
      }
    }
    else {
      uVar6 = 3;
      if (bVar1 == 2) goto LAB_8010b330;
      if (bVar1 == 3) {
        *(undefined1 *)(param_1 + 4) = 3;
        if (*(char *)(param_1 + 3) == '\x01') {
          uVar6 = FUN_80114328();
          return uVar6;
        }
        bVar3 = DAT_800bf9fd | 8;
        bVar1 = DAT_800bf9fd & 0xc;
        DAT_800bf9fd = bVar3;
        if ((bVar1 | 8) != 0xc) {
          func_0x80042310();
          func_0x8006e1e4();
        }
        goto LAB_8010b3bc;
      }
    }
  }
  uVar4 = 0;
  if (uVar6 != 0) {
    *(undefined4 *)(unaff_s3 + 0x10) = 0;
    *(undefined2 *)(unaff_s3 + 0x74) = 0;
    puVar11 = auStack_18;
    goto LAB_8011d524;
  }
  sVar5 = *(short *)(unaff_s3 + 0x74);
  if (sVar5 == 1) {
    if (900 < (int)(((uint)*(ushort *)(unaff_s3 + 0x32) - (*(ushort *)(param_1 + 0x32) - 0x46)) *
                   0x10000) >> 0x10) {
      return 0;
    }
    *(undefined2 *)(unaff_s3 + 0x74) = 0;
    uVar6 = FUN_8011d518();
    return uVar6;
  }
  if (1 < sVar5) {
    uVar4 = 0;
    puVar11 = auStack_18;
    if (sVar5 != 2) goto LAB_8011d524;
    iVar8 = (int)(((uint)*(ushort *)(unaff_s3 + 0x2e) - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000
                 ) >> 0x10;
    iVar8 = iVar8 * iVar8;
    iVar9 = (int)(((uint)*(ushort *)(unaff_s3 + 0x36) - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000
                 ) >> 0x10;
    if (640000 < iVar8 + iVar9 * iVar9) {
      return 0;
    }
    *(undefined2 *)(unaff_s3 + 0x74) = 0;
LAB_8011457c:
    uVar4 = 0;
    puVar11 = auStack_18;
    goto LAB_8011d524;
  }
  uVar4 = 0;
  if (sVar5 != 0) goto LAB_8011d524;
  uVar12 = 0x801143b4;
  param_1 = FUN_8011dd38();
  if (param_1 == 0) {
    return 0;
  }
  *(int *)(unaff_s3 + 0x10) = param_1;
  uVar6 = (uint)*(ushort *)(unaff_s3 + 0x32) - (*(ushort *)(param_1 + 0x32) - 0x46);
  if ((int)*(short *)(unaff_s3 + 0x6e) < (int)(uVar6 & 0xffff)) {
LAB_801144ec:
    uVar4 = 0xffff;
    *(undefined2 *)(unaff_s3 + 0x74) = 0xffff;
  }
  else {
    iVar9 = (uint)*(ushort *)(unaff_s3 + 0x2e) - (uint)*(ushort *)(param_1 + 0x2e);
    iVar8 = (uint)*(ushort *)(unaff_s3 + 0x36) - (uint)*(ushort *)(param_1 + 0x36);
    if (*(char *)(param_1 + 0x46) != '\b') {
      if ((int)(uVar6 * 0x10000) >> 0x10 < 0x2a9) {
        iVar10 = iVar8 * 0x10000 >> 0x10;
        iVar7 = iVar9 * 0x10000 >> 0x10;
        sVar5 = func_0x80085690(iVar10,iVar7);
        iVar8 = (int)*(short *)(param_1 + 0x56);
        uVar12 = 0x801144ac;
        iVar9 = func_0x80077768(iVar8,(int)-sVar5,1);
        if (iVar9 != 0) {
          uVar4 = 0;
          if (iVar7 * iVar7 + iVar10 * iVar10 < 0x9c401) goto LAB_8011457c;
          *(undefined2 *)(unaff_s3 + 0x74) = 2;
          goto LAB_8011d520;
        }
      }
      goto LAB_801144ec;
    }
    iVar9 = iVar9 * 0x10000 >> 0x10;
    iVar7 = iVar8 * 0x10000 >> 0x10;
    if (40000 < iVar9 * iVar9 + iVar7 * iVar7) goto LAB_801144ec;
    if ((int)(uVar6 * 0x10000) >> 0x10 < 0x385) {
      return 1;
    }
    uVar4 = *(short *)(unaff_s3 + 0x74) + 1;
    *(ushort *)(unaff_s3 + 0x74) = uVar4;
  }
LAB_8011d520:
  puVar11 = auStack_30;
LAB_8011d524:
  *(int *)(puVar11 + 0x10) = param_1;
  *(undefined4 *)(puVar11 + 0x14) = uVar12;
  if ((uVar4 & 4) != 0) {
    func_0x80073328();
  }
  uVar6 = func_0x800735f4(iVar8,0x67);
  return uVar6;
}

