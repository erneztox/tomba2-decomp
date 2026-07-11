/**
 * @brief Spawns break effect entity 0x1F at saved position, plays SFX 0x28
 * @note Original: func_8004B2E8 at 0x8004B2E8
 */
// Entity_SpawnBreakFX



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004b2e8(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  
  iVar3 = FUN_800310f4(0x1f,0xffffff74);
  if (iVar3 != 0) {
    iVar3->alloc_flags = iVar3->alloc_flags | 0x80;
    uVar2 = _DAT_1f800164;
    uVar1 = _DAT_1f800162;
    iVar3->pos_x = _DAT_1f800160;
    iVar3->pos_y = uVar1;
    *(undefined2 *)(iVar3 + 0x30) = uVar2;
  }
  FUN_80074590(0x28,0,0);
  return;
}
