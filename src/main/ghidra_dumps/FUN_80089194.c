
undefined4 FUN_80089194(int param_1)

{
  byte bVar1;
  
  if (**(char **)(param_1 + 0x3c) == -0xd) {
    if ((*(char *)(param_1 + 0xe8) != '\0') && (*(char *)(param_1 + 0x46) != -1)) {
      if (*(char *)(param_1 + 0x49) == '\x02') {
        (*DAT_800abe3c)(param_1);
      }
      goto LAB_80089200;
    }
LAB_80089258:
    FUN_80088a54(param_1,0);
  }
  else {
LAB_80089200:
    bVar1 = *(byte *)(param_1 + 0x46);
    if (bVar1 == 1) {
      FUN_80088a54(param_1,1);
      return 0;
    }
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        return 0;
      }
    }
    else {
      if (bVar1 == 0xfe) goto LAB_80089258;
      if (bVar1 == 0xff) {
        return 0;
      }
    }
    if (*(code **)(param_1 + 0x14) == (code *)0x0) {
      FUN_80087f1c(param_1);
    }
    else {
      (**(code **)(param_1 + 0x14))(param_1);
    }
  }
  return 0;
}

