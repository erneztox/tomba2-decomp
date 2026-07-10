/**
 * @brief CD-ROM seek: moves laser to specific sector number, retries if needed
 * @note Original: func_8001CEB0 at 0x8001CEB0
 */
// CD_SeekToSector



void FUN_8001ceb0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_18 [8];
  
  iVar1 = FUN_80089a10();
  if (iVar1 != param_1) {
    local_18[0] = (undefined1)param_1;
    FUN_8001ce04(0xe,local_18,param_2);
    FUN_80051f80(2);
  }
  return;
}
