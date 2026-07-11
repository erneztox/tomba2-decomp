// FUN_80112164

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80112164(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  FUN_8011aff0();
  iVar2 = func_0x800778e4(param_1,(int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32)) *
                                       0x10000) >> 0x10);
  if (iVar2 != 0) {
    func_0x800517f8(param_1);
  }
  if (*(char *)(param_1 + 6) == '\0') {
    if ((*(char *)(param_1 + 1) != '\0') &&
       (*(undefined1 *)(param_1 + 6) = 1, *(int *)(param_1 + 0x10) == 0)) {
      if (*(char *)(param_1 + 3) == '\x01') {
        iVar2 = func_0x8003116c(0x202,0,0);
        if (iVar2 != 0) {
          *(int *)(iVar2 + 0x10) = param_1;
          *(int *)(param_1 + 0x10) = iVar2;
          *(undefined2 *)(iVar2 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
          *(short *)(iVar2 + 0x2e) = *(short *)(param_1 + 0x32) + -0x30;
          uVar1 = *(undefined2 *)(param_1 + 0x36);
          *(undefined1 *)(iVar2 + 7) = 1;
          *(undefined2 *)(iVar2 + 0x30) = uVar1;
          FUN_8011b258();
          return;
        }
      }
      else {
        iVar2 = func_0x8003116c(0x201,0,0);
        if (iVar2 != 0) {
          *(int *)(iVar2 + 0x10) = param_1;
          *(int *)(param_1 + 0x10) = iVar2;
          *(undefined2 *)(iVar2 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
          *(short *)(iVar2 + 0x2e) = *(short *)(param_1 + 0x32) + -0x30;
          uVar1 = *(undefined2 *)(param_1 + 0x36);
          *(undefined1 *)(iVar2 + 7) = 0;
          *(undefined2 *)(iVar2 + 0x30) = uVar1;
          FUN_8011b258();
          return;
        }
      }
    }
  }
  else {
    if (*(char *)(param_1 + 6) != '\x01') {
      FUN_8011b258();
      return;
    }
    if (*(char *)(param_1 + 1) == '\0') {
      if (*(int *)(param_1 + 0x10) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 3;
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      *(undefined1 *)(param_1 + 6) = 0;
    }
  }
  return;
}

