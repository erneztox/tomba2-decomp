// FUN_0802e3a4

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802e3a4(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  bVar2 = false;
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    if ((*(short *)(param_1 + 0x62) != 0) && (DAT_800bf873 == '\0')) {
      bVar1 = *(byte *)(param_1 + 5);
      if (bVar1 == 3) {
        func_0x001279b4(param_1);
        halt_baddata();
      }
      if (bVar1 < 4) {
        if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar3 = func_0x00128040(param_1);
        bVar2 = true;
        if (iVar3 != 1) {
          func_0x0012761c(param_1);
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 4) {
          halt_baddata();
        }
        func_0x00127c4c(param_1);
      }
      if (!bVar2) {
        func_0x00127d70(param_1);
        func_0x00127734(param_1);
      }
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(char *)(param_1 + 1) == '\0') {
      return;
    }
    func_0x000518fc(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (*(byte *)(param_1 + 5) < 9) {
                    /* WARNING: Could not emulate address calculation at 0x0802e50c */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef63a4))();
          return;
        }
      }
      else {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      func_0x001274f8(param_1);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

