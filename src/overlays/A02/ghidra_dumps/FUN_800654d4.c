// FUN_800654d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800654d4(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if ((1 < bVar1) || (bVar1 != 0)) goto LAB_80065574;
    *(undefined2 *)(param_1 + 0x58) = 0;
    DAT_800bf80e = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    FUN_80054d14(param_1,2,0);
  }
  uVar3 = (uint)_DAT_1f800192;
  sVar2 = FUN_800776f8(uVar3 & 0xfff,(int)*(short *)(param_1 + 0x56),0x100);
  *(short *)(param_1 + 0x56) = sVar2;
  if ((int)sVar2 == (uVar3 & 0xfff)) {
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    DAT_800bf80e = 1;
  }
LAB_80065574:
  FUN_80076d68(param_1);
  FUN_80065478(param_1,1);
  return;
}

