// FUN_8011a730

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8011a730(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int unaff_s1;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(param_1[5]) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 3) goto LAB_80123a38;
        iVar4 = *(int *)(param_1 + 0x14);
        if ((iVar4 != 0) && (*(byte *)(iVar4 + 4) < 2)) {
          *(undefined1 *)(iVar4 + 4) = 2;
        }
        func_0x8007a624(param_1);
      }
      return;
    }
    if (bVar1 != 0) goto LAB_80123a38;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = 9;
    param_1[0xb] = 0;
    param_1[0x29] = 0;
    param_1[4] = param_1[4] + '\x01';
    if (DAT_800bf870 != '\x01') {
      return;
    }
    bVar1 = param_1[3];
    if (bVar1 != 1) {
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          iVar4 = func_0x8003116c(0x201,0,0);
          if (iVar4 != 0) {
            *(undefined1 **)(iVar4 + 0x10) = param_1;
            *(undefined1 *)(iVar4 + 7) = 0;
          }
          *(int *)(param_1 + 0x14) = iVar4;
          *(undefined2 *)(param_1 + 0x80) = 100;
          *(undefined2 *)(param_1 + 0x82) = 200;
          *(undefined2 *)(param_1 + 0x84) = 0x100;
          FUN_80123838();
          return;
        }
        goto LAB_80123a38;
      }
      if (bVar1 != 3) goto LAB_80123a38;
    }
    iVar4 = func_0x8003116c(0x202,0,0);
    if (iVar4 != 0) {
      *(undefined1 **)(iVar4 + 0x10) = param_1;
      *(undefined2 *)(iVar4 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
      *(short *)(iVar4 + 0x2e) = *(short *)(param_1 + 0x32) + -0x30;
      uVar3 = *(undefined2 *)(param_1 + 0x36);
      *(undefined1 *)(iVar4 + 7) = 2;
      *(undefined2 *)(iVar4 + 0x30) = uVar3;
    }
    *(undefined2 *)(param_1 + 0x80) = 200;
    *(undefined2 *)(param_1 + 0x82) = 400;
    *(undefined2 *)(param_1 + 0x84) = 0x2d0;
    *(int *)(param_1 + 0x14) = iVar4;
    *(undefined2 *)(param_1 + 0x86) = 0x310;
    param_1[0x5e] = 0;
    goto LAB_80123a38;
  }
  bVar1 = param_1[3];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        iVar4 = *(int *)(param_1 + 0x10);
        *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar4 + 0x2e);
        *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(iVar4 + 0x32);
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar4 + 0x36);
        cVar2 = *(char *)(iVar4 + 1);
        param_1[1] = cVar2;
        if (cVar2 != '\0') {
          func_0x80077e7c(param_1);
        }
        iVar4 = *(int *)(param_1 + 0x14);
        *(undefined2 *)(iVar4 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
        *(short *)(iVar4 + 0x2e) = *(short *)(param_1 + 0x32) + -0x40;
        *(undefined2 *)(iVar4 + 0x30) = *(undefined2 *)(param_1 + 0x36);
      }
      goto LAB_80123a38;
    }
    if (bVar1 != 3) goto LAB_80123a38;
  }
  func_0x8007778c(param_1);
LAB_80123a38:
  *(undefined2 *)(unaff_s1 + 0x84) = 0xb4;
  *(undefined2 *)(unaff_s1 + 0x86) = 0xb4;
  *(undefined1 *)(unaff_s1 + 0x29) = 0;
  *(undefined1 *)(unaff_s1 + 0x2b) = 0;
  *(char *)(unaff_s1 + 4) = *(char *)(unaff_s1 + 4) + '\x01';
  if (*(char *)(unaff_s1 + 0x5e) == '\0') {
    *(undefined1 *)(unaff_s1 + 5) = 4;
  }
  *(short *)(unaff_s1 + 0x84) = *(short *)(unaff_s1 + 0x84) << 1;
  *(short *)(unaff_s1 + 0x86) = *(short *)(unaff_s1 + 0x86) << 1;
  FUN_8012cb14();
  return;
}

