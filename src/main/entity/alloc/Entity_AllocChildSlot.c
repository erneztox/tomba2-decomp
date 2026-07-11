/**
 * @brief Allocates a free slot in the child entity table (0x28 slots of 0x40 bytes)
 * @note Original: func_8007B26C at 0x8007B26C
 */
// Entity_AllocChildSlot



char * Entity_AllocChildSlot(void)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = &g_SpriteQueue;
  do {
    iVar2 = iVar2 + 1;
    if (*pcVar1 == '\0') {
      *pcVar1 = '\x01';
      return pcVar1;
    }
    pcVar1 = pcVar1 + 0x40;
  } while (iVar2 < 0x28);
  return (s8*)0x0;
}
