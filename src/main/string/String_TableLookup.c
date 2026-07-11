/**
 * @brief String table lookup: searches string table for matching entry
 * @note Original: func_800793C4 at 0x800793C4
 */
// String_TableLookup



int String_TableLookup(s32 *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0xa0;
  iVar3 = 0;
  if (0 < param_2) {
    do {
      uVar1 = String_Compare(*param_1);
      iVar2 = (uVar1 >> 1) * -8 + 0xa0;
      *param_3 = iVar2;
      if (iVar2 < iVar4) {
        iVar4 = iVar2;
      }
      param_3 = param_3 + 1;
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
    } while (iVar3 < param_2);
  }
  return iVar4 + -0x10;
}
