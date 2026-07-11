/**
 * @brief UI command parser: parses bytecode commands from param_2 array
 * @note Original: func_8004D0D4 at 0x8004D0D4
 */
// UI_ParseCmd



#include "tomba.h"
s32 FUN_8004d0d4(int param_1,char *param_2,uint param_3)

{
  u8 bVar1;
  s32 uVar2;
  int iVar3;
  uint uVar4;
  
  if (*param_2 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    bVar1 = param_2->kind;
    if (((bVar1 & 0x80) == 0) && (iVar3 = FUN_8004d7ec((int)*(s16 *)(param_2 + 10),0), iVar3 != 0)
       ) {
      return 0;
    }
    uVar4 = 1 << (param_3 & 0x1f);
    uVar2 = 0;
    if ((*(uint *)(param_1 + 0x74) & uVar4) == 0) {
      if (((bVar1 & 0x80) != 0) &&
         (iVar3 = FUN_8004d868((int)*(s16 *)(param_2 + 10),0), iVar3 != 0)) {
        return 0;
      }
      uVar2 = 0;
      if ((*(uint *)(param_1 + 0x74) & uVar4) == 0) {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}
