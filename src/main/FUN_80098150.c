
undefined4 FUN_80098150(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    DAT_800ac598 = 0;
    uVar1 = *(ushort *)(DAT_800ac604 + 0x1aa) & 0xff7f;
  }
  else {
    if (param_1 != 1) {
      return DAT_800ac598;
    }
    if ((DAT_800ac59c == 1) || (iVar2 = FUN_800982a0(DAT_800ac5a0), iVar2 == 0)) {
      uVar1 = *(ushort *)(DAT_800ac604 + 0x1aa) | 0x80;
      DAT_800ac598 = 1;
    }
    else {
      DAT_800ac598 = 0;
      uVar1 = *(ushort *)(DAT_800ac604 + 0x1aa) & 0xff7f;
    }
  }
  *(ushort *)(DAT_800ac604 + 0x1aa) = uVar1;
  return DAT_800ac598;
}

