
void FUN_8006914c(char *param_1)

{
  if (*param_1 == '\x02') {
    param_1[0x44] = '\0';
    param_1[0x45] = '\0';
    param_1[0x2b] = '\x01';
    param_1[4] = '\x02';
    param_1[0x6e] = '\x01';
    param_1[0x6f] = '\0';
    DAT_1f800251 = DAT_1f800251 + -1;
  }
  return;
}

