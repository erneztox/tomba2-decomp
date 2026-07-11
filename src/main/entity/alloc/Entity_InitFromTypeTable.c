/**
 * @brief Initializes entity sprite/bounds from type data table at 0x800A29CC (8 bytes/entry)
 * @note Original: func_8004A9A4 at 0x8004A9A4
 */
// Entity_InitFromTypeTable



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004a9a4(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = (uint)param_1->sub_type * 8;
  FUN_80051b70(param_1,(int)*(short *)(&DAT_800a29ce + iVar4),(int)*(short *)(&DAT_800a29cc + iVar4)
              );
  param_1->scale_x = 0x1300;
  param_1->scale_y = 0x1300;
  param_1->scale_z = 0x1300;
  param_1->bounds_min_y = (ushort)(byte)(&DAT_800a29d1)[iVar4];
  param_1->bounds_max_y = (ushort)(byte)(&DAT_800a29d1)[iVar4] << 1;
  param_1->bounds_min_x = (ushort)(byte)(&DAT_800a29d0)[iVar4];
  param_1->bounds_size = (ushort)(byte)(&DAT_800a29d0)[iVar4] << 1;
  uVar1 = *(undefined2 *)(&DAT_800a29d2 + iVar4);
  param_1->move_mode = 0;
  param_1->target_angle = uVar1;
  FUN_8004766c(param_1);
  FUN_80048750(param_1);
  uVar1 = _DAT_1f8001a0;
  sVar2 = param_1->target_angle;
  param_1->rot_z = 0;
  param_1->rot_y = uVar1;
  if (sVar2 == 8) {
    psVar3 = *(short **)(param_1 + 0xc0);
    param_1->rot_x = 0x400;
    sVar2 = *psVar3 + -0x50;
  }
  else {
    if (sVar2 == 1) {
      psVar3 = *(short **)(param_1 + 0xc0);
      param_1->rot_z = 0xff00;
    }
    else {
      if (sVar2 != 2) {
        return;
      }
      psVar3 = *(short **)(param_1 + 0xc0);
    }
    sVar2 = *psVar3 + -0x3c;
  }
  *psVar3 = sVar2;
  return;
}
