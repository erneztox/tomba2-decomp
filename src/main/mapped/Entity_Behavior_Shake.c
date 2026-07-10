/**
 * @brief Camera shake effect: toggles sub-entity position with random offset every 16 frames
 * @note Original: func_8003FD10 at 0x8003FD10
 */
// Entity_Behavior_Shake



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003fd10(int param_1)

{
  short sVar1;
  ushort uVar2;
  
  if (*(char *)(param_1 + 6) == '\0') {
    if (*(char *)(param_1 + 0x2b) != '\0') {
      *(undefined1 *)(param_1 + 6) = 1;
      *(undefined1 *)(param_1 + 0x2b) = 0;
      *(undefined2 *)(param_1 + 0x40) = 0x10;
    }
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    if (*(char *)(param_1 + 0x2b) != '\0') {
      *(undefined1 *)(param_1 + 0x2b) = 0;
      *(undefined2 *)(param_1 + 0x40) = 0x10;
    }
    sVar1 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar1;
    if (sVar1 == -1) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + -1;
    }
    *(ushort *)(*(int *)(param_1 + 0xc0) + 2) = (_DAT_1f80017c & 1) * 6;
    uVar2 = FUN_8009a450();
    **(short **)(param_1 + 0xc0) = ((uVar2 & 3) - 2) * 6;
  }
  return;
}
