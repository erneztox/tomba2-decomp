/**
 * @brief Collision move processor: reads collision result, updates entity pos step
 * @note Original: func_80045724 at 0x80045724
 */
// Collision_Move



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_80045724(void)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 1;
  sVar2 = FUN_80048360();
  iVar3 = 0;
  uVar1 = *(ushort *)(_DAT_1f8001e0 + 4);
  _DAT_1f8001ec = (ushort *)(_DAT_1f8001d8 + (uint)*(ushort *)(_DAT_1f8001e0 + 2) * 8);
  if (uVar1 != 0) {
    do {
      if ((*_DAT_1f8001ec & 1) != 0) {
        iVar4 = FUN_80045810((int)sVar2,iVar4);
        if (iVar4 != -1) {
          return iVar4;
        }
        iVar4 = 0;
      }
      iVar3 = iVar3 + 1;
      _DAT_1f8001ec = _DAT_1f8001ec + 4;
    } while (iVar3 < (int)(uint)uVar1);
  }
  if (iVar4 != 0) {
    _DAT_1f8001a6 = 0;
    _DAT_1f8001a4 = 0;
  }
  return 0;
}
