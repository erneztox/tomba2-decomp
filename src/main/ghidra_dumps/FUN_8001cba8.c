#include "tomba.h"

void FUN_8001cba8(int param_1, u8 param_2)
{
  int bVar1;
  int iVar2;
  u32 uVar3;
  
  bVar1 = param_2 != 0xff;
  if (!bVar1) {
    param_2 = 0;
  }
  uVar3 = (u32)bVar1;
  if (uVar3 < 2) {
    do {
      uVar3 = uVar3 + 1;
      iVar2 = param_1 + (u32)param_2;
      *(u8 *)(iVar2 + 0x48) = 0;
      *(u8 *)(iVar2 + 0x4a) = 0xfc;
      *(u8 *)(iVar2 + 0x4c) = 0;
      *(u8 *)(iVar2 + 0x4e) = 0xff;
      param_2 = param_2 + 1;
    } while ((int)uVar3 < 2);
  }
}
