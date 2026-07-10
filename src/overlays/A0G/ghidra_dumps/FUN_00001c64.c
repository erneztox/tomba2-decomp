// FUN_00001c64

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00001e14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001c64(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 0x5e);
  if (bVar1 == 1) {
    iVar3 = func_0x0010a4f4(param_1);
    if (iVar3 == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x5e) = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (_DAT_800bf850 == 0) {
        if (((*(char *)(param_1 + 0x29) != '\0') && (DAT_800e7ea9 != '\0')) &&
           (DAT_800e7ffb == '\0')) {
          DAT_1f800137 = 2;
          *(undefined1 *)(param_1 + 0x5e) = 2;
          halt_baddata();
        }
      }
      else if (_DAT_800bf854 == *(byte *)(param_1 + 3)) {
        *(undefined1 *)(param_1 + 0x5e) = 1;
        *(undefined1 *)(param_1 + 7) = 1;
        halt_baddata();
      }
      return;
    }
  }
  else if (bVar1 == 2) {
    bVar2 = *(byte *)(param_1 + 5);
    if (bVar2 == 1) {
      iVar3 = func_0x00072e60(param_1);
      if (iVar3 == 0) {
        return;
      }
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
    else if (bVar2 < 2) {
      if (bVar2 == 0) {
        *(undefined1 *)(param_1 + 5) = 1;
        if (*(char *)(param_1 + 0xbf) == '\0') {
          DAT_800bf80f = 2;
          return;
        }
        DAT_800bf80f = bVar1;
        func_0x00074590(0x17,0,0xf);
      }
    }
    else if (bVar2 == 2) {
      if (DAT_800bf80f != 0) {
        return;
      }
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x5a);
      DAT_800bf80f = 1;
      _DAT_800bf850 = 1;
      _DAT_800bf854 = (uint)*(short *)(param_1 + 0x6a);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

