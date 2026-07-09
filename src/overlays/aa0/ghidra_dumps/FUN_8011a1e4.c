// FUN_8011a1e4

undefined4 FUN_8011a1e4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_80118920(param_1,1);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return 1;
}

