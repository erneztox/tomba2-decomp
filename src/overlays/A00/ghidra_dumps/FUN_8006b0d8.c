// FUN_8006b0d8

void FUN_8006b0d8(char *param_1)

{
  if ((param_1[2] != '\x04') && (*param_1 == '\x02')) {
    param_1[0x2b] = '\x02';
    param_1[1] = '\0';
    param_1[4] = '\x02';
    param_1[0x6e] = '\x01';
    param_1[0x6f] = '\0';
    DAT_1f800231 = DAT_1f800231 + -1;
  }
  return;
}

