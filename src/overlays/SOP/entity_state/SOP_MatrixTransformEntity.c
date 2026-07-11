// SOP_MatrixTransformEntity (SOP_MatrixTransformEntity) - GTE matrix transform entity: applies 3D transform in 2 iterations

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SOP_MatrixTransformEntity(int param_1)

{
  int iVar1;
  s32 local_20->kind;
  
  iVar1 = 0;
  local_20->type = _DAT_80108ff0;
  _DAT_1f800090 = 0;
  do {
    Entity_SubmitSpriteRotZ(param_1 + 0x2c,local_20,param_1 + 0x48);
    Entity_SubmitQuadToOT(0x8010cc08,0,0,(int)param_1->angle_offset);
    iVar1 = iVar1 + 1;
    param_1->sprite_x = param_1->sprite_x + 0x800;
  } while (iVar1 < 2);
  return;
}

