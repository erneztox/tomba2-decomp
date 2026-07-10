// FUN_00005780

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00005780(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
      return;
    }
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    if (_DAT_800bf858 < 0x85) {
      uVar2 = 2;
      if (99 < _DAT_800bf858) {
        uVar2 = 3;
      }
      *(undefined1 *)(param_1 + 0x7a) = uVar2;
      func_0x00040cdc(param_1,0x8011ad3c,0x801162bc);
      *(undefined1 *)(param_1 + 0xbf) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (_DAT_800bf85c == 4) {
      *(undefined1 *)(param_1 + 0x7a) = 5;
      *(undefined1 *)(param_1 + 0xbf) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x7a) = 4;
    *(undefined1 *)(param_1 + 0xbf) = 1;
    func_0x00040cdc(param_1,0x8011ad3c,0x801162dc);
    *(undefined1 *)(param_1 + 0x70) = 2;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 5) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) == -1) {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      func_0x00074eec();
      if (*(char *)(param_1 + 0xbf) == '\0') {
        DAT_800bf80f = 2;
        DAT_800bf839 = 8;
        halt_baddata();
      }
      DAT_800bf839 = 3;
      _DAT_800bf83a = 0x1504;
      DAT_800bf80f = 2;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

