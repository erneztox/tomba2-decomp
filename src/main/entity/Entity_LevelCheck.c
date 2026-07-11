/**
 * @brief Entity level check: tests DAT_800bf870==5, checks Y position bounds
 * @note Original: func_800531DC at 0x800531DC
 */
// Entity_LevelCheck



#include "tomba.h"
void FUN_800531dc(int param_1)

{
  if (DAT_800bf870 == 5) {
    if (2 < DAT_800bf871 - 1) {
      return;
    }
    if (*(short *)(param_1 + 0x32) < -0x3b1a) {
      *(undefined2 *)(param_1 + 0x32) = 0xc4e6;
      return;
    }
  }
  else {
    if (5 < DAT_800bf870) {
      if (DAT_800bf870 != 6) {
        return;
      }
      if (param_1->collision_dir == '\x0e') {
        if (-0x1dd6 < *(short *)(param_1 + 0x32)) {
          return;
        }
        *(undefined2 *)(param_1 + 0x32) = 0xe22b;
      }
      return;
    }
    if ((DAT_800bf870 == 1) && (*(short *)(param_1 + 0x32) < -0x295a)) {
      *(undefined2 *)(param_1 + 0x32) = 0xd6a6;
      return;
    }
  }
  return;
}
