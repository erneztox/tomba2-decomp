/**
 * @brief Draws 3D sprite directly without GTE: uses screen coordinates
 * @note Original: func_8003C788 at 0x8003C788
 */
// Entity_Draw3DSpriteDirect


// Entity_Draw3DSpriteDirect

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void Entity_Draw3DSpriteDirect(int param_1)

{
  u8 bVar1;
  s32 in_zero;
  s32 extraout_at;
  
  if (param_1->anim_data != 0) {
    GTE_LoadIdentityMatrix(0x1f800000);
    bVar1 = param_1->sub_anim_id;
    GTE_ComposeMatrix(param_1 + 0x98,0x1f800000,&DAT_1f800020);
    _g_GTE_WorkC0 = CONCAT22(*(s16 *)(param_1 + 0x32),param_1->pos_y);
    _g_GTE_WorkC4 = CONCAT22(g_GTE_WorkC4_2,param_1->pos_z);
    setCopControlWord(2,0,_g_GTE_WorkF8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopReg(2,in_zero,_g_GTE_WorkC0);
    setCopReg(2,extraout_at,_g_GTE_WorkC4);
    copFunction(2,0x486012);
    _DAT_1f800034 = getCopReg(2,0x19);
    _DAT_1f800038 = getCopReg(2,0x1a);
    _DAT_1f80003c = getCopReg(2,0x1b);
    _DAT_1f800034 = _DAT_1f800034 + _g_GTE_Work10C;
    _DAT_1f800038 = _DAT_1f800038 + _g_GTE_Work110;
    _DAT_1f80003c = _DAT_1f80003c + _g_GTE_Work114;
    setCopControlWord(2,0,_DAT_1f800020);
    setCopControlWord(2,0x800,_DAT_1f800024);
    setCopControlWord(2,0x1000,_DAT_1f800028);
    setCopControlWord(2,0x1800,_DAT_1f80002c);
    setCopControlWord(2,0x2000,_DAT_1f800030);
    setCopControlWord(2,0x2800,_DAT_1f800034);
    setCopControlWord(2,0x3000,_DAT_1f800038);
    setCopControlWord(2,0x3800,_DAT_1f80003c);
    Entity_SubmitGTEVertices(param_1,bVar1 & 1);
  }
  return;
}
