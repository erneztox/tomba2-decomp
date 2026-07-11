// FUN_80115248

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80115248(int param_1)

{
  int in_v0;
  int iVar1;
  ushort extraout_v1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  
  if (in_v0 == 0) {
    return;
  }
  uVar3 = (uint)*(byte *)(param_1 + 5);
  if (uVar3 == 0) {
    if (*(char *)(param_1 + 0x2b) == '\x03') {
      func_0x80042354(1,1);
      iVar1 = 0;
      func_0x80070724(1,0,0x9a);
      if (DAT_800bfab8 != '\0') {
        uVar2 = (ushort)DAT_800bf8bd;
        if (DAT_800bf8bd == 0xff) {
          if ((_DAT_800bfe56 & 4) == 0) {
            *(undefined1 *)(param_1 + 0x7a) = 0x12;
          }
          else {
            *(undefined1 *)(param_1 + 0x7a) = 0x13;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x7a) = 0x11;
        }
LAB_8011e2bc:
        *(ushort *)(iVar1 + 0xc) = uVar2;
        if (*(char *)(param_1 + 0x5e) == '\0') {
          *(undefined1 *)(param_1 + 5) = 0;
        }
        iVar1 = func_0x8007778c(param_1);
        if (iVar1 != 0) {
          func_0x800517f8(param_1);
        }
        return;
      }
      if (DAT_800bf8bd != 0) {
        *(undefined1 *)(param_1 + 0x7a) = 0x10;
        uVar2 = extraout_v1;
        goto LAB_8011e2bc;
      }
      func_0x80040cdc(param_1,0x801393c0,0x801361b4);
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
    lVar4 = func_0x80076d68(param_1);
  }
  else {
    lVar4 = CONCAT44(uVar3,0xff);
    if (uVar3 == 1) {
      if (*(char *)(param_1 + 0x70) == -1) {
        *(undefined1 *)(param_1 + 5) = 0;
      }
      func_0x80041098(param_1);
      func_0x8004190c(param_1);
      return;
    }
  }
  iVar1 = (int)((ulonglong)lVar4 >> 0x20);
  if (iVar1 == (int)lVar4) {
    FUN_8012702c(param_1);
    FUN_8012739c();
    return;
  }
  if (lVar4 < 0x200000000) {
    if (iVar1 != 0) {
      FUN_8012739c();
      return;
    }
    iVar1 = func_0x80051b70(param_1,0xc,3);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0xb) = 0;
      *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 4;
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x40;
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(undefined1 *)(param_1 + 0x2b) = 0;
      *(undefined1 *)(param_1 + 0x5e) = 0;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
    *(undefined1 *)(param_1 + 0x47) = 0;
    iVar1 = func_0x80072ddc(param_1,1,4,0x15);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x1c) = 0x80127af8;
      *(int *)(param_1 + 0x3c) = iVar1;
    }
    FUN_80126608(param_1);
    func_0x800517f8(param_1);
    FUN_8012739c();
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 != 3) {
      FUN_8012739c();
      return;
    }
    func_0x8007a624(param_1);
  }
  return;
}

