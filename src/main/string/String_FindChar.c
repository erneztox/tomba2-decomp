/**
 * @brief String search: finds nth occurrence of char -6 (0xFA) in string
 * @note Original: func_8004EF8C at 0x8004EF8C
 */
// String_FindChar



char * String_FindChar(char *param_1,int param_2)

{
  if (param_2 == 0) {
    return param_1;
  }
  do {
    if (*param_1 == -6) {
      param_2 = param_2 + -1;
      if (param_2 == 0) {
        return param_1 + 1;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}
