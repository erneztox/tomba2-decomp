// FUN_0801717c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801717c(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 5) == '\0') {
    func_0x0010f144(param_1);
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    if (*(short *)(param_1 + 0x6a) != -1) {
      func_0x0006cbd0(0x800e8008,*(short *)(param_1 + 0x6a) * 0xc + -0x7fee7d44);
      iVar3 = *(short *)(param_1 + 0x6a) * 6;
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(&DAT_801197e0 + iVar3);
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(&DAT_801197e2 + iVar3);
      uVar1 = *(undefined2 *)(&DAT_801197e4 + iVar3);
      sVar2 = *(short *)(param_1 + 0x6a) + 1;
      *(short *)(param_1 + 0x6a) = sVar2;
      *(undefined2 *)(param_1 + 0x36) = uVar1;
      if (*(short *)(sVar2 * 0xc + -0x7fee7d44) == 0) {
        *(undefined2 *)(param_1 + 0x6a) = 0xffff;
      }
    }
    if (6 < *(byte *)(param_1 + 6)) {
      if (*(char *)(param_1 + 1) == '\0') {
        func_0x0007778c(param_1,_DAT_1f800254);
        func_0x0004190c(param_1);
        func_0x000518fc(param_1);
      }
      return;
    }
                    /* WARNING: Could not emulate address calculation at 0x0801728c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6e50))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

