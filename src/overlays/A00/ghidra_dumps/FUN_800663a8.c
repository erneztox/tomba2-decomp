// FUN_800663a8

void FUN_800663a8(int param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_80077768((int)*(short *)(param_1 + 0x140),(uint)*(byte *)(param_1 + 0x2b) << 4,0);
  if (iVar3 == 0) {
    *(undefined2 *)(param_1 + 0x58) = 0xfd00;
    *(undefined1 *)(param_1 + 0x147) = 1;
    uVar2 = 0x1000;
  }
  else {
    *(undefined2 *)(param_1 + 0x58) = 0xfd00;
    uVar2 = 0xf000;
    *(undefined1 *)(param_1 + 0x147) = 0;
  }
  *(undefined2 *)(param_1 + 0x44) = uVar2;
  cVar1 = *(char *)(param_1 + 0x147) + '\x02';
  *(char *)(param_1 + 0x14a) = cVar1;
  *(char *)(param_1 + 0x149) = cVar1;
  if (param_2 == 0) {
    uVar4 = 0x57;
  }
  else {
    uVar4 = 0x56;
  }
  FUN_80054d14(param_1,uVar4,0);
  *(undefined2 *)(param_1 + 0x4a) = 0xd800;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x145) = 1;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  FUN_800551c4();
  return;
}

