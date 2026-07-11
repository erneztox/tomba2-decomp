/**
 * @brief Audio channel param: branches on param3 < 0x40, calls different handlers
 * @note Original: func_8008EA20 at 0x8008EA20
 */
// Audio_ChannelParam



void FUN_8008ea20(ushort param_1,short param_2,byte param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(&DAT_80104c30 + ((int)((uint)param_1 << 0x10) >> 0xe));
  if (param_3 < 0x40) {
    FUN_800931a0();
  }
  else {
    FUN_800931b0();
  }
  uVar1 = FUN_80090160((int)(short)param_1,(int)param_2);
  *(undefined4 *)(iVar2 + param_2 * 0xb0 + 0x90) = uVar1;
  return;
}
