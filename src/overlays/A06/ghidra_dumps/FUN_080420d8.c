// FUN_080420d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080420d8(void)

{
  int iVar1;
  undefined1 auStack_18 [2];
  undefined2 local_16;
  undefined2 uStack_12;
  undefined2 local_e;
  
  local_16 = 0x3340;
  uStack_12 = 0xdfea;
  local_e = 0x6f86;
  iVar1 = func_0x0003116c(0x718,auStack_18,0xffffffce);
  *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  DAT_800e806c = 2;
  _DAT_800e8076 = 0;
  _DAT_800e8078 = 0x800;
  _DAT_800e8074 = _DAT_801003f8 * 7;
  func_0x0006cba8(auStack_18);
  return 1;
}

