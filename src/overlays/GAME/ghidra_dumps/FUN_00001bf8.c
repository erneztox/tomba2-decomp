// FUN_00001bf8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001bf8(void)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(_DAT_1f800138 + 0x4e);
  if (uVar1 == 1) {
    func_0x0003e264();
    *(short *)(_DAT_1f800138 + 0x4e) = *(short *)(_DAT_1f800138 + 0x4e) + 1;
  }
  else if (uVar1 < 2) {
    if (uVar1 == 0) {
      func_0x00074bf8(9);
      func_0x0003e264();
      *(short *)(_DAT_1f800138 + 0x4e) = *(short *)(_DAT_1f800138 + 0x4e) + 1;
      DAT_1f800234 = 1;
      func_0x00044bd4(0x800452c0,DAT_800bf870,0,1);
    }
  }
  else if (uVar1 == 2) {
    func_0x0003e894();
    if (DAT_1f80019b != '\0') {
      func_0x00074e48();
      iVar2 = _DAT_1f800138;
      *(undefined2 *)(_DAT_1f800138 + 0x48) = 2;
      *(undefined2 *)(iVar2 + 0x4a) = 1;
      *(undefined2 *)(iVar2 + 0x4c) = 1;
      *(undefined2 *)(iVar2 + 0x4e) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

