
uint FUN_8009c85c(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_8009cb80();
  }
  else {
    uVar1 = FUN_8009cc14();
    uVar1 = uVar1 >> 0x18 & 1;
  }
  return uVar1;
}

