// FUN_08010e8c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08010e8c(void)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(_DAT_1f800138 + 0x4e);
  if (uVar1 != 1) {
    if (1 < uVar1) {
      if (uVar1 == 2) {
        *(undefined2 *)(_DAT_1f800138 + 0x4e) = 1;
        return;
      }
      halt_baddata();
    }
    if (uVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(_DAT_1f800138 + 0x4e) = 1;
    func_0x0006c77c();
    func_0x0005082c(0,0,0);
  }
  func_0x00108be4();
  iVar2 = _DAT_1f800138;
  if (DAT_800bf80d == '\x03') {
    if (DAT_800bf80f != '\0') {
      return;
    }
    func_0x00074bc4();
    iVar2 = _DAT_1f800138;
    *(undefined2 *)(_DAT_1f800138 + 0x4c) = 2;
    if (_DAT_800e7fee == 0) {
      *(undefined2 *)(iVar2 + 0x4e) = 2;
    }
    else {
      DAT_800bf880 = 1;
      _DAT_1f800194 = _DAT_800e7fee;
      *(undefined2 *)(iVar2 + 0x4e) = 0;
    }
  }
  else {
    if (DAT_800bf839 == '\0') {
      return;
    }
    if (DAT_800bf80f != '\0') {
      return;
    }
    if (DAT_800bf839 == '\b') {
      *(undefined2 *)(_DAT_1f800138 + 0x4a) = 1;
      *(undefined2 *)(iVar2 + 0x4c) = 2;
      *(undefined2 *)(iVar2 + 0x4e) = 3;
    }
    else {
      if (4 < DAT_1f800236) {
        func_0x00050894(0);
      }
      iVar2 = _DAT_1f800138;
      *(undefined2 *)(_DAT_1f800138 + 0x4a) = 1;
      *(undefined2 *)(iVar2 + 0x4c) = 2;
      *(undefined2 *)(iVar2 + 0x4e) = 6;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

