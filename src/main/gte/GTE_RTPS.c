/**
 * @brief GTE RTPS projection: sets cop regs, calls RTPS, reads screen coords
 * @note Original: func_8003F7D8 at 0x8003F7D8
 */
// GTE_RTPS



#include "tomba.h"
undefined4 FUN_8003f7d8(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 in_v0;
  undefined4 uVar1;
  undefined4 in_v1;
  int iVar2;
  
  setCopReg(2,in_zero,*param_2);
  setCopReg(2,in_at,param_2->flags);
  setCopReg(2,in_v0,param_2->kind);
  setCopReg(2,in_v1,param_2->sub_type);
  setCopReg(2,param_1,param_2->state);
  setCopReg(2,param_2,param_2->behavior_state);
  copFunction(2,0x280030);
  iVar2 = getCopControlWord(2,0xf800);
  *param_3 = iVar2;
  uVar1 = 0xffffffff;
  if (-1 < *param_3) {
    uVar1 = getCopReg(2,0xc);
    *(undefined4 *)(param_1 + 8) = uVar1;
    uVar1 = getCopReg(2,0xd);
    param_1->parent = uVar1;
    uVar1 = getCopReg(2,0xe);
    param_1->script_data = uVar1;
    copFunction(2,0x1400006);
    iVar2 = getCopReg(2,0x18);
    *param_3 = iVar2;
    setCopReg(2,in_zero,param_2->action_state);
    setCopReg(2,in_at,param_2->sub_action);
    copFunction(2,0x180001);
    iVar2 = getCopControlWord(2,0xf800);
    *param_3 = iVar2;
    if (*param_3 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = getCopReg(2,0xe);
      param_1->prev = uVar1;
      copFunction(2,0x168002e);
      uVar1 = getCopReg(2,7);
    }
  }
  return uVar1;
}
