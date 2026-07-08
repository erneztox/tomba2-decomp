
undefined4 FUN_8001e0cc(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  DAT_80026dd8 = param_3;
  if (*(short *)(*(int *)(param_2 + 0x6d88) + 0x1a6) != DAT_80026da0) {
    uVar2 = 1;
    do {
      if (0xf00 < uVar2) {
        return 0xfffffffe;
      }
      uVar2 = uVar2 + 1;
    } while (*(short *)(*(int *)(param_2 + 0x6d88) + 0x1a6) != DAT_80026da0);
  }
  *(ushort *)(DAT_80026d88 + 0x1aa) = *(ushort *)(DAT_80026d88 + 0x1aa) | 0x30;
  uVar1 = FUN_8001da40();
  return uVar1;
}

