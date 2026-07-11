// FUN_8011c750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011c750(int param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  bVar1 = *(byte *)(param_1 + 0x5e);
  iVar6 = 1;
  if (bVar1 == 1) {
    iVar5 = param_1;
    uVar7 = FUN_8012540c();
    uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar2 = 2;
    if ((int)uVar7 == 0) {
LAB_8011c888:
      func_0x800735f4(param_1,0x85);
      return;
    }
    *(undefined1 *)(param_1 + 0x5e) = 2;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    param_1 = iVar5;
  }
  else {
    uVar2 = 2;
    if (1 < bVar1) {
      if (bVar1 == 2) {
        FUN_80125548(param_1);
        goto LAB_8011c888;
      }
      goto LAB_80125824;
    }
    if (bVar1 != 0) goto LAB_80125824;
    uVar2 = 0;
    if (DAT_800bfa3e < 2) {
      if (*(char *)(param_1 + 5) == '\0') {
        if (((*(char *)(param_1 + 0x29) == '\0') || (DAT_800e7ea9 == '\0')) ||
           (DAT_800e7ffb != '\0')) goto LAB_8011c888;
        *(undefined1 *)(param_1 + 5) = 1;
        func_0x8004ed94(0x34,0x41);
        iVar6 = 0;
        uVar2 = func_0x80074590(0x19,0,0xf);
      }
      else if (*(char *)(param_1 + 5) == '\x01') {
        if ((*(char *)(param_1 + 0x29) != '\0') ||
           (uVar2 = DAT_800e7fc7 & 1, uVar2 != *(byte *)(param_1 + 0x5f))) goto LAB_8011c888;
        *(undefined1 *)(param_1 + 5) = 0;
      }
      goto LAB_80125824;
    }
    *(undefined1 *)(param_1 + 0x5e) = 1;
    _DAT_0000005d = 0x800e0000;
    _DAT_0000003d = 0x55;
    uVar2 = 0xff74;
    _DAT_00000055 = 0;
    uVar4 = 0;
  }
  *(undefined4 *)(iVar6 + 0x58) = uVar4;
LAB_80125824:
  *(undefined2 *)(iVar6 + 0x48) = 0;
  *(undefined2 *)(iVar6 + 0x4a) = 0;
  *(undefined2 *)(iVar6 + 0x4c) = 0;
  *(undefined1 *)(iVar6 + 0x29) = 0;
  *(ushort *)(iVar6 + 0x32) = uVar2;
  *(char *)(iVar6 + 4) = (char)param_1;
  if ((*(uint *)(iVar6 + 0x54) & 0xffffff) < 0x808080) {
    *(undefined1 *)(iVar6 + 1) = 1;
    uVar3 = *(uint *)(iVar6 + 0x54) + *(int *)(iVar6 + 0x58) & 0xffffff;
    *(uint *)(iVar6 + 0x54) = uVar3;
    *(uint *)(iVar6 + 0x54) = uVar3 | *(int *)(iVar6 + 0x5c) << 0x18;
    *(int *)(iVar6 + 0x58) = *(int *)(iVar6 + 0x58) + -0x10101;
    *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x5c) + -5;
    FUN_8012e858();
    return;
  }
  *(undefined1 *)(iVar6 + 4) = 2;
  FUN_8012e858();
  return;
}

