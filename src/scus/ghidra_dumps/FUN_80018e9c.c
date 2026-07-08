
undefined4 FUN_80018e9c(void)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int unaff_s0;
  
  if (*(short *)(unaff_s0 + 0x56ec) == 0) {
    FUN_8001876c(unaff_s0 + 0x5724);
    puVar1 = DAT_8002677c;
    *(short *)(unaff_s0 + 0x56ec) = 1;
    *puVar1 = *(undefined2 *)(unaff_s0 + 0x571e);
    *DAT_80026780 = *(undefined4 *)(unaff_s0 + 0x5720);
    FUN_80017cfc();
    uVar2 = FUN_800186f8();
    return uVar2;
  }
  return 0;
}

