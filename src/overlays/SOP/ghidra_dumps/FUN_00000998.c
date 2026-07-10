// FUN_00000998

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000998(void)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(_DAT_1f800138 + 0x52);
  if (uVar1 == 1) {
    iVar2 = func_0x0010c79c();
    if (iVar2 != 0) {
      *(short *)(_DAT_1f800138 + 0x52) = *(short *)(_DAT_1f800138 + 0x52) + 1;
    }
  }
  else if ((uVar1 < 2) && (uVar1 == 0)) {
    *(undefined2 *)(_DAT_1f800138 + 0x62) = 0;
    func_0x0001d71c(0xe);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

