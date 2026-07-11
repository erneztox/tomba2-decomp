// FUN_0801fe20

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801fe20(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    if (*(byte *)(param_1 + 5) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0801ff30 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef66f4))();
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
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      iVar2 = func_0x001177ec(param_1);
      if (iVar2 == 0) {
        return;
      }
      func_0x00040cdc(param_1,0x80140f7c,0x800a3d18);
      *(undefined1 *)(param_1 + 0x7b) = 1;
      func_0x00041718(param_1,1,0);
      if (DAT_800bf92a != -1) {
        *(undefined2 *)(param_1 + 0x56) = 0xa00;
        *(undefined1 *)(param_1 + 5) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x3c8c;
      *(undefined2 *)(param_1 + 0x32) = 0xe074;
      *(undefined2 *)(param_1 + 0x36) = 0x2bde;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined1 *)(param_1 + 5) = 10;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

