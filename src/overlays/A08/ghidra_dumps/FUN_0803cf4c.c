// FUN_0803cf4c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803cf4c(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  
  iVar4 = func_0x00137500();
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 7) == '\0') {
      *(undefined2 *)(param_1 + 0x44) = 0x1200;
      func_0x00077cfc(param_1,0x80149588,4,4);
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    }
    else if (*(char *)(param_1 + 7) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar3 = func_0x001375d4(param_1);
    if (sVar3 != 0) {
      uVar2 = *(ushort *)(param_1 + 0x44);
      *(ushort *)(param_1 + 0x44) = -uVar2;
      if (0 < (int)((uint)uVar2 * -0x10000)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00077cfc(param_1,0x80149588,5,4);
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if (7 < *(byte *)(param_1 + 7)) {
        return;
      }
                    /* WARNING: Could not emulate address calculation at 0x0803cfc8 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef5d28))();
      return;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      bVar1 = *(byte *)(param_1 + 7);
      if (bVar1 == 1) {
        if (*(char *)(param_1 + 0x47) != '\0') {
          *(undefined2 *)(param_1 + 0x40) = 8;
          *(undefined1 *)(param_1 + 7) = 2;
          *(undefined2 *)(param_1 + 0x44) = 0xf000;
          halt_baddata();
        }
        if (*(short *)(param_1 + 0x6a) == 1) {
          *(undefined2 *)(param_1 + 0x40) = 0x96;
          *(undefined1 *)(param_1 + 6) = 0;
          *(undefined1 *)(param_1 + 7) = 2;
          halt_baddata();
        }
        return;
      }
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        func_0x00077cfc(param_1,0x80149588,0x15,2);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 == 2) {
        sVar3 = func_0x001375d4(param_1);
        if (sVar3 != 0) {
          *(undefined2 *)(param_1 + 0x44) = 0;
          *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
        }
      }
      else if (bVar1 != 3) {
        halt_baddata();
      }
      sVar3 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar3 + -1;
      if (sVar3 != 1) {
        return;
      }
      *(undefined2 *)(param_1 + 0x40) = 0x96;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 7) = 2;
      return;
    }
  }
  if ((*(short *)(param_1 + 0x68) == 0) || (iVar4 != 2)) {
    iVar4 = func_0x00137a90(param_1);
    if (iVar4 == 0) {
      sVar3 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar3 + -1;
      if (sVar3 != 1) {
        return;
      }
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 6) = 3;
      *(undefined1 *)(param_1 + 7) = 0;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x40) = 0x1e;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 7) = 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

