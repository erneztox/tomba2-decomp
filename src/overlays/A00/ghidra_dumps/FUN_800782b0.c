// FUN_800782b0

int FUN_800782b0(int param_1,short param_2,short param_3)

{
  short sVar1;
  
  sVar1 = FUN_80085690((int)*(short *)(param_1 + 10) - (int)param_3,
                       (int)param_2 - (int)*(short *)(param_1 + 2));
  return (int)sVar1;
}

