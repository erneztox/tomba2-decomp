// FUN_8009c820

uint FUN_8009c820(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_8009caec();
  }
  else {
    uVar1 = FUN_8009cc14();
    uVar1 = uVar1 >> 0x1d & 1;
  }
  return uVar1;
}

