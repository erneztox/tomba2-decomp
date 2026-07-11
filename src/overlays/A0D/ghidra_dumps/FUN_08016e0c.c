// FUN_08016e0c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08016e0c(undefined1 *param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  
  if (param_1[6] == '\0') {
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x40) = 0x96;
    param_1[6] = param_1[6] + '\x01';
    func_0x00041768(param_1,10,6);
    sVar1 = func_0x000782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
    iVar3 = func_0x00077768((int)sVar1,(int)*(short *)(param_1 + 0x60),0);
    if (iVar3 != 0) {
      param_1[0xbe] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[0xbe] = 0;
  }
  else if (param_1[6] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[0xbe] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = func_0x000776f8(*(short *)(param_1 + 0x60) + 0x800U & 0xfff,
                          (int)*(short *)(param_1 + 0x56),0x80);
  sVar1 = *(short *)(param_1 + 0x40);
  *(undefined2 *)(param_1 + 0x56) = uVar2;
  *(short *)(param_1 + 0x40) = sVar1 + -1;
  if (sVar1 == 1) {
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined2 *)(param_1 + 100) = 0;
  }
  return;
}

