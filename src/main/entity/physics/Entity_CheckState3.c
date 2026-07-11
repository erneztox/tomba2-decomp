/**
 * @brief Entity state check variant 3: checks DAT_1f800253/237
 * @note Original: func_8006042C at 0x8006042C
 */
// Entity_CheckState3



undefined4 FUN_8006042c(int param_1)

{
  byte bVar1;
  
  if (1 < DAT_1f800253) {
    return 2;
  }
  if (DAT_1f800237 == '\0') {
    bVar1 = param_1->input_state;
    if (bVar1 == 1) {
LAB_800604bc:
      if (param_1->input_flags == 0) {
        return 0;
      }
      if ((param_1->input_flags & 1) != 0) {
        return 1;
      }
      return 0;
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return 0;
      }
    }
    else if (bVar1 != 2) {
      if (bVar1 != 3) {
        return 0;
      }
      goto LAB_800604bc;
    }
  }
  else {
    bVar1 = param_1->input_state;
    if (bVar1 != 1) {
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          return 0;
        }
      }
      else if (bVar1 != 2) {
        if (bVar1 != 3) {
          return 0;
        }
        goto LAB_8006049c;
      }
      if (param_1->input_flags == 0) {
        return 0;
      }
      if ((param_1->input_flags & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
LAB_8006049c:
  if (param_1->input_flags == 0) {
    return 0;
  }
  if ((param_1->input_flags & 1) == 0) {
    return 1;
  }
  return 0;
}
