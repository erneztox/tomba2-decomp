// FUN_0801803c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801803c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x00022f04();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = (uint)*(byte *)(param_1 + 2);
  if (uVar2 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x08018088 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar2 * 4 + -0x7fef64f0))(*(undefined1 *)(uVar2 + 0x8013ff3c));
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

