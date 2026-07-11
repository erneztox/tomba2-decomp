// FUN_08031ad8

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08031ad8(int param_1)

{
  int iVar1;
  
  if ((DAT_800bf80b < 0x45) && (0x3f < DAT_800bf80b)) {
    *(ushort *)(param_1 + 0x60) = (ushort)DAT_800bf80b;
    iVar1 = func_0x00130cf8();
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0x5e) = 8;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x60) = 0xffff;
  return 0;
}

