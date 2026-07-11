// FUN_08016778

/* WARNING: Control flow encountered bad instruction data */

void FUN_08016778(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 5) == '\0') {
    func_0x0010e7a4(param_1);
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    if (*(short *)(param_1 + 0x6a) != -1) {
      func_0x0006cbd0(0x800e8008,*(short *)(param_1 + 0x6a) * 0xc + -0x7fee6c48);
      iVar3 = *(short *)(param_1 + 0x6a) * 6;
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar3 + -0x7fee5274);
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(iVar3 + -0x7fee5272);
      uVar1 = *(undefined2 *)(iVar3 + -0x7fee5270);
      sVar2 = *(short *)(param_1 + 0x6a) + 1;
      *(short *)(param_1 + 0x6a) = sVar2;
      *(undefined2 *)(param_1 + 0x36) = uVar1;
      if (*(short *)(sVar2 * 0xc + -0x7fee6c48) == 0) {
        *(undefined2 *)(param_1 + 0x6a) = 0xffff;
      }
    }
    if (4 < *(byte *)(param_1 + 6)) {
      if (*(char *)(param_1 + 1) == '\0') {
        *(undefined1 *)(param_1 + 1) = 1;
        func_0x00077e7c(param_1);
        func_0x0004190c(param_1);
        func_0x000518fc(param_1);
      }
      return;
    }
                    /* WARNING: Could not emulate address calculation at 0x08016884 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6e7c))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

