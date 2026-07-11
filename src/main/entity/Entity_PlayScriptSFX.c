/**
 * @brief Plays SFX from entity script data at entity[0x72-0x76]
 * @note Original: func_80043A10 at 0x80043A10
 */
// Entity_PlayScriptSFX



#include "tomba.h"
s32 Entity_PlayScriptSFX(int param_1)

{
  Audio_PlaySoundEffect(*(u8 *)(param_1 + 0x72),(int)*(s8*)(param_1 + 0x74),
               (int)param_1->camera_mode);
  return 1;
}
