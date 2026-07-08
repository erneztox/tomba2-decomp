
void FUN_80013e30(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *in_v1;
  int unaff_s0;
  
  *in_v1 = param_2;
  in_v1[2] = *(undefined4 *)(unaff_s0 + 4);
  (**(code **)(param_4 + 8))(*(undefined4 *)(param_4 + 0x18),in_v1 + -2,param_3,0);
  return;
}

