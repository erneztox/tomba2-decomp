// FUN_0802fe98

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802fe98(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
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
      iVar3 = _DAT_1f800214;
      uVar2 = _DAT_1f800164;
      bVar1 = *(byte *)(param_1 + 6);
      if (bVar1 == 1) {
        if (*(char *)(param_1 + 0x70) != -1) {
          return;
        }
        bVar1 = *(byte *)(param_1 + 7);
        if (bVar1 == 1) {
          DAT_800e7e85 = 0x21;
          DAT_800e7e86 = 0;
          *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
          halt_baddata();
        }
        if (1 < bVar1) {
          if (bVar1 != 2) {
            halt_baddata();
          }
          DAT_800bf818 = 6;
          _DAT_800e7eea = 0x202a;
          *(undefined1 *)(param_1 + 7) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar1 != 0) {
          halt_baddata();
        }
        func_0x00040d68(param_1,0x8013543c);
        *(undefined1 *)(param_1 + 0x70) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        if (*(char *)(param_1 + 0x70) == -1) {
          iVar3 = func_0x00041438(param_1,0x400,0x100);
          if (iVar3 != 0) {
            *(undefined1 *)(param_1 + 5) = 1;
            halt_baddata();
          }
          return;
        }
        return;
      }
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        DAT_800e7e81 = 1;
        if (*(char *)(param_1 + 0x70) != -1) {
          DAT_800e7e81 = 1;
          return;
        }
        *(undefined1 *)(param_1 + 5) = 0;
        *(undefined1 *)(param_1 + 0x5e) = 1;
        return;
      }
      if (*(char *)(param_1 + 7) == '\0') {
        if (DAT_800bf80f == '\x01') {
          *(undefined1 *)(param_1 + 7) = 1;
          halt_baddata();
        }
        return;
      }
      if (*(char *)(param_1 + 7) != '\x01') {
        halt_baddata();
      }
      DAT_800e7e81 = 1;
      if (DAT_800bf80f == '\0') {
        _DAT_800e7eea = 0;
        func_0x00040d68(param_1,0x801355d4);
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(undefined1 *)(param_1 + 7) = 0;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        halt_baddata();
      }
      *(short *)(_DAT_1f800214 + 0x4e) = _DAT_1f800160 + -200;
      *(undefined2 *)(iVar3 + 0x52) = uVar2;
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x56) = 0x400;
    *(undefined2 *)(param_1 + 0x2e) = 0x1004;
    *(undefined2 *)(param_1 + 0x32) = 0xf0ac;
    *(undefined2 *)(param_1 + 0x36) = 0x2b60;
    *(undefined1 *)(param_1 + 6) = 0;
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  if ((((DAT_800bf816 != '\0') && (DAT_800bf817 == '\n')) &&
      (iVar3 = func_0x00130cb0(param_1), iVar3 != 0)) && (*(char *)(param_1 + 0x2b) == '\x03')) {
    func_0x00130dd8(1);
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

