/**
 * @brief Entity state machine variant 2: entity[0x169] state dispatch
 * @note Original: func_8006032C at 0x8006032C
 */
// Entity_StateMachine2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_StateMachine2(int param_1,int param_2)

{
  s8 cVar1;
  u8 bVar2;
  uint uVar3;
  uint uVar4;
  
  bVar2 = *(u8 *)(param_1 + 0x169);
  if (bVar2 == 1) {
    uVar4 = (uint)_DAT_1f800238 % 6;
    uVar3 = (int)(uVar4 * 0x10000) >> 0x10;
    if (uVar3 == 0) {
      cVar1 = *(s8*)(param_1 + 0x168) + '\x01';
    }
    else {
      if (4 < uVar3) {
        uVar4 = 4;
      }
      cVar1 = (char)uVar4 + *(s8*)(param_1 + 0x168);
    }
    *(s8*)(param_1 + 0x168) = cVar1;
    if (0xf < *(u8 *)(param_1 + 0x168)) {
      *(u8 *)(param_1 + 0x168) = 0xf;
    }
  }
  else if (((1 < bVar2) && (bVar2 < 4)) &&
          (bVar2 = *(s8*)(param_1 + 0x168) - 2, *(u8 *)(param_1 + 0x168) = bVar2,
          (int)((uint)bVar2 << 0x18) < 0)) {
    *(u8 *)(param_1 + 0x168) = 0;
  }
  if (param_2 == 0) {
    *(u8 *)(param_1 + 0x169) = 0;
  }
  _DAT_1f800238 = 0;
  param_1->anim_counter = (u16)(u8)(&DAT_800a46f0)[*(u8 *)(param_1 + 0x168)];
  return;
}
