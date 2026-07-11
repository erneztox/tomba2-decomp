// FUN_080404c0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080404c0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 5) == '\0') {
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 == 0) {
      return;
    }
    if (DAT_800bf9bb == 5) {
      if (DAT_800bfac3 == '\0') {
        func_0x00040d68(param_1,0x801421fc);
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(undefined1 *)(param_1 + 6) = 1;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      }
      else {
        DAT_800bf9bb = 6;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 0x2b) == '\x03') {
      func_0x00042354(1,1);
      func_0x00040d68(param_1,0x801421c8);
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(undefined1 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    if (*(char *)(param_1 + 0x70) == -1) {
      if (*(char *)(param_1 + 6) == '\0') {
        uVar1 = 8;
        if (((3 < DAT_800bf9bb) && (uVar1 = 10, DAT_800bf8cd == -1)) &&
           (uVar1 = 0xc, ((int)(uint)_DAT_800bfe56 >> (DAT_800bf870 & 0x1f) & 1U) == 0)) {
          uVar1 = 0xb;
        }
        *(undefined1 *)(param_1 + 0x7a) = uVar1;
        func_0x00040d68(param_1,0x801421d8);
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        halt_baddata();
      }
      if (*(char *)(param_1 + 6) != '\x01') {
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 5) = 0;
    }
  }
  func_0x00041098(param_1);
  func_0x0004190c(param_1);
  return;
}

