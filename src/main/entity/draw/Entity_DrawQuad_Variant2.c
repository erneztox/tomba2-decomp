/**
 * @brief Draws entity quad primitive - variant 2
 * @note Original address: 0x8003F4C4
 */
// Entity_DrawQuad_Variant2

#include "tomba.h"
void Entity_DrawQuad_Variant2(undefined4 param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  
  if (param_2 < param_3) {
    pbVar1 = param_2->sub_action;
    do {
      switch(*pbVar1 & 0xfc) {
      case 0x20:
        pbVar1 = pbVar1 + 0x14;
        param_2 = param_2 + 0x14;
        break;
      case 0x24:
        param_2 = param_2 + 0x20;
        *pbVar1 = *pbVar1 & 0xfd;
        pbVar1 = pbVar1 + 0x20;
        break;
      case 0x28:
        pbVar1 = pbVar1 + 0x18;
        param_2 = param_2 + 0x18;
        break;
      case 0x2c:
      case 0x34:
        param_2 = param_2 + 0x28;
        *pbVar1 = *pbVar1 & 0xfd;
        pbVar1 = pbVar1 + 0x28;
        break;
      case 0x30:
        pbVar1 = pbVar1 + 0x1c;
        param_2 = param_2 + 0x1c;
        break;
      case 0x38:
        pbVar1 = pbVar1 + 0x24;
        param_2 = param_2 + 0x24;
        break;
      case 0x3c:
        param_2 = param_2 + 0x34;
        *pbVar1 = *pbVar1 & 0xfd;
        pbVar1 = pbVar1 + 0x34;
      }
    } while (param_2 < param_3);
  }
  return;
}

