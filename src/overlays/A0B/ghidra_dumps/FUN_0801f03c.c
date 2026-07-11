// FUN_0801f03c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0801f03c(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x0007a980(1,2,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801179bc;
    *(undefined1 *)(iVar1 + 2) = 0x55;
    *(undefined1 *)(iVar1 + 3) = 0;
    _DAT_1f8000c0 = 300;
    _DAT_1f8000c2 = 0;
    _DAT_1f8000c4 = 0;
    func_0x000844c0(*(int *)(param_1 + 0xc4) + 0x18,&DAT_1f8000c0,&DAT_1f8000c8);
    *(short *)(iVar1 + 0x2e) = *(short *)(*(int *)(param_1 + 0xc4) + 0x2c) + _DAT_1f8000c8;
    *(short *)(iVar1 + 0x32) = *(short *)(*(int *)(param_1 + 0xc4) + 0x30) + _DAT_1f8000ca;
    *(short *)(iVar1 + 0x36) = *(short *)(*(int *)(param_1 + 0xc4) + 0x34) + _DAT_1f8000cc;
    *(undefined1 *)(iVar1 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
    *(undefined1 *)(iVar1 + 0xbe) = *(undefined1 *)(param_1 + 0xbe);
    DAT_1f80025a = DAT_1f80025a + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

