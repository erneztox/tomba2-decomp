
uint FUN_800163f4(void)

{
  int iVar1;
  uint in_v0;
  uint uVar2;
  undefined4 *extraout_v1;
  undefined4 *unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  
  while ((in_v0 != 0 || ((*DAT_8002561c & 0x4000000) == 0))) {
    iVar1 = FUN_800157b0();
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    in_v0 = *DAT_80025628 & 0x1000000;
  }
  FUN_800180cc(2,0x80015dac);
  uVar2 = 0xffffffff;
  if (*(short *)(unaff_s0 + 1) != 0) {
    if (*(short *)((int)unaff_s0 + 6) == 0) {
      if ((code *)extraout_v1[1] != (code *)0x0) {
        *extraout_v1 = 0;
        (*(code *)extraout_v1[1])();
      }
      return DAT_8002563c - DAT_80025640 & 0x3f;
    }
    DAT_800255b8 = unaff_s1 << 0x10 | unaff_s2 & 0xffff;
    DAT_800255b4 = *unaff_s0;
    DAT_800255bc = unaff_s0[1];
    (**(code **)(DAT_8002550c + 0x18))(0x800255ac);
    uVar2 = 0;
  }
  return uVar2;
}

