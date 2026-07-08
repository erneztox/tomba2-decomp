
undefined4 FUN_80054d14(int param_1,uint param_2,short param_3)

{
  undefined4 uVar1;
  
  if ((uint)*(byte *)(param_1 + 0x46) == (param_2 & 0xff)) {
    uVar1 = 0;
  }
  else {
    *(char *)(param_1 + 0x46) = (char)param_2;
    FUN_80054790(param_1,param_2);
    if (param_3 == 0) {
      FUN_80077c40(param_1,&PTR_DAT_80017fe8,param_2);
      uVar1 = 1;
    }
    else {
      FUN_80077cfc(param_1,&PTR_DAT_80017fe8,param_2);
      uVar1 = 1;
    }
  }
  return uVar1;
}

