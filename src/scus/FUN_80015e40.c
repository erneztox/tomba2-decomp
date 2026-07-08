
uint FUN_80015e40(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_s2;
  int unaff_s4;
  
  if (param_1 == 0) {
    iVar1 = FUN_8001577c();
    **(undefined4 **)(iVar1 + 0x5620) = unaff_s2;
    *DAT_80025624 = unaff_s4 << 0x10 | 0x10;
    *DAT_80025628 = 0x1000200;
    return 0;
  }
  uVar2 = DAT_8002563c - DAT_80025640 & 0x3f;
  if (uVar2 != 0) {
    FUN_80015290();
  }
  if ((((*DAT_80025628 & 0x1000000) != 0) || ((*DAT_8002561c & 0x4000000) == 0)) && (uVar2 == 0)) {
    uVar2 = 1;
  }
  return uVar2;
}

