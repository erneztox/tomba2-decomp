/**
 * @brief Collision result processor: reads _g_CollisionResult, updates entity position
 * @note Original: func_80049800 at 0x80049800
 */
// Collision_Process



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int Collision_Process(void)

{
  u16 uVar1;
  s16 sVar2;
  int iVar3;
  int iVar4;
  
  sVar2 = Collision_CheckResult();
  iVar4 = 0;
  uVar1 = *(u16 *)(_g_CollisionResult + 4);
  _g_CollisionData = (u16 *)(_DAT_1f8001d8 + (uint)*(u16 *)(_g_CollisionResult + 2) * 8);
  if (uVar1 != 0) {
    do {
      if (((*_g_CollisionData & 2) != 0) && (iVar3 = Collision_Move2((int)sVar2), iVar3 != -1)) {
        return iVar3;
      }
      iVar4 = iVar4 + 1;
      _g_CollisionData = _g_CollisionData + 4;
    } while (iVar4 < (int)(uint)uVar1);
  }
  return 0;
}
