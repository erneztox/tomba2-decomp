// FUN_08022830

/* WARNING: Control flow encountered bad instruction data */

void FUN_08022830(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = func_0x0007778c();
  if (iVar3 != 0) {
    func_0x000517f8(param_1);
  }
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    if (((DAT_800bf822 & 1) != 0) &&
       (sVar2 = *(short *)(param_1 + 0x40), *(short *)(param_1 + 0x40) = sVar2 + 1,
       (short)(sVar2 + 1) < 0x78)) {
      return;
    }
    if (DAT_800bfae7 != '\0') {
      *(undefined2 *)(param_1 + 0x60) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = 1;
    param_1[5] = 0;
    func_0x00042310();
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (param_1[0x2b] == '\0') {
        return;
      }
      *param_1 = 2;
      param_1[0x2b] = 0;
      *(undefined2 *)(param_1 + 0x40) = 0;
      param_1[6] = 0;
      if (DAT_800bfae7 == '\0') {
        func_0x0004ed94(0x2b,0x41);
        param_1[5] = 1;
      }
      else {
        func_0x00040cdc(param_1,0,0x80133154);
        param_1[0x70] = 2;
        param_1[5] = 2;
      }
    }
  }
  else if (bVar1 == 2) {
    if (4 < (byte)param_1[6]) {
      return;
    }
                    /* WARNING: Could not emulate address calculation at 0x0802298c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)(byte)param_1[6] * 4 + -0x7fef68dc))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

