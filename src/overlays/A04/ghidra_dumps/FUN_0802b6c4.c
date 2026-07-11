// FUN_0802b6c4

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802b6c4(int param_1)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 5) < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x0802b700 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6090))();
    return;
  }
  iVar1 = func_0x00116b48(param_1);
  if (iVar1 != 0) {
    func_0x000518fc(param_1);
    if (*(char *)(param_1 + 0x29) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x3f;
  }
  *(undefined1 *)(param_1 + 0x29) = 0;
  return;
}

