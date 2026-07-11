/**
 * @brief IRQ handler dispatch: iterates callback table at 0x800ABDC0, calls active handlers
 * @note Original: func_80086288 at 0x80086288
 */
// IRQ_Dispatch



void FUN_80086288(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_800abdc0;
  DAT_800abde0 = DAT_800abde0 + 1;
  do {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 8);
  return;
}
