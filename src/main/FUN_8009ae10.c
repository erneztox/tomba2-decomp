
char * FUN_8009ae10(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if ((param_1 != (char *)0x0) && (0 < param_3)) {
    do {
      pcVar1 = param_1;
      param_3 = param_3 + -1;
      if (param_3 < 0) {
        return (char *)0x0;
      }
      param_1 = pcVar1 + 1;
    } while (*pcVar1 != param_2);
  }
  return pcVar1;
}

