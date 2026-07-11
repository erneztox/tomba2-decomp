// FUN_0801451c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801451c(byte *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  undefined1 auStack_28 [2];
  undefined2 local_26;
  short local_22;
  undefined2 local_1e;
  
  iVar4 = _DAT_1f80024c;
  bVar1 = param_1[4];
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
    param_1[0xb] = 0xff;
    param_1[0x80] = 0x96;
    param_1[0x81] = 0;
    param_1[0x82] = 0x2c;
    param_1[0x83] = 1;
    param_1[0x84] = 0xd2;
    param_1[0x85] = 0;
    param_1[0x86] = 0x68;
    param_1[0x87] = 1;
    *param_1 = 1;
    param_1[0x2b] = 0;
    param_1[0x40] = 10;
    param_1[0x41] = 0;
    param_1[4] = param_1[4] + 1;
    func_0x00074590(10,0xfffffffd,0x14);
    *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(iVar4 + 0x56);
    uVar2 = *(undefined2 *)(iVar4 + 0x56);
    param_1[0x6a] = 0;
    param_1[0x6b] = 4;
    *(undefined2 *)(param_1 + 0x68) = uVar2;
    func_0x00031558(param_1,param_1[3]);
  }
  if ((param_1[3] != 6) && (param_1[3] != 7)) {
    _DAT_1f8000c2 = 0xff06;
    _DAT_1f8000c0 = 0;
    _DAT_1f8000c4 = 0;
    func_0x000844c0(*(int *)(iVar4 + 0xe4) + 0x18,&DAT_1f8000c0,&DAT_1f8000c8);
    *(short *)(param_1 + 0x2e) = *(short *)(*(int *)(iVar4 + 0xe4) + 0x2c) + _DAT_1f8000c8;
    *(short *)(param_1 + 0x32) = *(short *)(*(int *)(iVar4 + 0xe4) + 0x30) + _DAT_1f8000ca;
    *(short *)(param_1 + 0x36) = *(short *)(*(int *)(iVar4 + 0xe4) + 0x34) + _DAT_1f8000cc;
    if (((*(short *)(param_1 + 0x40) < 5) && (*param_1 < 2)) &&
       ((iVar4 = func_0x000495dc(param_1,0,0x5a), 0 < iVar4 ||
        (iVar4 = func_0x000495dc(param_1,0,0), 0 < iVar4)))) {
      local_26 = *(undefined2 *)(param_1 + 0x2e);
      *param_1 = 2;
      local_22 = *(short *)(param_1 + 0x32) + 0x5a;
      local_1e = *(undefined2 *)(param_1 + 0x36);
      func_0x0003116c(param_1[3] + 0xd,auStack_28,0xffffffb0);
      func_0x00031470(2,auStack_28,0,param_1 + 0x68);
      func_0x00074590(0x32,0xfffffffd,0x14);
    }
    sVar3 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar3 + -1;
    if (sVar3 == 1) {
      *param_1 = 2;
      param_1[4] = 2;
    }
    func_0x0007778c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

