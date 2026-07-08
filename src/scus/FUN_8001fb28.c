
uint FUN_8001fb28(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    FUN_8001f64c();
    uVar1 = FUN_8001f354();
    return uVar1;
  }
  uVar1 = FUN_8001f6e0();
  return uVar1 >> 0x18 & 1;
}

