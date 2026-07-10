// FUN_80053d0c

void FUN_80053d0c(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x158);
  if ((iVar2 != 0) && (iVar2 != 1)) {
    bVar1 = *(byte *)(iVar2 + 0xc);
    if (bVar1 == 4) {
      if (1 < *(byte *)(iVar2 + 2) - 0x2f) {
        *(undefined1 *)(iVar2 + 0x29) = 0;
      }
    }
    else {
      if (bVar1 < 5) {
        if (bVar1 != 2) {
          *(undefined4 *)(param_1 + 0x158) = 0;
          goto LAB_80053d88;
        }
      }
      else if ((bVar1 != 5) && (bVar1 != 9)) goto LAB_80053d84;
      *(undefined1 *)(iVar2 + 0x5e) = 0;
    }
  }
LAB_80053d84:
  *(undefined4 *)(param_1 + 0x158) = 0;
LAB_80053d88:
  *(undefined1 *)(param_1 + 0x164) = 0;
  return;
}

