
/* WARNING: Removing unreachable block (ram,0x80019454) */

undefined4 FUN_8001a090(void)

{
  undefined1 uVar1;
  int iVar2;
  int in_v1;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint in_t0;
  int unaff_s0;
  int unaff_s1;
  int unaff_s3;
  undefined1 unaff_s4;
  undefined4 unaff_s5;
  int *unaff_s6;
  int unaff_s7;
  int unaff_s8;
  undefined4 uVar7;
  undefined8 uVar8;
  
  puVar3 = (undefined1 *)(in_v1 + -0x6158);
  puVar6 = &stack0x00000018;
  if (puVar3 == (undefined1 *)0x0) {
    iVar5 = 2;
  }
  else {
    iVar5 = 7;
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar5 != -1);
    iVar5 = 2;
  }
  do {
    if (iVar5 != 0) goto LAB_80019b90;
    do {
      DAT_800268d0 = unaff_s5;
      iVar5 = FUN_8001a0c0(unaff_s4);
      iVar2 = 0;
      if (iVar5 == 0) {
LAB_80019ba4:
        uVar4 = 0;
        if (iVar2 == 0) {
          uVar7 = 0x80019bb4;
          uVar8 = FUN_80019b78();
          iRam8002680c = ((uint)((int)uVar8 == 2) - (int)((ulonglong)uVar8 >> 0x20)) - uVar4;
          uRam80026808 = uVar4 | in_t0;
          uRam80038458 = uVar7;
          func_0x80018cec(uRam80026808 + 4);
          uVar7 = func_0x800111b4();
          trap(1);
          if (DAT_80026804 == 0) {
            DAT_80026804 = 1;
          }
          return uVar7;
        }
        return 0;
      }
LAB_80019b90:
      unaff_s0 = unaff_s0 + -1;
      iVar2 = -1;
      DAT_800268d0 = unaff_s5;
      if (unaff_s0 == unaff_s7) goto LAB_80019ba4;
      DAT_800268d0 = 0;
      if ((unaff_s3 != unaff_s8) && (((byte)DAT_800268dc & 0x10) != 0)) {
        FUN_8001a0c0(1,0,0,0);
      }
    } while ((unaff_s1 == 0) || (*unaff_s6 == 0));
    iVar5 = FUN_8001a0c0(2);
  } while( true );
}

