// FUN_8006cbd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006cbd0(int param_1,undefined2 *param_2)

{
  _DAT_1f8000d2 = *param_2;
  _DAT_1f8000d6 = param_2[1];
  _DAT_1f8000da = param_2[2];
  *(undefined2 *)(param_1 + 0x3a) = param_2[3];
  *(undefined2 *)(param_1 + 0x3e) = param_2[4];
  *(undefined2 *)(param_1 + 0x42) = param_2[5];
  return;
}

