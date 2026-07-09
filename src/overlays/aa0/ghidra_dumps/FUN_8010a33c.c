// FUN_8010a33c

void FUN_8010a33c(void)

{
  int iVar1;
  
  iVar1 = func_0x800205cc();
                    /* WARNING: Could not recover jumptable at 0x8011332c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x7dff98b8))();
  return;
}

