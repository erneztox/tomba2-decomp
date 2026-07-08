
/* WARNING: Removing unreachable block (ram,0x80019454) */

undefined4 FUN_80019b78(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint in_t0;
  int unaff_s0;
  int unaff_s1;
  int unaff_s3;
  uint unaff_s4;
  undefined4 unaff_s5;
  int *unaff_s6;
  int unaff_s7;
  int unaff_s8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  while( true ) {
    iVar1 = FUN_8001a0c0(param_1);
    iVar2 = 0;
    if (iVar1 == 0) break;
    do {
      unaff_s0 = unaff_s0 + -1;
      iVar2 = -1;
      DAT_800268d0 = unaff_s5;
      if (unaff_s0 == unaff_s7) goto LAB_80019ba4;
      DAT_800268d0 = 0;
      if ((unaff_s3 != unaff_s8) && (((byte)DAT_800268dc & 0x10) != 0)) {
        FUN_8001a0c0(1,0,0,0);
      }
    } while (((unaff_s1 != 0) && (*unaff_s6 != 0)) && (iVar1 = FUN_8001a0c0(2), iVar1 != 0));
    param_1 = unaff_s4 & 0xff;
    DAT_800268d0 = unaff_s5;
  }
LAB_80019ba4:
  uVar3 = 0;
  if (iVar2 == 0) {
    uVar4 = 0x80019bb4;
    uVar5 = FUN_80019b78();
    iRam8002680c = ((uint)((int)uVar5 == 2) - (int)((ulonglong)uVar5 >> 0x20)) - uVar3;
    uRam80026808 = uVar3 | in_t0;
    uRam80038458 = uVar4;
    func_0x80018cec(uRam80026808 + 4);
    uVar4 = func_0x800111b4();
    trap(1);
    if (DAT_80026804 == 0) {
      DAT_80026804 = 1;
    }
    return uVar4;
  }
  return 0;
}

