/**
 * @brief Loops entity check up to 6 times via FUN_8003675c, returns true if any pass
 * @note Original: func_8003687C at 0x8003687C
 */
// Entity_LoopCheck6B



bool FUN_8003687c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_8003675c(param_1,1);
    if (iVar1 == 0) {
      return iVar2 != 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return true;
}
