// FUN_08027c44

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08027cd8) */

void FUN_08027c44(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x70) == -1) {
      func_0x00040d68(param_1,0x8012b9f8);
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      iVar2 = func_0x0007778c(param_1);
      if ((iVar2 != 0) && (*(char *)(param_1 + 0x2b) == '\x03')) {
        func_0x00040d68(param_1,0x8012b650);
        *(undefined1 *)(param_1 + 0x70) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_08027d4c;
    }
    if (bVar1 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 0x70) == -1) {
      *(undefined1 *)(param_1 + 4) = 2;
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x00077e7c(param_1);
LAB_08027d4c:
  if (*(char *)(param_1 + 1) != '\0') {
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
  }
  return;
}

