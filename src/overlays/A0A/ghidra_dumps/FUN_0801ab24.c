// FUN_0801ab24

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801ab24(int param_1)

{
  byte bVar1;
  char cVar2;
  
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
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 7) = 0x28;
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0x8011c114;
    *(undefined4 *)(param_1 + 0x34) = 0x8011c114;
  }
  cVar2 = *(char *)(param_1 + 7);
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + -0x82;
  *(char *)(param_1 + 7) = cVar2 + -1;
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

