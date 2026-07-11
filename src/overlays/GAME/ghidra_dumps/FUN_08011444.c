// FUN_08011444

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011444(void)

{
  int iVar1;
  
  iVar1 = _DAT_1f800138;
  if (*(short *)(_DAT_1f800138 + 0x4e) == 0) {
    *(undefined2 *)(_DAT_1f800138 + 0x4e) = 1;
    *(undefined1 *)(iVar1 + 0x6b) = 0;
    func_0x0007b18c();
    func_0x000796dc();
    func_0x000263e8();
    func_0x00075240();
    func_0x000783dc();
    func_0x00078610();
    func_0x00074f24(DAT_800bf870);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00108cac();
  iVar1 = _DAT_1f800138;
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
    DAT_800bf839 = '\x02';
    DAT_1f800236 = 2;
    *(undefined2 *)(_DAT_1f800138 + 0x4a) = 1;
    *(undefined2 *)(iVar1 + 0x4c) = 2;
    *(undefined2 *)(iVar1 + 0x4e) = 6;
  }
  return;
}

