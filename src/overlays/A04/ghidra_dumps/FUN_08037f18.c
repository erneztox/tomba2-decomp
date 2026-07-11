// FUN_08037f18

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08037f18(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    if ((DAT_800bf929 & 0x54) != 0x54) {
      return 2;
    }
    func_0x00040c00(0x75);
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    iVar1 = func_0x00042728();
    if (iVar1 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0xc) == '#') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 0xc) != '$') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00041768(param_1,0xb,4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

