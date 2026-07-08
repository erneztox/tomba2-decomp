
undefined4 FUN_80014fe0(ushort *param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((short)param_1[2] < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = DAT_80025518 - 1;
    if ((int)(short)param_1[2] <= DAT_80025518 + -1) {
      uVar2 = FUN_80014838(param_1[2]);
      return uVar2;
    }
  }
  param_1[2] = uVar1;
  if ((short)param_1[3] < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = DAT_8002551a - 1;
    if ((int)(short)param_1[3] <= DAT_8002551a + -1) {
      uVar2 = FUN_80014878(param_1[3]);
      return uVar2;
    }
  }
  param_1[3] = uVar1;
  if (((*param_1 & 0x3f) == 0) && ((param_1[2] & 0x3f) == 0)) {
    DAT_800384a8 = 0x5ffffff;
    DAT_800384ac = 0xe6000000;
    DAT_800384b4 = param_2 & 0xffffff | 0x2000000;
    DAT_800384b0 = *DAT_8002561c & 0x7ff | (param_2 >> 0x1f) << 10 | 0xe1000000;
    DAT_800384b8 = *(undefined4 *)param_1;
    DAT_800384bc = *(uint *)(param_1 + 2);
    FUN_80014f44(&DAT_800384a8);
    return 0;
  }
  DAT_800384a8 = 0x80384d0;
  DAT_800384c0 = param_2 & 0xffffff | 0x60000000;
  DAT_800384b8 = 0xe6000000;
  DAT_800384ac = 0xe3000000;
  DAT_800384b0 = 0xe4ffffff;
  DAT_800384b4 = 0xe5000000;
  DAT_800384bc = *DAT_8002561c & 0x7ff | (param_2 >> 0x1f) << 10 | 0xe1000000;
  DAT_800384c4 = *(undefined4 *)param_1;
  DAT_800384c8 = *(undefined4 *)(param_1 + 2);
  DAT_800384d0 = 0x3ffffff;
  uVar3 = FUN_80014f8c(3);
  DAT_800384d4 = uVar3 | 0xe3000000;
  uVar3 = FUN_80014f8c(4);
  DAT_800384d8 = uVar3 | 0xe4000000;
  uVar3 = FUN_80014f8c(5);
  DAT_800384dc = uVar3 | 0xe5000000;
  uVar2 = FUN_800149e8();
  return uVar2;
}

