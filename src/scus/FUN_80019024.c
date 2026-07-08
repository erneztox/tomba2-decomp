
void FUN_80019024(void)

{
  uint in_v0;
  undefined4 *unaff_s0;
  int unaff_s1;
  
  while (unaff_s0 = unaff_s0 + 1, in_v0 != 0) {
    if ((code *)*unaff_s0 != (code *)0x0) {
      (*(code *)*unaff_s0)();
    }
    unaff_s1 = unaff_s1 + 1;
    in_v0 = (uint)(unaff_s1 < 8);
  }
  return;
}

