// FUN_801103b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801103b4(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (param_1[5] == '\0') {
    param_1[5] = 1;
    param_1[0xb] = 0x10;
    param_1[0x47] = 1;
    *(undefined2 *)(param_1 + 0x5a) = 0x200;
    param_1[8] = 0xfc;
    *(undefined2 *)(param_1 + 0x88) = 0xffc8;
    *(undefined2 *)(param_1 + 0x8a) = 0x20;
    *(undefined2 *)(param_1 + 0x8c) = 0;
  }
  else if (param_1[5] != '\x01') {
    FUN_8011943c();
    return;
  }
  if (*(short *)(*(int *)(param_1 + 0x10) + 0x16) == 2) {
    *param_1 = 2;
    FUN_801193e4();
    return;
  }
  *param_1 = 1;
  if (*(char *)(iVar1 + 0x3f) != '\0') {
    param_1[1] = 1;
    func_0x80077efc(param_1);
    func_0x80051d90(iVar1,param_1 + 0x88,&DAT_1f8000c0);
    *(undefined2 *)(param_1 + 0x2e) = _DAT_1f8000c0;
    *(undefined2 *)(param_1 + 0x32) = _DAT_1f8000c2;
    *(undefined2 *)(param_1 + 0x36) = _DAT_1f8000c4;
  }
  return;
}

