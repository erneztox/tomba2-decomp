// FUN_8006b124

void FUN_8006b124(int param_1,int param_2)

{
  undefined2 uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x46) >> 1 & 3;
  if (bVar2 == 2) {
    uVar1 = 0xe40;
  }
  else {
    if (bVar2 < 3) {
      *(undefined2 *)(param_1 + 0x6a) = 0;
      goto LAB_8006b194;
    }
    uVar1 = 0xc20;
    if (bVar2 != 3) goto LAB_8006b194;
  }
  *(undefined2 *)(param_1 + 0x6a) = uVar1;
LAB_8006b194:
  *(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) & 7;
  FUN_80074590(0x22,0,0);
  FUN_80069634(param_1);
  FUN_8006b020(param_1,0);
  if (param_2 == 0) {
    FUN_80031558(param_1,*(byte *)(param_1 + 2) - 1);
  }
  *(undefined2 *)(param_1 + 0x42) = 2;
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x68);
  return;
}

