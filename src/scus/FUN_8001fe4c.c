
undefined4 FUN_8001fe4c(void)

{
  uint uVar1;
  undefined4 uVar2;
  int local_10;
  
  local_10 = 0x100000;
  uVar1 = *DAT_800273fc;
  while( true ) {
    if ((uVar1 & 0x1000000) == 0) {
      return 0;
    }
    local_10 = local_10 + -1;
    if (local_10 == -1) break;
    uVar1 = *DAT_800273fc;
  }
  FUN_8001f6f8(s_DMA_bus_error__code__08x_80010d24 + 0xc);
  uVar2 = FUN_8001f6d0();
  return uVar2;
}

