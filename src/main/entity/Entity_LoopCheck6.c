/**
 * @brief Loops entity check up to 6 times via Entity_LoopCheck, returns true if any pass
 * @note Original: func_80036708 at 0x80036708
 */
// Entity_LoopCheck6



s32 Entity_LoopCheck6(s32 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = Entity_LoopCheck(param_1,1);
    if (iVar1 == 0) {
      return iVar2 != 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return true;
}
