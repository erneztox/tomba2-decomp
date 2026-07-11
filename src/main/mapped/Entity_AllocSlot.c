/**
 * @brief Allocates free child slot: scans 8 slots of 0x4C at 0x80100400, returns first empty
 * @note Original: func_8007AD98 at 0x8007AD98
 */
// Entity_AllocSlot



char * FUN_8007ad98(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = &DAT_80100400;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    if (*pcVar1 == '\0') {
      return pcVar1;
    }
    pcVar1 = pcVar1 + 0x4c;
  } while (iVar2 < 8);
  return (char *)0x0;
}
