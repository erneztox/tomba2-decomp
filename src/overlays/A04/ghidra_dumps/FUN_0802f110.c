// FUN_0802f110

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802f110(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x00116b48(param_1);
    if ((*(byte *)(param_1 + 3) & 0x80) == 0) {
      uVar2 = func_0x00129c44(param_1,3);
      *(undefined2 *)(param_1 + 0x6a) = uVar2;
      if ((((*(byte *)(param_1 + 0x5e) & 2) == 0) && ((*(ushort *)(param_1 + 0x7e) & 2) == 0)) &&
         (sVar3 = func_0x00128eec(param_1), sVar3 != 0)) {
        func_0x00129a88(param_1);
        *(undefined1 *)(param_1 + 0x5e) = 2;
        *(undefined2 *)(param_1 + 0x6c) = 0xff;
        *(undefined2 *)(param_1 + 0x7e) = 0;
        *(undefined1 *)(param_1 + 5) = 2;
        *(undefined1 *)(param_1 + 6) = 0;
      }
      bVar1 = *(byte *)(param_1 + 5);
      if (bVar1 == 1) {
        func_0x001285bc(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        func_0x00128414(param_1);
        halt_baddata();
      }
      if (bVar1 != 2) {
        halt_baddata();
      }
      func_0x001288e0(param_1);
    }
    if ((*(char *)(param_1 + 1) == '\0') ||
       (func_0x00129628(param_1), *(short *)(param_1 + 0x72) == 0)) {
      return;
    }
    func_0x0012948c(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x001282a8(param_1);
    }
  }
  else if (bVar1 == 2) {
    func_0x0007778c(param_1);
    if (*(byte *)(param_1 + 5) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0802f2bc */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef5f84))();
      return;
    }
    if (*(char *)(param_1 + 1) == '\0') {
      return;
    }
    func_0x00129628(param_1);
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

