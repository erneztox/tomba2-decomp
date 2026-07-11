/**
 * @brief GPU digit draw variant 3: different global source
 * @note Original: func_8007C780 at 0x8007C780
 */
// GPU_DrawDigit3



short * FUN_8007c780(short *param_1,short *param_2,undefined1 param_3,short param_4)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  short *psVar4;
  
  sVar2 = *param_2;
  param_1->flags = param_3;
  *(undefined1 *)((int)param_1 + 3) = 0;
  param_1->kind = 8;
  param_1->sub_type = 0x38;
  *param_1 = sVar2;
  sVar2 = *param_2;
  *param_2 = sVar2 + 8;
  param_1->state = sVar2 + 8;
  param_1->behavior_state = param_3;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  param_1->action_state = 0x80;
  param_1->sub_action = 0x38;
  *param_2 = *param_2 + 0x10;
  psVar4 = param_1 + 8;
  if (param_4 == 1) {
    pbVar3 = &DAT_800a58c0;
  }
  else if (param_4 < 2) {
    if (param_4 == 0) {
      pbVar3 = &DAT_800a58b8;
    }
    else {
      pbVar3 = &DAT_800a58dc;
    }
  }
  else if (param_4 == 2) {
    pbVar3 = &DAT_800a58c8;
  }
  else if (param_4 == 3) {
    pbVar3 = &DAT_800a58d0;
  }
  else {
    pbVar3 = &DAT_800a58dc;
  }
  bVar1 = *pbVar3;
  if (bVar1 != 0xff) {
    param_1 = param_1 + 0xb;
    do {
      sVar2 = 0x60;
      if (bVar1 < 10) {
        sVar2 = (ushort)*pbVar3 * 8 + 0x80;
      }
      pbVar3 = pbVar3 + 1;
      *psVar4 = *param_2;
      *(undefined1 *)(param_1 + -2) = param_3;
      *(undefined1 *)((int)param_1 + -3) = 0;
      param_1[-1] = sVar2;
      *param_1 = 0x28;
      param_1 = param_1 + 4;
      *param_2 = *param_2 + 8;
      bVar1 = *pbVar3;
      psVar4 = psVar4 + 4;
    } while (bVar1 != 0xff);
  }
  return psVar4;
}
