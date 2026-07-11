// FUN_080336bc

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_080336bc(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x0007a980(1,2,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8012bc40;
    *(undefined1 *)(iVar1 + 2) = 0x1b;
    *(undefined1 *)(iVar1 + 3) = 3;
    *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(short *)(iVar1 + 0x32) = *(short *)(param_1 + 0x32) + -100;
    *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 0x36);
    *(undefined1 *)(iVar1 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
    *(undefined2 *)(iVar1 + 0x60) = *(undefined2 *)(param_1 + 0x60);
    *(undefined2 *)(iVar1 + 0x56) = *(undefined2 *)(param_1 + 0x60);
    *(byte *)(iVar1 + 0xbe) = *(byte *)(param_1 + 0x62) & 1;
    func_0x0003116c(0x506,param_1 + 0x2c,0xffffffce);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

