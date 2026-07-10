// FUN_00002820

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002820(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (DAT_800bf9ed < 0x4b) {
      return;
    }
    *(undefined2 *)(param_1 + 0x76) = 1;
    _DAT_8014a270 = func_0x00074590(0x81,0,0x2a);
    *(undefined2 *)(param_1 + 0x48) = 0x100;
    *(undefined2 *)(param_1 + 0x4e) = 0x100;
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bf9ed < 0x46) {
        return;
      }
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 8) = *(undefined2 *)(param_1 + 100);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    *(short *)(*(int *)(param_1 + 0xc4) + 8) =
         *(short *)(*(int *)(param_1 + 0xc4) + 8) +
         (short)(char)((ushort)*(undefined2 *)(param_1 + 0x48) >> 8);
    if (*(short *)(param_1 + 0x66) <= *(short *)(*(int *)(param_1 + 0xc4) + 8)) {
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 8) = *(undefined2 *)(param_1 + 0x66);
      if (*(short *)(param_1 + 0x40) != 0) {
        *(undefined2 *)(param_1 + 0x48) = 0;
        *(undefined2 *)(param_1 + 0x4e) = 0;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        halt_baddata();
      }
      func_0x00074af0(_DAT_8014a270);
      _DAT_8014a270 = 0;
      func_0x00074590(0x82,0,0);
      *(undefined2 *)(param_1 + 0x48) = 0xf600;
      *(undefined2 *)(param_1 + 0x4e) = 0x200;
      *(undefined2 *)(param_1 + 0x76) = 2;
      *(undefined2 *)(param_1 + 0x40) = 1;
    }
    sVar2 = *(short *)(param_1 + 0x48) + *(short *)(param_1 + 0x4e);
    *(short *)(param_1 + 0x48) = sVar2;
    if (sVar2 < 0x1601) {
      return;
    }
    *(undefined2 *)(param_1 + 0x48) = 0x1600;
  }
  else if (bVar1 == 3) {
    if (DAT_800bf89c != '\x02') {
      *(undefined2 *)(param_1 + 0x76) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 8) = 0xf0;
      func_0x001314b4(param_1);
      func_0x0013892c(param_1);
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

