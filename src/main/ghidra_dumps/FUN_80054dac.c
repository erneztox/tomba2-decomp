
void FUN_80054dac(int param_1,undefined4 param_2,short param_3)

{
  *(char *)(param_1 + 0x46) = (char)param_2;
  FUN_80054790();
  if (param_3 == 0) {
    FUN_80077c40(param_1,&PTR_DAT_80017fe8,param_2);
  }
  else {
    FUN_80077cfc(param_1,&PTR_DAT_80017fe8,param_2);
  }
  return;
}

