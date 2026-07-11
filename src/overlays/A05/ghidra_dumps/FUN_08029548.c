// FUN_08029548

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08029548(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 7) == '\0') {
    *(undefined1 *)(param_1 + 7) = 1;
    func_0x00042310();
    DAT_1f800137 = 2;
    DAT_800bf80f = 2;
    _DAT_1f800190 = 0;
    DAT_800e7e85 = 0;
    DAT_800e7e86 = 0;
    DAT_800e7e87 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    _DAT_1f800190 = 0x20;
    if (DAT_800bf80f != '\0') {
      return 0;
    }
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    iVar1 = _DAT_1f800138;
    *(undefined2 *)(_DAT_1f800138 + 0x4c) = 6;
    *(undefined2 *)(iVar1 + 0x4e) = 0;
    DAT_800bf9c3 = 0x80;
    DAT_800bf9c9 = 0;
    _DAT_1f800194 = _DAT_800e7fee;
    DAT_800bf880 = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

