// FUN_08012b84

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08012b84(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(undefined1 *)(param_1 + 0x78) = 1;
    DAT_800e807e = 1;
    *(undefined1 *)(_DAT_800bf864 + 4) = 3;
    _DAT_800bf864 = func_0x0003116c(0xa01,param_1 + 0x2c,0);
    func_0x00074590(0x37,0xffffffec,0);
    *(undefined2 *)(param_1 + 0x40) = 0x5a;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    sVar1 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar1;
    if (sVar1 != -1) {
      return 0;
    }
    DAT_800e807e = 0;
    *(undefined1 *)(_DAT_800bf864 + 4) = 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

