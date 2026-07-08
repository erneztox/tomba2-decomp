
void FUN_800187c4(int param_1,int param_2)

{
  param_2 = param_2 << 0xf;
  do {
    if (param_1 <= DAT_800267b4) {
      return;
    }
    param_2 = param_2 + -1;
  } while (param_2 != -1);
  FUN_8001effc(&DAT_800104a4);
  FUN_8001799c(0);
  FUN_8001805c(3,0);
  FUN_8001804c();
  return;
}

