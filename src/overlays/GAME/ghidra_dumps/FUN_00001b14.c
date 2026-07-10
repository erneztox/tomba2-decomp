// FUN_00001b14

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001b14(void)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = _DAT_1f800138;
  uVar1 = *(ushort *)(_DAT_1f800138 + 0x4e);
  if (uVar1 == 1) {
    func_0x0003fb84();
    *(short *)(_DAT_1f800138 + 0x4e) = *(short *)(_DAT_1f800138 + 0x4e) + 1;
  }
  else if (uVar1 < 2) {
    if (uVar1 == 0) {
      DAT_1f800234 = 1;
      *(short *)(_DAT_1f800138 + 0x4e) = *(short *)(_DAT_1f800138 + 0x4e) + 1;
      func_0x00044bd4(0x800452c0,DAT_800bf870,0,1);
    }
  }
  else if (uVar1 == 2) {
    if (DAT_1f80019b == '\0') {
      func_0x0003ea88();
      return;
    }
    *(undefined2 *)(_DAT_1f800138 + 0x48) = 2;
    *(undefined2 *)(iVar2 + 0x4a) = 1;
    *(undefined2 *)(iVar2 + 0x4c) = 1;
    *(undefined2 *)(iVar2 + 0x4e) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

