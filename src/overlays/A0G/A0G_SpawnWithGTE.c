// A0G_SpawnWithGTE - Spawn entity with GTE position: sets g_GTE_Matrix01/da/ee

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A0G_SpawnWithGTE(int param_1)

{
  int iVar1;
  
  if (param_1->kind == '\0') {
    param_1->rot_y = 0;
    _g_GTE_TransZ = 0xf92a;
    param_1->kind = param_1->kind + '\x01';
    _g_GTE_Matrix01 = 0xd69;
    _g_GTE_Matrix12 = 0xe74;
    _g_GTE_Matrix10 = _g_CameraPosY + -0xdc;
  }
  else if (param_1->kind != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  Camera_Mode5(param_1,0x800e7eac);
  iVar1 = _g_CameraPosZ - 0xed8;
  if (iVar1 * 0x10000 < 0) {
    iVar1 = 0;
  }
  _g_GTE_Matrix12 = 0xe74 - (short)(((iVar1 << 0x10) >> 0x10) - ((iVar1 << 0x10) >> 0x1f) >> 1);
  _g_GTE_Matrix10 = _g_CameraPosY + -0xdc;
  return;
}

