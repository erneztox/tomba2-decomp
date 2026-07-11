/**
 * @brief Audio system init: calls Audio_Init2 + Audio_InitVolume + config
 * @note Original: func_80075130 at 0x80075130
 */
// Audio_SystemInit



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Audio_SystemInit(void)

{
  int iVar1;
  int iVar2;
  s32 local_20;
  s32 local_1c;
  s16 local_18;
  s16 local_16;
  
  Audio_InitSequence();
  CD_SetValidatedParam(0x18);
  CD_SetFlag28(0);
  CD_SPU_Write2(0,0xffffff);
  Audio_SystemConfig(1);
  Audio_SystemCmd(&DAT_800be3d8,0xe,1);
  Audio_SetupCmd(0x7f,0x7f);
  SPU_Start();
  _DAT_800bed78 = 0;
  _DAT_800bed80 = 0xffff;
  Audio_AllocVoice2(2);
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
  CD_CheckDevice(1);
  CD_Main(&local_20);
  GPU_SPU_Cmd(1);
  CD_SPU_Write(&local_20);
  CD_Cmd_CC_CD(1,0xffffff);
  DAT_800be22a = 0;
  DAT_800be22b = 0;
  return;
}
