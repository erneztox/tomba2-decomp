// FUN_080282cc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08028344) */

void FUN_080282cc(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 5) == '\0') {
    iVar2 = func_0x0007778c(param_1);
    if ((iVar2 != 0) && (*(char *)(param_1 + 0x2b) == '\x03')) {
      func_0x00040d68(param_1,0x800a3d08);
      *(undefined1 *)(param_1 + 0x70) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 0x70) == -1) {
      if (*(char *)(param_1 + 6) == '\0') {
        uVar1 = 0x1c;
        if ((DAT_800bf8c8 != '\0') && (uVar1 = 0x1d, DAT_800bf8c7 == -1)) {
          uVar1 = 0x20;
        }
        *(undefined1 *)(param_1 + 0x7a) = uVar1;
        func_0x00040d68(param_1,0x8012bfa4);
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 5) = 0;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
  }
  if (*(char *)(param_1 + 1) != '\0') {
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
  }
  return;
}

