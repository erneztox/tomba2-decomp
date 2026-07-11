// FUN_08015740

/* WARNING: Control flow encountered bad instruction data */

void FUN_08015740(int param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = func_0x00022f04();
  if (iVar1 != 0) {
    if ((*param_2 & 8) != 0) {
      func_0x0001e860(param_1,param_2,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(byte *)(param_1 + 2) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x080157b0 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 2) * 4 + -0x7fef7030))(param_1);
      return;
    }
  }
  return;
}

