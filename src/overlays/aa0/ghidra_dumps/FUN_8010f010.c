// FUN_8010f010

void FUN_8010f010(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
  undefined8 uVar6;
  int iStackX_0;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    iVar3 = func_0x8005308c();
    if (iVar3 == 0) {
      return;
    }
    func_0x80040cdc(param_1,0,0x80148574);
    *(undefined1 *)(param_1 + 0x70) = 2;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
LAB_801180bc:
    iVar5 = 1;
    func_0x80042354();
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (*(char *)(param_1 + 0x70) != -1) {
          func_0x80041098(param_1);
          return;
        }
        *(undefined1 *)(param_1 + 4) = 3;
      }
      goto LAB_801180bc;
    }
    if (bVar1 != 0) goto LAB_801180bc;
    func_0x8004d4f4(0x28,1);
    func_0x8004ed94(0x2d,0x42);
    func_0x8004b0d8(param_1);
    iVar5 = 0;
    iVar3 = func_0x8004bd04(param_1,0,0);
    if (iVar3 != 0) {
      func_0x8004bea8(0x28,iVar3);
      iVar5 = 1;
      func_0x80042354();
      DAT_800bf9dc = DAT_800bf9dc | 1;
    }
    sVar2 = FUN_80126c00(param_1);
    if (sVar2 == 0) goto LAB_801180d4;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    if (*(int *)(param_1 + 0x1c) == 0) goto LAB_801180bc;
  }
  *(undefined4 *)(param_1 + 0x1c) = 1;
LAB_801180d4:
  if (DAT_1f800137 != '\0') {
    return;
  }
  iVar3 = param_1;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar4 = FUN_801210d8(param_1);
    if (iVar4 == 0) {
      return;
    }
    uVar6 = FUN_801218a0();
  }
  else {
    uVar6 = FUN_8012128c();
  }
  while( true ) {
    *(short *)(iVar5 + 0x60) = (short)iVar3;
    *(short *)(unaff_s4 + (int)uVar6 + 0x60) = (short)param_1;
    *(short *)(unaff_s4 + ((int)((ulonglong)uVar6 >> 0x20) << 2 | 2U) + 0x60) = (short)iVar3;
    if (3 < unaff_s2) break;
    param_1 = iStackX_0 -
              ((int)((ulonglong)((longlong)(unaff_s8 * unaff_s2) * (longlong)unaff_s7) >> 0x20) -
              (unaff_s8 * unaff_s2 >> 0x1f));
    iVar3 = func_0x80083e80((int)((ulonglong)((longlong)(unaff_s2 << 10) * (longlong)unaff_s7) >>
                                 0x20) - ((unaff_s2 << 10) >> 0x1f));
    iVar5 = unaff_s4 + unaff_s6;
    sVar2 = *(short *)(unaff_s4 + 0x32);
    unaff_s6 = unaff_s6 + 4;
    *(short *)(unaff_s5 + 0x60) =
         unaff_s0 +
         ((short)((ulonglong)((longlong)unaff_s3 * (longlong)unaff_s7) >> 0x20) -
         (short)(unaff_s3 >> 0x1f));
    unaff_s5 = unaff_s5 + 4;
    unaff_s3 = unaff_s3 + unaff_retaddr;
    iVar4 = 7 - unaff_s2;
    unaff_s2 = unaff_s2 + 1;
    iVar3 = (int)sVar2 + ((short)in_t0 * iVar3 >> 0xc);
    uVar6 = CONCAT44(iVar4,iVar4 * 4);
  }
  return;
}

