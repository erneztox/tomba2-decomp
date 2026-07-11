// FUN_0801f5d8

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801f5d8(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x0009b0c0(0x801003b8,0x801098a4,DAT_800bf9bc);
    func_0x0009b0c0(0x801003b8,0x801098b0,DAT_800bfa15);
    func_0x0007778c(param_1);
    if (*(byte *)(param_1 + 5) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0801f730 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6740))();
      return;
    }
    if (*(char *)(param_1 + 1) != '\0') {
      func_0x000518fc(param_1);
    }
    *(undefined1 *)(param_1 + 0x2b) = 0;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        DAT_800bf9bd = 0;
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      iVar2 = func_0x00117404(param_1);
      if (iVar2 == 0) {
        return;
      }
      DAT_800bf9eb = 0;
      DAT_800bf9bd = 0;
      func_0x00040cdc(param_1,0x80140f7c,0x800a3d18);
      *(undefined1 *)(param_1 + 0x7b) = 5;
      func_0x00041718(param_1,5,0);
      if (DAT_800bf92a != -1) {
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined1 *)(param_1 + 5) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x3c8c;
      *(undefined2 *)(param_1 + 0x32) = 0xe04c;
      *(undefined2 *)(param_1 + 0x36) = 0x2d0a;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined1 *)(param_1 + 5) = 10;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

