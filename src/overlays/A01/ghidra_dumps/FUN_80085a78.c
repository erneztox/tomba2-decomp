// FUN_80085a78

void FUN_80085a78(int param_1,int param_2)

{
  param_2 = param_2 << 0xf;
  do {
    if (param_1 <= DAT_800abde0) {
      return;
    }
    param_2 = param_2 + -1;
  } while (param_2 != -1);
  FUN_8009b9b0(s_VSync__timeout_8001c020);
  FUN_80080920(0);
  FUN_80085b10(3,0);
  return;
}

