
undefined4 FUN_80015e70(void)

{
  int in_v0;
  undefined4 uVar1;
  int iVar2;
  
  if (in_v0 == 0) {
    if (DAT_8002563c != DAT_80025640) {
      uVar1 = FUN_80015660();
      return uVar1;
    }
    do {
      if (((*DAT_80025628 & 0x1000000) == 0) && ((*DAT_8002561c & 0x4000000) != 0)) {
        uVar1 = FUN_8001576c();
        return uVar1;
      }
      iVar2 = FUN_800157b0();
    } while (iVar2 == 0);
  }
  return 0xffffffff;
}

