/**
 * @brief CD event poll: iterates 0x800AC2D4 table, dispatches active event callbacks
 * @note Original: func_8008BEAC at 0x8008BEAC
 */
// CD_PollEvent



int CD_PollEvent(int param_1,s32 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = -0x7fefd28c;
  iVar3 = 0;
  while( true ) {
    if (*(int *)(iVar3 + -0x7fefd294) == 0) {
      return -1;
    }
    if ((*(int *)(iVar3 + -0x7fefd294) == param_1) &&
       (iVar1 = String_Compare2(param_2,iVar4), iVar1 == 0)) break;
    iVar4 = iVar4 + 0x2c;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x2c;
    if (0x7f < iVar2) {
      return -1;
    }
  }
  return iVar2 + 1;
}
