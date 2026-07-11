/**
 * @brief CD event handler: checks DAT_800abf28, dispatches events
 * @note Original: func_8008C5D8 at 0x8008C5D8
 */
// CD_EventHandler



#include "tomba.h"
s32 FUN_8008c5d8(int param_1)

{
  uint uVar1;
  s32 uVar2;
  int iVar3;
  uint uVar4;
  u8 local_18->counter1;
  
  FUN_80089b84(0);
  FUN_80089b98(0);
  if ((DAT_800abf28 & 1) != 0) {
    FUN_80089fc8(0);
  }
  uVar1 = FUN_80089a00();
  if ((uVar1 & 0x10) != 0) {
    uVar1 = FUN_80085900(0xffffffff);
    if ((uVar1 & 0x3f) == 0) {
      FUN_8009b9b0(s_CdRead__Shell_open____8001c588);
    }
    FUN_80089ce8(1,0);
    g_CD_SeekPos = FUN_80085900(0xffffffff);
    DAT_800ac2f8 = 0xffffffff;
    return 0xffffffff;
  }
  if (param_1 != 0) {
    FUN_8009b9b0(s_CdRead__retry____8001c5a0);
    FUN_80089bac(9,0,0);
    uVar2 = FUN_80089a30();
    iVar3 = FUN_80089bac(2,uVar2,0);
    if (iVar3 == 0) {
      DAT_800ac2f8 = 0xffffffff;
      return 0xffffffff;
    }
  }
  FUN_80089aa8();
  local_18->type = (u8)DAT_800ac2f0;
  uVar4 = DAT_800ac2f0 & 0xff;
  uVar1 = FUN_80089a10();
  if (((uVar4 != uVar1) || (param_1 != 0)) && (iVar3 = FUN_80089bac(0xe,local_18,0), iVar3 == 0)) {
    DAT_800ac2f8 = 0xffffffff;
    return 0xffffffff;
  }
  uVar2 = FUN_80089a30();
  g_CD_Counter = FUN_8008a110(uVar2);
  FUN_80089b98(FUN_8008c294);
  if ((DAT_800abf28 & 1) != 0) {
    FUN_80089fc8(FUN_8008c508);
  }
  DAT_800ac2ec = DAT_800ac2e8;
  FUN_80089ce8(6,0);
  DAT_800ac2f8 = DAT_800ac2e4;
  DAT_800ac2fc = FUN_80085900(0xffffffff);
  return DAT_800ac2f8;
}
