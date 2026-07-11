// FUN_0803ae08

/* WARNING: Control flow encountered bad instruction data */

int FUN_0803ae08(undefined4 param_1,byte param_2,ushort param_3,ushort param_4)

{
  int iVar1;
  
  iVar1 = func_0x0007a980(0,3,1);
  if (iVar1 != 0) {
    if (param_2 == 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_2 < 3) {
      if (param_2 != 1) {
        *(ushort *)(iVar1 + 0x80) = param_3 & 0xff;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(iVar1 + 3) = 3;
    }
    else {
      if (param_2 == 4) {
        *(undefined1 *)(iVar1 + 3) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_2 == 8) {
        *(undefined1 *)(iVar1 + 3) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *(ushort *)(iVar1 + 0x80) = param_3 & 0xff;
    *(ushort *)(iVar1 + 0x82) = param_4 & 0xff;
    *(undefined4 *)(iVar1 + 0x1c) = 0x80133ccc;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  }
  return iVar1;
}

