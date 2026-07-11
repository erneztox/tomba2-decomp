/**
 * @brief Initializes CD drive hardware: sends config commands
 * @note Original: func_8008B040 at 0x8008B040
 */
// CD_InitDrive



#include "tomba.h"
s32 CD_InitDrive(u8 *param_1)

{
  *DAT_800ac280 = 2;
  *DAT_800ac288 = *param_1;
  *DAT_800ac28c = param_1->flags;
  *DAT_800ac280 = 3;
  *DAT_800ac284 = param_1->kind;
  *DAT_800ac288 = param_1->sub_type;
  *DAT_800ac28c = 0x20;
  return 0;
}
