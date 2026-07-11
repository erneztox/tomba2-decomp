/**
 * @brief String compare: compares two null-terminated strings, returns difference
 * @note Original: func_8009A600 at 0x8009A600
 */
// String_Compare



int FUN_8009a600(char *param_1)

{
  s8 cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (param_1 != (s8*)0x0) {
    while (iVar3 = iVar2, cVar1 = *param_1, param_1 = param_1 + 1, cVar1 != '\0') {
      iVar2 = iVar3 + 1;
    }
  }
  return iVar3;
}
