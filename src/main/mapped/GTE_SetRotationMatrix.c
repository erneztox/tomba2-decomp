/**
 * @brief Sets GTE rotation matrix from data structure
 * @note Original address: 0x80084660
 */

void GTE_SetRotationMatrix(undefined4 *param_1)

{
  setCopControlWord(2,0,*param_1);
  setCopControlWord(2,0x800,param_1[1]);
  setCopControlWord(2,0x1000,param_1[2]);
  setCopControlWord(2,0x1800,param_1[3]);
  setCopControlWord(2,0x2000,param_1[4]);
  return;
}

