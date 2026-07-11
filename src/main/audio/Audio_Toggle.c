/**
 * @brief Audio toggle: flips DAT_800ac438, calls callback ptr on 1->flags transition
 * @note Original: func_80090A0C at 0x80090A0C
 */
// Audio_Toggle



#include "tomba.h"
void FUN_80090a0c(void)

{
  if (DAT_800ac438 == 0) {
    DAT_800ac438 = 1;
  }
  else {
    DAT_800ac438 = 0;
    (*(code *)PTR_FUN_800ac42c)();
  }
  return;
}
