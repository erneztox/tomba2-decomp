/**
 * @brief CD-ROM seek: moves laser to specific sector number, retries if needed
 * @note Original: func_8001CEB0 at 0x8001CEB0
 */
// CD_SeekToSector



#include "tomba.h"
void FUN_8001ceb0(int param_1,s32 param_2)

{
  int iVar1;
  u8 local_18->counter1;
  
  iVar1 = FUN_80089a10();
  if (iVar1 != param_1) {
    local_18->type = (u8)param_1;
    FUN_8001ce04(0xe,local_18,param_2);
    FUN_80051f80(2);
  }
  return;
}
