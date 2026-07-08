
bool FUN_80038794(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 0x1f) == '\0') {
      return iVar1 != 0;
    }
    *(char *)(param_1 + 0x1f) = *(char *)(param_1 + 0x1f) + -1;
    if (*(char *)(param_1 + 0x1e) != '\0') {
      *(char *)(param_1 + 0x1e) = *(char *)(param_1 + 0x1e) + -1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return true;
}

