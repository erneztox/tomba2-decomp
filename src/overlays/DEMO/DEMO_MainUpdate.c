// DEMO_MainUpdate (DEMO_MainUpdate) - Demo main update loop

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DEMO_MainUpdate(int param_1,int param_2)

{
  s32 uVar1;
  u8 local_38;
  u8 local_37;
  s16 local_36;
  s16 local_30;
  s16 local_2e;
  s16 local_2c;
  s16 local_2a;
  
  uVar1 = _DAT_800ecf58;
  if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  GPU_DrawSprite98((int)*(short *)(param_2 * 2 + param_1 * 4 + -0x7fef88fc),0xb0,4);
  local_38 = 0x50;
  local_30 = 0x5a;
  local_37 = 4;
  local_36 = 0;
  local_2e = 0xb4;
  local_2c = 0;
  local_2a = 0;
  GPU_SpriteDrawMain(&local_30,_DAT_80017574,uVar1,&local_38);
  local_30 = 0xe6;
  local_37 = 4;
  local_38 = 0;
  local_36 = 0;
  local_2e = 0xb4;
  local_2c = 0;
  local_2a = 0;
  GPU_SpriteDrawMain(&local_30,_DAT_80017578,uVar1,&local_38);
  return;
}

