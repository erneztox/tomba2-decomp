// FUN_0000acb4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000acb4(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 == 1) {
    if (DAT_800bf818 == '\0') {
      *(undefined1 *)(param_1 + 7) = 2;
      DAT_800bf80f = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return 0;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 7) = 1;
      func_0x00042310();
      if (DAT_800bf8fa != -1) {
        DAT_1f800137 = 2;
        DAT_800bf818 = 1;
        _DAT_800bf850 = 1;
        halt_baddata();
      }
      DAT_1f800137 = 2;
      DAT_800bf818 = 1;
      _DAT_800bf850 = 2;
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    if (DAT_800bf80f != '\0') {
      return 0;
    }
    *(undefined1 *)(param_1 + 7) = 3;
    iVar2 = _DAT_1f800138;
    _DAT_800bfa26 = 0;
    *(undefined2 *)(_DAT_1f800138 + 0x4c) = 6;
    *(undefined2 *)(iVar2 + 0x4e) = 0;
    DAT_800bf9c3 = 0x80;
    DAT_800bf871 = 4;
    DAT_800bf880 = 1;
    _DAT_1f800194 = _DAT_800e7fee;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

