/**
 * @brief Processes collision result: extracts surface normal and contact point from hit data
 * @note Original: func_80048034 at 0x80048034
 */
// Collision_ProcessResult



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80048034(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = true;
  _DAT_1f8001ec = (ushort *)(_DAT_1f8001d8 + (uint)*(ushort *)(_DAT_1f8001e0 + 2) * 8);
  iVar3 = 0;
  if (*(ushort *)(_DAT_1f8001e0 + 4) != 0) {
    do {
      if ((*_DAT_1f8001ec & 1) != 0) {
        iVar2 = (uint)_DAT_1f8001ec->flags << 0x10;
        if (0 < (short)_DAT_1f8001ec->kind) {
          iVar2 = ((uint)_DAT_1f8001ec->flags + (uint)_DAT_1f8001ec->kind) * 0x10000;
        }
        if ((iVar2 >> 0x10) + 0x80 < (int)_DAT_1f8001be) {
          if (!bVar1) {
            return;
          }
          _DAT_1f8001e8 = _DAT_1f8001dc + (uint)_DAT_1f8001ec->sub_type * 3;
          return;
        }
        bVar1 = false;
        _DAT_1f8001e8 = _DAT_1f8001dc + (uint)_DAT_1f8001ec->sub_type * 3;
      }
      iVar3 = iVar3 + 1;
      _DAT_1f8001ec = _DAT_1f8001ec + 4;
    } while (iVar3 < (int)(uint)*(ushort *)(_DAT_1f8001e0 + 4));
  }
  return;
}
