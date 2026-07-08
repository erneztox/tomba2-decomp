
void FUN_8001de6c(void)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_80026dd8 == 0) {
    FUN_8001dd04();
  }
  iVar1 = DAT_80026d88;
  *(ushort *)(DAT_80026d88 + 0x1aa) = *(ushort *)(DAT_80026d88 + 0x1aa) & 0xffcf;
  if ((*(ushort *)(iVar1 + 0x1aa) & 0x30) != 0) {
    uVar2 = 1;
    do {
      if (0xf00 < uVar2) break;
      uVar2 = uVar2 + 1;
    } while ((*(ushort *)(iVar1 + 0x1aa) & 0x30) != 0);
  }
  if (DAT_80026dc0 != (code *)0x0) {
    (*DAT_80026dc0)();
    FUN_8001d718();
    return;
  }
  FUN_80018e7c(0xf0000009,0x20);
  return;
}

