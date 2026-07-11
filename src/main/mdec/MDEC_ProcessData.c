/**
 * @brief MDEC data processor: checks DAT_800abe84, reads data via callback entity[0x3C]
 * @note Original: func_800875DC at 0x800875DC
 */
// MDEC_ProcessData



int MDEC_ProcessData(int param_1)

{
  u8 uVar1;
  int iVar2;
  int iVar3;
  
  DAT_800abebc = 0;
  if ((DAT_800abe84 != 0) && (**(u8 **)(param_1 + 0x3c) >> 4 == 8)) {
    DAT_800abebc = (uint)(param_1->state == '\0');
  }
  if (DAT_800abebc == 0) {
    (*DAT_800abe44)(param_1);
  }
  uVar1 = (*DAT_800abe40)(param_1,DAT_800abebc);
  iVar2 = MDEC_DataRead(param_1,uVar1);
  iVar3 = iVar2;
  if (((iVar2 != 0x5a) && (iVar2 != 0)) && (iVar3 = -4, iVar2 < 0)) {
    iVar3 = iVar2;
  }
  return iVar3;
}
