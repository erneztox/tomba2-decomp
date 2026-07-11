/**
 * @brief Entity sprite dispatch variant 2: entity[0x72] bits
 * @note Original: func_800444EC at 0x800444EC
 */
// Entity_SpriteDispatch2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_800444ec(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  
  uVar4 = param_1->event_id;
  uVar6 = uVar4 & 0x7fff;
  iVar5 = _DAT_1f800214;
  if ((uVar4 & 0x8000) == 0) {
    iVar5 = param_1;
  }
  if (param_1->sub_state == '\0') {
    if (DAT_800e7fe4 == '\0') {
      if ((uVar4 & 0x7fff) == 0) {
        sVar1 = param_1->pos_z;
        sVar2 = param_1->pos_y;
      }
      else {
        sVar1 = *(short *)(param_1 + 0x76);
        sVar2 = param_1->event_param;
      }
      _DAT_1f800192 = FUN_80085690((int)_DAT_1f800164 - (int)sVar1,(int)sVar2 - (int)_DAT_1f800160);
      _DAT_1f800192 = _DAT_1f800192 & 0xfff;
      DAT_800e7e85 = 0x1e;
      DAT_800e7e86 = 0;
    }
    if ((uVar4 & 0x7fff) == 0) {
      sVar2 = param_1->pos_z;
      param_1->event_id = param_1->event_id | 0x100;
      sVar1 = iVar5->pos_z;
      sVar3 = param_1->pos_y;
    }
    else {
      sVar1 = iVar5->pos_z;
      sVar2 = *(short *)(param_1 + 0x76);
      sVar3 = param_1->event_param;
    }
    uVar4 = FUN_80085690((int)sVar1 - (int)sVar2,(int)sVar3 - (int)iVar5->pos_y);
    *(ushort *)(param_1 + 100) = uVar4 & 0xfff;
    param_1->sub_state = param_1->sub_state + '\x01';
  }
  else {
    if (param_1->sub_state != '\x01') {
      return 0;
    }
    if ((*(short *)(param_1 + 100) - iVar5->rot_y & 0xfffU) < uVar6) {
      iVar5->rot_y = *(short *)(param_1 + 100);
      if (DAT_800e7fe4 != '\0') {
        return 1;
      }
      if (DAT_800bf80e != '\0') {
        return 1;
      }
    }
    else {
      if (0x7ff < (*(short *)(param_1 + 100) - iVar5->rot_y & 0xfffU)) {
        uVar6 = -uVar6;
      }
      iVar5->rot_y = iVar5->rot_y + uVar6;
    }
  }
  return 0;
}
