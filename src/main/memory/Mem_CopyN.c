/**
 * @brief Memory copy N bytes: strncpy-like, copies up to param_3 bytes from param_2 to param_1
 * @note Original: func_8009AE10 at 0x8009AE10
 */
// Mem_CopyN



char * Mem_CopyN(char *param_1,s8 param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = (s8*)0x0;
  if ((param_1 != (s8*)0x0) && (0 < param_3)) {
    do {
      pcVar1 = param_1;
      param_3 = param_3 + -1;
      if (param_3 < 0) {
        return (s8*)0x0;
      }
      param_1 = pcVar1 + 1;
    } while (*pcVar1 != param_2);
  }
  return pcVar1;
}
