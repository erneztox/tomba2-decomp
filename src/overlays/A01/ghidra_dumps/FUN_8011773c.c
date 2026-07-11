// FUN_8011773c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8011773c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x79) == '\x02') {
      return 0;
    }
    uVar4 = FUN_8012079c(param_1,0xe,4);
    return uVar4;
  }
  if (bVar1 < 2) {
    uVar3 = 0;
    if (bVar1 != 0) goto LAB_801207cc;
    func_0x80041768(param_1,0xd,8);
    iVar2 = _DAT_800bf844;
    if (_DAT_800bf844 == 0) goto LAB_80117808;
    *(undefined1 *)(_DAT_800bf844 + 0x5e) = 2;
    *(undefined2 *)(iVar2 + 0x54) = 0;
    *(undefined1 *)(iVar2 + 5) = 0;
    *(undefined2 *)(iVar2 + 0x60) = 0x30;
    *(int *)(iVar2 + 0x10) = param_1;
    *(undefined1 *)(iVar2 + 3) = 0x30;
    *(undefined1 *)(iVar2 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
    *(undefined2 *)(param_1 + 0x76) = 1;
    *(undefined2 *)(param_1 + 0x74) = 8;
  }
  else {
    if (bVar1 != 2) {
      uVar3 = 0;
      if (bVar1 == 3) {
        if (*(char *)(param_1 + 0x79) == '\x02') {
          return 0;
        }
        return 1;
      }
      goto LAB_801207cc;
    }
    if (*(char *)(param_1 + 0x79) == '\x02') {
      return 0;
    }
    func_0x80041768(param_1,0x11,2);
LAB_80117808:
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  uVar3 = 10;
LAB_801207cc:
  *(undefined2 *)(param_1 + 0x72) = uVar3;
  uVar4 = FUN_80129950();
  return uVar4;
}

