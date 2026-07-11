// FUN_80137a6c

/* WARNING: Control flow encountered bad instruction data */

uint FUN_80137a6c(void)

{
  short sVar1;
  ushort uVar2;
  int in_v0;
  uint uVar3;
  int in_v1;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  sVar1 = func_0x800781e0((int)*(short *)(unaff_s2 + 0x2e) - (int)*(short *)(in_v0 + 0x160),
                          (int)*(short *)(unaff_s2 + 0x36) - (int)*(short *)(in_v1 + 0x164));
  if (((((int)*(short *)(unaff_s3 + 0x17e) & 0x8200U) != 0) || (0x640 < sVar1)) || (0x44c < sVar1))
  {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = 2;
  if (600 < sVar1) {
    uVar2 = 1;
  }
  if (uVar2 != 1) {
    if (1 < uVar2) {
      if (uVar2 == 2) {
        return (uint)*(byte *)(unaff_s1 + -0x7feb410c);
      }
      uVar3 = FUN_80140ad8();
      return uVar3;
    }
    if (uVar2 == 0) {
      uVar3 = FUN_80140ac8();
      return uVar3;
    }
    uVar3 = FUN_80140ad8();
    return uVar3;
  }
  uVar3 = FUN_80140ac8();
  return uVar3;
}

