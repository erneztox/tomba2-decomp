/**
 * @brief Debug string output: sends chars to CD queue via CD_QueueCmd, flushes at end
 * @note Original: func_8009B9B0 at 0x8009B9B0
 */
// Debug_PrintString



void Debug_PrintString(char *param_1)

{
  s8 cVar1;
  
  if (param_1 == (s8*)0x0) {
    param_1 = &DAT_8001ca40;
  }
  while( true ) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    if (cVar1 == '\0') break;
    CD_QueueCmd((int)cVar1);
  }
  CD_FlushCmd();
  return;
}
