/**
 * @brief Entity behavior setter: sets entity->behavior_flags/[0x14B]/[0x14C] from config
 * @note Original: func_80024448 at 0x80024448
 */
// Entity_BehaviorSet



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80024448(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x25;
  if (-1 < param_1->entity_flags) {
    uVar3 = 0x4a;
  }
  *(undefined1 *)(param_1 + 0x17d) = 0;
  iVar2 = FUN_80046a44(param_1,(int)*(short *)(param_1 + 0x66),(int)-param_1->target_angle,
                       uVar3);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    *(byte *)(param_1 + 0x17d) = (byte)((ushort)_DAT_1f8001a6 >> 0xb) & 3;
    FUN_80048654(param_1);
    sVar1 = _DAT_1f8001a0;
    param_1->draw_angle = _DAT_1f8001a0;
    if (param_1->direction == '\0') {
      param_1->rot_y = sVar1;
    }
    else {
      param_1->rot_y = sVar1 - 0x800U & 0xfff;
    }
    if ((iVar2 == 2) && ((*(byte *)(param_1 + 0x17d) & 1) != 0)) {
      param_1->action_flag = 7;
      FUN_80024af0(param_1);
    }
    else {
      param_1->action_flag = 4;
    }
    uVar3 = 1;
    param_1->anim_param = (char)iVar2;
    _DAT_1f800084 = 0;
  }
  return uVar3;
}
