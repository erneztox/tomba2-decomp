/**
 * @brief GPU sprite decoder: reads bytecode, builds prim list
 * @note Original: func_8007CEEC at 0x8007CEEC
 */
// GPU_SpriteDecode



#include "tomba.h"
void GPU_SpriteDecode(int param_1,u16 *param_2,s16 *param_3)

{
  u8 bVar1;
  uint uVar2;
  u16 uVar3;
  u16 uVar4;
  int iVar5;
  u8 *pbVar6;
  
  *param_2 = 0;
  *param_3 = 1;
  pbVar6 = *(u8 **)(param_1 + 0x10);
  bVar1 = *pbVar6;
  uVar4 = 0;
  do {
    uVar2 = (uint)bVar1;
    if (uVar2 == 0xff) {
LAB_8007d094:
      iVar5 = (uint)uVar4 << 0x10;
LAB_8007d098:
      uVar4 = uVar4 << 3;
      if (iVar5 >> 0x10 < (int)(s16)*param_2) {
        uVar4 = *param_2 << 3;
      }
      *param_2 = uVar4;
      *param_3 = *param_3 << 4;
      return;
    }
    if ((uVar2 + 8 & 0xff) < 2) {
      iVar5 = (uint)uVar4 << 0x10;
      if ((param_1->sub_anim_id != '\0') ||
         (iVar5 = (uint)uVar4 << 0x10, 1 < param_1->sub_type)) goto LAB_8007d098;
      *param_2 = *param_2 + 2;
      goto LAB_8007d094;
    }
    if (uVar2 - 0x60 < 0x41) {
      if (uVar2 < 0x81) {
        uVar3 = *param_2 + 2;
      }
      else {
switchD_8007cfdc_caseD_cd:
        uVar3 = *param_2 + 1;
      }
      goto LAB_8007d07c;
    }
    if ((uVar2 + 0x33 & 0xff) < 4) {
      uVar3 = *param_2 + 2;
      goto LAB_8007d07c;
    }
    if ((uVar2 + 0x10 & 0xff) < 8) goto switchD_8007cfdc_caseD_fc;
    switch(*pbVar6) {
    case 0xc0:
    case 0xc1:
    case 0xc2:
      uVar3 = *param_2 + 8;
      break;
    case 0xc3:
    case 0xc9:
      uVar3 = *param_2 + 2;
      break;
    case 0xc4:
      uVar3 = *param_2 + 9;
      break;
    case 0xc5:
    case 0xc6:
      uVar3 = *param_2 + 10;
      break;
    case 199:
    case 200:
      uVar3 = *param_2 + 0xc;
      break;
    case 0xca:
    case 0xcb:
      uVar3 = *param_2 + 4;
      break;
    case 0xcc:
      uVar3 = *param_2 + 2;
      break;
    default:
      goto switchD_8007cfdc_caseD_cd;
    case 0xfa:
      if ((s16)uVar4 < (s16)*param_2) {
        uVar4 = *param_2;
      }
      *param_2 = 0;
      *param_3 = *param_3 + 1;
    case 0xfc:
      goto switchD_8007cfdc_caseD_fc;
    }
LAB_8007d07c:
    *param_2 = uVar3;
switchD_8007cfdc_caseD_fc:
    pbVar6 = pbVar6 + 1;
    bVar1 = *pbVar6;
  } while( true );
}
