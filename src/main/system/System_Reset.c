/**
 * @brief System reset: clears pad state, calls init funcs, resets callbacks
 * @note Original: func_8001D940 at 0x8001D940
 */
// System_Reset



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8001d940(void)

{
  s32 bVar1;
  int iVar2;
  u8 auStack_20->counter1;
  u8 local_18->counter1;
  
  bVar1 = false;
  DAT_800be0e4 = 0;
  FUN_8001cf00(0);
  FUN_8008a00c(_g_DMADest,auStack_20);
  _DAT_1f800284 = _g_DMASize;
  _DAT_1f800288 = _g_DMASrc;
LAB_8001d998:
  do {
    do {
      do {
        FUN_80089b98(0);
        _g_DMASize = _DAT_1f800284;
        _g_DMASrc = _DAT_1f800288;
        DAT_800be0e0 = _g_DMADest + -1;
        DAT_800be0e6 = 0;
        DAT_800be0e8 = 0;
        DAT_800be0ea = 0;
        iVar2 = FUN_8001ce04(9,0,local_18);
      } while (iVar2 != 0);
      FUN_8001cf94local_18->type;
      if (!bVar1) {
        bVar1 = true;
        FUN_8001ceb0(0xa0,local_18);
      }
      iVar2 = FUN_8001ce04(2,auStack_20,local_18);
    } while ((iVar2 != 0) || (iVar2 = FUN_8001ce04(0x15,0,local_18), iVar2 != 0));
    FUN_80089b98(FUN_8001d7c4);
    iVar2 = FUN_8001ce04(6,0,local_18);
  } while (iVar2 != 0);
  do {
    FUN_80051f80(1);
    iVar2 = FUN_80089b44(1,0);
    if (iVar2 == 2) {
      if ((_g_DMASize == 0) && (iVar2 = FUN_80089fec(1), iVar2 == 0)) {
        return;
      }
    }
    else if (iVar2 == 5) {
      DAT_800be0ea = DAT_800be0ea | 1;
      goto LAB_8001d998;
    }
    if (((DAT_800be0e6 != 0) || (DAT_800be0e8 != 0)) || (DAT_800be0ea != 0)) goto LAB_8001d998;
  } while( true );
}
