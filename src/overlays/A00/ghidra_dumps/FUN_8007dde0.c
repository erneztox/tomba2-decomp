// FUN_8007dde0

void FUN_8007dde0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    FUN_8007c940(param_1);
    FUN_8007cc00(param_1);
    FUN_8005019c(param_1 + 0x54,*(undefined1 *)(param_1 + 0x18),1,2);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 7;
      iVar2 = *(int *)(param_1 + 0x50) +
              (uint)*(ushort *)(*(short *)(param_1 + 0x5e) * 4 + *(int *)(param_1 + 0x4c));
      *(int *)(param_1 + 0x10) = iVar2;
      *(int *)(param_1 + 0x14) = iVar2;
      FUN_8007c0d0(param_1,0);
      *(undefined1 *)(param_1 + 0x46) = 1;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      DAT_800bf822 = DAT_800bf822 | 8;
    }
  }
  else if (bVar1 == 2) {
    *(undefined1 *)(param_1 + 4) = 3;
  }
  else if (bVar1 == 3) {
    DAT_800bf822 = DAT_800bf822 & 0xf7;
    FUN_8007a624(param_1);
  }
  return;
}

