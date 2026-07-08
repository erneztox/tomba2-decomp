
void FUN_800293f4(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    if (*(char *)(param_1 + 6) == ' ') {
      puVar2 = &DAT_800a1e78;
    }
    else if (*(char *)(param_1 + 6) == '\x10') {
      puVar2 = &DAT_800a1e28;
    }
    else {
      puVar2 = &DAT_800a1e50;
    }
    *(undefined **)(param_1 + 0x40) = puVar2;
    *(undefined **)(param_1 + 0x50) = &DAT_800a1d98;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) == 0) {
    if (*(code **)(param_1 + 0x18) != FUN_80027e5c) {
      *(code **)(param_1 + 0x18) = FUN_800288ac;
      goto LAB_800294b8;
    }
LAB_800294dc:
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
LAB_800294b8:
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x40);
    if (*(int *)(param_1 + 0x40) == 0) {
      if (*(code **)(param_1 + 0x18) == FUN_800288ac) goto LAB_800294dc;
      *(code **)(param_1 + 0x18) = FUN_80027e5c;
    }
    iVar3 = FUN_8002b278(param_1);
    if (iVar3 == 0) {
      FUN_80031780(param_1);
      FUN_80031708(param_1);
    }
  }
  return;
}

