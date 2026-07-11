/**
 * @brief Entity jump state: entity[6]=2, calls FUN_80053d0c, sets velocity, advances
 * @note Original: func_80064524 at 0x80064524
 */
// Entity_State_Jump



void FUN_80064524(int param_1)

{
  *(undefined1 *)(param_1 + 6) = 2;
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_80053d0c();
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x40) = 8;
  FUN_80074590(0x1d,0,0);
  FUN_80055e28(param_1,0);
  if ((*(byte *)(param_1 + 0x14a) & 2) == 0) {
    *(byte *)(param_1 + 0x147) = *(byte *)(param_1 + 0x14a) & 1;
    *(byte *)(param_1 + 0x149) = *(byte *)(param_1 + 0x14a) & 1;
  }
  else {
    *(byte *)(param_1 + 0x147) = *(byte *)(param_1 + 0x149) & 1;
  }
  FUN_80055284(param_1);
  FUN_80054d14(param_1,0x14,0);
  return;
}
