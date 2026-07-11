// FUN_80125ad4

/* WARNING: Control flow encountered bad instruction data */

void FUN_80125ad4(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8012eb04();
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + -0x12;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    iVar2 = func_0x8002b278(param_1);
    if (iVar2 != 0) {
      return;
    }
    func_0x80031780(param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

