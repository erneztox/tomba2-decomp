// FUN_00005290

void FUN_00005290(int param_1)

{
  if (*(byte *)(param_1 + 5) < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x000052d0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6f20))();
    return;
  }
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  if (*(char *)(param_1 + 1) == '\0') {
    func_0x00077e7c(param_1);
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x0004190c(param_1);
    func_0x000518fc(param_1);
  }
  return;
}

