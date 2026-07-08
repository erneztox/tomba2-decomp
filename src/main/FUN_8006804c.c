
void FUN_8006804c(int param_1)

{
  undefined2 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  iVar3 = FUN_800310f4(0x1b,0xffffffa0);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
    *(undefined2 *)(iVar3 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
    *(short *)(iVar3 + 0x2e) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x62) * 2;
    uVar1 = *(undefined2 *)(param_1 + 0x36);
    *(undefined4 *)(iVar3 + 0x50) = 0xf00;
    *(undefined4 *)(iVar3 + 0x54) = 0x40;
    *(undefined4 *)(iVar3 + 0x58) = 0x40;
    *(undefined2 *)(iVar3 + 0x30) = uVar1;
    uVar2 = 0x30;
    if (DAT_800bf80a == '\x04') {
      uVar2 = 1;
    }
    *(undefined1 *)(iVar3 + 0x2a) = uVar2;
  }
  *(undefined2 *)(param_1 + 0x7a) = 0x40;
  iVar3 = 0;
  if (DAT_800bf80a != '\x04') {
    local_1e = *(undefined2 *)(*(int *)(param_1 + 0xdc) + 0x2c);
    local_1a = *(short *)(*(int *)(param_1 + 0xdc) + 0x30) + -0x40;
    local_16 = *(undefined2 *)(*(int *)(param_1 + 0xdc) + 0x34);
    do {
      iVar4 = FUN_8003116c(0x1c,auStack_20,0xffffffce);
      if (iVar4 != 0) {
        *(char *)(iVar4 + 0x2a) = (char)iVar3;
        *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 0x80;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    local_1e = *(undefined2 *)(*(int *)(param_1 + 0xd0) + 0x2c);
    local_1a = *(short *)(*(int *)(param_1 + 0xd0) + 0x30) + -0x40;
    local_16 = *(undefined2 *)(*(int *)(param_1 + 0xd0) + 0x34);
    iVar3 = 4;
    do {
      iVar4 = FUN_8003116c(0x1c,auStack_20,0xffffffce);
      if (iVar4 != 0) {
        *(char *)(iVar4 + 0x2a) = (char)iVar3;
        *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 0x80;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 8);
    FUN_80074590(0x34,3,0xfffffff6);
  }
  return;
}

