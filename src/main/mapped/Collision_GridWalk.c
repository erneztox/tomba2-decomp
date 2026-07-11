/**
 * @brief Collision grid walker: walks grid from _DAT_1f8001c8 ptr
 * @note Original: func_800490E4 at 0x800490E4
 */
// Collision_GridWalk



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800490e4(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  ushort uVar6;
  
  uVar6 = 1;
  puVar1 = _DAT_1f8001c8;
  if (*_DAT_1f8001c8 != 0) {
    do {
      puVar5 = _DAT_1f8001c8 + puVar1[1];
      iVar4 = (int)(short)*puVar5;
      iVar2 = (int)(short)puVar5[1];
      iVar3 = iVar4;
      if (iVar4 == iVar2) {
        iVar2 = iVar2 + 0x40;
      }
      else if (iVar2 < iVar4) {
        iVar3 = iVar2;
        iVar2 = iVar4;
      }
      if ((int)((uint)_DAT_1f8001bc - (iVar3 + -0x80) & 0xffff) <=
          ((iVar2 + 0x80) - (iVar3 + -0x80)) * 0x10000 >> 0x10) {
        iVar4 = (int)(short)puVar5[2];
        iVar2 = (int)(short)puVar5[3];
        iVar3 = iVar4;
        if (iVar4 == iVar2) {
          iVar2 = iVar2 + 0x40;
        }
        else if (iVar2 < iVar4) {
          iVar3 = iVar2;
          iVar2 = iVar4;
        }
        if ((int)((uint)_DAT_1f8001c0 - (iVar3 + -0x80) & 0xffff) <=
            ((iVar2 + 0x80) - (iVar3 + -0x80)) * 0x10000 >> 0x10) {
          *(char *)(param_1 + 0x2a) = (char)uVar6;
          FUN_80048ecc(uVar6 & 0xff);
          return;
        }
      }
      uVar6 = uVar6 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar6 <= *_DAT_1f8001c8);
  }
  *(undefined1 *)(param_1 + 0x2a) = 1;
  FUN_80048ecc();
  _DAT_1f8001c0 = _DAT_1f8001b4;
  _DAT_1f8001bc = _DAT_1f8001b2;
  return;
}
