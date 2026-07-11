// FUN_08033a04

void FUN_08033a04(undefined4 param_1,int param_2)

{
  short sVar1;
  int in_v0;
  byte bVar2;
  
  if (in_v0 == 1) {
    sVar1 = *(short *)(param_2 + 0x42) + 1;
    *(short *)(param_2 + 0x42) = sVar1;
    *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + *(short *)(param_2 + 0x4a) * -0x100;
    bVar2 = 0;
    if (sVar1 < *(short *)(param_2 + 100)) {
      return;
    }
    *(undefined1 *)(param_2 + 0x47) = 0;
    *(undefined2 *)(param_2 + 0x42) = 0;
    if (*(byte *)(param_2 + 3) - 1 < 2) {
      bVar2 = DAT_800bf9ca & 1;
    }
    if (bVar2 != 0) {
      *(char *)(param_2 + 6) = *(char *)(param_2 + 6) + '\x01';
      return;
    }
  }
  else {
    sVar1 = *(short *)(param_2 + 0x42) + 1;
    *(short *)(param_2 + 0x42) = sVar1;
    *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + *(short *)(param_2 + 0x4a) * 0x100;
    if (*(short *)(param_2 + 100) <= sVar1) {
      *(undefined1 *)(param_2 + 0x47) = 1;
      *(undefined2 *)(param_2 + 0x42) = 0;
      return;
    }
  }
  return;
}

