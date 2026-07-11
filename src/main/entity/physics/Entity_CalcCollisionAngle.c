/**
 * @brief Calculates collision angles: atan2 on surface normal, stores slope vectors at entity[0x48-4C]
 * @note Original: func_80048654 at 0x80048654
 */
// Entity_CalcCollisionAngle



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80048654(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  sVar2 = FUN_80085690((uint)_DAT_1f8001b8 - (uint)_DAT_1f8001b4,
                       (uint)_DAT_1f8001b6 - (uint)_DAT_1f8001b2);
  _DAT_1f8001a0 = -sVar2 & 0xfff;
  iVar3 = (int)*_DAT_1f8001e8;
  iVar4 = (int)_DAT_1f8001e8->kind;
  cVar1 = _DAT_1f8001e8->flags;
  sVar2 = FUN_80084080(iVar3 * iVar3 + iVar4 * iVar4);
  _DAT_1f8001a2 = FUN_80085690((int)(short)cVar1,(int)sVar2);
  param_1->normal_x = (short)(iVar3 << 2);
  param_1->velocity_y = (short)cVar1 << 2;
  param_1->normal_z = (short)(iVar4 << 2);
  return;
}
