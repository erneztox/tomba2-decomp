
void FUN_800678e8(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 6) == '\0') {
    FUN_80074590(0x24,0,0);
    DAT_800bf80d = 1;
    *(undefined2 *)(param_1 + 0x16e) = 0;
    *(undefined2 *)(param_1 + 0x170) = 0;
    FUN_80053d90(param_1);
    FUN_800521f4(0,0x81,0x81,0xf);
    *(undefined2 *)(param_1 + 0x40) = 3;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
    return;
  }
  sVar1 = *(short *)(param_1 + 0x40);
  if (*(short *)(param_1 + 0x40) == 0) {
    if (DAT_800bf80f == '\0') {
      FUN_8005245c();
      DAT_800bf80d = 3;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
  }
  else {
    *(short *)(param_1 + 0x40) = sVar1 + -1;
    if (sVar1 == 1) {
      FUN_800662d8(param_1,0);
      DAT_800bf80d = 2;
      DAT_800bf80f = '\x02';
    }
  }
  FUN_80076d68(param_1);
  sVar1 = *(short *)(param_1 + 0x4a) + 0x360;
  *(short *)(param_1 + 0x4a) = sVar1;
  if (0x3e00 < sVar1) {
    *(undefined2 *)(param_1 + 0x4a) = 0x3e00;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
  return;
}

