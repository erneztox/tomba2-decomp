/**
 * @brief UI text line draw: iterates string, draws each s8 via UI_RenderChar
 * @note Original: func_8004EFC0 at 0x8004EFC0
 */
// UI_DrawTextLine



#include "tomba.h"
s8 UI_DrawTextLine(char *param_1,s16 *param_2)

{
  s16 sVar1;
  s8 cVar2;
  u8 local_20->counter1;
  
  cVar2 = '\0';
  *param_2 = 0;
  while( true ) {
    sVar1 = UI_RenderChar(param_1,local_20);
    if (*param_2 < sVar1) {
      *param_2 = sVar1;
    }
    cVar2 = cVar2 + '\x01';
    if (param_1[local_20->type] == -1) break;
    param_1 = param_1 + local_20->type + 1;
  }
  return cVar2;
}
