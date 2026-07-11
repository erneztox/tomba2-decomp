/**
 * @brief Animation script step: state machine processing entity->sub_state animation events
 * @note Original: func_80041468 at 0x80041468
 */
// Entity_AnimScriptStep



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80041468(int param_1)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = _DAT_1f800214;
  if (((int)param_1->event_id & 0x8000U) == 0) {
    iVar6 = param_1;
  }
  if (param_1->sub_state != '\0') {
    if (param_1->sub_state != '\x01') {
      return 0;
    }
    uVar4 = FUN_80041438(iVar6,(int)*(short *)(param_1 + 0x76),(int)param_1->event_param);
    return uVar4;
  }
  uVar3 = param_1->event_id & 0x7fff;
  if (uVar3 == 2) {
    sVar2 = FUN_80085690((int)iVar6->pos_z - (int)_DAT_1f800164,
                         (int)_DAT_1f800160 - (int)iVar6->pos_y);
    uVar3 = sVar2 - 0x800;
  }
  else {
    if (uVar3 < 3) {
      if (uVar3 != 1) goto LAB_800415ac;
      sVar2 = iVar6->pos_y;
      iVar5 = (int)iVar6->pos_z - (int)_DAT_1f800164;
      sVar1 = _DAT_1f800160;
    }
    else {
      if (uVar3 != 3) {
        if (uVar3 == 10) {
          uVar3 = FUN_80085690((int)iVar6->pos_z - (int)*(short *)(param_1 + 0x76),
                               (int)param_1->event_param - (int)iVar6->pos_y);
          *(ushort *)(param_1 + 0x76) = uVar3 & 0xfff;
          param_1->event_param = 0x100;
        }
        goto LAB_800415ac;
      }
      sVar1 = param_1->pos_y;
      sVar2 = iVar6->pos_y;
      iVar5 = (int)iVar6->pos_z - (int)param_1->pos_z;
    }
    uVar3 = FUN_80085690(iVar5,(int)sVar1 - (int)sVar2);
  }
  *(ushort *)(param_1 + 0x76) = *(short *)(param_1 + 0x76) + (uVar3 & 0xfff);
LAB_800415ac:
  if (((int)((int)*(short *)(param_1 + 0x76) - (int)iVar6->rot_y & 0xfffU) <
       (int)param_1->event_param) || (param_1->event_param < 1)) {
    iVar6->rot_y = *(undefined2 *)(param_1 + 0x76);
    uVar4 = 1;
  }
  else {
    iVar6->rot_z = 0;
    param_1->sub_state = param_1->sub_state + '\x01';
    uVar4 = 0;
  }
  return uVar4;
}
