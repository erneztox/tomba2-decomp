/**
 * @brief Sets menu slot color configuration: active=100, inactive=2/3/0x84
 * @note Original: func_800345D8 at 0x800345D8
 */
// UI_SetSlotColors



#include "tomba.h"
void UI_SetSlotColors(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = param_1;
  do {
    if (uVar2 == param_1->counter1) {
      *(u8 *)(iVar1 + 0xc) = 0;
      *(u8 *)(iVar1 + 0x10) = 0;
      *(u8 *)(iVar1 + 0x14) = 100;
    }
    else {
      *(u8 *)(iVar1 + 0xc) = 2;
      *(u8 *)(iVar1 + 0x10) = 3;
      *(u8 *)(iVar1 + 0x14) = 0x84;
    }
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 1;
  } while ((int)uVar2 < 4);
  return;
}
