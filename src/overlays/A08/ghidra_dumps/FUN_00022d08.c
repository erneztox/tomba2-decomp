// FUN_00022d08

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00022d08(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *unaff_s0;
  undefined1 unaff_s2;
  
  iVar1 = func_0x000519e0(param_1,param_2,_DAT_800ecf94,0x80145aac);
  if (iVar1 != 0) {
    return;
  }
  *(undefined4 *)(unaff_s0 + 0x3c) = _DAT_800ecfe4;
  FUN_00040cdc();
  unaff_s0[0x7b] = 5;
  *unaff_s0 = 9;
  *(undefined2 *)(unaff_s0 + 0x80) = 0x5a;
  *(undefined2 *)(unaff_s0 + 0x82) = 0xb4;
  *(undefined2 *)(unaff_s0 + 0x84) = 0x50;
  *(undefined2 *)(unaff_s0 + 0x86) = 0x90;
  *(undefined2 *)(unaff_s0 + 0xb8) = 0x800;
  *(undefined2 *)(unaff_s0 + 0xba) = 0x800;
  *(undefined2 *)(unaff_s0 + 0xbc) = 0x800;
  if ((DAT_800bfa46 & 0x40) == 0) {
    unaff_s0[3] = 0;
    *(undefined2 *)(unaff_s0 + 0x56) = 0x800;
    func_0x00041718();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(unaff_s0 + 0x56) = 0x400;
  *(undefined2 *)(unaff_s0 + 0x2e) = 0x4661;
  *(undefined2 *)(unaff_s0 + 0x32) = 0xe4cc;
  *(undefined2 *)(unaff_s0 + 0x36) = 0x10d0;
  func_0x00041718();
  unaff_s0[3] = unaff_s2;
  unaff_s0[0x2b] = 0;
  unaff_s0[0x29] = 0;
  unaff_s0[4] = unaff_s0[4] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

