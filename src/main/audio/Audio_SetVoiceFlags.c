/**
 * @brief Audio voice flags: extracts bit 0x8000 from params, stores in voice struct
 * @note Original: func_8008F2BC at 0x8008F2BC
 */
// Audio_SetVoiceFlags



void FUN_8008f2bc(ushort *param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar3 = -(ushort)(param_1->action_state != 0) & 0x8000;
  if (param_1->counter1 != 0) {
    uVar3 = uVar3 | 0x4000;
  }
  if (param_1->sub_action != 0) {
    uVar3 = uVar3 | 0x20;
  }
  uVar1 = param_1->state;
  uVar2 = param_1->sub_type;
  *param_2 = -(ushort)(param_1->behavior_state != 0) & 0x8000 | (*param_1 & 0x7f) << 8 | (param_1->flags & 0xf) << 4
             | param_1->kind & 0xf;
  *param_3 = uVar3 | (uVar2 & 0x7f) << 6 | uVar1 & 0x1f;
  return;
}
