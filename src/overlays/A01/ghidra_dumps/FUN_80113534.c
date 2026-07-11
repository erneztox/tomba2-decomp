// FUN_80113534

/* WARNING: Control flow encountered bad instruction data */

void FUN_80113534(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x8007778c(param_1);
    uVar2 = FUN_8011df24(param_1,3);
    *(undefined2 *)(param_1 + 0x6a) = uVar2;
    if ((*(byte *)(param_1 + 3) & 0x80) == 0) {
      if (((*(byte *)(param_1 + 0x5e) & 2) == 0) && (sVar3 = FUN_8011d2c4(param_1), sVar3 != 0)) {
        *(undefined1 *)(param_1 + 0x5e) = 2;
        *(undefined1 *)(param_1 + 5) = 2;
        *(undefined1 *)(param_1 + 6) = 0;
      }
      bVar1 = *(byte *)(param_1 + 5);
      if (bVar1 == 1) {
        FUN_8011c998(param_1);
        FUN_8011c5f0();
        return;
      }
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          FUN_8011c854(param_1);
          FUN_8011c5f0();
          return;
        }
        FUN_8011c5f0();
        return;
      }
      if (bVar1 != 2) {
        FUN_8011c5f0();
        return;
      }
      FUN_8011ccb4(param_1);
    }
    if ((*(char *)(param_1 + 1) != '\0') && (FUN_8011d8c8(param_1), *(short *)(param_1 + 0x72) != 0)
       ) {
      FUN_8011d754(param_1);
      FUN_8011c6d4();
      return;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        FUN_8011c6e4(param_1);
        FUN_8011c6d4();
        return;
      }
      FUN_8011c6d4();
      return;
    }
    if (bVar1 == 2) {
      func_0x8007778c(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 5)) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 1) != '\0') {
        FUN_8011d8c8(param_1);
        FUN_8011c6d4();
        return;
      }
    }
    else {
      if (bVar1 != 3) {
        FUN_8011c6d4();
        return;
      }
      func_0x8007a624(param_1);
    }
  }
  return;
}

