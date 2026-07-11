// FUN_801111cc

void FUN_801111cc(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  
  bVar1 = *(byte *)(param_1 + 5);
  uVar5 = 1;
  if (bVar1 == 1) {
    uVar2 = func_0x80085690((int)*(short *)(param_1 + 0x36) -
                            (int)*(short *)(*(int *)(param_1 + 0x14) + 0x36),
                            (int)*(short *)(*(int *)(param_1 + 0x14) + 0x2e) -
                            (int)*(short *)(param_1 + 0x2e));
    *(ushort *)(param_1 + 0x56) = uVar2 & 0xfff;
    if (DAT_800bf9eb == '\x01') {
      iVar4 = param_1;
      func_0x80040d68(param_1,0x80135d20);
      uVar5 = (undefined1)iVar4;
      iVar4 = 2;
      *(undefined1 *)(param_1 + 0x70) = 2;
      iVar3 = *(byte *)(param_1 + 5) + 1;
      *(char *)(param_1 + 5) = (char)iVar3;
LAB_8011a24c:
      if (iVar4 == iVar3) {
        *(undefined1 *)(param_1 + 6) = 0;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + -1;
      }
      *(undefined1 *)(param_1 + 1) = uVar5;
      func_0x80077e7c(param_1);
      func_0x80041098(param_1);
      func_0x8004190c(param_1);
      return;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_8011a250(param_1);
      return;
    }
    iVar3 = 1;
    if (*(char *)(param_1 + 0x70) == -1) {
      *(undefined1 *)(param_1 + 5) = 1;
      iVar4 = 0xff;
      goto LAB_8011a24c;
    }
  }
  else {
    if (bVar1 != 2) {
      FUN_8011a250(param_1);
      return;
    }
    if (*(char *)(param_1 + 0x70) == -1) {
      *(undefined1 *)(param_1 + 4) = 3;
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x80077e7c(param_1);
  func_0x80041098(param_1);
  func_0x8004190c(param_1);
  return;
}

