// FUN_00004fcc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004fcc(short param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = (param_2 << 0x10) >> 0xe;
  iVar2 = _DAT_1f80021c + (uint)*(ushort *)(iVar1 + -0x7fef1a40) * 0x20 + 0x7a60;
  func_0x0001d2a8(0xb,iVar2,iVar2 + (*(ushort *)(iVar1 + -0x7fef1a3e) + 1) * 0x20,0);
  return;
}

