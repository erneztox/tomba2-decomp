#include "gte_inline.h"
/**
 * @brief Sets GTE projection plane distance for perspective transform
 * @note Original: func_800329E0 at 0x800329E0
 */
// GTE_SetProjectionDist



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800329e0(s32 param_1)

{
  setCopControlWord(2,0,_g_GTE_WorkF8);
  setCopControlWord(2,0x800,_DAT_1f8000fc);
  setCopControlWord(2,0x1000,_DAT_1f800100);
  setCopControlWord(2,0x1800,_DAT_1f800104);
  setCopControlWord(2,0x2000,_DAT_1f800108);
  setCopControlWord(2,0x2800,_g_GTE_Work10C);
  setCopControlWord(2,0x3000,_g_GTE_Work110);
  setCopControlWord(2,0x3800,_g_GTE_Work114);
  setCopControlWord(2,0xd800,param_1);
  setCopControlWord(2,0xe000,0);
  return;
}
