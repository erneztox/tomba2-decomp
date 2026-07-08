
undefined4 FUN_800196c8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 2) {
    FUN_8001a718();
    uVar1 = FUN_80018f24();
    return uVar1;
  }
  iVar2 = FUN_8001a764();
  uVar1 = 0;
  if ((iVar2 == 0) && (uVar1 = 1, param_1 == 1)) {
    iVar2 = FUN_8001a628();
    uVar1 = 0;
    if (iVar2 == 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

