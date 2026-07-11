/**
 * @brief Audio program change: reads u8, increments ptr, sets->flags, stores voice at [0x90]
 * @note Original: func_8008E390 at 0x8008E390
 */
// Audio_ProgramChange



void FUN_8008e390(s16 param_1,s16 param_2)

{
  u8 uVar1;
  s32 uVar2;
  s32 *puVar3;
  
  puVar3 = (s32 *)(*(int *)(&g_AudioChannels + param_1 * 4) + param_2 * 0xb0);
  uVar1 = *(u8 *)*puVar3;
  *puVar3 = (u8 *)*puVar3 + 1;
  *(u8 *)((int)puVar3 + 0x26) = uVar1;
  uVar2 = FUN_80090160();
  puVar3[0x24] = uVar2;
  return;
}
