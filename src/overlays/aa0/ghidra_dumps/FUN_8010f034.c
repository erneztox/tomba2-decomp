// FUN_8010f034

void FUN_8010f034(void)

{
  short sVar1;
  int iVar2;
  int in_v1;
  int iVar3;
  int iVar4;
  undefined4 in_t0;
  int unaff_s0;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  short unaff_s8;
  undefined8 uVar5;
  short in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  
  if (in_v1 == 0) {
    func_0x8004d4f4(0x28,1);
    func_0x8004ed94(0x2d,0x42);
    func_0x8004b0d8();
    iVar4 = 0;
    iVar2 = func_0x8004bd04();
    if (iVar2 != 0) {
      func_0x8004bea8(0x28,iVar2);
      iVar4 = 1;
      func_0x80042354();
      DAT_800bf9dc = DAT_800bf9dc | 1;
    }
    sVar1 = FUN_80126c00();
    if (sVar1 == 0) goto LAB_801180d4;
    *(int *)(unaff_s0 + 0x18) = *(int *)(unaff_s0 + 0x18) + 1;
    if (*(int *)(unaff_s0 + 0x1c) == 0) goto LAB_801180bc;
  }
  else {
LAB_801180bc:
    iVar4 = 1;
    func_0x80042354();
  }
  *(undefined4 *)(unaff_s0 + 0x1c) = 1;
LAB_801180d4:
  if (DAT_1f800137 != '\0') {
    return;
  }
  iVar2 = unaff_s0;
  if (*(int *)(unaff_s0 + 0xc) == 0) {
    iVar3 = FUN_801210d8();
    if (iVar3 == 0) {
      return;
    }
    uVar5 = FUN_801218a0();
  }
  else {
    uVar5 = FUN_8012128c();
  }
  while( true ) {
    *(short *)(iVar4 + 0x60) = (short)iVar2;
    *(short *)(unaff_s4 + (int)uVar5 + 0x60) = (short)unaff_s0;
    *(short *)(unaff_s4 + ((int)((ulonglong)uVar5 >> 0x20) << 2 | 2U) + 0x60) = (short)iVar2;
    if (3 < unaff_s2) break;
    unaff_s0 = in_stack_00000018 -
               ((int)((ulonglong)((longlong)(unaff_s8 * unaff_s2) * (longlong)unaff_s7) >> 0x20) -
               (unaff_s8 * unaff_s2 >> 0x1f));
    iVar2 = func_0x80083e80((int)((ulonglong)((longlong)(unaff_s2 << 10) * (longlong)unaff_s7) >>
                                 0x20) - ((unaff_s2 << 10) >> 0x1f));
    iVar4 = unaff_s4 + unaff_s6;
    sVar1 = *(short *)(unaff_s4 + 0x32);
    unaff_s6 = unaff_s6 + 4;
    *(short *)(unaff_s5 + 0x60) =
         in_stack_00000010 +
         ((short)((ulonglong)((longlong)unaff_s3 * (longlong)unaff_s7) >> 0x20) -
         (short)(unaff_s3 >> 0x1f));
    unaff_s5 = unaff_s5 + 4;
    unaff_s3 = unaff_s3 + in_stack_00000014;
    iVar3 = 7 - unaff_s2;
    unaff_s2 = unaff_s2 + 1;
    iVar2 = (int)sVar1 + ((short)in_t0 * iVar2 >> 0xc);
    uVar5 = CONCAT44(iVar3,iVar3 * 4);
  }
  return;
}

