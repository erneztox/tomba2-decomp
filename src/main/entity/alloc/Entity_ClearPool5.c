/**
 * @brief Clears 8 blocks of 0x4C bytes at 0x80100400 (entity child/slot table)
 * @note Original: func_8007ACC4 at 0x8007ACC4
 */
// Entity_ClearPool5



void Entity_ClearPool5(void)

{
  u8 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_80100400;
  do {
    Mem_Set(puVar1,0,0x4c);
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x4c;
  } while (iVar2 < 8);
  return;
}
