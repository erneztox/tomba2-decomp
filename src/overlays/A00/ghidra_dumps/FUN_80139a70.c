// FUN_80139a70

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_80139a70(void)

{
  short in_v0;
  int iVar1;
  int in_v1;
  int unaff_s0;
  undefined4 uVar2;
  
  if (((((int)*(short *)(in_v1 + 0x7ffe) & 0x8200U) == 0) && (in_v0 < 0x641)) && (in_v0 < 0x44d)) {
    iVar1 = 2;
    if (600 < in_v0) {
      iVar1 = 1;
    }
    uVar2 = 1;
    if (iVar1 != 0) {
      uVar2 = 4;
    }
    *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
    FUN_801406e4();
    return uVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

