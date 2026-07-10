// FUN_8003675c

undefined4 FUN_8003675c(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x1f) == '\0') {
    uVar2 = 0xffffffff;
    if (param_2 != 0) {
      uVar2 = 0;
    }
  }
  else {
    iVar3 = FUN_800368d0(param_1,*(byte *)(param_1 + 0x1f) - 1,*(undefined1 *)(param_1 + 0x1d));
    if (iVar3 < 0) {
      iVar3 = FUN_800368d0(param_1,*(byte *)(param_1 + 0x1f) - 2,*(undefined1 *)(param_1 + 0x1d));
      iVar4 = 0;
      if (iVar3 < 0) {
        return 0;
      }
      do {
        bVar1 = *(char *)(param_1 + 0x1f) - 1;
        *(byte *)(param_1 + 0x1f) = bVar1;
        if (param_2 == 0) {
          if (bVar1 < *(byte *)(param_1 + 0x1e)) {
            *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) - 1;
          }
        }
        else {
          *(char *)(param_1 + 0x1e) = *(char *)(param_1 + 0x1e) + -1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    else {
      bVar1 = *(char *)(param_1 + 0x1f) - 1;
      *(byte *)(param_1 + 0x1f) = bVar1;
      if (param_2 == 0) {
        if (bVar1 < *(byte *)(param_1 + 0x1e)) {
          *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) - 1;
        }
      }
      else if (*(char *)(param_1 + 0x1e) != '\0') {
        *(char *)(param_1 + 0x1e) = *(char *)(param_1 + 0x1e) + -1;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

