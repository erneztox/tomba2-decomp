/**
 * @brief Audio system init: calls Audio_Init2 + Audio_InitVolume + config
 * @note Original: func_80075130 at 0x80075130
 */
// Audio_SystemInit



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80075130(void)

{
  int iVar1;
  int iVar2;
  s32 local_20;
  s32 local_1c;
  s16 local_18;
  s16 local_16;
  
  FUN_8008e040();
  FUN_800963a0(0x18);
  FUN_80096370(0);
  FUN_80098f90(0,0xffffff);
  FUN_80091d70(1);
  FUN_80091b50(&DAT_800be3d8,0xe,1);
  FUN_80090700(0x7f,0x7f);
  FUN_80090980();
  _DAT_800bed78 = 0;
  _DAT_800bed80 = 0xffff;
  FUN_800752b4(2);
  iVar2 = 0xd;
  iVar1 = -0x7ff41c30;
  DAT_800be358 = 0;
  do {
    *(s16 *)(iVar1 + 6) = 0;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + -8;
  } while (-1 < iVar2);
  local_20 = 7;
  local_1c = 0x102;
  local_18 = 0x4000;
  local_16 = 0x4000;
  FUN_80098ce0(1);
  FUN_80098330(&local_20);
  FUN_80098150(1);
  FUN_80098d30(&local_20);
  FUN_80098db0(1,0xffffff);
  DAT_800be22a = 0;
  DAT_800be22b = 0;
  return;
}
