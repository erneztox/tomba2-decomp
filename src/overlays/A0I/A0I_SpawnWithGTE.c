// A0I_SpawnWithGTE - Spawn entity with GTE position from g_GTE_Matrix01/ee

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A0I_SpawnWithGTE(int param_1)

{
  int iVar1;
  int iVar2;
  u8 auStack_20->kind;
  short local_1e;
  short local_1a;
  short local_16;
  
  if (param_1->kind == '\0') {
    param_1->rot_y = 0;
    _g_GTE_TransZ = 0xf542;
    param_1->kind = param_1->kind + '\x01';
    _g_GTE_Matrix01 = 0xce4;
    _g_GTE_Matrix10 = 0xf8f4;
    _g_GTE_Matrix12 = 0xe74;
    *(u8 *)(param_1 + 100) = *(u8 *)(param_1 + 100) | 0x80;
  }
  else if (param_1->kind != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (((DAT_800e7eaa == '\b') && (_g_CameraPosY < -0x3200)) && (_g_CameraPosX < 0xe82)) {
    _g_CameraPosX = 0xe82;
    _g_CameraPosZ = 0x837;
  }
  *(short *)(param_1 + 10) = _g_CameraPosX;
  param_1->anim_timer = _g_CameraPosY + -200;
  *(s16 *)(param_1 + 0x12) = _g_CameraPosZ;
  Camera_Mode5(param_1,param_1 + 8);
  local_1e = 0xce4;
  local_16 = 0xe74;
  iVar1 = Math_CalcAngle2D(auStack_20,(int)*(short *)(param_1 + 10),(int)*(short *)(param_1 + 0x12));
  iVar2 = (iVar1 + 0x800) * 0x10000 >> 0x10;
  iVar1 = Math_CosGTE(iVar2);
  iVar2 = Math_Cos(iVar2);
  local_1e = local_1e + (short)(iVar1 * 600 >> 0xc);
  local_16 = local_16 - (short)(iVar2 * 600 >> 0xc);
  local_1a = param_1->anim_timer + 0x280;
  if (-0x70c < local_1a) {
    local_1a = -0x70c;
  }
  Camera_Lerp(0x1f8000d0,auStack_20,0xe0);
  return;
}

