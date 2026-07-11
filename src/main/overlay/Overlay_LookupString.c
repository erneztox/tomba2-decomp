/**
 * @brief Overlay string lookup: reads string ptr from table at 0x8009D414 by game state
 * @note Original: func_800263E8 at 0x800263E8
 */
// Overlay_LookupString



#include "tomba.h"
void Overlay_LookupString(void)

{
  s8 cVar1;
  u8 *puVar2;
  char *pcVar3;
  
  pcVar3 = (&PTR_DAT_8009d414)[g_GameState];
  cVar1 = *pcVar3;
  while (cVar1 != -1) {
    puVar2 = (u8 *)Entity_AllocSlot();
    *puVar2 = 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    puVar2->kind = cVar1;
    cVar1 = *pcVar3;
  }
  return;
}
