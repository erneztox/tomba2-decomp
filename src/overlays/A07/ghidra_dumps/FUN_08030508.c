// FUN_08030508

/* WARNING: Control flow encountered bad instruction data */

void FUN_08030508(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00077e7c(param_1);
      func_0x0004190c(param_1);
      func_0x00041098(param_1);
      bVar1 = *(byte *)(param_1 + 6);
      if (bVar1 == 1) {
        if (*(char *)(param_1 + 0x70) == -1) {
          func_0x00040d68(param_1,0x80135810);
          *(undefined1 *)(param_1 + 0x70) = 2;
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
          halt_baddata();
        }
      }
      else if (bVar1 < 2) {
        if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((*(char *)(param_1 + 0x70) == -1) &&
           (iVar3 = func_0x00041438(param_1,0x400,0x100), iVar3 != 0)) {
          *(undefined1 *)(param_1 + 5) = 1;
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 2) {
          halt_baddata();
        }
        if (*(char *)(param_1 + 0x70) == -1) {
          *(undefined1 *)(param_1 + 0x5e) = 3;
          *(undefined1 *)(param_1 + 5) = 0;
        }
      }
      sVar2 = *(short *)(param_1 + 0x40) + 1;
      if (*(short *)(param_1 + 0x40) == 0) {
        return;
      }
      *(short *)(param_1 + 0x40) = sVar2;
      if (sVar2 < 500) {
        return;
      }
      *(undefined2 *)(param_1 + 0x40) = 0;
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x56) = 0x400;
    *(undefined2 *)(param_1 + 0x2e) = 0x1528;
    *(undefined2 *)(param_1 + 0x32) = 0xf0ac;
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(undefined2 *)(param_1 + 0x36) = 0x3280;
    *(undefined1 *)(param_1 + 6) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  iVar3 = func_0x00130cb0(param_1);
  if ((iVar3 != 0) && (*(char *)(param_1 + 0x2b) == '\x03')) {
    *(undefined2 *)(param_1 + 0x40) = 0;
    func_0x00130dd8(4);
    iVar3 = func_0x00130d44();
    if (iVar3 != 0) {
      func_0x00040d68(param_1,0x800a3cf0);
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined1 *)(param_1 + 6) = 1;
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00040d68(param_1,0x80135118);
    *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

