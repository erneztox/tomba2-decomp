
undefined4 FUN_80097414(undefined4 param_1,undefined4 param_2)

{
  if (DAT_800ac620 == 0) {
    FUN_80097194(2,(uint)DAT_800ac61c << (DAT_800ac62c & 0x1f));
    FUN_80097194(1);
    FUN_80097194(3,param_1,param_2);
  }
  else {
    FUN_80096e70(param_1,param_2);
  }
  return param_2;
}

