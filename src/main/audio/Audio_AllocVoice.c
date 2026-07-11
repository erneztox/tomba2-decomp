/**
 * @brief Audio voice allocator: finds free voice slot in channel struct
 * @note Original: func_80090160 at 0x80090160
 */
// Audio_AllocVoice



int Audio_AllocVoice(int param_1,s16 param_2)

{
  u8 bVar1;
  int iVar2;
  uint uVar3;
  s32 *puVar4;
  
  puVar4 = (s32 *)(*(int *)(&g_AudioChannels + ((param_1 << 0x10) >> 0xe)) + param_2 * 0xb0);
  bVar1 = *(u8 *)*puVar4;
  uVar3 = (uint)bVar1;
  *puVar4 = (u8 *)*puVar4 + 1;
  iVar2 = 0;
  if (uVar3 != 0) {
    iVar2 = uVar3 << 2;
    if ((bVar1 & 0x80) != 0) {
      uVar3 = uVar3 & 0x7f;
      do {
        bVar1 = *(u8 *)*puVar4;
        *puVar4 = (u8 *)*puVar4 + 1;
        uVar3 = uVar3 * 0x80 + (bVar1 & 0x7f);
      } while ((bVar1 & 0x80) != 0);
      iVar2 = uVar3 * 4;
    }
    iVar2 = (iVar2 + uVar3) * 2;
    puVar4[0x22] = puVar4[0x22] + iVar2;
  }
  return iVar2;
}
