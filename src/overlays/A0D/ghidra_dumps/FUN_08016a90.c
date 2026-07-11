// FUN_08016a90

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08016a90(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = param_1[6];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (DAT_800bf809 != '\0') {
          return;
        }
        iVar3 = func_0x0010b874(param_1);
        if (iVar3 != 0) {
          *param_1 = 2;
          func_0x00041768(param_1,3,4);
          func_0x0010b960(param_1);
          param_1[5] = 1;
          param_1[6] = 1;
          param_1[7] = 0;
          halt_baddata();
        }
        if (param_1[0x79] == '\x01') {
          *param_1 = 2;
          param_1[6] = param_1[6] + '\x01';
          func_0x00074590(0x2e,0x12,0x1e);
          func_0x0003116c(0xe02,param_1 + 0x2c,0xffffff9c);
          func_0x0003116c(0xe04,param_1 + 0x2c,0xffffff9c);
          *(undefined2 *)(param_1 + 0x40) = 0x10;
          *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x96;
          halt_baddata();
        }
        return;
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      sVar2 = *(short *)(param_1 + 0xb8);
      *(ushort *)(param_1 + 0xb8) = sVar2 - 0x80U;
      if ((ushort)(sVar2 - 0x80U) < 0x801) {
        *(undefined2 *)(param_1 + 0xb8) = 0x800;
      }
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0xb8);
      *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_1 + 0xb8);
      if (sVar2 != 1) {
        return;
      }
      iVar3 = func_0x00072ddc(param_1,4,2,0x40);
      _DAT_1f800260 = iVar3;
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x1c) = 0x8010e8d8;
        *(undefined1 *)(iVar3 + 3) = 1;
        *(undefined2 *)(iVar3 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
        *(short *)(iVar3 + 0x32) = *(short *)(param_1 + 0x32) + 300;
        *(undefined2 *)(iVar3 + 0x36) = *(undefined2 *)(param_1 + 0x36);
        *(undefined1 *)(iVar3 + 0x2a) = param_1[0x2a];
        *(undefined1 *)(iVar3 + 0xbe) = param_1[0xbe];
        DAT_1f80025a = DAT_1f80025a + '\x01';
      }
      func_0x00041768(param_1,0,6);
      *(undefined4 *)(param_1 + 0x1c) = 0x8010e8d8;
      param_1[2] = 0x40;
      *(undefined2 *)(param_1 + 0x80) = 0x32;
      *(undefined2 *)(param_1 + 0x82) = 100;
      *(undefined2 *)(param_1 + 0x84) = 0x46;
      *(undefined2 *)(param_1 + 0x86) = 0xaa;
      param_1[4] = 0;
      param_1[5] = 1;
      param_1[6] = 0;
      param_1[7] = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0xb8) = 0x800;
      *(undefined2 *)(param_1 + 0xba) = 0x800;
      *(undefined2 *)(param_1 + 0xbc) = 0x800;
      param_1[0x29] = 0;
      param_1[3] = 0;
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    sVar2 = func_0x000782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
    iVar3 = func_0x00077768((int)sVar2,(int)*(short *)(param_1 + 0x60),0);
    if (iVar3 != 0) {
      param_1[0xbe] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[0xbe] = 0;
    param_1[6] = param_1[6] + '\x01';
  }
  if (DAT_800bf809 != '\0') {
    return;
  }
  iVar3 = func_0x0010b874(param_1);
  if (iVar3 == 0) {
    if (param_1[0xbe] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar4 = *(ushort *)(param_1 + 0x60) + 0x800 & 0xfff;
    sVar2 = func_0x000776f8(uVar4,(int)*(short *)(param_1 + 0x56),0x100);
    *(short *)(param_1 + 0x56) = sVar2;
    if ((int)sVar2 != uVar4) {
      return;
    }
    func_0x00041768(param_1,0xd,5);
    param_1[6] = param_1[6] + '\x01';
  }
  else {
    *param_1 = 2;
    func_0x00041768(param_1,3,4);
    func_0x0010b960(param_1);
    param_1[5] = 1;
    param_1[6] = 1;
    param_1[7] = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

