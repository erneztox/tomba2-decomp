// FUN_08011784

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011784(void)

{
  int iVar1;
  
  if (DAT_1f800236 == 2) {
    DAT_800e7e80 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_800e7e80 = 3;
  _DAT_800e7eae = 1000;
  _DAT_800e7eb2 = -1000;
  _DAT_800e7eb6 = 3000;
  _DAT_800e7ed6 = 0xc00;
  if (DAT_1f800236 < 3) {
    func_0x0006cbd0(0x800e8008,0x80108f78);
    func_0x0006e3b0(0x800e8008,0x800e8040);
    iVar1 = func_0x000310f4(0x19,0);
    *(undefined2 *)(iVar1 + 0x2c) = _DAT_800e7eae;
    *(short *)(iVar1 + 0x2e) = _DAT_800e7eb2 + 0x82;
    *(short *)(iVar1 + 0x30) = _DAT_800e7eb6 + 0x1194;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_1f800236 == 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0006cbd0(0x800e8008,0x80108f90);
  iVar1 = func_0x000310f4(0x23,0);
  *(undefined2 *)(iVar1 + 0x2c) = _DAT_800e7eae;
  *(short *)(iVar1 + 0x2e) = _DAT_800e7eb2;
  *(short *)(iVar1 + 0x30) = _DAT_800e7eb6;
  _DAT_800e8078 = 0xc00;
  func_0x0006ef38();
  func_0x00074bf8(8);
  return;
}

