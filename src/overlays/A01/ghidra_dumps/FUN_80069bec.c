// FUN_80069bec

void FUN_80069bec(int param_1,int param_2)

{
  undefined2 uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x46) >> 1 & 3;
  if (bVar2 == 2) {
    DAT_1f80027c = 1;
    uVar1 = 0xe40;
  }
  else {
    if (bVar2 < 3) {
      DAT_1f80027c = 0;
      *(undefined2 *)(param_1 + 0x6a) = 0;
      goto LAB_80069c7c;
    }
    if (bVar2 != 3) goto LAB_80069c7c;
    DAT_1f80027c = 2;
    uVar1 = 0xc00;
    if (*(char *)(param_1 + 2) == '\x01') {
      uVar1 = 0xc10;
    }
  }
  *(undefined2 *)(param_1 + 0x6a) = uVar1;
LAB_80069c7c:
  *(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) & 7;
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x6a);
  FUN_80074590(0x22,0,0);
  FUN_80069634(param_1);
  FUN_80069ae4(param_1);
  if (param_2 == 0) {
    FUN_80031558(param_1,*(byte *)(param_1 + 2) - 1);
  }
  return;
}

