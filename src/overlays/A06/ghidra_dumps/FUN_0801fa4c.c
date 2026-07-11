// FUN_0801fa4c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801fa4c(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(byte *)(param_1 + 3) < 0x12) {
                    /* WARNING: Could not emulate address calculation at 0x0801ffec */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef6540))();
      return;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 1;
    if (*(byte *)(param_1 + 3) < 0x12) {
                    /* WARNING: Could not emulate address calculation at 0x0801facc */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef6588))();
      return;
    }
  }
  else if (bVar1 == 2) {
    if (*(char *)(param_1 + 3) == '\b') {
      bVar1 = *(byte *)(param_1 + 5);
      if (bVar1 == 1) {
        iVar2 = func_0x0005308c();
        if (iVar2 == 0) {
          return;
        }
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        func_0x00042354(1,1);
        DAT_800bfa1d = DAT_800bfa1d | 1;
        func_0x00040cdc(param_1,0x8014d014,0x80144d28);
        *(undefined1 *)(param_1 + 0x70) = 1;
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          if (DAT_800bf8d2 != -1) {
            return;
          }
          *(undefined1 *)(param_1 + 5) = 1;
        }
      }
      else if (bVar1 == 2) {
        func_0x00041098(param_1);
        if (*(char *)(param_1 + 0x70) != -1) {
          return;
        }
        *(undefined1 *)(param_1 + 4) = 3;
        func_0x00042310();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
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

