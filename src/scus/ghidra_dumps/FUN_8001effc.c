
uint FUN_8001effc(int param_1)

{
  uint uVar1;
  int in_v0;
  uint in_v1;
  uint unaff_s1;
  undefined4 unaff_s5;
  int unaff_s6;
  int in_stack_00000010;
  
  if (param_1 != 0) {
    in_stack_00000010 = DAT_80026dc0;
    DAT_80026dc0 = 0;
  }
  if (unaff_s1 < 0x401) {
    uVar1 = (unaff_s1 >> 6) * 0x40;
    if (uVar1 < unaff_s1) {
      uVar1 = uVar1 + 0x40;
    }
    FUN_8001d7d0(2,in_v0 << (in_v1 & 0x1f));
    FUN_8001d7d0(1);
    FUN_8001d7d0(3,&DAT_80026df8,uVar1);
    FUN_8001df9c(DAT_80026d10);
    if (unaff_s6 != 0) {
      DAT_80026da4 = unaff_s5;
    }
    if (in_stack_00000010 != 0) {
      DAT_80026dc0 = in_stack_00000010;
    }
    return uVar1;
  }
  (**(code **)((unaff_s1 >> 6) + 0x6dc0))();
  uVar1 = FUN_8001d718();
  return uVar1;
}

