/**
 * @brief Overlay file load: reads BIN path, calls CD_FileOpen to load
 * @note Original: func_800499E8 at 0x800499E8
 */
// Overlay_LoadFile



#include "tomba.h"
void Overlay_LoadFile(void)

{
  int iVar1;
  u8 auStack_20->state;
  s32 local_1c;
  
  g_EngineState = 0;
  iVar1 = CD_FileOpen(auStack_20,s__BIN_START_BIN_1_80015458);
  if (iVar1 == 0) {
    Debug_Printf(s_Not_found_file_name__s_8001546c,s__BIN_START_BIN_1_80015458);
  }
  else {
    DAT_800be1e0 = CD_DecodeTime(auStack_20);
    DAT_800be1e4 = local_1c;
  }
  Sys_ClearEvent(0);
  return;
}
