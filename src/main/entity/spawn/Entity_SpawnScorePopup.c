/**
 * @brief Spawns score popup entity at current position with SFX 0x28
 * @note Original: func_8004B0D8 at 0x8004B0D8
 */
// Entity_SpawnScorePopup



void FUN_8004b0d8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_800310f4(0x1f,0xffffff74);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
    *(undefined2 *)(iVar1 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(iVar1 + 0x30) = *(undefined2 *)(param_1 + 0x36);
  }
  FUN_80074590(0x28,0,0);
  return;
}
