/**
 * @brief CD sector calculator: (offset+0x96)/0x4B = sector, remainder = offset
 * @note Original: func_8008A00C at 0x8008A00C
 */
// CD_CalcSector



void FUN_8008a00c(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (param_1 + 0x96) / 0x4b;
  iVar2 = (param_1 + 0x96) % 0x4b;
  iVar1 = iVar3 / 0x3c;
  iVar3 = iVar3 % 0x3c;
  param_2[2] = (char)iVar2 + (char)(iVar2 / 10) * '\x06';
  param_2[1] = (char)iVar3 + (char)(iVar3 / 10) * '\x06';
  *param_2 = (char)iVar1 + (char)(iVar1 / 10) * '\x06';
  return;
}
