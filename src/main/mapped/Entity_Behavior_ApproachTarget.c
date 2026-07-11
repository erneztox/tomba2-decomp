/**
 * @brief Entity approaches target position: state 0 calc angle, state 1 approach
 * @note Original: func_80044B38 at 0x80044B38
 */
// Entity_Behavior_ApproachTarget



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80044b38(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    uVar1 = FUN_800782b0(&DAT_800e7eac,(int)*(short *)(param_1 + 0x2e),
                         (int)*(short *)(param_1 + 0x36));
    *(undefined2 *)(param_1 + 0x74) = uVar1;
    _DAT_800e7ed8 = 0;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  else {
    if (*(char *)(param_1 + 0x78) != '\x01') {
      return 0;
    }
    iVar2 = FUN_80041438(&DAT_800e7e80,(int)*(short *)(param_1 + 0x74),
                         (int)*(short *)(param_1 + 0x72));
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}
