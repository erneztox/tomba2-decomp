// FUN_08023874

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08023874(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      if (*(short *)(*(int *)(param_1 + 0x38) + 4) != 0) {
        return 0;
      }
      *(undefined1 *)(param_1 + 6) = 1;
      return 0;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x40) = 8;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  if (*(short *)(*(int *)(param_1 + 0x38) + 4) != 0) {
    *(undefined1 *)(_DAT_800bf844 + 4) = 2;
    func_0x00074590(8,6,0xffffffe2);
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    _DAT_800bf844 = func_0x0006fde8(param_1,0);
    if (_DAT_800bf844 != 0) {
      if (*(short *)(*(int *)(param_1 + 0x38) + 4) == 1) {
        *(undefined1 *)(_DAT_800bf844 + 0x5e) = 1;
      }
      else {
        *(undefined1 *)(_DAT_800bf844 + 0x5e) = 4;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0;
}

