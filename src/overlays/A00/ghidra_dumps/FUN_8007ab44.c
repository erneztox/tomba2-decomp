// FUN_8007ab44

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007ab44(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1[8] == 0) {
    _DAT_800f2738 = param_1[9];
    if (_DAT_800f2738 != 0) {
      *(undefined4 *)(_DAT_800f2738 + 0x20) = 0;
      goto LAB_8007ab8c;
    }
  }
  else {
    *(undefined4 *)(param_1[8] + 0x24) = param_1[9];
LAB_8007ab8c:
    if (param_1[9] != 0) {
      *(undefined4 *)(param_1[9] + 0x20) = param_1[8];
      goto LAB_8007abc0;
    }
  }
  _DAT_800f23a0 = param_1[8];
  if (_DAT_800f23a0 != 0) {
    *(undefined4 *)(_DAT_800f23a0 + 0x24) = 0;
  }
LAB_8007abc0:
  DAT_800f2410 = DAT_800f2410 + '\x01';
  puVar1 = param_1;
  param_1[9] = _DAT_800f273c;
  _DAT_800f273c = puVar1;
  FUN_8007addc(param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

