/**
 * @brief Game level init: sets up collision grid, inits entity pools
 * @note Original: func_800783DC at 0x800783DC
 */
// Game_InitLevel



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_800783dc(void)

{
  ushort uVar1;
  ushort uVar2;
  short *psVar3;
  
  FUN_80048d3c();
  DAT_800e7e80 = 3;
  _DAT_800e7ff2 = 0x3c;
  if (DAT_800bf880 == '\0') {
    _DAT_800e7ff0 = (ushort)DAT_800bf87d;
  }
  else {
    DAT_800bf880 = '\0';
    _DAT_800e7ff0 = _DAT_1f800194;
  }
  DAT_800e7eec = DAT_800bf88c;
  DAT_800e7eed = DAT_800bf88d;
  _DAT_800e7ffe = _DAT_800bf89e;
  DAT_800e7ff4 = DAT_800bf881;
  _DAT_800e7fee = _DAT_800e7ff0;
  if (DAT_800bf870 == 3) {
    _DAT_800e7e90 = FUN_80072ddc(0,3,4,0x1b);
    _DAT_800e7e90->callback = 0x8010b37c;
  }
  else if (DAT_1f800134 == '\0') {
    psVar3 = (short *)((&PTR_DAT_800a54a8)[DAT_800bf870] + (uint)DAT_800bf871 * 8);
    _DAT_800e7eac = (int)*psVar3 << 0x10;
    if (_DAT_800bf89e < 0) {
      uVar2 = psVar3->flags + 0x46;
    }
    else {
      uVar2 = psVar3->flags;
    }
    _DAT_800e7eb0 = (uint)uVar2 << 0x10;
    _DAT_800e7eb4 = (int)psVar3->kind << 0x10;
    uVar1 = psVar3->sub_type;
    DAT_800e7eaa = (byte)uVar1 & 0x7f;
    DAT_800e7fdc = (byte)((int)((uint)uVar1 << 0x10) >> 0x17) & 1;
    DAT_800e7fc7 = (byte)(uVar1 >> 8) & 1;
    if ((uVar1 & 0x800) != 0) {
      DAT_800bf816 = 1;
      DAT_800bf817 = (undefined1)((int)((int)((uint)uVar1 << 0x10) >> 0x10 & 0xf000U) >> 0xc);
    }
    if (DAT_1f800236 - 5 < 2) {
      _DAT_800e7eb0 = (uint)(ushort)(uVar2 - 1000) << 0x10;
    }
  }
  else {
    _DAT_800e7eac = _DAT_800bf890;
    _DAT_800e7eb0 = _DAT_800bf894;
    _DAT_800e7eb4 = _DAT_800bf898;
    DAT_1f800134 = '\0';
    DAT_800e7fdc = 0;
    DAT_800e7eaa = DAT_800bfe38;
  }
  DAT_1f800207 = DAT_800e7eaa;
  _DAT_1f800160 = _DAT_800e7eae;
  _DAT_1f800162 = _DAT_800e7eb2;
  _DAT_1f800164 = _DAT_800e7eb6;
  return;
}
