
void FUN_8007156c(int param_1)

{
  int iVar1;
  
  switch(*(undefined1 *)(param_1 + 3)) {
  case 0:
    if (*(char *)(param_1 + 0x79) == '\x01') {
      FUN_80041768(param_1,0,4);
    }
    break;
  default:
    goto switchD_800715a4_caseD_1;
  case 2:
    iVar1 = FUN_800714c0(param_1,0);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 3) = 3;
    }
    goto switchD_800715a4_caseD_1;
  case 3:
    iVar1 = FUN_8007101c(param_1,1);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    goto switchD_800715a4_caseD_1;
  case 4:
    DAT_800bf843 = 3;
    if (*(char *)(param_1 + 6) == '\0') {
      FUN_80070f00(param_1,0,0);
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      goto switchD_800715a4_caseD_1;
    }
    if (*(char *)(param_1 + 6) != '\x01') goto switchD_800715a4_caseD_1;
    FUN_8007101c(param_1,0);
    break;
  case 5:
    iVar1 = FUN_8007101c(param_1,0);
    if (iVar1 == 0) {
      DAT_800bf843 = 3;
    }
    else {
      *(undefined1 *)(param_1 + 3) = 0;
    }
  }
  FUN_80070e60(param_1);
switchD_800715a4_caseD_1:
  FUN_80041098(param_1);
  FUN_8004190c(param_1);
  return;
}

