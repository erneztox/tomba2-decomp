/**
 * @brief Entity behavior dispatch by type: reads entity->kind, looks up table, calls handler
 * @note Original: func_80069688 at 0x80069688
 */
// Entity_DispatchBehavior



void FUN_80069688(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_1->flag_5E == '\0') {
    bVar1 = param_1->kind;
    puVar2 = &DAT_800a4a84;
  }
  else {
    bVar1 = param_1->kind;
    puVar2 = &DAT_800a4a8c;
  }
  *(ushort *)(param_1 + 0x76) = (ushort)(byte)puVar2[bVar1];
  return;
}
