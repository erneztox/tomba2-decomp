// FUN_80117fa0

void FUN_80117fa0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_t0;
  short unaff_s0;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  short unaff_s8;
  int unaff_retaddr;
  ulonglong uVar7;
  int iStackX_0;
  
  uVar4 = (uint)*(byte *)(param_1 + 4);
  iVar6 = param_1;
  if (uVar4 != 1) {
    if (uVar4 < 2 == 0) {
      uVar3 = (uint)(uVar4 < 4);
      iVar5 = param_1;
      if (uVar3 != 0) goto LAB_801210c0;
      return;
    }
    iVar5 = 0;
    uVar7 = (ulonglong)(uint)(uVar4 < 2);
    if (uVar4 == 0) {
      *(undefined1 *)(param_1 + 3) = 0xff;
      *(undefined2 *)(param_1 + 8) = 0xffff;
      iVar2 = 0;
      do {
        *(undefined4 *)(param_1 + (iVar2 >> 0xe) + 0xc) = 0;
        iVar5 = iVar5 + 1;
        iVar2 = iVar5 * 0x10000;
      } while (iVar5 * 0x10000 >> 0x10 < 9);
      iVar2 = *(byte *)(param_1 + 4) + 1;
      uVar7 = CONCAT44(iVar5,iVar2);
      *(char *)(param_1 + 4) = (char)iVar2;
    }
    goto LAB_801210c8;
  }
  FUN_8012138c(param_1);
  if ((*(int *)(param_1 + 0x18) == 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    iVar5 = *(int *)(param_1 + 0x24);
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      func_0x80042310();
      goto LAB_8011807c;
    }
LAB_8011808c:
    *(int *)(param_1 + 0x24) = iVar5 + -1;
    if (iVar5 + -1 == 0) goto LAB_80118094;
  }
  else {
LAB_8011807c:
    iVar5 = *(int *)(param_1 + 0x24);
    if (iVar5 != 0) goto LAB_8011808c;
LAB_80118094:
    sVar1 = FUN_80126c00(param_1);
    if (sVar1 != 0) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      if (*(int *)(param_1 + 0x1c) == 0) {
        param_2 = 1;
        func_0x80042354();
      }
      *(undefined4 *)(param_1 + 0x1c) = 1;
    }
  }
  if (DAT_1f800137 != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar5 = FUN_801210d8(param_1);
    if (iVar5 == 0) {
      return;
    }
    uVar7 = FUN_801218a0();
  }
  else {
    uVar7 = FUN_8012128c();
  }
LAB_801210c8:
  while( true ) {
    *(short *)(param_2 + 0x60) = (short)iVar6;
    *(short *)(unaff_s4 + (int)uVar7 + 0x60) = (short)param_1;
    *(short *)(unaff_s4 + ((int)(uVar7 >> 0x20) << 2 | 2U) + 0x60) = (short)iVar6;
    if (3 < unaff_s2) break;
    iVar6 = unaff_s8 * unaff_s2;
    iVar5 = func_0x80083e80((int)((ulonglong)((longlong)(unaff_s2 << 10) * (longlong)unaff_s7) >>
                                 0x20) - ((unaff_s2 << 10) >> 0x1f));
    param_2 = unaff_s4 + unaff_s6;
    param_1 = (int)*(short *)(unaff_s4 + 0x32);
    unaff_s6 = unaff_s6 + 4;
    *(short *)(unaff_s5 + 0x60) =
         unaff_s0 +
         ((short)((ulonglong)((longlong)unaff_s3 * (longlong)unaff_s7) >> 0x20) -
         (short)(unaff_s3 >> 0x1f));
    unaff_s5 = unaff_s5 + 4;
    unaff_s3 = unaff_s3 + unaff_retaddr;
    uVar4 = 7 - unaff_s2;
    unaff_s2 = unaff_s2 + 1;
    uVar3 = (short)in_t0 * iVar5 >> 0xc;
    iVar5 = iStackX_0 -
            ((int)((ulonglong)((longlong)iVar6 * (longlong)unaff_s7) >> 0x20) - (iVar6 >> 0x1f));
LAB_801210c0:
    uVar7 = CONCAT44(uVar4,uVar4 << 2);
    iVar6 = param_1 + uVar3;
    param_1 = iVar5;
  }
  return;
}

