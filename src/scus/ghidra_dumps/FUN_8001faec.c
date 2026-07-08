
uint FUN_8001faec(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    FUN_8001f5b8();
    uVar1 = FUN_8001f318();
    return uVar1;
  }
  uVar1 = FUN_8001f6e0();
  return uVar1 >> 0x1d & 1;
}

