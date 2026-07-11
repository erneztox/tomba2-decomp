// FUN_0803cd1c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803cd1c(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  
  bVar3 = false;
  iVar4 = func_0x00137500();
  func_0x001379bc(param_1);
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    if (0 < iVar4) {
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 == 1) {
        param_1[7] = 0;
        param_1[6] = param_1[6] + '\x01';
        halt_baddata();
      }
      goto LAB_0803cefc;
    }
LAB_0803cef8:
    param_1[6] = 0;
    goto LAB_0803cefc;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (0 < iVar4) {
      param_1[6] = 1;
      *(undefined2 *)(param_1 + 0x40) = 1;
      halt_baddata();
    }
    goto LAB_0803cefc;
  }
  if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    if (DAT_1f800207 == '\n') {
      *(undefined2 *)(param_1 + 0x40) = 0x3c;
      halt_baddata();
    }
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 != 1) goto LAB_0803cefc;
    goto LAB_0803cef8;
  }
  bVar1 = param_1[7];
  if (bVar1 == 1) {
LAB_0803ce4c:
    if (*(int *)(*(int *)(param_1 + 0xc0) + 0x30) + -0x8c <= (int)*(short *)(param_1 + 0x7a)) {
      *param_1 = 1;
      func_0x00137b18(param_1,0);
      param_1[7] = param_1[7] + '\x01';
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if (*(short *)(param_1 + 0x6e) != -1) goto LAB_0803cefc;
      *(undefined2 *)(param_1 + 0x40) = 6;
      func_0x00077cfc(param_1,0x80149588,1,6);
      param_1[7] = param_1[7] + '\x01';
      goto LAB_0803ce4c;
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
  }
  sVar2 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar2 + -1;
  bVar3 = true;
  if (sVar2 == 1) {
    *param_1 = 1;
    param_1[5] = 1;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0xbf] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_0803cefc:
  if (!bVar3) {
    if (*(short *)(param_1 + 0x6e) == -1) {
      iVar4 = func_0x00137898(param_1);
      if (iVar4 != 0) {
        *(undefined2 *)(param_1 + 0x6e) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      func_0x00137410(param_1);
    }
  }
  return;
}

