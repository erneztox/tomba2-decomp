
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800714c0(int param_1,undefined2 param_2)

{
  short sVar1;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined2 *)(param_1 + 0x4a) = param_2;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    sVar1 = *(short *)(param_1 + 0x4a) + 0x100;
    *(short *)(param_1 + 0x4a) = sVar1;
    if (0x3000 < sVar1) {
      *(undefined2 *)(param_1 + 0x4a) = 0x3000;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    if (_DAT_800bf82a < *(short *)(param_1 + 0x32)) {
      *(short *)(param_1 + 0x32) = _DAT_800bf82a;
      return 1;
    }
  }
  return 0;
}

