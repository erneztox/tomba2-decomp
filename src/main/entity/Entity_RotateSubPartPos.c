/**
 * @brief Rotates sub-part positive: param2[0x12] delta, param2[0xA] = param2[0xE] + delta
 * @note Original: func_80073194 at 0x80073194
 */
// Entity_RotateSubPartPos



int FUN_80073194(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1->anim_id == '\0') {
    uVar1 = *(short *)(param_2 + 0x12) + 0x40;
    *(ushort *)(param_2 + 0x12) = uVar1;
    if ((int)((uint)uVar1 << 0x10) < 1) goto LAB_80073214;
    *(undefined2 *)(param_2 + 0x12) = 0;
  }
  else {
    if ((param_1->anim_id != '\x01') ||
       (uVar1 = *(short *)(param_2 + 0x12) - 0x40, *(ushort *)(param_2 + 0x12) = uVar1,
       -1 < (int)((uint)uVar1 << 0x10))) goto LAB_80073214;
    *(undefined2 *)(param_2 + 0x12) = 0;
  }
  iVar2 = 1;
LAB_80073214:
  if ((iVar2 != 0) && (param_1->combat_flag != '\0')) {
    FUN_80074590(0x18,0,0xf);
  }
  *(short *)(param_2 + 10) = param_2->anim_timer + *(short *)(param_2 + 0x12);
  return iVar2;
}
