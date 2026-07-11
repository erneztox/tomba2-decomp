/**
 * @brief Auto-configures sprite data from entity[0x72]/[0x74] params
 * @note Original: func_800416F0 at 0x800416F0
 */
// Entity_SetSpriteDataAuto



void FUN_800416f0(int param_1)

{
  FUN_800416a8(param_1,(int)*(short *)(param_1 + 0x72),*(undefined4 *)(param_1 + 0x74));
  return;
}
