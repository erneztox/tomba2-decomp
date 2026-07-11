/**
 * @brief Full entity reset: clears state bytes, resets audio bank, cleans refs
 * @note Original: func_80034670 at 0x80034670
 */
// Entity_ResetFull



#include "tomba.h"
void FUN_80034670(int param_1)

{
  param_1->flags = 0;
  param_1->kind = 0;
  param_1->sub_type = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  FUN_80074bf8(1);
  FUN_80034634(param_1);
  return;
}
