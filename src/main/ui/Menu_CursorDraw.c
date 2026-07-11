/**
 * @brief Menu cursor drawer: draws cursor sprite at entity[0x1F] position
 * @note Original: func_8003A290 at 0x8003A290
 */
// Menu_CursorDraw



void FUN_8003a290(int param_1,short *param_2)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_2 + 0x1f);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return;
      }
      if (*(char *)((int)param_2 + 0x3f) != '\0') {
        return;
      }
      param_1->behavior_state = param_1->behavior_state + '\x01';
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined1 *)(param_2 + 0x1f) = 1;
    iVar4 = FUN_8003a1e4(param_1,param_2);
    param_2->counter1 = 0;
    param_2->render_flags = (short)((iVar4 << 4) / 0x18);
    uVar2 = FUN_8009a450();
    param_2->counter2 = (uVar2 & 0xf) - 0xc0;
    uVar2 = FUN_8009a450();
    param_2->state = (uVar2 & 0x3f) << 6;
  }
  *param_2 = param_2->counter1 >> 4;
  param_2->counter1 = param_2->counter1 + param_2->render_flags;
  param_2->flags = param_2->flags + (param_2->counter2 >> 4);
  param_2->counter2 = param_2->counter2 + 0x10;
  param_2->state = param_2->state + 0x80;
  if (-1 < param_2->flags) {
    sVar3 = FUN_8003a1e4(param_1,param_2);
    *param_2 = sVar3;
    param_2->state = 0;
    *(char *)(param_2 + 0x1f) = (char)param_2[0x1f] + '\x01';
  }
  return;
}
