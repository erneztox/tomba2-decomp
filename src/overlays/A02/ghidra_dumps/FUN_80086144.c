// FUN_80086144

undefined2 * FUN_80086144(void)

{
  undefined2 *puVar1;
  
  puVar1 = &DAT_800aad18;
  if (DAT_800aad18 == 0) {
    FUN_80086220(&DAT_800aad50);
    DAT_800aad18 = 1;
    *DAT_800abda8 = DAT_800aad4a;
    *DAT_800abdac = DAT_800aad4c;
    FUN_800808a0();
  }
  else {
    puVar1 = (undefined2 *)0x0;
  }
  return puVar1;
}

