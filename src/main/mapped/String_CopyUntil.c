/**
 * @brief Copies string until terminator byte 0xFA or 0xFF, appends 0xFF
 * @note Original: func_8004EF54 at 0x8004EF54
 */
// String_CopyUntil



char * FUN_8004ef54(char *param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = cVar1;
    param_1 = param_1 + 1;
    if (*param_2 == -6) break;
  } while (*param_2 != -1);
  *param_1 = -1;
  return param_1;
}
