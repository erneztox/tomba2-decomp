/**
 * @brief Abort pending event
 * @note Original: func_80012104 at 0x80012104
 */
// Sys_AbortEvent



void Sys_AbortEvent(undefined4 param_1)

{
  int iVar1;
  undefined1 local_10 [8];
  
  local_10[0] = 0x80;
  do {
    iVar1 = Sys_AbortEvent(2,param_1,0);
  } while (iVar1 == 0);
  do {
    iVar1 = Sys_AbortEvent(0xe,local_10,0);
  } while (iVar1 == 0);
                    /* WARNING: Subroutine does not return */
  Sys_AbortEvent(3);
}
