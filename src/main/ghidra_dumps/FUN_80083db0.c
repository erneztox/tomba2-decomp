
void FUN_80083db0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 3) = 2;
  if (param_2 == 0) {
    uVar1 = 0xe6000000;
  }
  else {
    uVar1 = 0xe6000001;
  }
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

