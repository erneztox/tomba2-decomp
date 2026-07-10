// FUN_80041718

undefined4 FUN_80041718(int param_1,undefined4 param_2,short param_3)

{
  *(char *)(param_1 + 0x46) = (char)param_2;
  *(undefined1 *)(param_1 + 0x79) = 0;
  if (param_3 == 0) {
    FUN_80077c40(param_1,*(undefined4 *)(param_1 + 0x7c),param_2);
  }
  else {
    FUN_80077cfc(param_1,*(undefined4 *)(param_1 + 0x7c),param_2);
  }
  return 1;
}

