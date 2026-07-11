/**
 * @brief Entity door behavior: entity->state=1, checks game state transition
 * @note Original: func_80026864 at 0x80026864
 */
// Entity_Behavior_Door



void FUN_80026864(int param_1)

{
  byte bVar1;
  short sVar2;
  
  if (DAT_1f80019a != '\x02') {
    return;
  }
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 8) + 1;
    *(short *)(param_1 + 8) = sVar2;
    if (0xb < sVar2) {
      param_1->state = param_1->state + '\x01';
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      if (DAT_1f800137 != '\x01') {
        return;
      }
      param_1->state = 1;
      *(undefined2 *)(param_1 + 8) = 0;
      return;
    }
    if (bVar1 == 2) {
      if ((DAT_1f800137 == '\0') || (DAT_1f800137 == '\x02')) {
        param_1->state = 3;
      }
      sVar2 = *(short *)(param_1 + 8);
      goto LAB_80026984;
    }
    if (bVar1 != 3) {
      return;
    }
    sVar2 = *(short *)(param_1 + 8);
    *(short *)(param_1 + 8) = sVar2 + -1;
    if (sVar2 == 1) {
      param_1->state = 0;
    }
  }
  sVar2 = *(short *)(param_1 + 8);
LAB_80026984:
  FUN_8007fcc8(0,0,0x140,(int)sVar2,1);
  FUN_8007fcc8(0,0xe0 - *(short *)(param_1 + 8),0x140,(int)*(short *)(param_1 + 8),1);
  return;
}
