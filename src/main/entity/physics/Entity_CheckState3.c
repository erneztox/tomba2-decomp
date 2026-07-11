/**
 * @brief Entity state check variant 3: checks g_State253/237
 * @note Original: func_8006042C at 0x8006042C
 */
// Entity_CheckState3



#include "tomba.h"
s32 Entity_CheckState3(int param_1)

{
  u8 bVar1;
  
  if (1 < g_State253) {
    return 2;
  }
  if (g_State237 == '\0') {
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
