// FUN_80068214

void FUN_80068214(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (DAT_1f800236 == '\x06') {
    FUN_800525d0(param_1,1);
  }
  else {
    iVar2 = FUN_800310f4(0x1b,0xffffffa0);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
      *(undefined2 *)(iVar2 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
      *(short *)(iVar2 + 0x2e) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x62) * 2;
      uVar1 = *(undefined2 *)(param_1 + 0x36);
      *(undefined4 *)(iVar2 + 0x54) = 0x200;
      *(undefined4 *)(iVar2 + 0x58) = 0x200;
      *(undefined1 *)(iVar2 + 4) = 1;
      *(undefined4 *)(iVar2 + 0x50) = 0;
      *(undefined1 *)(iVar2 + 5) = 4;
      *(undefined2 *)(iVar2 + 0x30) = uVar1;
    }
  }
  return;
}

