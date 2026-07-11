// FUN_08029b20

void FUN_08029b20(int param_1)

{
  int iVar1;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  
  if ((*(char *)(param_1 + 5) == '\0') || (iVar1 = func_0x0007778c(), iVar1 != 0)) {
    if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08029b70 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6670))();
      return;
    }
    local_10 = *(undefined2 *)(param_1 + 0x2e);
    uStack_e = 0xf600;
    local_c = *(undefined2 *)(param_1 + 0x36);
    func_0x0002ae0c(&local_10,(int)*(short *)(param_1 + 0x80),1);
    func_0x0004190c(param_1);
  }
  return;
}

