/**
 * @brief String hex parser: reads 2-char hex value from string
 * @note Original: func_80079554 at 0x80079554
 */
// String_ParseHex



#include "tomba.h"
short FUN_80079554(undefined1 *param_1)

{
  short sVar1;
  int iVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  sVar1 = CONCAT11(*param_1,param_1->flags);
  if (sVar1 == 0xa0a) {
    return 0xa0a;
  }
  if (0x19 < (ushort)(sVar1 + 0x7da0U)) {
    if ((ushort)(sVar1 + 0x7d7fU) < 0x1a) {
      return sVar1 + 0x7dc0;
    }
    if (9 < (ushort)(sVar1 + 0x7db1U)) {
      ppuVar4 = &PTR_DAT_800a55e0;
      puVar3 = PTR_DAT_800a55e0;
      while( true ) {
        if (puVar3 == (undefined *)0x0) {
          return -0xfe;
        }
        iVar2 = FUN_8009a640(*ppuVar4,param_1,2);
        if (iVar2 == 0) break;
        ppuVar4 = ppuVar4 + 2;
        puVar3 = *ppuVar4;
      }
      return *(short *)(ppuVar4 + 1);
    }
  }
  return sVar1 + 0x7dc1;
}
