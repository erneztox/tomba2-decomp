/**
 * @brief Spawns score popup with SFX + sets global flag at 0x800BF820
 * @note Original: func_8004B428 at 0x8004B428
 */
// Entity_SpawnScorePopupEx



undefined4 FUN_8004b428(int param_1)

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
  DAT_800bf820 = 1;
  return 1;
}
