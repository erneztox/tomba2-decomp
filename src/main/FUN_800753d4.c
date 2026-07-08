
void FUN_800753d4(short *param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  
  sVar1 = FUN_80096480(param_2,0xffffffff);
  *param_1 = sVar1;
  sVar1 = FUN_80096980(param_3,(int)sVar1);
  *param_1 = sVar1;
  while (sVar1 = FUN_80096a40(0), sVar1 == 0) {
    FUN_80051f80(1);
  }
  return;
}

