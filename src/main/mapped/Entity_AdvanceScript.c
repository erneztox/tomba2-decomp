/**
 * @brief Entity script advance: reads byte at entity[0x14], dispatches commands
 * @note Original: func_8007D14C at 0x8007D14C
 */
// Entity_AdvanceScript



void FUN_8007d14c(int param_1)

{
  byte bVar1;
  int iVar2;
  
  *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x14);
  if (**(char **)(param_1 + 0x14) == -1) {
LAB_8007d17c:
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    iVar2 = FUN_8007c0d0(param_1,1);
    if (iVar2 == 1) {
      bVar1 = *(byte *)(param_1 + 0x46) | 1;
    }
    else {
      if (iVar2 < 2) {
        if (iVar2 != 0) goto LAB_8007d1e4;
        goto LAB_8007d17c;
      }
      if (iVar2 != 2) goto LAB_8007d1e4;
      bVar1 = *(byte *)(param_1 + 0x46) | 0x81;
    }
    *(byte *)(param_1 + 0x46) = bVar1;
  }
LAB_8007d1e4:
  if (*(char *)(param_1 + 5) != '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}
