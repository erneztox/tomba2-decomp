/**
 * @brief Entity moves toward target: collision check with entity[0x29] state, sets angle via atan2
 * @note Original: func_80041938 at 0x80041938
 */
// Entity_MoveToTarget



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_80041938(int param_1,short param_2,short param_3)

{
  byte bVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 0x29);
  if (cVar2 == '\0') {
    bVar1 = FUN_80049250(param_1,(int)param_2,(int)param_3);
    *(byte *)(param_1 + 0x29) = bVar1;
    if (bVar1 == 0) {
      cVar2 = '\0';
    }
    else {
      bVar1 = bVar1 & 1;
      *(byte *)(param_1 + 0x29) = bVar1;
      if (bVar1 != 0) {
        *(byte *)(param_1 + 0x29) = bVar1 | 0x80;
        FUN_80049674(param_1);
        *(undefined2 *)(param_1 + 0x62) = _DAT_1f8001a2;
      }
      cVar2 = *(char *)(param_1 + 0x29);
    }
  }
  return cVar2;
}
