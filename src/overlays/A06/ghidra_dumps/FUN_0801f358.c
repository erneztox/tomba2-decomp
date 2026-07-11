// FUN_0801f358

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0801f358(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x5e) == '\0') {
    if (*(short *)(param_1 + 0x40) < 0x5a) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (*(char *)(param_1 + 0x5e) == '\x01') {
    if (*(short *)(param_1 + 0x40) < 0x5a) {
      *(short *)(param_1 + 0x2e) =
           *(short *)(&DAT_8014424e + *(short *)(param_1 + 0x40) * 0xc) + 0x99;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (*(short *)(param_1 + 0x40) < 0x2d) {
    iVar1 = (int)*(short *)(param_1 + 0x40);
    *(undefined2 *)(param_1 + 0x2e) =
         *(undefined2 *)(&DAT_80144686 + *(short *)(param_1 + 0x40) * 0xc);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(&DAT_80144688 + iVar1 * 0xc);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(&DAT_8014468a + iVar1 * 0xc);
    _DAT_1f8000d2 = *(undefined2 *)(iVar1 * 0xc + -0x7febb980);
    _DAT_1f8000d6 = *(undefined2 *)(*(short *)(param_1 + 0x40) * 0xc + -0x7febb97e);
    _DAT_1f8000da = *(undefined2 *)(*(short *)(param_1 + 0x40) * 0xc + -0x7febb97c);
    func_0x0006cba8(param_1 + 0x2c);
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

