/**
 * @brief MDEC decode controller: reads macroblock header, dispatches
 * @note Original: func_800892A4 at 0x800892A4
 */
// MDEC_DecodeControl



#include "tomba.h"
void FUN_800892a4(int param_1)

{
  u8 bVar1;
  s8 cVar2;
  int iVar3;
  
  bVar1 = **(u8 **)(param_1 + 0x3c) >> 4;
  if ((**(u8 **)(param_1 + 0x3c) & 0xf0) == 0) {
    **(u8 **)(param_1 + 0x30) = 0xff;
    *(u8 *)(param_1->state + 1) = 0;
    param_1->state = 0;
    param_1->state = 0;
    (*DAT_800abe3c)();
    return;
  }
  cVar2 = param_1->state;
  param_1->state = bVar1;
  if (bVar1 == 0xf) {
    param_1->state = cVar2;
  }
  else {
    **(u8 **)(param_1 + 0x30) = 0;
    iVar3 = 2;
    *(u8 *)(param_1->state + 1) = **(u8 **)(param_1 + 0x3c);
    param_1->state = param_1->state;
    if (2 < param_1->state) {
      do {
        *(u8 *)(param_1->state + iVar3) =
             *(u8 *)(param_1->state + iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)param_1->state);
    }
  }
  if (((*(s8*)(param_1->state + 1) == '\0') &&
      (((param_1->state != '\x01' || (param_1->state != 0)) &&
       (*(s8*)(param_1 + 0x50) == '\0')))) || (param_1->state != cVar2)) {
    (*DAT_800abe3c)(param_1);
  }
  cVar2 = param_1->state;
  param_1->state = 0;
  if (cVar2 == -1) {
    return;
  }
  if ((cVar2 != '\0') && (param_1->state == '\0')) {
    return;
  }
  if (((u8)(cVar2 - 2U) < 0xfc) && (**(char **)(param_1 + 0x3c) != -0xd)) {
    (*DAT_800abe3c)(param_1);
    return;
  }
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    cVar2 = param_1->state;
    param_1->state = 0;
LAB_800894ac:
    param_1->state = cVar2 + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        cVar2 = param_1->state;
        param_1->state = 1;
        goto LAB_800894ac;
      }
    }
    else if (bVar1 == 0xfe) {
      param_1->state = 0xff;
      return;
    }
    if (param_1->state == (code *)0x0) {
      cVar2 = FUN_80087fa0(param_1);
    }
    else {
      cVar2 = (param_1->state)(param_1);
    }
    param_1->state = param_1->state + cVar2;
  }
  return;
}
