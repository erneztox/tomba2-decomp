// FUN_0000e428

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000e428(short param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 < 2) {
    if (param_1 == 0) {
      halt_baddata();
    }
  }
  else {
    if (param_1 == 2) {
      halt_baddata();
    }
    if (param_1 == 3) {
      iVar1 = (param_2 << 0x10) >> 0xe;
      iVar2 = _DAT_1f80021c + (uint)*(ushort *)(iVar1 + -0x7feda530) * 0x20 + 0x4e40;
      FUN_0001d2a8(9,iVar2,iVar2 + (*(ushort *)(iVar1 + -0x7feda52e) + 1) * 0x20,0);
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

