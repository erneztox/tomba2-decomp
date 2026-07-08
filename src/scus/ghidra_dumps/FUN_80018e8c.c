
undefined4 FUN_80018e8c(void)

{
  undefined4 uVar1;
  
  if (DAT_800256ec == 0) {
    FUN_8001876c(&DAT_80025724);
    DAT_800256ec = 1;
    *DAT_8002677c = DAT_8002571e;
    *DAT_80026780 = DAT_80025720;
    FUN_80017cfc();
    uVar1 = FUN_800186f8();
    return uVar1;
  }
  return 0;
}

