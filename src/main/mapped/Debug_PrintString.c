/**
 * @brief Debug string output: sends chars to CD queue via FUN_8009ae60, flushes at end
 * @note Original: func_8009B9B0 at 0x8009B9B0
 */
// Debug_PrintString



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
