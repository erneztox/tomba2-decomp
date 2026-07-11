// FUN_0801ea20

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ea20(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (DAT_1f800259 != '\0') {
      *param_1 = 2;
      param_1[4] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_800bf809 == '\0') {
      if (param_1[5] == '\0') {
        iVar5 = (int)*(short *)(param_1 + 0x44);
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        sVar4 = (short)(iVar5 + 0x80);
        if (0x300 < (iVar5 + 0x80) * 0x10000 >> 0x10) {
          sVar4 = 0x300;
        }
        if (param_1[0xbe] == '\0') {
          *(short *)(param_1 + 0x44) = sVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(short *)(param_1 + 0x44) = -sVar4;
        sVar4 = *(short *)(param_1 + 0x4a);
        *(short *)(param_1 + 0x4a) = sVar4 + 0x300;
        if (0x2000 < (short)(sVar4 + 0x300)) {
          *(undefined2 *)(param_1 + 0x4a) = 0x2000;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
        if (param_1[0xbe] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar6 = (int)((*(ushort *)(param_1 + 0x60) + 0x800) * 0x10000) >> 0x10;
        iVar5 = func_0x00045cac(param_1,0x3c,0xffffffe2,iVar6);
        if ((iVar5 != 0) || (iVar5 = func_0x00045cac(param_1,0x3c,0x82,iVar6), iVar5 != 0)) {
          param_1[0x5f] = 1;
        }
        if (param_1[0x5f] == '\0' && param_1[0x5e] == '\0') {
          func_0x00041a1c(param_1,1);
        }
        iVar5 = func_0x00041ac0(param_1);
        if (iVar5 < 0) {
          *(undefined2 *)(param_1 + 0x40) = 0;
        }
        cVar2 = param_1[0x29];
        if (cVar2 == '\0') {
          if (param_1[0xbe] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          cVar2 = func_0x000455c0(param_1,0,0,
                                  (int)((*(ushort *)(param_1 + 0x60) + 0x800) * 0x10000) >> 0x10);
          param_1[0x29] = cVar2;
          if (cVar2 != '\0') {
            if (((int)_DAT_1f8001a6 & 0x8000U) != 0) {
              *(undefined2 *)(param_1 + 0x40) = 0;
            }
            bVar1 = param_1[0x29];
            param_1[0x29] = bVar1 & 1;
            if ((bVar1 & 1) != 0) {
              func_0x00049674(param_1);
              *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
            }
          }
          cVar2 = param_1[0x29];
        }
        if (cVar2 != '\0') {
          *(undefined2 *)(param_1 + 0x4a) = 0;
          param_1[5] = param_1[5] + '\x01';
          halt_baddata();
        }
      }
      else {
        if (param_1[5] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar5 = (int)*(short *)(param_1 + 0x44);
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        sVar4 = (short)(iVar5 + 0x200);
        if (0x1c00 < (iVar5 + 0x200) * 0x10000 >> 0x10) {
          sVar4 = 0x1c00;
        }
        if (param_1[0xbe] == '\0') {
          *(short *)(param_1 + 0x44) = sVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(short *)(param_1 + 0x44) = -sVar4;
        if (param_1[0xbe] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar6 = (int)((*(ushort *)(param_1 + 0x60) + 0x800) * 0x10000) >> 0x10;
        iVar5 = func_0x00045cac(param_1,0x3c,0xffffffe2,iVar6);
        if ((iVar5 != 0) || (iVar5 = func_0x00045cac(param_1,0x3c,0x82,iVar6), iVar5 != 0)) {
          param_1[0x5f] = 1;
        }
        if (param_1[0x5f] == '\0' && param_1[0x5e] == '\0') {
          func_0x00041a1c(param_1,0);
        }
        iVar5 = func_0x00041ac0(param_1);
        if (iVar5 < 0) {
          *(undefined2 *)(param_1 + 0x40) = 0;
        }
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 10;
        if (param_1[0x29] == '\0') {
          if (param_1[0xbe] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          cVar2 = func_0x000455c0(param_1,0,0,
                                  (int)((*(ushort *)(param_1 + 0x60) + 0x800) * 0x10000) >> 0x10);
          param_1[0x29] = cVar2;
          if (cVar2 != '\0') {
            if (((int)_DAT_1f8001a6 & 0x8000U) != 0) {
              *(undefined2 *)(param_1 + 0x40) = 0;
            }
            bVar1 = param_1[0x29];
            param_1[0x29] = bVar1 & 1;
            if ((bVar1 & 1) != 0) {
              func_0x00049674(param_1);
              *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
            }
          }
        }
        if (param_1[0x29] == '\0') {
          *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x14;
        }
      }
      sVar4 = *(short *)(param_1 + 0x40);
      if (*(short *)(param_1 + 0x40) == 0) {
        *param_1 = 2;
        param_1[4] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(ushort *)(param_1 + 0x40) = sVar4 - 1U;
      if ((sVar4 - 1U & 0x1f) == 0) {
        func_0x00074590(0x8c,0,0);
      }
      sVar4 = *(short *)(param_1 + 0xb8);
      *(ushort *)(param_1 + 0xb8) = sVar4 + 0x20U;
      if (0x1400 < (ushort)(sVar4 + 0x20U)) {
        *(undefined2 *)(param_1 + 0xb8) = 0x1400;
      }
      iVar5 = (int)((uint)*(ushort *)(param_1 + 0xb8) * 0xf) >> 9;
      *(short *)(param_1 + 0x80) = (short)iVar5;
      *(short *)(param_1 + 0x82) = (short)(iVar5 << 1);
      uVar3 = (undefined2)((uint)*(ushort *)(param_1 + 0xb8) * 5 >> 5);
      *(undefined2 *)(param_1 + 0x86) = uVar3;
      *(undefined2 *)(param_1 + 0x84) = uVar3;
    }
    param_1[0x29] = 0;
    param_1[0x5f] = 0;
    param_1[1] = 1;
    func_0x00077e7c();
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1[0xb] = 0xff;
      *(undefined2 *)(param_1 + 0xb8) = 0x200;
      *(undefined2 *)(param_1 + 0x80) = 0xf;
      *(undefined2 *)(param_1 + 0x82) = 0x1e;
      param_1[0x29] = 0;
      param_1[0x5f] = 0;
      param_1[0x5e] = 0;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 100) = 0;
      *(undefined2 *)(param_1 + 0x66) = 0;
      *(undefined2 *)(param_1 + 0x40) = 0x140;
      uVar3 = (undefined2)((uint)*(ushort *)(param_1 + 0xb8) * 5 >> 5);
      *(undefined2 *)(param_1 + 0x86) = uVar3;
      *(undefined2 *)(param_1 + 0x84) = uVar3;
      func_0x00041ac0(param_1);
      *(undefined2 *)(param_1 + 0x4a) = 0;
      iVar5 = func_0x000310f4(0xc02,0);
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        param_1[4] = 3;
      }
      else {
        *(undefined1 **)(iVar5 + 0x10) = param_1;
        *(int *)(param_1 + 0x10) = iVar5;
        param_1[4] = 1;
      }
    }
  }
  else if (bVar1 == 2) {
    if (*(int *)(param_1 + 0x10) == 0) goto LAB_0801f00c;
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 2;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else if (bVar1 == 3) {
LAB_0801f00c:
    DAT_1f80025a = DAT_1f80025a + -1;
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

