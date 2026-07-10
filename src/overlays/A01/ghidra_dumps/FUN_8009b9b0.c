// FUN_8009b9b0

void FUN_8009b9b0(char *param_1)

{
  char cVar1;
  
  if (param_1 == (char *)0x0) {
    param_1 = &DAT_8001ca40;
  }
  while( true ) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    if (cVar1 == '\0') break;
    FUN_8009ae60((int)cVar1);
  }
  FUN_8009af5c();
  return;
}

