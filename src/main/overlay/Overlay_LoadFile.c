/**
 * @brief Overlay file load: reads BIN path, calls FUN_8008b8f0 to load
 * @note Original: func_800499E8 at 0x800499E8
 */
// Overlay_LoadFile



#include "tomba.h"
void FUN_800499e8(void)

{
  int iVar1;
  undefined1 auStack_20->state;
  undefined4 local_1c;
  
  DAT_1f80019a = 0;
  iVar1 = FUN_8008b8f0(auStack_20,s__BIN_START_BIN_1_80015458);
  if (iVar1 == 0) {
    FUN_8009a730(s_Not_found_file_name__s_8001546c,s__BIN_START_BIN_1_80015458);
  }
  else {
    DAT_800be1e0 = FUN_8008a110(auStack_20);
    DAT_800be1e4 = local_1c;
  }
  FUN_80052078(0);
  return;
}
