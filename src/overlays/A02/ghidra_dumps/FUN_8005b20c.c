// FUN_8005b20c

void FUN_8005b20c(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (param_2 != 0) {
    *(undefined1 *)(iVar2 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
    *(short *)(iVar2 + 0x2e) =
         (short)((*(int *)(*(int *)(param_1 + 0xdc) + 0x2c) +
                 *(int *)(*(int *)(param_1 + 0xd0) + 0x2c)) / 2);
    *(short *)(iVar2 + 0x32) =
         (short)((*(int *)(*(int *)(param_1 + 0xdc) + 0x30) +
                 *(int *)(*(int *)(param_1 + 0xd0) + 0x30)) / 2);
    *(short *)(iVar2 + 0x36) =
         (short)((*(int *)(*(int *)(param_1 + 0xdc) + 0x34) +
                 *(int *)(*(int *)(param_1 + 0xd0) + 0x34)) / 2);
    *(undefined2 *)(iVar2 + 0x56) = *(undefined2 *)(param_1 + 0x56);
    *(undefined2 *)(iVar2 + 0x58) = *(undefined2 *)(&DAT_800a46ac + *(short *)(param_1 + 0x40) * 2);
    return;
  }
  *(undefined1 *)(iVar2 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
  *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(param_1 + 0x34);
  if (*(short *)(param_1 + 0x17e) < 0) {
    sVar1 = *(short *)(param_1 + 0x32) + *(short *)(iVar2 + 0x84) + 0x28;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x32) + *(short *)(iVar2 + 0x84) + 0x50;
  }
  *(short *)(iVar2 + 0x32) = sVar1;
  if (*(byte *)(param_1 + 0x78) < 6) {
    *(undefined2 *)(iVar2 + 0x56) = *(undefined2 *)(param_1 + 0x56);
  }
  if (*(char *)(param_1 + 0x78) == '\x06') {
    *(undefined2 *)(param_1 + 0x58) = 0xff00;
    *(undefined2 *)(iVar2 + 0x58) = 0xff00;
    return;
  }
  *(undefined2 *)(iVar2 + 0x58) = *(undefined2 *)(param_1 + 0x58);
  return;
}

