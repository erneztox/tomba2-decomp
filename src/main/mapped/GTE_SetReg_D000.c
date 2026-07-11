/**
 * @brief GTE register set: writes param_1 to COP2 register 0xD000 (SZ0)
 * @note Original: func_800846F0 at 0x800846F0
 */
// GTE_SetReg_D000



void FUN_800846f0(undefined4 param_1)

{
  setCopControlWord(2,0xd000,param_1);
  return;
}
