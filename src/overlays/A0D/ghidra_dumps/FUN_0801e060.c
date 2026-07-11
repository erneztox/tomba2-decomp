// FUN_0801e060

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801e060(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    iVar5 = func_0x00051b70(param_1,0xc,0xc);
    if (iVar5 == 0) {
      *(undefined2 *)(param_1 + 0x80) = 0x28;
      *(undefined2 *)(param_1 + 0x82) = 0x50;
      *(undefined2 *)(param_1 + 0x84) = 0xdc;
      *(undefined2 *)(param_1 + 0x86) = 0xdc;
      *param_1 = 1;
      bVar1 = *(byte *)((byte)param_1[3] + 0x8012583c);
      param_1[4] = 1;
      *(ushort *)(param_1 + 0x40) = (ushort)bVar1;
      halt_baddata();
    }
    return;
  }
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    iVar5 = func_0x0007778c(param_1);
    if (iVar5 != 0) {
      func_0x000517f8(param_1);
    }
    if (DAT_800bf809 != '\0') {
      return;
    }
    sVar2 = *(short *)(param_1 + 0x40);
    *(ushort *)(param_1 + 0x40) = sVar2 - 1U;
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x82;
    if (0 < (int)((uint)(ushort)(sVar2 - 1U) << 0x10)) {
      if (param_1[0x29] != '\0') {
        func_0x00074590(0x8c,0,0);
        func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0xd);
        func_0x0003116c(0xe03,param_1 + 0x2c,0xffffffec);
        func_0x0003116c(0xe05,param_1 + 0x2c,0xffffffec);
        *(undefined2 *)(param_1 + 0x40) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(short *)(param_1 + 0x32) < *(short *)(param_1 + 0x76)) {
        halt_baddata();
      }
      if (((int)*(short *)(param_1 + 0x78) & 0x8000U) == 0) {
        func_0x00074590(0x8c,0,0);
        func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0xd);
        *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x76);
        func_0x0003116c(0xe03,param_1 + 0x2c,0xffffffec);
        func_0x0003116c(0xe05,param_1 + 0x2c,0xffffffec);
        *(undefined2 *)(param_1 + 0x40) = 8;
        param_1[5] = param_1[5] + '\x01';
        halt_baddata();
      }
      func_0x00074590(7,0,0);
      func_0x0003116c(8,param_1 + 0x2c,0xffffffb0);
    }
    *param_1 = 2;
    param_1[4] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (1 < bVar1) {
    if (bVar1 != 2) {
      halt_baddata();
    }
    iVar5 = func_0x0007778c(param_1);
    if (iVar5 != 0) {
      func_0x000517f8(param_1);
    }
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      *param_1 = 2;
      param_1[4] = 3;
      func_0x0003116c(0xe06,param_1 + 0x2c,0xffffffec);
      halt_baddata();
    }
    return;
  }
  if (bVar1 != 0) {
    halt_baddata();
  }
  if (DAT_800bf809 == '\0') {
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x40) = 0x3c;
      param_1[5] = param_1[5] + '\x01';
      *(undefined2 *)(param_1 + 0x2e) = _DAT_800e7eae;
      *(short *)(param_1 + 0x32) = _DAT_800e7eb2 + -0xa28;
      *(undefined2 *)(param_1 + 0x36) = _DAT_800e7eb6;
      param_1[0x2a] = DAT_800e7eaa;
      func_0x00048894(param_1);
      uVar4 = _DAT_1f8001a6;
      uVar3 = _DAT_1f8001a4;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x76) = uVar3;
      *(undefined2 *)(param_1 + 0x78) = uVar4;
      func_0x00074590(6,0x12,0);
      halt_baddata();
    }
    return;
  }
  return;
}

