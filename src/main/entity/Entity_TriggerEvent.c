/**
 * @brief Triggers event: entity[0x78] state, checks entity[0x72/0x74] conditions, calls FUN_80042728
 * @note Original: func_80042758 at 0x80042758
 */
// Entity_TriggerEvent



undefined4 FUN_80042758(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    if (-1 < *(short *)(param_1 + 0x72)) {
      iVar2 = FUN_80040b48();
      if (iVar2 != 1) {
        return 1;
      }
      if (*(short *)(param_1 + 0x74) != 0) {
        return 1;
      }
    }
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (*(char *)(param_1 + 0x78) == '\x01') {
      uVar1 = FUN_80042728();
    }
  }
  return uVar1;
}
