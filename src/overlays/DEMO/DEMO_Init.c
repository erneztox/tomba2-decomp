// DEMO_Init (DEMO_Init) - Demo initialization

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 DEMO_Init(void)

{
  short sVar1;
  int iVar2;
  
  iVar2 = g_OverlayEntity;
  if (g_OverlayEntity->velocity_y == 0) {
    g_OverlayEntity->velocity_y = 1;
    iVar2->target_rot_y = 0x1c2;
  }
  else if (g_OverlayEntity->velocity_y != 1) {
    halt_baddata();
  }
  func_0x00106690(0);
  if (*(char *)(g_OverlayEntity + 0x68) == '\x02') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00106824(1,1);
  iVar2 = g_OverlayEntity;
  sVar1 = g_OverlayEntity->target_rot_y;
  g_OverlayEntity->target_rot_y = sVar1 + -1;
  if (sVar1 != 1) {
    if ((_g_PlayerFlags & 0x20) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((_g_PlayerFlags & 0x80) != 0) {
      if (*(char *)(iVar2 + 0x68) != '\x02') {
        Audio_PlaySoundEffect(0x15,0,0);
      }
      *(u8 *)(g_OverlayEntity + 0x68) = 2;
      g_OverlayEntity->velocity_y = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((_g_PlayerFlags & 0x4008) == 0) {
      if ((_g_PlayerFlags & 0x2000) == 0) {
        return 0;
      }
      Audio_PlaySoundEffect(0x14,0xfffffff7,0);
    }
    else {
      Audio_PlaySoundEffect(0x11,0,0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

