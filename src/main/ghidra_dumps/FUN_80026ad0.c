
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80026ad0(int param_1)

{
  int iVar1;
  
  switch(*(undefined1 *)(param_1 + 5)) {
  case 0:
    if (DAT_800bf818 != '\x01') {
      return 0;
    }
    *(char *)(param_1 + 3) = DAT_800bf817 + '\x01';
    FUN_800269bc(param_1);
    break;
  case 1:
    if (DAT_800bf80f == '\0') {
      FUN_800269ec(param_1);
      FUN_8001cf2c();
      iVar1 = _DAT_1f800138;
      *(undefined2 *)(_DAT_1f800138 + 0x4c) = 3;
      *(undefined2 *)(iVar1 + 0x4e) = 0;
      *(undefined1 *)(param_1 + 5) = 6;
      DAT_800bf818 = 2;
      return 0;
    }
    return 0;
  case 2:
    if (DAT_800bf80f != '\0') {
      return 0;
    }
    FUN_800269fc(param_1);
    break;
  case 3:
    if (DAT_800bf818 != '\x03') {
      return 0;
    }
    FUN_800269bc(param_1);
    break;
  case 4:
    if (DAT_800bf80f != '\0') {
      return 0;
    }
    FUN_80026a1c(param_1);
    FUN_800269ec(param_1);
    iVar1 = _DAT_1f800138;
    *(undefined2 *)(_DAT_1f800138 + 0x4c) = 2;
    *(undefined2 *)(iVar1 + 0x4e) = 4;
    DAT_800bf818 = '\x04';
    break;
  case 5:
    if (DAT_800bf80f == '\0') {
      *(undefined1 *)(param_1 + 5) = 0;
      FUN_800269fc(param_1);
      return 0;
    }
    return 0;
  case 6:
    *(undefined1 *)(param_1 + 5) = 2;
    return 1;
  default:
    goto switchD_80026b0c_default;
  }
  *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
switchD_80026b0c_default:
  return 0;
}

