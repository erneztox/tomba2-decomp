/**
 * @brief System main init: sets up memory, calls subsystem inits
 * @note Original: func_8001CFC8 at 0x8001CFC8
 */
// System_InitMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void System_InitMain(void)

{
  s32 bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  u8 *puVar7;
  u8 local_28;
  u8 local_27;
  u8 auStack_20->counter1;
  
  iVar2 = _g_CurrentEntity;
  puVar7 = (u8 *)(_g_CurrentEntity + 0x48);
  _g_CurrentEntity->sprite_param3 = 2;
  Sys_Call(0);
  Sys_PadRead(0xc,0,puVar7);
  local_28 = 1;
  local_27 = iVar2->camera_flags;
  bVar1 = false;
  CD_CalcSector(*(s32 *)(iVar2 + 0x54),auStack_20);
LAB_8001d034:
  do {
    if ((DAT_800be0e4 & 0x10) != 0) {
LAB_8001d260:
      Sys_Call(0);
      Sys_PadRead(9,0,puVar7);
      DAT_800be0e4 = 0;
      GPU_WaitVSync();
      return;
    }
    DAT_800be0e4 = DAT_800be0e4 | 0x80;
    if (!bVar1) {
      bVar1 = true;
      CD_SeekToSector(200,puVar7);
    }
    iVar3 = Sys_PadRead(9,0,puVar7);
  } while (iVar3 != 0);
  iVar3 = 0;
  Sys_CheckVSync(*puVar7);
  Sys_PadRead(0xd,&local_28,puVar7);
  Sys_PadRead(2,auStack_20,puVar7);
LAB_8001d0bc:
  while (iVar4 = Sys_PadRead(0x15,0,puVar7), iVar4 == 0) {
    while (DAT_1f800233 == '\x01') {
      Sys_TriggerIRQ(1);
    }
    iVar4 = Sys_PadRead(0x1b,0,puVar7);
    if (iVar4 != 0) break;
    DAT_800be0e4 = DAT_800be0e4 & 0x7f;
    do {
      while( true ) {
        if ((DAT_800be0e4 & 0x10) != 0) goto LAB_8001d260;
        iVar4 = Sys_PadRead(0x10,0,puVar7);
        iVar5 = iVar3 + 1;
        if (iVar4 == 0) break;
        iVar3 = iVar5;
        if (9 < iVar5 * 0x10000 >> 0x10) goto LAB_8001d034;
      }
      uVar6 = CD_DecodeTime(puVar7);
      if ((*(uint *)(iVar2 + 0x54) <= uVar6) && (uVar6 <= *(uint *)(iVar2 + 0x58))) {
        Sys_Call(1);
        iVar3 = 0;
        goto LAB_8001d1d8;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 * 0x10000 >> 0x10 < 10);
  }
  goto LAB_8001d034;
LAB_8001d1d8:
  if ((DAT_800be0e4 & 0x10) != 0) goto LAB_8001d260;
  iVar4 = Sys_PadRead(0x10,0,puVar7);
  iVar5 = iVar3 + 1;
  if (iVar4 != 0) {
    iVar3 = iVar5;
    if (9 < iVar5 * 0x10000 >> 0x10) goto LAB_8001d034;
    goto LAB_8001d1d8;
  }
  uVar6 = CD_DecodeTime(puVar7);
  if (uVar6 <= *(uint *)(iVar2 + 0x58)) {
    iVar3 = 0;
    Sys_TriggerIRQ(1);
    goto LAB_8001d1d8;
  }
  if (*(s8*)(iVar2 + 0x67) != '\x01') goto LAB_8001d260;
  goto LAB_8001d0bc;
}
