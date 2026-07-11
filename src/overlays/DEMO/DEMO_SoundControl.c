// DEMO_SoundControl (DEMO_SoundControl) - Demo sound/music control

void DEMO_SoundControl(s32 param_1)

{
  int iVar1;
  
  do {
    do {
      iVar1 = CD_SendCmdRetry(2,param_1,0);
    } while (iVar1 == 0);
    iVar1 = CD_SendCmdFlags(0x1c0);
  } while (iVar1 == 0);
  return;
}

