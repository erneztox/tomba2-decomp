/**
 * @brief Entity script init: entity[6]=0, calls FUN_80040cdc to load script data
 * @note Original: func_800713F8 at 0x800713F8
 */
// Entity_InitScript



void FUN_800713f8(int param_1)

{
  if (*(char *)(param_1 + 6) == '\0') {
    FUN_80040cdc(param_1,&PTR_DAT_8001b860,
                 *(undefined4 *)
                  ((uint)DAT_800bf830 * 4 + *(int *)(&DAT_800a4bbc + (uint)DAT_800bf870 * 4)));
    *(undefined1 *)(param_1 + 0x70) = 2;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if ((*(char *)(param_1 + 6) == '\x01') && (*(char *)(param_1 + 0x70) == -1)) {
    FUN_80070798();
  }
  FUN_80041098(param_1);
  FUN_80070e60(param_1);
  FUN_8004190c(param_1);
  return;
}
