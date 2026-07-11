/**
 * @brief Updates UI element: decrements timer, resets state if timer reaches 0
 * @note Original: func_8004F430 at 0x8004F430
 */
// UI_UpdateElement



#include "tomba.h"
void UI_UpdateElement(int param_1)

{
  if (*(s16 *)(param_1 + 10) != 0) {
    UI_InitDialog();
    *(s16 *)(param_1 + 4) = 0;
    param_1->flags = 1;
  }
  return;
}
