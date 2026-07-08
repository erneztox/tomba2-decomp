
void FUN_80054198(char *param_1)

{
  if ((param_1[0x146] != '\x04') || (*param_1 != '\x02')) {
    param_1[0x44] = '\0';
    param_1[0x45] = '\0';
    param_1[0x182] = '\0';
    param_1[0x183] = '\0';
    if (param_1[2] != '\0') {
      param_1[0x149] = '\x02';
      return;
    }
    param_1[0x50] = '\0';
    param_1[0x51] = '\0';
    param_1[0x148] = '\0';
    param_1[0x14a] = param_1[0x147] + '\x02';
    param_1[0x149] = param_1[0x147] + '\x02';
  }
  return;
}

