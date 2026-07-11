/**
 * @brief Draws scaled 3D sprite with GTE scale matrix + MVMVA
 * @note Original: func_8003C464 at 0x8003C464
 */
// Entity_Draw3DSpriteScaled


// FUN_8003C464

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8003c464(int param_1)

{
  byte bVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  
  if (param_1->anim_data != 0) {
    FUN_800517bc(0x1f800000,(int)*(short *)(param_1 + 0x7a),(int)*(short *)(param_1 + 0x7c),
                 (int)*(short *)(param_1 + 0x7e));
    FUN_80051794(&DAT_1f800020);
    FUN_80085050((int)param_1->target_rot_y,&DAT_1f800020);
    bVar1 = param_1->sub_anim_id;
    FUN_80084110(&DAT_1f800020,0x1f800000,&DAT_1f800040);
    _DAT_1f8000c0 = CONCAT22(*(undefined2 *)(param_1 + 0x32),param_1->pos_y);
    _DAT_1f8000c4 = CONCAT22(DAT_1f8000c4_2,param_1->pos_z);
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopReg(2,in_zero,_DAT_1f8000c0);
    setCopReg(2,extraout_at,_DAT_1f8000c4);
    copFunction(2,0x486012);
    _DAT_1f800054 = getCopReg(2,0x19);
    _DAT_1f800058 = getCopReg(2,0x1a);
    _DAT_1f80005c = getCopReg(2,0x1b);
    _DAT_1f800054 = _DAT_1f800054 + _DAT_1f80010c;
    _DAT_1f800058 = _DAT_1f800058 + _DAT_1f800110;
    _DAT_1f80005c = _DAT_1f80005c + _DAT_1f800114;
    setCopControlWord(2,0,_DAT_1f800040);
    setCopControlWord(2,0x800,_DAT_1f800044);
    setCopControlWord(2,0x1000,_DAT_1f800048);
    setCopControlWord(2,0x1800,_DAT_1f80004c);
    setCopControlWord(2,0x2000,_DAT_1f800050);
    setCopControlWord(2,0x2800,_DAT_1f800054);
    setCopControlWord(2,0x3000,_DAT_1f800058);
    setCopControlWord(2,0x3800,_DAT_1f80005c);
    FUN_8003c8f4(param_1,bVar1 & 1);
  }
  return;
}
