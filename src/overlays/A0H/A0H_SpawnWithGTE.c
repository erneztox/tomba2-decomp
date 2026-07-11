// A0H_SpawnWithGTE - Spawn entity with GTE position

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A0H_SpawnWithGTE(int param_1)

{
  u8 bVar1;
  u8 auStack_18->kind;
  s16 local_16;
  s16 local_12;
  s16 local_e;
  
  if (param_1->kind == '\0') {
    param_1->rot_y = 0;
    _g_GTE_TransZ = 0xf542;
    param_1->kind = param_1->kind + '\x01';
    _g_GTE_Matrix01 = 0xc0a;
    _g_GTE_Matrix10 = 0xeaa8;
    _g_GTE_Matrix12 = 0x12c1;
  }
  else if (param_1->kind != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *(u8 *)(param_1 + 100) & 0x7f;
  *(u8 *)(param_1 + 100) = bVar1;
  if (DAT_800e7eaa == '\t') {
    *(u8 *)(param_1 + 100) = bVar1 | 0x80;
    *(s16 *)(param_1 + 10) = _g_CameraPosX;
    param_1->anim_timer = _g_CameraPosY;
    *(s16 *)(param_1 + 0x12) = _g_CameraPosZ;
    Camera_Mode5(param_1,0x800e7eac);
    local_16 = 0xc0a;
    local_12 = 0xeaa8;
    local_e = 0x12c1;
    Camera_Lerp(0x1f8000d0,auStack_18,0xe0);
  }
  return;
}

