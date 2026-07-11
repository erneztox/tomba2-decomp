// FUN_80111a64

undefined4 FUN_80111a64(undefined4 param_1,undefined1 param_2)

{
  int in_v0;
  undefined4 uVar1;
  int in_v1;
  int extraout_v1;
  int unaff_s0;
  int unaff_s1;
  
  if (unaff_s0 == in_v0) {
    func_0x80041098();
    if (*(char *)(unaff_s1 + 0x70) != -1) {
      return 0;
    }
    *(undefined1 *)(unaff_s1 + 6) = 0;
    func_0x80042310();
    in_v1 = extraout_v1;
  }
  *(undefined1 *)(in_v1 + 4) = param_2;
  uVar1 = func_0x8007a624();
  return uVar1;
}

