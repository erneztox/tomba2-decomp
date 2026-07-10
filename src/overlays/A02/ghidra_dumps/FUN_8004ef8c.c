// FUN_8004ef8c

char * FUN_8004ef8c(char *param_1,int param_2)

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

