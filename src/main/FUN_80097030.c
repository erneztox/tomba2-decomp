
void FUN_80097030(void)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_800ac654 == 0) {
    FUN_800976c8();
  }
  iVar1 = DAT_800ac604;
  *(ushort *)(DAT_800ac604 + 0x1aa) = *(ushort *)(DAT_800ac604 + 0x1aa) & 0xffcf;
  if ((*(ushort *)(iVar1 + 0x1aa) & 0x30) != 0) {
    uVar2 = 1;
    do {
      if (0xf00 < uVar2) break;
      uVar2 = uVar2 + 1;
    } while ((*(ushort *)(iVar1 + 0x1aa) & 0x30) != 0);
  }
  if (DAT_800ac63c == (code *)0x0) {
    FUN_800899f0(0xf0000009,0x20);
  }
  else {
    (*DAT_800ac63c)();
  }
  return;
}

