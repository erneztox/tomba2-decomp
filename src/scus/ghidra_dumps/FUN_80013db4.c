
undefined4 FUN_80013db4(undefined4 *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  uint extraout_v1;
  undefined *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_80010288;
  puVar3 = param_1;
  FUN_800132b0();
  uVar1 = 0xffffffff;
  if (*(short *)(param_1 + 1) != 0) {
    if (*(short *)((int)param_1 + 6) == 0) {
      puVar3[1] = extraout_v1 | (uint)puVar2;
      return 0xffffffff;
    }
    DAT_800255b8 = param_3 << 0x10 | param_2 & 0xffff;
    DAT_800255b4 = *param_1;
    DAT_800255bc = param_1[1];
    uVar1 = (**(code **)(DAT_8002550c + 8))(*(undefined4 *)(DAT_8002550c + 0x18),0x800255ac,0x14,0);
  }
  return uVar1;
}

