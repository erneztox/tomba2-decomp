/**
 * @brief Entity wait state variant 4: entity->sub_state=1, polls condition
 * @note Original: func_80041D60 at 0x80041D60
 */
// Entity_StateWait4



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80041d60(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  
  bVar1 = param_1->sub_state;
  if (bVar1 == 1) {
    uVar4 = 3;
    if ((param_1->event_id & 0x1000) == 0) {
      uVar4 = 0;
    }
    iVar3 = FUN_8007def8(param_1->event_id & 0xfff,param_1->state_7A,uVar4);
    param_1->parent = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = _DAT_1f800214;
    if (((int)param_1->event_id & 0x8000U) == 0) {
      iVar3 = param_1;
    }
    FUN_80041768(iVar3,(int)*(short *)(param_1 + 0x76),4);
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return 0;
    }
    if (-1 < param_1->event_param) {
      param_1->state_7A = *(undefined1 *)(param_1 + 0x74);
    }
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        param_1->parent = 0;
        return 1;
      }
      return 0;
    }
    if (*(char *)(param_1->parent + 4) != '\x02') {
      uVar2 = param_1->event_id;
      if ((uVar2 & 0x2000) == 0) {
        return 0;
      }
      if (param_1->sub_state2 == '\x01') {
        if (param_1->state_7B == -1) {
          return 0;
        }
        param_1->event_id = uVar2 & 0xdfff;
        iVar3 = _DAT_1f800214;
        if ((uVar2 & 0x8000) == 0) {
          iVar3 = param_1;
        }
        FUN_80041768(iVar3,iVar3->state_7B,4);
        return 0;
      }
      return 0;
    }
    if ((param_1->state_7B != -1) && ((param_1->event_id & 0x4000) == 0)) {
      iVar3 = _DAT_1f800214;
      if ((param_1->event_id & 0x8000) == 0) {
        iVar3 = param_1;
      }
      FUN_80041768(iVar3,iVar3->state_7B,4);
    }
    *(undefined1 *)(param_1->parent + 4) = 3;
  }
  param_1->sub_state = param_1->sub_state + '\x01';
  return 0;
}
