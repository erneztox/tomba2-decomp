/**
 * @brief Entity event state: entity[0x74] counter, dispatches events
 * @note Original: func_80043BD4 at 0x80043BD4
 */
// Entity_State_Event



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80043bd4(int param_1)

{
  bool bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  short sVar5;
  int *piVar6;
  
  if (param_1->event_param == 0) {
    piVar6 = (int *)&DAT_800e7eac;
  }
  else {
    piVar6 = (int *)&DAT_800e7eb4;
  }
  if (param_1->sub_state == '\0') {
    if (param_1->event_id == 2) {
      sVar2 = 0;
      if (param_1->event_param == 0) {
        sVar5 = *(short *)(param_1 + 0x76) - _DAT_800e7eae;
      }
      else {
        sVar5 = 0;
        sVar2 = *(short *)(param_1 + 0x76) - _DAT_800e7eb6;
      }
      sVar2 = FUN_80085690(-(int)sVar2,(int)sVar5);
      uVar3 = FUN_80077768((int)sVar2,(int)_DAT_800e7fc0,0);
      param_1->event_id = uVar3;
    }
    sVar2 = *(short *)(param_1 + 0x76) - *(short *)((int)piVar6 + 2);
    *(short *)(param_1 + 100) = sVar2;
    if (sVar2 == 0) {
      return 1;
    }
    _DAT_1f800192 = param_1->event_id;
    _DAT_1f800190 = 0;
    DAT_800e7e85 = 0x1f;
    DAT_800e7e86 = 0;
    param_1->sub_state = param_1->sub_state + '\x01';
  }
  else {
    if (param_1->sub_state != '\x01') {
      return 0;
    }
    if (*(short *)(param_1 + 100) < 1) {
      iVar4 = (int)*(short *)(param_1 + 0x76);
      bVar1 = iVar4 < *(short *)((int)piVar6 + 2);
    }
    else {
      iVar4 = (int)*(short *)(param_1 + 0x76);
      bVar1 = *(short *)((int)piVar6 + 2) < iVar4;
    }
    if (!bVar1) {
      *piVar6 = iVar4 << 0x10;
      _DAT_1f800190 = 0;
      _DAT_800e7ec4 = 0;
      return 1;
    }
    _DAT_1f800190 = _DAT_1f80016e;
    if (param_1->event_id == 0) {
      _DAT_1f800190 = _DAT_1f80016c;
    }
  }
  return 0;
}
