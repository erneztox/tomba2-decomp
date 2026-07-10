/**
 * @brief Particle burst: wait for animation flag, spawn children, dealloc
 * @note Original: func_80040390 at 0x80040390
 */
// Entity_Behavior_ParticleBurst



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80040390(int param_1)

{
  if (*(char *)(param_1 + 0x29) != '\0') {
    FUN_80027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0x700,8);
    FUN_80074590(0xc,0,0);
    *(undefined1 *)(param_1 + 4) = 3;
    if (*(char *)(param_1 + 0x5e) == '\x05') {
      _DAT_800bf850 = _DAT_800bf850 + -1;
    }
  }
  return;
}
