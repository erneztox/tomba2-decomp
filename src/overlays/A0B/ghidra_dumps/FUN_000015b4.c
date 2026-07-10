// FUN_000015b4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000015b4(int param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x00022f04();
  if (iVar1 == 0) {
    return;
  }
  if ((*param_2 & 2) == 0) {
    func_0x0001dc9c(param_1,param_2,0,0);
    param_2[4] = 1;
    param_2[6] = 0;
    if ((*(char *)(param_1 + 0x5e) != '\0') || (*(char *)(param_1 + 2) != '\x02')) {
      if (param_2[5] < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x00001660 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)param_2[5] * 4 + -0x7fef7060))();
        return;
      }
      if (param_2[0x5e] == 0) {
        param_2[4] = 2;
        param_2[5] = 0;
        *param_2 = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00117720(param_2);
      param_2[5] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_2[5] = 1;
    *param_2 = 1;
    uVar2 = func_0x00077768((int)((_DAT_1f80009c + 0x800) * 0x10000) >> 0x10,
                            (int)*(short *)(param_2 + 0x60),1);
    if (uVar2 != param_2[0xbe]) {
      param_2[0x2b] = 0;
      return;
    }
    param_2[0x2b] = 1;
  }
  else {
    func_0x0001e860(param_1,param_2,0,0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

