/**
 * @brief GPU sprite builder: constructs sprite prim from data
 * @note Original: func_8007C940 at 0x8007C940
 */
// GPU_SpriteBuild



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
u8 * GPU_SpriteBuild(int param_1)

{
  s16 *psVar1;
  int iVar2;
  u8 bVar3;
  int iVar4;
  s16 *psVar5;
  u8 *pbVar6;
  u8 bVar7;
  u8 bVar8;
  s16 local_28->state;
  
  GPU_SpriteCmd();
  bVar8 = 0;
  pbVar6 = *(u8 **)(param_1 + 0x10);
  local_28->type = param_1->rot_x;
  psVar5 = (s16 *)&DAT_800ecb88;
  bVar7 = *(u8 *)(param_1 + 0x56);
  _DAT_1f80017e = 0;
  if (pbVar6 != *(u8 **)(param_1 + 0x14)) {
    do {
      bVar3 = *pbVar6 + 0x10;
      if (bVar3 < 8) goto switchD_8007c9ec_caseD_f8;
      bVar3 = bVar8;
      switch(*pbVar6) {
      case 0xc0:
      case 0xc1:
      case 0xc2:
        psVar1 = (s16 *)GPU_DrawTile(psVar5,local_28,bVar7,*pbVar6 - 0xc0);
        break;
      case 0xc3:
        psVar1 = (s16 *)GPU_DrawDigit(psVar5,local_28,bVar7 + 2);
        break;
      case 0xc4:
      case 0xc5:
      case 0xc6:
      case 199:
      case 200:
        psVar1 = (s16 *)GPU_DrawDigit3(psVar5,local_28,bVar7 + 2,*pbVar6 - 0xc4);
        break;
      case 0xc9:
        psVar1 = (s16 *)GPU_DrawDigit1(psVar5,local_28,bVar7 + 2);
        break;
      case 0xca:
      case 0xcb:
        psVar1 = (s16 *)GPU_DrawNumber2(psVar5,local_28,bVar7 + 2,*pbVar6 - 0xca);
        break;
      case 0xcc:
        psVar1 = (s16 *)GPU_DrawDigit2(psVar5,local_28,bVar7 + 2);
        break;
      case 0xcd:
      case 0xce:
      case 0xcf:
      case 0xd0:
        psVar1 = (s16 *)GPU_SetupPrimitive(psVar5,*pbVar6 + 0x33,local_28,bVar7);
        break;
      default:
        psVar5->flags = bVar7;
        *psVar5 = local_28->type;
        if (*pbVar6 - 0x60 < 0x21) {
          *(u8 *)((int)psVar5 + 3) = 0x80;
          iVar4 = *pbVar6 - 0x60;
          iVar2 = iVar4;
          if (iVar4 < 0) {
            iVar2 = *pbVar6 - 0x51;
          }
          psVar5->kind = ((s16)iVar4 + (s16)(iVar2 >> 4) * -0x10) * 0x10;
          iVar2 = *pbVar6 - 0x60;
          if (iVar2 < 0) {
            iVar2 = *pbVar6 - 0x51;
          }
          psVar5->sub_type = (s16)(iVar2 >> 4) * 0x10 + 0x78;
          local_28->type = local_28->type + 0x10;
        }
        else {
          *(u8 *)((int)psVar5 + 3) = bVar8;
          psVar5->kind = (*pbVar6 & 0x1f) << 3;
          local_28->type = local_28->type + 8;
          psVar5->sub_type = (u16)(*pbVar6 >> 5) * 0x10 + 0x28;
        }
        _DAT_1f80017e = _DAT_1f80017e + 1;
        psVar5 = psVar5 + 4;
      case 0xf8:
      case 0xf9:
      case 0xfc:
        goto switchD_8007c9ec_caseD_f8;
      case 0xfa:
        local_28->type = param_1->rot_x;
        bVar7 = bVar7 + 0x10;
        goto switchD_8007c9ec_caseD_f8;
      case 0xfb:
        local_28->type = local_28->type + 8;
        goto switchD_8007c9ec_caseD_f8;
      }
      _DAT_1f80017e = _DAT_1f80017e + (s16)((int)psVar1 - (int)psVar5 >> 3);
      psVar5 = psVar1;
switchD_8007c9ec_caseD_f8:
      pbVar6 = pbVar6 + 1;
      bVar8 = bVar3;
    } while (pbVar6 != *(u8 **)(param_1 + 0x14));
  }
  return pbVar6;
}
