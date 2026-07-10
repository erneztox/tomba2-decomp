// FUN_00022060

/* WARNING: Control flow encountered bad instruction data */

void FUN_00022060(undefined4 param_1,undefined1 param_2)

{
  short sVar1;
  int in_v0;
  int in_v1;
  undefined1 *unaff_s0;
  
  if (in_v1 == in_v0) {
    sVar1 = *(short *)(unaff_s0 + 0x40);
    *(short *)(unaff_s0 + 0x40) = sVar1 + 1;
    if (0x1d < (short)(sVar1 + 1)) {
      *(undefined2 *)(unaff_s0 + 0x2e) = 0x179f;
      *(undefined2 *)(unaff_s0 + 0x32) = 0xfa42;
      *(undefined2 *)(unaff_s0 + 0x36) = 0x315b;
      *unaff_s0 = param_2;
      unaff_s0[5] = 10;
      unaff_s0[0x28] = unaff_s0[0x28] | 0x80;
      uRam800bfa29 = 10;
      halt_baddata();
    }
  }
  else {
    if (in_v1 != 10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (cRam800bf816 == '\0') {
      return;
    }
    if (cRam800bf817 != '\f') {
      return;
    }
    func_0x0007778c();
  }
  if (unaff_s0[1] != '\0') {
    func_0x000517f8();
  }
  return;
}

