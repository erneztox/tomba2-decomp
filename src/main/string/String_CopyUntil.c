/**
 * @brief Copies string until terminator u8 0xFA or 0xFF, appends 0xFF
 * @note Original: func_8004EF54 at 0x8004EF54
 */
// String_CopyUntil



char * String_CopyUntil(char *param_1,char *param_2)

{
  s8 cVar1;
  
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
