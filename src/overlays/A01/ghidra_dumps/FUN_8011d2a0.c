// FUN_8011d2a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_8011d2a0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ushort uVar4;
  undefined1 *puVar5;
  short in_t0;
  int in_t1;
  uint in_t2;
  int unaff_s3;
  int unaff_s6;
  int unaff_s8;
  
  bVar1 = *(byte *)(param_1 + 5);
  uVar4 = (ushort)bVar1;
  puVar5 = &DAT_800e7e80;
  if (uVar4 == 1) {
    *(undefined1 *)(param_1 + 5) = 2;
    *(byte *)(param_1 + 0x29) = bVar1;
    DAT_800bf81f = (bVar1 - *(char *)(param_1 + 0x5f)) * '\x10';
  }
  else {
    if (uVar4 < 2) {
      if (uVar4 != 0) {
LAB_8012632c:
        if (unaff_s8 == unaff_s6) {
          trap(0x1c00);
        }
        if ((unaff_s8 - unaff_s6 == -1) && ((ushort)(in_t0 - uVar4) == -0x8000)) {
          trap(0x1800);
        }
        if (param_4 == 0) {
          trap(0x1c00);
        }
        if ((param_4 == -1) && ((in_t2 & 0xffff) == 0x8000)) {
          trap(0x1800);
        }
        if ((int)(-param_4 * in_t1 + in_t2) < 1) {
          bVar2 = unaff_s8 < -0x7ff18180;
          if (-0x7ff18180 < unaff_s6) {
            do {
              if ((-1 < (int)puVar5) && ((int)puVar5 < (int)*(short *)(unaff_s3 + 10))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              puVar5 = puVar5 + 1;
            } while ((int)puVar5 < unaff_s6);
            bVar2 = unaff_s8 < (int)puVar5;
          }
          if (!bVar2) {
            do {
              if ((-1 < (int)puVar5) && ((int)puVar5 < (int)*(short *)(unaff_s3 + 10))) {
                FUN_8012f804();
                return;
              }
              puVar5 = puVar5 + 1;
            } while ((int)puVar5 <= unaff_s8);
          }
        }
        else {
          bVar2 = unaff_s8 < -0x7ff18180;
          if (-0x7ff18180 < unaff_s6) {
            do {
              if ((-1 < (int)puVar5) && ((int)puVar5 < (int)*(short *)(unaff_s3 + 10))) {
                FUN_8012f468();
                return;
              }
              puVar5 = puVar5 + 1;
            } while ((int)puVar5 < unaff_s6);
            bVar2 = unaff_s8 < (int)puVar5;
          }
          if (!bVar2) {
            while (((int)puVar5 < 0 || ((int)*(short *)(unaff_s3 + 10) <= (int)puVar5))) {
              puVar5 = puVar5 + 1;
              if (unaff_s8 < (int)puVar5) {
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
      if ((DAT_800e7eaa == *(char *)(param_1 + 0x2a)) && (DAT_800e7e85 == '\0')) {
        *(undefined1 *)(param_1 + 5) = 1;
        DAT_1f800137 = 2;
        FUN_80126328();
        return;
      }
      goto LAB_8011d390;
    }
    if (uVar4 != 2) {
      if (uVar4 != 3) goto LAB_8012632c;
      if (DAT_800e7eaa != *(char *)(param_1 + 0x2a)) {
        *(undefined1 *)(param_1 + 5) = 0;
      }
      goto LAB_8011d390;
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

