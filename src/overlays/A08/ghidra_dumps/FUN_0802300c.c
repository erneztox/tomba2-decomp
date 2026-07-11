// FUN_0802300c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802300c(int param_1)

{
  byte bVar1;
  ushort uVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x32) = 0xffa6;
    uVar2 = func_0x0009a450();
    *(ushort *)(param_1 + 0x48) = uVar2 | 1;
    uVar2 = func_0x0009a450();
    *(ushort *)(param_1 + 0x4a) = uVar2 | 1;
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  if ((*(ushort *)(param_1 + 0x50) & 4) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x88;
  if ((*(ushort *)(param_1 + 0x50) & 1) == 0) {
    if (*(short *)(param_1 + 0x4e) < 0x1000) {
      func_0x0002b278(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 4) = 2;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

