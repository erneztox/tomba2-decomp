/**
 * @brief CD DMA allocator: finds free slot in DAT_800ac66c table, returns index
 * @note Original: func_800982A0 at 0x800982A0
 */
// CD_AllocDMA



undefined4 FUN_800982a0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar2 = param_1 << (DAT_800ac62c & 0x1f);
  puVar3 = DAT_800ac66c;
  if (DAT_800ac66c == (uint *)0x0) {
    return 0;
  }
  do {
    uVar1 = *puVar3;
    if ((uVar1 & 0x80000000) == 0) {
      if ((uVar1 & 0x40000000) != 0) {
        return 0;
      }
      if (uVar2 <= (uVar1 & 0xfffffff)) {
        return 1;
      }
      if (uVar2 < (uVar1 & 0xfffffff) + puVar3[1]) {
        return 1;
      }
    }
    puVar3 = puVar3 + 2;
  } while( true );
}
