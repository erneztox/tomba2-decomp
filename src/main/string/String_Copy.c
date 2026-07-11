/**
 * @brief String copy: copies null-terminated string from param_2 to param_1
 * @note Original: func_8009A5B0 at 0x8009A5B0
 */
// String_Copy



char * FUN_8009a5b0(char *param_1,char *param_2)

{
  s8 cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (s8*)0x0;
  if ((param_1 != (s8*)0x0) && (param_2 != (s8*)0x0)) {
    cVar1 = *param_2;
    *param_1 = cVar1;
    pcVar3 = param_1;
    while (pcVar2 = param_1, cVar1 != '\0') {
      param_2 = param_2 + 1;
      pcVar3 = pcVar3 + 1;
      cVar1 = *param_2;
      *pcVar3 = cVar1;
    }
  }
  return pcVar2;
}
