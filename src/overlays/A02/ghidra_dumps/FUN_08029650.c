// FUN_08029650

/* WARNING: Control flow encountered bad instruction data */

void FUN_08029650(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 5) == '\0') {
    iVar2 = func_0x0007778c(param_1);
    if ((iVar2 == 0) || (*(char *)(param_1 + 0x2b) != '\x03')) goto LAB_08029764;
    func_0x00042354(1,1);
    func_0x00040d68(param_1,0x800a3d18);
    *(undefined1 *)(param_1 + 0x70) = 2;
    *(undefined1 *)(param_1 + 6) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) == -1) {
      if (*(char *)(param_1 + 6) == '\0') {
        if (DAT_800bf925 == -1) {
          uVar1 = 0x1f;
          if (DAT_800bf8c7 == -1) {
            uVar1 = 0x21;
          }
          *(undefined1 *)(param_1 + 0x7a) = uVar1;
          func_0x00040d68(param_1,0x8012c690);
          *(undefined1 *)(param_1 + 0x70) = 2;
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 5) = 0;
    }
LAB_08029764:
    if (*(char *)(param_1 + 1) != '\0') {
      func_0x0004190c(param_1);
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

