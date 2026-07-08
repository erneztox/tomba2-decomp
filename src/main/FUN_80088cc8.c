
void FUN_80088cc8(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = DAT_800abe78 * 0xf0 + -0x7fefdb00;
    if (param_1 != -9) {
      if (param_1 == 0) {
        *(undefined4 *)(&DAT_800abe90 + DAT_800abe78 * 4) = 0;
      }
      else {
        FUN_80089508(iVar1);
        FUN_80088dbc(iVar1);
      }
    }
    DAT_800abe7c = 0;
    *(undefined2 *)(DAT_800abee0 + 10) = 0;
    DAT_800abe78 = DAT_800abe78 + 1;
    iVar1 = 1;
    if (DAT_800abe78 <= DAT_800abe8c) {
      iVar1 = FUN_80086a80(DAT_800abe78 * 0xf0 + -0x7fefdb00);
    }
    param_1 = 0xffff;
  } while (iVar1 == 0);
  return;
}

