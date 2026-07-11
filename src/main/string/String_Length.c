/**
 * @brief String length: counts chars until null terminator
 * @note Original: func_80079528 at 0x80079528
 */
// String_Length



int String_Length(char *param_1)

{
  s8 cVar1;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
    cVar1 = *param_1;
  }
  return iVar2;
}
