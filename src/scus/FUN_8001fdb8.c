
undefined4 FUN_8001fdb8(void)

{
  uint uVar1;
  undefined4 uVar2;
  int local_10;
  
  local_10 = 0x100000;
  uVar1 = *DAT_8002741c;
  while( true ) {
    if ((uVar1 & 0x20000000) == 0) {
      return 0;
    }
    local_10 = local_10 + -1;
    if (local_10 == -1) break;
    uVar1 = *DAT_8002741c;
  }
  FUN_8001f6f8(&DAT_80010d20);
  uVar2 = FUN_8001f63c();
  return uVar2;
}

