
undefined4 FUN_80012d2c(int param_1)

{
  undefined4 uVar1;
  
  *DAT_80025434 = 1;
  *DAT_8002543c = 0x1f;
  uVar1 = 1;
  if ((param_1 != 10) && (uVar1 = 0xfffffffe, (DAT_8002544c & 0x10) == 0)) {
    uVar1 = FUN_8001257c();
    return uVar1;
  }
  return uVar1;
}

