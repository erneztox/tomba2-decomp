/**
 * @brief CD-ROM seek: moves laser to specific sector number, retries if needed
 * @note Original: func_8001CEB0 at 0x8001CEB0
 */
// CD_SeekToSector



#include "tomba.h"
void CD_SeekToSector(int param_1,s32 param_2)

{
  int iVar1;
  u8 local_18->counter1;
  
  iVar1 = CD_GetStatusByte();
  if (iVar1 != param_1) {
    local_18->type = (u8)param_1;
    CD_ReadRequest(0xe,local_18,param_2);
    Sys_TriggerIRQ(2);
  }
  return;
}
