/**
 * @brief GTE matrix load: sets 5 GTE regs (R11R12 through TRZ) from array
 * @note Original: func_80084660 at 0x80084660
 */
// GTE_LoadMatrix5



#include "tomba.h"
#include "gte_inline.h"
void FUN_80084660(s32 *param_1)

{
  setCopControlWord(2,0,*param_1);
  setCopControlWord(2,0x800,param_1->flags);
  setCopControlWord(2,0x1000,param_1->kind);
  setCopControlWord(2,0x1800,param_1->sub_type);
  setCopControlWord(2,0x2000,param_1->state);
  return;
}
