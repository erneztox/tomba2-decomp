/**
 * @brief Engine entity initializer: inits pools, clears lists
 * @note Original: func_800798F8 at 0x800798F8
 */
// Engine_InitEntity



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Engine_InitEntity(void)

{
  int iVar1;
  u8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  u8 *puVar6;
  
  iVar1 = -0x7ff12728;
  _g_InactiveEntitiesList = 0;
  _DAT_800f23a8 = 0;
  _g_ActiveEntitiesList = 0;
  _DAT_800f239c = 0;
  iVar3 = 0;
  iVar5 = iVar1;
  do {
    iVar4 = iVar3;
    iVar5 = iVar5 + 0x88;
    Mem_Set(iVar1,0,0x88);
    iVar1->next = iVar5;
    iVar1->alloc_flags = 0;
    *(u8 *)(iVar1 + 0xc) = 0;
    iVar3 = iVar4 + 1;
    iVar1 = iVar1 + 0x88;
  } while (iVar3 < 0x34);
  puVar2 = &DAT_800ef478;
  *(s32 *)(&DAT_800ed8fc + iVar4 * 0x88) = 0;
  _DAT_800e8098 = 0x800ed8d8;
  DAT_800e7e7c = 0x34;
  iVar5 = 0;
  puVar6 = puVar2;
  do {
    iVar3 = iVar5;
    puVar6 = puVar6 + 0xc4;
    Mem_Set(puVar2,0,0xc4);
    *(u8 **)(puVar2 + 0x24) = puVar6;
    puVar2->alloc_flags = 1;
    puVar2[0xc] = 0;
    iVar5 = iVar3 + 1;
    puVar2 = puVar2 + 0xc4;
  } while (iVar5 < 0x3a);
  iVar1 = -0x7ff01e68;
  *(s32 *)(&DAT_800ef49c + iVar3 * 0xc4) = 0;
  _DAT_800e80a0 = &DAT_800ef478;
  DAT_800e7e7d = 0x3a;
  iVar3 = 0;
  iVar5 = iVar1;
  do {
    iVar4 = iVar3;
    iVar5 = iVar5 + 0xd0;
    Mem_Set(iVar1,0,0xd0);
    iVar1->next = iVar5;
    iVar1->alloc_flags = 2;
    *(u8 *)(iVar1 + 0xc) = 0;
    iVar3 = iVar4 + 1;
    iVar1 = iVar1 + 0xd0;
  } while (iVar3 < 0x2a);
  iVar1 = -0x7ff047a8;
  *(s32 *)(&DAT_800fe1bc + iVar4 * 0xd0) = 0;
  _DAT_800f2398 = 0x800fe198;
  DAT_800ed8cc = 0x2a;
  iVar3 = 0;
  iVar5 = iVar1;
  do {
    iVar4 = iVar3;
    iVar5 = iVar5 + 0x108;
    Mem_Set(iVar1,0,0x108);
    iVar1->next = iVar5;
    iVar1->alloc_flags = 3;
    *(u8 *)(iVar1 + 0xc) = 0;
    iVar3 = iVar4 + 1;
    iVar1 = iVar1 + 0x108;
  } while (iVar3 < 0x28);
  iVar1 = -0x7ff04de8;
  *(s32 *)(&DAT_800fb87c + iVar4 * 0x108) = 0;
  _DAT_800ed8d4 = 0x800fb858;
  DAT_800ed8c5 = 0x28;
  iVar3 = 0;
  iVar5 = iVar1;
  do {
    iVar4 = iVar3;
    iVar5 = iVar5 + 0x140;
    Mem_Set(iVar1,0,0x140);
    iVar1->next = iVar5;
    iVar1->alloc_flags = 4;
    *(u8 *)(iVar1 + 0xc) = 0;
    iVar3 = iVar4 + 1;
    iVar1 = iVar1 + 0x140;
  } while (iVar3 < 5);
  *(s32 *)(&DAT_800fb23c + iVar4 * 0x140) = 0;
  _DAT_800ed8d0 = 0x800fb218;
  DAT_800ed8c4 = 5;
  _DAT_1f80013c = &DAT_800f2410;
  _DAT_1f800140 = &DAT_800f2410;
  _DAT_1f800146 = 0;
  _DAT_1f800144 = 0;
  _DAT_1f800148 = 0x800f26c8;
  _DAT_1f80014c = 0x800f26c8;
  _DAT_1f800152 = 0;
  _DAT_1f800150 = 0;
  _DAT_1f800154 = &g_BackgroundEntitiesList;
  _DAT_1f800158 = &g_BackgroundEntitiesList;
  _DAT_1f80015e = 0;
  _DAT_1f80015c = 0;
  return;
}
