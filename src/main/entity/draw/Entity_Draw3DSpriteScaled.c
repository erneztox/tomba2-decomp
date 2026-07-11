/**
 * @brief Draws scaled 3D sprite with GTE scale matrix + MVMVA
 * @note Original: func_8003C464 at 0x8003C464
 */
// Entity_Draw3DSpriteScaled


// Entity_Draw3DSpriteScaled

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void Entity_Draw3DSpriteScaled(int param_1)

{
  u8 bVar1;
  s32 in_zero;
  s32 extraout_at;
  
  if (param_1->anim_data != 0) {
    GTE_LoadScaleMatrix(0x1f800000,(int)*(s16 *)(param_1 + 0x7a),(int)*(s16 *)(param_1 + 0x7c),
                 (int)*(s16 *)(param_1 + 0x7e));
    GTE_LoadIdentityMatrix(&DAT_1f800020);
    GTE_RotateVectorY((int)param_1->target_rot_y,&DAT_1f800020);
    bVar1 = param_1->sub_anim_id;
    GTE_ComposeMatrix(&DAT_1f800020,0x1f800000,&DAT_1f800040);
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
    _DAT_1f800054 = getCopReg(2,0x19);
    _DAT_1f800058 = getCopReg(2,0x1a);
    _DAT_1f80005c = getCopReg(2,0x1b);
    _DAT_1f800054 = _DAT_1f800054 + _g_GTE_Work10C;
    _DAT_1f800058 = _DAT_1f800058 + _g_GTE_Work110;
    _DAT_1f80005c = _DAT_1f80005c + _g_GTE_Work114;
    setCopControlWord(2,0,_DAT_1f800040);
    setCopControlWord(2,0x800,_DAT_1f800044);
    setCopControlWord(2,0x1000,_DAT_1f800048);
    setCopControlWord(2,0x1800,_DAT_1f80004c);
    setCopControlWord(2,0x2000,_DAT_1f800050);
    setCopControlWord(2,0x2800,_DAT_1f800054);
    setCopControlWord(2,0x3000,_DAT_1f800058);
    setCopControlWord(2,0x3800,_DAT_1f80005c);
    Entity_SubmitGTEVertices(param_1,bVar1 & 1);
  }
  return;
}
