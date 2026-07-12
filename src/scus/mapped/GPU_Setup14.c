/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80018DF0 at 0x80018DF0
 */
// GPU_Setup14



undefined2 * GPU_Setup14(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)0x0;
  if (DAT_800256ec != 0) {
    GPU_Setup14();
    puVar1 = DAT_8002677c;
    puVar2 = DAT_80026778;
    DAT_8002571e = *DAT_8002677c;
    DAT_80025720 = *DAT_80026780;
    *DAT_8002677c = 0;
    *puVar2 = *puVar1;
    *DAT_80026780 = *DAT_80026780 & 0x77777777;
    GPU_Setup14();
    DAT_800256ec = 0;
    puVar2 = &DAT_800256ec;
  }
  return puVar2;
}
