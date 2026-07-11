/**
 * @brief MDEC decode setup: checks frame flags, sets up decode params
 * @note Original: func_80087AEC at 0x80087AEC
 */
// MDEC_SetupDecode



#include "tomba.h"
u8 MDEC_SetupDecode(void)

{
  u8 bVar1;
  int iVar2;
  
  iVar2 = (*DAT_800abe4c)();
  if ((((iVar2->state != '\0') || (*(s8*)(iVar2 + 0x38) != '\0')) ||
      ((iVar2 != iVar2->state && (*(s8*)(iVar2 + 0x39) != '\0')))) ||
     (**(char **)(iVar2 + 0x30) != '\0')) {
    bVar1 = iVar2->state;
    if (bVar1 == 3) {
      return 1;
    }
    if (bVar1 < 4) {
      if (bVar1 == 2) {
        return 1;
      }
    }
    else if (bVar1 == 6) {
      return 4;
    }
  }
  return iVar2->state;
}
