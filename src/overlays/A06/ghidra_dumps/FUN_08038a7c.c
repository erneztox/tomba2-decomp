// FUN_08038a7c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08038a7c(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x40);
    *(ushort *)(param_1 + 0x40) = sVar2 - 1U;
    if (-1 < (int)((uint)(ushort)(sVar2 - 1U) << 0x10)) {
      return;
    }
    func_0x0003116c(0x705,param_1 + 0x2c,0xffffffec);
    *(undefined2 *)(param_1 + 0x40) = 0x14;
    param_1[6] = param_1[6] + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar3 = func_0x0013b738(param_1,&DAT_800e7eac,1);
      if (2 < iVar3) {
        return;
      }
      func_0x0003116c(0x70c,param_1 + 0x2c,0xffffffec);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    sVar2 = *(short *)(param_1 + 0x40);
    *(ushort *)(param_1 + 0x40) = sVar2 - 1U;
    if (-1 < (int)((uint)(ushort)(sVar2 - 1U) << 0x10)) {
      return;
    }
    *param_1 = 1;
    param_1[6] = 0;
    param_1[5] = 0;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

