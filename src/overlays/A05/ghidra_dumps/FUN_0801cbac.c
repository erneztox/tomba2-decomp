// FUN_0801cbac

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801cbac(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    if (*(char *)(param_1 + 0x70) == -1) {
      if (*(char *)(param_1 + 6) == '\0') {
        func_0x00040d68(param_1,0x8013cdd4);
        *(undefined1 *)(param_1 + 0x70) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 6) != '\x01') {
        halt_baddata();
      }
LAB_0801ce38:
      *(undefined1 *)(param_1 + 5) = 0;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      iVar2 = func_0x0007778c(param_1);
      bVar1 = DAT_800bf80b;
      if (iVar2 != 0) {
        if (*(char *)(param_1 + 0x2b) == '\x03') {
          func_0x00042354(1,1);
          func_0x00040d68(param_1,0x800a3d70);
          *(undefined1 *)(param_1 + 0x70) = 2;
          *(undefined1 *)(param_1 + 6) = 0;
          *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
          halt_baddata();
        }
        if ((DAT_800bf80a == '\x01') && (*(char *)(param_1 + 0x2b) == '\x02')) {
          *(byte *)(param_1 + 0x5f) = DAT_800bf80b;
          if ((0x58 < bVar1) && ((bVar1 < 0x5d || ((bVar1 < 0x69 && (0x65 < bVar1)))))) {
            func_0x00042354(1,1);
            _DAT_800bf844 = func_0x0006fb0c(param_1,DAT_800bf80b);
            if (_DAT_800bf844 != 0) {
              *(undefined1 *)(_DAT_800bf844 + 0x5e) = 0;
            }
            func_0x00040d68(param_1,0x8013ce04);
            _DAT_800e7eb6 = *(undefined2 *)(param_1 + 0x36);
            *(undefined1 *)(param_1 + 6) = 0;
            *(undefined1 *)(param_1 + 5) = 2;
            halt_baddata();
          }
        }
      }
      goto LAB_0801ce44;
    }
    if (bVar1 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    if (*(char *)(param_1 + 6) == '\0') {
      if (DAT_800bf80a == '\0') {
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(undefined1 *)(param_1 + 7) = 0;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        halt_baddata();
      }
    }
    else {
      if (*(char *)(param_1 + 6) != '\x01') {
        halt_baddata();
      }
      if (*(char *)(param_1 + 0x70) == -1) {
        bVar1 = *(byte *)(param_1 + 7);
        if (bVar1 == 1) {
          *(undefined1 *)(param_1 + 0x5e) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar1 < 2) {
          if (bVar1 == 0) {
            if (*(char *)(param_1 + 0x5f) == 'f') {
              func_0x00040d68(param_1,0x8013ce1c);
              *(undefined1 *)(param_1 + 7) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            func_0x00040d68(param_1,0x8013cea4);
            *(undefined1 *)(param_1 + 7) = 2;
            *(undefined1 *)(param_1 + 0x70) = 2;
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar1 != 2) {
          halt_baddata();
        }
        func_0x0004d4f4(*(undefined1 *)(param_1 + 0x5f),1);
        goto LAB_0801ce38;
      }
    }
  }
  func_0x00041098(param_1);
LAB_0801ce44:
  func_0x0004190c(param_1);
  return;
}

