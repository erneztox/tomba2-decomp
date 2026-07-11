// FUN_080227d0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080227d0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    bVar1 = *(byte *)(param_1 + 0x5e);
    if (bVar1 == 1) {
      if (_DAT_800bf854 == 0xff) {
        *(undefined1 *)(param_1 + 5) = 0;
        *(undefined1 *)(param_1 + 0x5e) = 2;
        if (*(char *)(param_1 + 3) == '\0') {
          func_0x00074590(0x94,0xfffffff6,0xffffffe2);
          halt_baddata();
        }
      }
    }
    else {
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          func_0x0011af68(param_1);
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 != 2) {
        halt_baddata();
      }
      func_0x0011b478(param_1);
    }
    func_0x0007778c(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 0xb) = 0x10;
      iVar2 = func_0x000310f4(0x707,0);
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x10) = param_1;
        *(int *)(param_1 + 0x10) = iVar2;
      }
      if (DAT_800bf8d0 == -1) {
        *(undefined1 *)(param_1 + 0x5e) = 2;
        func_0x0011b478(param_1);
        if (*(char *)(param_1 + 5) != '\x02') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      return;
    }
  }
  else if (bVar1 == 2) {
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 2;
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 5) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 6) = 0;
    *(undefined1 *)(param_1 + 4) = 3;
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

