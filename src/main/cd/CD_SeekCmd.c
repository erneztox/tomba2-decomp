/**
 * @brief CD seek command: validates slot, calls FUN_800963d0 if active
 * @note Original: func_80096980 at 0x80096980
 */
// CD_SeekCmd



int FUN_80096980(s32 param_1,u16 param_2)

{
  int iVar1;
  s32 uVar2;
  int iVar3;
  
  if (param_2 < 0x11) {
    iVar3 = (int)(s16)param_2;
    if (*(s8*)(iVar3 + -0x7fefa2e8) == '\x02') {
      uVar2 = *(s32 *)(iVar3 * 4 + -0x7fefa288);
      FUN_80099370(0);
      iVar1 = FUN_80099310(uVar2);
      if (iVar1 != 0) {
        FUN_80099150(param_1,*(s32 *)(iVar3 * 4 + -0x7fefa2d0));
        *(u8 *)(iVar3 + -0x7fefa2e8) = 1;
        return iVar3;
      }
    }
  }
  FUN_80099450(0);
  return -1;
}
