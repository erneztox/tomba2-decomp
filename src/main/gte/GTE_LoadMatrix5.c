/**
 * @brief GTE matrix load: sets 5 GTE regs (R11R12 through TRZ) from array
 * @note Original: func_80084660 at 0x80084660
 */
// GTE_LoadMatrix5



void FUN_80084660(undefined4 *param_1)

{
  setCopControlWord(2,0,*param_1);
  setCopControlWord(2,0x800,param_1[1]);
  setCopControlWord(2,0x1000,param_1[2]);
  setCopControlWord(2,0x1800,param_1[3]);
  setCopControlWord(2,0x2000,param_1[4]);
  return;
}
