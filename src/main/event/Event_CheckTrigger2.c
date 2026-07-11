/**
 * @brief Event trigger check variant 2: tests DAT_800bf881 event flags
 * @note Original: func_80035640 at 0x80035640
 */
// Event_CheckTrigger2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_80035640(int param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (((DAT_800bf881 & 4) == 0) && (bVar1 = false, (_DAT_800bf89e & 0x200) == 0)) {
    param_1 = param_1 * 4;
    bVar1 = false;
    if ((uint)DAT_800bf870 == (uint)(byte)(&DAT_800a2468)[param_1]) {
      iVar2 = (**(code **)(&DAT_800a2444 + (uint)DAT_800bf870 * 4))();
      if (iVar2 == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = false;
        _DAT_1f800080 = iVar2;
        if ((*(char *)(iVar2 + 0xc) == (&DAT_800a2469)[param_1]) &&
           (bVar1 = false, *(char *)(iVar2 + 2) == (&DAT_800a246a)[param_1])) {
          if ((&DAT_800a246b)[param_1] == -1) {
            bVar1 = true;
          }
          else {
            bVar1 = *(char *)(iVar2 + 3) == (&DAT_800a246b)[param_1];
          }
        }
      }
    }
  }
  return bVar1;
}
