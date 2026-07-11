/**
 * @brief Game data loader: reads from 0x800A33D4, fills globals
 * @note Original: func_800384EC at 0x800384EC
 */
// Game_LoadData



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_800384ec(int param_1)

{
  char *pcVar1;
  int iVar2;
  u8 bVar3;
  u8 bVar4;
  
  bVar4 = 0;
  iVar2 = 1;
  pcVar1 = &DAT_800a33d4;
  _DAT_800e7e6c = -0x7ff36198;
  _DAT_800bf53c = -0x7ff22198;
  do {
    if (*pcVar1 == '\0') {
      *(s8*)(param_1 + 10) = *(s8*)(param_1 + 10) + '\x01';
      *(s8*)((uint)(u8)pcVar1->kind * 3 + _DAT_800e7e6c + 1) = (char)iVar2;
      *(u8 *)((uint)(u8)pcVar1->kind * 3 + _DAT_800e7e6c + 2) =
           *(u8 *)(iVar2 + -0x7ff4074c);
      *(s8*)((uint)(u8)pcVar1->kind * 3 + _DAT_800e7e6c) = pcVar1->kind;
      if ((*(s8*)(iVar2 + -0x7ff4074c) != '\0') && (bVar4 < (u8)pcVar1->kind)) {
        bVar4 = pcVar1->kind;
      }
    }
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 0xc;
  } while (iVar2 < 0x8b);
  bVar3 = 0;
  iVar2 = 1;
  pcVar1 = &DAT_800a33d4;
  do {
    if (*pcVar1 != '\0') {
      param_1->render_flags = param_1->render_flags + '\x01';
      *(s8*)((uint)(u8)pcVar1->kind * 3 + _DAT_800bf53c + 1) = (char)iVar2;
      *(u8 *)((uint)(u8)pcVar1->kind * 3 + _DAT_800bf53c + 2) =
           *(u8 *)(iVar2 + -0x7ff4074c);
      *(s8*)((uint)(u8)pcVar1->kind * 3 + _DAT_800bf53c) = pcVar1->kind;
      if ((*(s8*)(iVar2 + -0x7ff4074c) != '\0') && (bVar3 < (u8)pcVar1->kind)) {
        bVar3 = pcVar1->kind;
      }
    }
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 0xc;
  } while (iVar2 < 0x8b);
  if (bVar3 < bVar4) {
    bVar3 = bVar4;
  }
  *(u8 *)(param_1 + 0x21) = bVar3 + 1;
  return;
}
