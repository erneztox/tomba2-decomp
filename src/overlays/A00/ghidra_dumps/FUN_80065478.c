// FUN_80065478

void FUN_80065478(int param_1,int param_2)

{
  if ((DAT_800bf816 == '\0') || (param_2 == 0)) {
    *(undefined2 *)(param_1 + 0x16c) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined1 *)(param_1 + 0x29) = 1;
  }
  else {
    FUN_8005444c(param_1);
    FUN_80056c00(param_1,1);
  }
  return;
}

