// FUN_80137ab4

/* WARNING: Control flow encountered bad instruction data */

uint FUN_80137ab4(void)

{
  ushort uVar1;
  int in_v0;
  uint uVar2;
  int in_v1;
  int unaff_s1;
  
  if (in_v0 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = 2;
  if (600 < in_v1) {
    uVar1 = 1;
  }
  if (uVar1 == 1) {
    uVar2 = FUN_80140ac8();
    return uVar2;
  }
  if (1 < uVar1) {
    if (uVar1 != 2) {
      uVar2 = FUN_80140ad8();
      return uVar2;
    }
    return (uint)*(byte *)(unaff_s1 + -0x7feb410c);
  }
  if (uVar1 != 0) {
    uVar2 = FUN_80140ad8();
    return uVar2;
  }
  uVar2 = FUN_80140ac8();
  return uVar2;
}

