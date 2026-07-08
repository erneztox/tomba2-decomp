
uint FUN_8001efec(uint param_1)

{
  byte in_v0;
  uint uVar1;
  uint in_v1;
  uint uVar2;
  int unaff_s0;
  uint unaff_s1;
  undefined4 unaff_s5;
  int unaff_s6;
  byte *unaff_s7;
  int in_stack_00000010;
  int iStack00000044;
  
  while (uVar1 = 0, (in_v0 & 4) != 0) {
    uVar1 = (uint)*unaff_s7;
    unaff_s7 = unaff_s7 + 1;
    in_v1 = unaff_s0 * 10 - 0x30;
    param_1 = (uint)(*unaff_s7 < 0x80);
    unaff_s0 = in_v1 + uVar1;
    if (param_1 == 0) break;
    in_v0 = (&DAT_80027229)[*unaff_s7];
  }
  if (param_1 != 0) {
    in_stack_00000010 = DAT_80026dc0;
    DAT_80026dc0 = 0;
  }
  iStack00000044 = unaff_s0;
  if (unaff_s1 < 0x401) {
    uVar2 = (unaff_s1 >> 6) * 0x40;
    if (uVar2 < unaff_s1) {
      uVar2 = uVar2 + 0x40;
    }
    FUN_8001d7d0(2,uVar1 << (in_v1 & 0x1f));
    FUN_8001d7d0(1);
    FUN_8001d7d0(3,&DAT_80026df8,uVar2);
    FUN_8001df9c(DAT_80026d10);
    if (unaff_s6 != 0) {
      DAT_80026da4 = unaff_s5;
    }
    if (in_stack_00000010 != 0) {
      DAT_80026dc0 = in_stack_00000010;
    }
    return uVar2;
  }
  (**(code **)((unaff_s1 >> 6) + 0x6dc0))();
  uVar1 = FUN_8001d718();
  return uVar1;
}

