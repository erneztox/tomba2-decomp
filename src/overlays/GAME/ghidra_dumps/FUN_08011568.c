// FUN_08011568

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011568(void)

{
  int iVar1;
  
  if (*(short *)(_DAT_1f800138 + 0x4e) == 0) {
    if (DAT_800bf870 == '\x05') {
      DAT_800bf871 = 3;
    }
    func_0x0007b18c();
    func_0x000796dc();
    func_0x000263e8();
    func_0x00072a78();
    func_0x00075240();
    func_0x000783dc();
    func_0x00078610();
    iVar1 = _DAT_1f800138;
    *(undefined2 *)(_DAT_1f800138 + 0x4e) = 1;
    *(undefined1 *)(iVar1 + 0x6b) = 0;
    func_0x00075024(DAT_800bf870);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_1f80017c = _DAT_1f80017c + 1;
  _DAT_800bf878 = _DAT_800bf878 + 1;
  if (DAT_1f800136 == 0) {
    func_0x00059d28();
    func_0x00069b28();
    func_0x00026368();
    func_0x0007a904();
    func_0x00025588();
    func_0x0004fe84();
    func_0x00026c88();
    func_0x00022a80();
    func_0x0006ec44();
    func_0x00050de4();
    func_0x0001cac0();
  }
  if (DAT_1f800136 < 2) {
    func_0x0003f9a8();
  }
  func_0x0010810c();
  func_0x00077d8c();
  func_0x00075a80();
  if (DAT_800bf80d == '\x03') {
    if (DAT_800bf80f == '\0') {
      if (_DAT_800e7fee != 0) {
        DAT_800bf880 = 1;
        _DAT_1f800194 = _DAT_800e7fee;
      }
      *(undefined2 *)(_DAT_1f800138 + 0x4e) = 0;
      halt_baddata();
    }
  }
  else if ((DAT_800bf839 == '\x03') && (DAT_800bf80f == '\0')) {
    if (4 < DAT_1f800236) {
      func_0x00050894(0);
    }
    iVar1 = _DAT_1f800138;
    *(undefined2 *)(_DAT_1f800138 + 0x4a) = 1;
    *(undefined2 *)(iVar1 + 0x4c) = 2;
    *(undefined2 *)(iVar1 + 0x4e) = 6;
  }
  return;
}

