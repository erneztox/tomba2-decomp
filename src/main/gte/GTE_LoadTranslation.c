/**
 * @brief GTE translation load: sets TRX/TRY/TRZ from struct at offset 0x14
 * @note Original: func_80084690 at 0x80084690
 */
// GTE_LoadTranslation



#include "tomba.h"
void FUN_80084690(int param_1)

{
  setCopControlWord(2,0x2800,param_1->script_ptr);
  setCopControlWord(2,0x3000,param_1->script_data);
  setCopControlWord(2,0x3800,param_1->callback);
  return;
}
