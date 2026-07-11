// FUN_8011d1a4

/* WARNING: Control flow encountered bad instruction data */

void FUN_8011d1a4(uint param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  byte bVar1;
  uint in_v1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int unaff_s3;
  undefined1 *unaff_s6;
  undefined1 *puVar10;
  undefined8 uVar11;
  
  bVar1 = *(byte *)(param_1 + 5);
  uVar4 = (uint)bVar1;
  puVar5 = &DAT_800e7e80;
  if (uVar4 == 1) {
    *(undefined1 *)(param_1 + 5) = 2;
    *(byte *)(param_1 + 0x29) = bVar1;
    DAT_800bf81f = (bVar1 - *(char *)(param_1 + 0x5f)) * '\x10';
  }
  else {
    if (uVar4 < 2) {
      if (uVar4 == 0) {
        if (DAT_800e7eaa != *(char *)(param_1 + 0x2a)) {
          return;
        }
        in_v1 = 0x1f800000;
        if (DAT_800e7e85 != '\0') {
          return;
        }
        *(undefined1 *)(param_1 + 5) = 1;
        DAT_1f800137 = 2;
      }
      goto LAB_8012622c;
    }
    if (uVar4 != 2) {
      if (uVar4 == 3) {
        if (DAT_800e7eaa == *(char *)(param_1 + 0x2a)) {
          return;
        }
        *(undefined1 *)(param_1 + 5) = 0;
        return;
      }
      goto LAB_8012622c;
    }
  }
  uVar4 = param_1;
  uVar11 = func_0x80073328();
  in_v1 = (uint)((ulonglong)uVar11 >> 0x20);
  if ((int)uVar11 == 0) {
    return;
  }
  *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
LAB_8012622c:
  puVar10 = (undefined1 *)param_4[1];
  if ((unaff_s6 != puVar5) || (unaff_s6 != puVar10)) {
    uVar2 = in_v1;
    puVar6 = puVar5;
    if ((int)unaff_s6 < (int)puVar5) {
      uVar2 = uVar4;
      uVar4 = in_v1;
      puVar6 = unaff_s6;
      unaff_s6 = puVar5;
    }
    uVar3 = uVar2;
    puVar5 = puVar6;
    uVar9 = *param_4;
    if ((int)puVar10 < (int)puVar6) {
      uVar3 = *param_4;
      puVar5 = puVar10;
      uVar9 = uVar2;
      puVar10 = puVar6;
    }
    uVar2 = uVar4;
    puVar6 = unaff_s6;
    if ((int)puVar10 < (int)unaff_s6) {
      uVar2 = uVar9;
      uVar9 = uVar4;
      puVar6 = puVar10;
      puVar10 = unaff_s6;
    }
    iVar7 = (int)puVar6 - (int)puVar5;
    iVar8 = (int)puVar10 - (int)puVar5;
    if (puVar6 == puVar5) {
      if ((int)uVar2 <= (int)uVar3) {
        thunk_EXT_FUN_8e5a5a58();
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar7 == 0) {
      trap(0x1c00);
    }
    if ((iVar7 == -1) && ((uVar2 - uVar3 & 0xffff) == 0x8000)) {
      trap(0x1800);
    }
    if (puVar6 == puVar10) {
      FUN_8012f308();
      return;
    }
    if (puVar10 == puVar6) {
      trap(0x1c00);
    }
    if (((int)puVar10 - (int)puVar6 == -1) && ((uVar9 - uVar2 & 0xffff) == 0x8000)) {
      trap(0x1800);
    }
    if (iVar8 == 0) {
      trap(0x1c00);
    }
    if ((iVar8 == -1) && ((uVar9 - uVar3 & 0xffff) == 0x8000)) {
      trap(0x1800);
    }
    if ((int)(-iVar8 * (uVar2 - uVar3) + (uVar9 - uVar3) * iVar7) < 1) {
      for (; (int)puVar5 < (int)puVar6; puVar5 = puVar5 + 1) {
        if ((-1 < (int)puVar5) && ((int)puVar5 < (int)*(short *)(unaff_s3 + 10))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      for (; (int)puVar5 <= (int)puVar10; puVar5 = puVar5 + 1) {
        if ((-1 < (int)puVar5) && ((int)puVar5 < (int)*(short *)(unaff_s3 + 10))) {
          FUN_8012f804();
          return;
        }
      }
    }
    else {
      for (; (int)puVar5 < (int)puVar6; puVar5 = puVar5 + 1) {
        if ((-1 < (int)puVar5) && ((int)puVar5 < (int)*(short *)(unaff_s3 + 10))) {
          FUN_8012f468();
          return;
        }
      }
      if ((int)puVar5 <= (int)puVar10) {
        while (((int)puVar5 < 0 || ((int)*(short *)(unaff_s3 + 10) <= (int)puVar5))) {
          puVar5 = puVar5 + 1;
          if ((int)puVar10 < (int)puVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return;
}

