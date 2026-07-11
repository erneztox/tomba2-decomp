// FUN_0801c9e0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801c9e0(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (DAT_800bf922 == -1) {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    else {
      bVar1 = *(byte *)(param_1 + 5);
      if (bVar1 == 1) {
        if (DAT_800bf80f != '\x02') {
          return;
        }
        *(undefined1 *)(param_1 + 5) = 2;
        _DAT_800bf854 = 0;
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          if (DAT_800bf816 == '\0') {
            return;
          }
          if (DAT_800bf817 != '\x03') {
            return;
          }
          if (_DAT_800bf854 == 0) {
            return;
          }
          *(undefined1 *)(param_1 + 5) = 1;
          _DAT_1f800190 = 0x20;
          DAT_800e7e85 = 0;
          DAT_800e7e86 = 0;
          DAT_800e7e87 = 0;
        }
      }
      else if (bVar1 == 2) {
        if (DAT_800bf816 != '\0') {
          return;
        }
        if (DAT_800bf80f != '\0') {
          return;
        }
        *(undefined1 *)(param_1 + 5) = 0;
        DAT_1f800137 = 0;
      }
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007add0();
      }
      return;
    }
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

