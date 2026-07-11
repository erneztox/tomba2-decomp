// A09_SpawnWithGTE - Spawn entity with GTE position setup

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A09_SpawnWithGTE(int param_1)

{
  int iVar1;
  u8 bVar2;
  u8 auStack_18->kind;
  s16 local_16;
  s16 local_12;
  s16 local_e;
  
  *(u8 *)(param_1 + 0x72) = 0;
  bVar2 = *(u8 *)(param_1 + 100) & 0x7f;
  *(u8 *)(param_1 + 100) = bVar2;
  if (DAT_800e7eaa != '\x02') {
    if (_g_CameraPosX < 0x8fc) {
      *(u8 *)(param_1 + 0x72) = 3;
    }
    else {
      if (_g_CameraPosX < 0x10cd) {
        return;
      }
      *(u8 *)(param_1 + 0x72) = 2;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(u8 *)(param_1 + 100) = bVar2 | 0x80;
  if (-0x399 < _g_CameraPosY) {
    param_1->anim_timer = 0xfc68;
    *(short *)(param_1 + 10) = _g_CameraPosX;
    *(s16 *)(param_1 + 0x12) = _g_CameraPosZ;
    Camera_Mode5(param_1,param_1 + 8);
    local_16 = 0x781;
    local_12 = 0xfb00;
    local_e = 0x699;
    iVar1 = Camera_Lerp(0x1f8000d0,auStack_18,0xe0);
    if (iVar1 != 0) {
      param_1->camera_flags = 3;
    }
    return;
  }
  param_1->anim_timer = _g_CameraPosY;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

