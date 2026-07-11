/**
 * @brief Menu page drawer: renders full page with GTE projection
 * @note Original: func_8007F498 at 0x8007F498
 */
// Menu_DrawPage



#include "tomba.h"
void FUN_8007f498(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined local_30->state;
  ushort local_20->state;
  
  uVar4 = 0;
  FUN_80079374(0x30,0x30,0,PTR_s_Sound_800a288c,0);
  local_20->type = 0x50;
  local_20->flags = 0x70;
  local_20->kind = 0x90;
  local_30->type = PTR_s_Speakers_800a28b0;
  local_30->flags = PTR_DAT_800a28bc;
  local_30->kind = PTR_DAT_800a28c8;
  iVar2 = 0;
  do {
    FUN_80079374(0x40,(int)*(short *)((int)local_20 + iVar2),(uint)(DAT_800bf808 == uVar4) << 3,
                 local_30[uVar4],0);
    uVar4 = uVar4 + 1;
    iVar2 = uVar4 * 2;
  } while ((int)uVar4 < 3);
  uVar4 = 0;
  iVar2 = 0x940000;
  FUN_8007e998(0x2c,(int)((local_20[DAT_800bf808] + 4) * 0x10000) >> 0x10);
  FUN_80079374(0xd7,0x52,0,&DAT_800172f0,0);
  local_30->type = PTR_s_Stereo_800a28b4;
  local_30->flags = PTR_s_Monaural_800a28b8;
  do {
    uVar3 = 0;
    if (uVar4 == DAT_800fb163) {
      uVar3 = 3;
    }
    ppuVar1 = local_30 + uVar4;
    uVar4 = uVar4 + 1;
    FUN_80079374(iVar2 >> 0x10,0x50,uVar3,*ppuVar1,0);
    iVar2 = iVar2 + 0x500000;
  } while ((int)uVar4 < 2);
  uVar4 = 0;
  iVar2 = 0xb40000;
  FUN_80079324(0x98,0x74,0,PTR_DAT_800a28c0,0);
  FUN_80079324(0x108,0x74,0,PTR_DAT_800a28c4,0);
  do {
    uVar3 = 0;
    if (uVar4 == DAT_800fb164) {
      uVar3 = 3;
    }
    FUN_80078988(iVar2 >> 0x10,0x74,uVar3,&DAT_800172f4,0);
    iVar2 = iVar2 + 0x80000;
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 10);
  uVar4 = 0;
  iVar2 = 0xb40000;
  FUN_80079324(0x98,0x94,0,PTR_DAT_800a28c0,0);
  FUN_80079324(0x108,0x94,0,PTR_DAT_800a28c4,0);
  do {
    uVar3 = 0;
    if (uVar4 == DAT_800fb165) {
      uVar3 = 3;
    }
    FUN_80078988(iVar2 >> 0x10,0x94,uVar3,&DAT_800172f4,0);
    iVar2 = iVar2 + 0x80000;
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 10);
  FUN_8007fc24();
  return;
}
