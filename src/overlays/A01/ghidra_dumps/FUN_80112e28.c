// FUN_80112e28

void FUN_80112e28(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x5e) == '\0') {
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    FUN_8011bebc();
    return;
  }
  if (((*(char *)(param_1 + 5) != '\0') && (*(char *)(param_1 + 5) == '\x01')) &&
     (iVar2 = func_0x80072ddc(param_1,1,2,0x10), iVar2 != 0)) {
    *(undefined1 *)(param_1 + 0x5e) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0x8011b91c;
    *(undefined1 *)(iVar2 + 3) = *(undefined1 *)(param_1 + 0x60);
    *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(short *)(iVar2 + 0x32) = *(short *)(param_1 + 0x32) + -100;
    uVar1 = *(undefined2 *)(param_1 + 0x36);
    *(undefined1 *)(iVar2 + 5) = 2;
    *(undefined2 *)(iVar2 + 0x36) = uVar1;
    DAT_800bf9f4 = DAT_800bf9f4 & ~('\x01' << ((int)*(short *)(param_1 + 0x60) & 0x1fU));
    DAT_800bf9f5 = DAT_800bf9f5 + -1;
    *(undefined1 *)(param_1 + 4) = 3;
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 2;
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 5) = 0x80;
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 6) = 0;
    }
  }
  return;
}

