// FUN_08023660

/* WARNING: Control flow encountered bad instruction data */

void FUN_08023660(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      iVar3 = func_0x00042728();
      if ((iVar3 != 0) ||
         (sVar2 = *(short *)(param_1 + 0x40), *(short *)(param_1 + 0x40) = sVar2 + 1,
         199 < (short)(sVar2 + 1))) {
        func_0x00042310();
        param_1[6] = 0;
        param_1[5] = 10;
        halt_baddata();
      }
    }
    else if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_1[0x2b] != '\0') {
        param_1[0x2b] = 0;
        *param_1 = 2;
        func_0x000440e4(&DAT_800e7e80,0xc1,4);
        *(undefined2 *)(param_1 + 0x40) = 0;
        func_0x00040b48(0x27);
        param_1[5] = param_1[5] + '\x01';
        halt_baddata();
      }
      if (DAT_800bf8db != '\0') {
        *param_1 = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 10) {
        halt_baddata();
      }
      if ((byte)param_1[6] < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08023850 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)(byte)param_1[6] * 4 + -0x7fef68a8))();
        return;
      }
    }
    if (param_1[1] == '\0') {
      return;
    }
    func_0x000517f8(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      iVar3 = func_0x00051b70(param_1,0xc,0x36);
      if (iVar3 != 0) {
        return;
      }
      if (DAT_800bf8db == '\0') {
        *(undefined2 *)(param_1 + 0x80) = 0xf0;
        *(undefined2 *)(param_1 + 0x82) = 0x1e0;
        *(undefined2 *)(param_1 + 0x84) = 100;
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0x86) = 200;
        param_1[0x2b] = 0;
        param_1[4] = param_1[4] + '\x01';
      }
      else {
        if (DAT_800bf8db != -1) {
          param_1[6] = 0;
          param_1[5] = 10;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1[4] = 3;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

