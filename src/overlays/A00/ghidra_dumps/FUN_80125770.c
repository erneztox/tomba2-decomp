// FUN_80125770

void FUN_80125770(int param_1)

{
  ushort uVar1;
  short sVar2;
  
  uVar1 = *(short *)(param_1 + 0x40) - 1;
  *(ushort *)(param_1 + 0x40) = uVar1;
  if ((*(char *)(param_1 + 1) != '\0') && (0 < (int)((uint)uVar1 << 0x10))) {
    *(short *)(param_1 + 0x32) =
         *(short *)(param_1 + 0x32) + (short)(char)((ushort)*(undefined2 *)(param_1 + 0x4a) >> 8);
    *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + *(short *)(param_1 + 0x4e);
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) +
         (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x48);
    *(int *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x34) +
         (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x4c);
    sVar2 = FUN_8012e87c(param_1);
    if (sVar2 != 0) {
      FUN_8012e7ec(param_1);
    }
    return;
  }
  if (*(char *)(param_1 + 0x5e) == '\x02') {
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x5e) = 0;
  }
  *(undefined1 *)(param_1 + 4) = 3;
  FUN_8012e7dc();
  return;
}

