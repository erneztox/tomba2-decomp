// FUN_0801334c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801334c(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        param_1[4] = 3;
        halt_baddata();
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007ab44(param_1);
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *param_1 = 2;
    func_0x0006acac(param_1);
    **(undefined2 **)(param_1 + 0xc0) = 0xff6a;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    param_1[4] = param_1[4] + '\x01';
    func_0x00031558(param_1,(byte)param_1[2] - 1);
    uVar2 = _DAT_800e7ed6;
    *(undefined2 *)(param_1 + 0x6a) = 0x400;
    *(undefined2 *)(param_1 + 0x68) = uVar2;
  }
  if (param_1[5] == '\0') {
    func_0x00074590(0xb,0xfffffffe,0);
    func_0x00074590(0x22,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[5] == '\x01') {
    if (DAT_800e7fc6 == '\x02') {
      local_1e = *(undefined2 *)(param_1 + 0x2e);
      local_1a = *(short *)(param_1 + 0x32) + 0x5a;
      local_16 = *(undefined2 *)(param_1 + 0x36);
      func_0x00074590(0x32,0,0);
      iVar3 = func_0x0003116c(0x13,auStack_20,0xffffffb0);
      if (iVar3 != 0) {
        *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
      }
      func_0x00031470(2,auStack_20,0,param_1 + 0x68);
      param_1[5] = param_1[5] + '\x01';
    }
    if (DAT_800e7fc6 == '\0') {
      param_1[4] = 2;
    }
    func_0x0006b020(param_1,1);
    param_1[1] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

