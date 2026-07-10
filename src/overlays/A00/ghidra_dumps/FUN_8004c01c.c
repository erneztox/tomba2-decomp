// FUN_8004c01c

void FUN_8004c01c(undefined1 *param_1)

{
  char cVar1;
  
  if (param_1[0x5e] == '\0') {
    if (param_1[5] == '\0') {
      param_1[5] = 1;
      *param_1 = 3;
      *(undefined2 *)(param_1 + 0x88) = 0xffb0;
      *(undefined2 *)(param_1 + 0x8a) = 0x14;
      *(undefined2 *)(param_1 + 0x8c) = 0;
    }
    else if (param_1[5] != '\x01') {
      return;
    }
    FUN_80051614(param_1,param_1 + 0x88,0,0);
    cVar1 = DAT_800e7e81;
    param_1[1] = DAT_800e7e81;
    if (cVar1 != '\0') {
      FUN_80077efc(param_1);
    }
  }
  else if (param_1[0x5e] == '\x01') {
    FUN_8004b788(param_1);
  }
  return;
}

