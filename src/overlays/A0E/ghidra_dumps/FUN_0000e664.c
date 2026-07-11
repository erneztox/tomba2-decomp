// FUN_0000e664

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000e664(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  
  bVar1 = param_1[4];
  psVar7 = (short *)(param_1 + 0x60);
  if (bVar1 == 1) {
    if (param_1[3] == '\0') {
      if (param_1[0x5f] == '\0') {
        sVar4 = *(short *)(param_1 + 0x60);
        iVar5 = func_0x00083f50((int)sVar4);
        sVar2 = *(short *)(param_1 + 0x44);
        iVar6 = func_0x00083e80((int)sVar4);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar5 * sVar2;
        *(int *)(param_1 + 0x34) =
             *(int *)(param_1 + 0x34) + -iVar6 * (int)*(short *)(param_1 + 0x44);
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x1000;
      if (param_1[0x5f] == '\0') {
        if (-1 < *(short *)(param_1 + 0x44)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar5 = func_0x000468ac(param_1,(int)-*(short *)(param_1 + 0x80),0,(int)*psVar7);
        if (iVar5 != 0) {
          param_1[0x5f] = param_1[0xbe] | 1;
          *(undefined2 *)(param_1 + 100) = 0;
        }
      }
      func_0x001174e0(param_1);
      func_0x0004766c(param_1);
      uVar3 = _DAT_1f80017c & 1;
      *(short *)(param_1 + 0x56) = *psVar7;
      if (uVar3 == 0) {
        func_0x00117960(param_1,1,0);
      }
      uVar3 = *(ushort *)(param_1 + 0x66);
      *(ushort *)(param_1 + 0x66) = uVar3 - 1;
      if ((int)((uint)uVar3 << 0x10) < 1) {
        *(undefined2 *)(param_1 + 0x66) = 0x14;
        func_0x00074590(0x8b,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      iVar5 = (uint)(ushort)(*(short *)(param_1 + 0x5a) + 0x88U) << 0x10;
      iVar6 = iVar5 >> 0x10;
      *(ushort *)(param_1 + 0x5a) = *(short *)(param_1 + 0x5a) + 0x88U;
      if (0xfff < iVar6) {
        *param_1 = 2;
        param_1[4] = 2;
        halt_baddata();
      }
      if (0x3ff < iVar6) {
        iVar6 = (iVar5 >> 0x12) + 0x400;
      }
      iVar5 = func_0x00083e80(iVar6);
      sVar4 = (short)(iVar5 * 800 >> 0xc);
      *(short *)(param_1 + 0x86) = sVar4;
      *(short *)(param_1 + 0x84) = sVar4 + 0x14;
      func_0x0007778c(param_1);
    }
    sVar4 = *(short *)(param_1 + 100);
    *(ushort *)(param_1 + 100) = sVar4 - 1U;
    if ((int)((uint)(ushort)(sVar4 - 1U) << 0x10) < 1) {
      *param_1 = 2;
      param_1[4] = 2;
    }
    param_1[0x29] = 0;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 == 0) {
      if (param_1[3] == '\0') {
        *param_1 = 2;
        param_1[0xb] = 0xff;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1[0xb] = 0x16;
      *param_1 = 1;
      *(undefined4 *)(param_1 + 0x7c) = 0x80111fd8;
      param_1[0xd] = 1;
      param_1[0x29] = 0;
      param_1[0x5f] = 0;
      param_1[0x2b] = 0;
      param_1[0x5e] = 0;
      param_1[0xbf] = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      iVar5 = func_0x0004766c(param_1);
      if (iVar5 == 0) {
        param_1[4] = 3;
      }
      else {
        param_1[4] = 1;
        func_0x00049760(param_1);
        sVar4 = _DAT_1f8001a0;
        *(short *)(param_1 + 0x56) = _DAT_1f8001a0;
        *psVar7 = sVar4;
        *(undefined2 *)(param_1 + 100) = 300;
        *(undefined2 *)(param_1 + 0x62) = 0;
        *(undefined2 *)(param_1 + 0x66) = 0;
        *(undefined2 *)(param_1 + 0x80) = 0x46;
        *(undefined2 *)(param_1 + 0x82) = 0x8c;
        *(undefined2 *)(param_1 + 0x84) = 0x14;
        *(undefined2 *)(param_1 + 0x86) = 0x28;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

