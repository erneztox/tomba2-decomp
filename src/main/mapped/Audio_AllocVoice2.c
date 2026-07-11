/**
 * @brief Audio voice allocator variant 2: searches table by range
 * @note Original: func_800752B4 at 0x800752B4
 */
// Audio_AllocVoice2



void FUN_800752b4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 >> 0x10;
    if (iVar1 < 0x18 - param_1) {
      if (iVar1 < 0x10 - param_1) {
        if (iVar1 < 0xc - param_1) {
          if (iVar1 < 8 - param_1) {
            (&DAT_800be240)[iVar1 * 0xc] = 0;
          }
          else {
            (&DAT_800be240)[iVar1 * 0xc] = 2;
          }
        }
        else {
          (&DAT_800be240)[iVar1 * 0xc] = 3;
        }
      }
      else {
        (&DAT_800be240)[iVar1 * 0xc] = 1;
      }
    }
    else {
      (&DAT_800be240)[iVar1 * 0xc] = 4;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar2 * 0x10000;
  } while (iVar2 * 0x10000 >> 0x10 < 0x18);
  return;
}
