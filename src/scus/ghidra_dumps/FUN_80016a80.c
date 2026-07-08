
int FUN_80016a80(undefined4 *param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_80013140();
  if (iVar1 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_8001e5ec(&DAT_8001038c);
  }
  iVar1 = FUN_80013140();
  if (iVar1 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_8001e5ec(&DAT_800103a0,*param_1,param_1[1],param_1[2],param_2);
  }
  iVar1 = FUN_80013140();
  if (iVar1 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_8001e5ec(&DAT_800103c8,param_1[param_2 * 7 + 3],(param_1 + param_2 * 7 + 3)[1]);
  }
  iVar1 = FUN_80013140();
  if (iVar1 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_8001e5ec(&DAT_800103e0,param_1[param_2 * 7 + 5],param_1[param_2 * 7 + 6]);
  }
  iVar1 = FUN_80013140();
  if (iVar1 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_8001e5ec(&DAT_800103f8,param_1[param_2 * 7 + 7],param_1[param_2 * 7 + 8]);
  }
  piVar2 = param_1 + param_2 * 7 + 3;
  *param_4 = (int)param_1 + *piVar2 + 0xc;
  *param_5 = (int)param_1 + piVar2[2] + 0xc;
  *param_3 = (int)param_1 + piVar2[4] + 0xc;
  return piVar2[5];
}

