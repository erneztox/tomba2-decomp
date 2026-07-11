// FUN_080468dc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080468dc(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 == 3) {
          func_0x0007a624();
          return;
        }
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 1) = 1;
      if (*(uint *)(param_1 + 0x58) < 0x1001) {
        *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) + 0x111;
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 4) = 3;
      goto LAB_080469ac;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined4 *)(param_1 + 0x50) = 0x303030;
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined4 *)(param_1 + 0x58) = 0x1000;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  if (*(char *)(param_1 + 5) == '\0') {
    if (*(int *)(param_1 + 0x58) == 0) {
      *(undefined1 *)(param_1 + 5) = 1;
    }
    else {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x100;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_080469ac:
  if (((_DAT_1f80017c & 1) != 0) &&
     (uVar2 = *(int *)(param_1 + 0x5c) + 0x20, *(uint *)(param_1 + 0x5c) = uVar2, 0xbf < uVar2)) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

