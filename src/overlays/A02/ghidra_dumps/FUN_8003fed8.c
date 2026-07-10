// FUN_8003fed8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003fed8(undefined1 *param_1)

{
  short sVar1;
  ushort uVar2;
  
  if (param_1[6] == '\0') {
    FUN_80074590(0x19,0,0);
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x40) = 0x10;
    param_1[6] = param_1[6] + '\x01';
  }
  else if (param_1[6] == '\x01') {
    sVar1 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar1 + -1;
    if ((short)(sVar1 + -1) == -1) {
      param_1[5] = 0;
      param_1[6] = 0;
    }
    *(ushort *)(*(int *)(param_1 + 0xc0) + 2) = (_DAT_1f80017c & 1) * 6;
    uVar2 = FUN_8009a450();
    **(short **)(param_1 + 0xc0) = ((uVar2 & 3) - 2) * 6;
  }
  if (param_1[0x5e] == '\x02') {
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x5e) = 0;
  }
  return;
}

