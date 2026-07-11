/**
 * @brief Collision result processor: reads _DAT_1f8001e0, updates entity position
 * @note Original: func_80049800 at 0x80049800
 */
// Collision_Process



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_80049800(void)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  sVar2 = FUN_80048360();
  iVar4 = 0;
  uVar1 = *(ushort *)(_DAT_1f8001e0 + 4);
  _DAT_1f8001ec = (ushort *)(_DAT_1f8001d8 + (uint)*(ushort *)(_DAT_1f8001e0 + 2) * 8);
  if (uVar1 != 0) {
    do {
      if (((*_DAT_1f8001ec & 2) != 0) && (iVar3 = FUN_800459d0((int)sVar2), iVar3 != -1)) {
        return iVar3;
      }
      iVar4 = iVar4 + 1;
      _DAT_1f8001ec = _DAT_1f8001ec + 4;
    } while (iVar4 < (int)(uint)uVar1);
  }
  return 0;
}
