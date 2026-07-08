
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80055d5c(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x16b) == '\0') {
    FUN_8004766c(param_1);
    FUN_80049760(param_1);
    *(undefined2 *)(param_1 + 0x140) = _DAT_1f8001a0;
    if (DAT_1f800137 != '\x01') {
      DAT_1f800207 = *(undefined1 *)(param_1 + 0x2a);
    }
  }
  else {
    if (*(char *)(param_1 + 0x16b) == '\b') {
      *(undefined2 *)(param_1 + 0x140) = _DAT_1f800210;
    }
    else {
      *(undefined2 *)(param_1 + 0x140) = _DAT_1f80018c;
    }
    iVar1 = FUN_80083f50((int)*(short *)(param_1 + 0x140));
    *(short *)(param_1 + 0x48) = (short)(iVar1 >> 4);
    iVar1 = FUN_80083e80((int)*(short *)(param_1 + 0x140));
    *(short *)(param_1 + 0x4c) = -(short)(iVar1 >> 4);
    if (*(char *)(param_1 + 0x29) != '\0') {
      *(undefined2 *)(param_1 + 0x4a) = 0;
    }
  }
  return;
}

