
void FUN_8001952c(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 4;
  do {
    iVar1 = FUN_80018dbc();
    if (iVar1 == 1) {
      DAT_800268d0 = 0x80018df8;
      DAT_800268d4 = 0x80018e20;
      DAT_80026838 = 0x80018e48;
      DAT_8002683c = 0;
      FUN_80018dac();
      return;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
                    /* WARNING: Subroutine does not return */
  FUN_8001e5ec(&DAT_80010554);
}

