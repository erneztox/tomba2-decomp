// FUN_0801fd28

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801fd28(int param_1)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (DAT_800bf816 != '\0') {
      if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801fdf8 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef65d4))();
        return;
      }
      if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801ff00 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef65bc))();
        return;
      }
      if (*(byte *)(param_1 + 7) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08020064 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef65a4))();
        return;
      }
      goto LAB_08020244;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined2 *)(param_1 + 0x52) = 0x1000;
      *(undefined2 *)(param_1 + 0x5c) = 0;
      *(undefined2 *)(param_1 + 0x68) = 0;
      *(undefined1 *)(param_1 + 0x57) = 0;
      *(undefined1 *)(param_1 + 99) = 0;
      if (DAT_800bf8e3 == -1) {
        *(undefined1 *)(param_1 + 4) = 2;
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    if (DAT_800bf816 != '\0') {
      if (0x394e < _DAT_1f8000d2) {
        *(undefined1 *)(param_1 + 1) = 0;
        halt_baddata();
      }
      if (*(char *)(param_1 + 5) == '\0') {
        *(undefined4 *)(param_1 + 0x54) = 0;
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 100) = 0;
        *(undefined2 *)(param_1 + 0x5c) = 0x1000;
        *(undefined2 *)(param_1 + 0x68) = 0x1000;
        *(undefined1 *)(param_1 + 5) = 1;
      }
      else if (*(char *)(param_1 + 5) != '\x01') {
        *(undefined1 *)(param_1 + 1) = 1;
        halt_baddata();
      }
      bVar1 = func_0x0009a450();
      cVar2 = (bVar1 & 0x7f) + 0x80;
      *(char *)(param_1 + 100) = cVar2;
      *(char *)(param_1 + 0x58) = cVar2;
LAB_08020244:
      *(undefined1 *)(param_1 + 1) = 1;
      halt_baddata();
    }
  }
  *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

