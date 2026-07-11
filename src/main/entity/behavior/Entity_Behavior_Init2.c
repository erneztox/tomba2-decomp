/**
 * @brief Entity behavior init variant 2: clears flags, sets timer
 * @note Original: func_80054650 at 0x80054650
 */
// Entity_Behavior_Init2



undefined4 FUN_80054650(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  
  DAT_1f800258 = '\0';
  param_1->input_flags = param_1->input_flags & 0xfb;
  if (param_1->physics_flag == '\0') {
    uVar4 = 0;
    if ((param_2 == 0) && (uVar4 = 0x1e, -1 < param_1->entity_flags)) {
      uVar4 = 0x3c;
    }
    if (param_1->sub_state == '\0') {
      iVar1 = (int)param_1->angle_delta;
    }
    else {
      iVar1 = param_1->parent;
      iVar1 = ((int)iVar1->bounds_max_y - (int)iVar1->bounds_min_y) -
              ((int)*(short *)(param_1 + 0x32) - (int)*(short *)(iVar1 + 0x32));
    }
    sVar3 = (short)(iVar1 / 2);
    iVar1 = FUN_8004954c(param_1,uVar4,(int)sVar3);
    if ((iVar1 != 0) || (iVar1 = FUN_8004954c(param_1,uVar4,(int)-sVar3), iVar1 != 0)) {
      bVar2 = *(byte *)(param_1 + 0x149) & 1;
      if ((*(byte *)(param_1 + 0x149) & 4) == 0) {
        bVar2 = param_1->direction;
      }
      *(undefined1 *)(param_1 + 0x60) = 1;
      param_1->input_flags = bVar2 + 4;
      return 1;
    }
    if (DAT_1f800258 != '\0') {
      param_1->input_flags = '\x05' - param_1->direction;
    }
  }
  return 0;
}
