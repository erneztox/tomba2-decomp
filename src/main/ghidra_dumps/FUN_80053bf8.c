
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80053bf8(byte *param_1,int param_2)

{
  byte bVar1;
  
  if (param_1[0x61] != 0) {
    if ((param_1[0x61] & 1) != 0) {
      *param_1 = *param_1 & 7;
      if (param_2 != 0) {
        bVar1 = param_1[0x61] >> 4;
        if (bVar1 == 3) {
          param_1[0x16b] = 1;
        }
        else if (bVar1 < 4) {
          if (((bVar1 == 2) && (((int)*(short *)(param_1 + 0x16c) & 0xc000U) == 0xc000)) &&
             (FUN_80047b5c(param_1,0), (_DAT_1f8001a8 & 8) != 0)) {
            FUN_8004960c(param_1,0);
            FUN_80049760(param_1);
            *(undefined2 *)(param_1 + 0x140) = _DAT_1f8001a0;
          }
        }
        else if (bVar1 == 4) {
          param_1[0x16b] = 0;
        }
        param_1[0x61] = 0;
        *param_1 = *param_1 & 3;
      }
      return 1;
    }
    param_1[0x61] = 0;
  }
  return 0;
}

