/**
 * @brief Spawns child entity attached to parent with behaviors at 0x8002B7B0/0x8002B3A4
 * @note Original: func_800331D8 at 0x800331D8
 */
// Entity_SpawnChildAttached



#include "tomba.h"
int FUN_800331d8(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 0x1b) & 0x40) == 0) && (iVar1 = FUN_8007a980(0,6,1), iVar1 != 0)) {
    iVar1->render_flags = 0x20;
    iVar1->callback = FUN_8002b7b0;
    iVar1->parent = param_2;
    iVar1->script_ptr = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_3;
    *(undefined2 *)(iVar1 + 0x32) = param_4;
    iVar1->script_data = FUN_8002b3a4;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
