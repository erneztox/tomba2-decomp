// FUN_80119a90

void FUN_80119a90(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0xbf) == '\0') && (*(char *)(param_1 + 0x5e) == '\0')) {
    iVar1 = func_0x8003116c(0x203,0,0);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x10) = param_1;
      *(int *)(param_1 + 0x10) = iVar1;
      *(undefined2 *)(iVar1 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
      *(short *)(iVar1 + 0x2e) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x72);
      *(undefined2 *)(iVar1 + 0x30) = *(undefined2 *)(param_1 + 0x36);
      *(int *)(iVar1 + 0x34) = *(short *)(param_1 + 0x6a) * 0x10000 + 0x100;
      *(undefined1 *)(param_1 + 0x5e) = 1;
      FUN_80122acc();
      return;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x5e) = 0;
  }
  return;
}

