// FUN_08028518

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08028518(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    iVar3 = func_0x000778e4(param_1,(int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32))
                                         * 0x10000) >> 0x10);
    if (iVar3 == 0) {
      return;
    }
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 == 1) {
        *(undefined2 *)(param_1 + 0x40) = 5;
        param_1[5] = param_1[5] + '\x01';
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x14;
        halt_baddata();
      }
    }
    else if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_1[0x29] != '\0') {
        param_1[5] = 1;
        *(undefined2 *)(param_1 + 0x40) = 0x12;
        halt_baddata();
      }
    }
    else if (bVar1 == 2) {
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x14;
      if (sVar2 == 1) {
        *(undefined2 *)(param_1 + 0x40) = 0x14;
        param_1[5] = param_1[5] + '\x01';
        func_0x00074590(0x88,0,0);
        func_0x0013c968(0,(int)*(short *)(param_1 + 0x2e),
                        (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_1 + 0x84)
                              ) * 0x10000) >> 0x10,(int)*(short *)(param_1 + 0x36));
        func_0x0013c968(3,(int)*(short *)(param_1 + 0x2e),
                        (int)((((uint)*(ushort *)(param_1 + 0x32) -
                               (uint)*(ushort *)(param_1 + 0x84)) + -400) * 0x10000) >> 0x10,
                        (int)*(short *)(param_1 + 0x36));
        func_0x0013c968(1,(int)*(short *)(param_1 + 0x2e),
                        (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_1 + 0x84)
                              ) * 0x10000) >> 0x10,
                        (int)((*(ushort *)(param_1 + 0x36) + 100) * 0x10000) >> 0x10);
        func_0x0013c968(1,(int)*(short *)(param_1 + 0x2e),
                        (int)((((uint)*(ushort *)(param_1 + 0x32) -
                               (uint)*(ushort *)(param_1 + 0x84)) + -400) * 0x10000) >> 0x10,
                        (int)((*(ushort *)(param_1 + 0x36) + 100) * 0x10000) >> 0x10);
        func_0x0013c968(2,(int)*(short *)(param_1 + 0x2e),
                        (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_1 + 0x84)
                              ) * 0x10000) >> 0x10,
                        (int)((*(ushort *)(param_1 + 0x36) - 200) * 0x10000) >> 0x10);
        func_0x0013c968(2,(int)*(short *)(param_1 + 0x2e),
                        (int)((((uint)*(ushort *)(param_1 + 0x32) -
                               (uint)*(ushort *)(param_1 + 0x84)) + -400) * 0x10000) >> 0x10,
                        (int)((*(ushort *)(param_1 + 0x36) - 200) * 0x10000) >> 0x10);
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 3) {
        halt_baddata();
      }
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 == 1) {
        param_1[5] = 0;
        *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x66);
      }
    }
    func_0x000517f8(param_1);
    param_1[0x29] = 0;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      if ((_DAT_800bfe56 & 0x10) == 0) {
        iVar3 = func_0x00051b70(param_1,0xc,0x1e);
        if (iVar3 != 0) {
          return;
        }
        *(undefined2 *)(param_1 + 0x80) = 0x20;
        *(undefined2 *)(param_1 + 0x82) = 0x40;
        *(undefined2 *)(param_1 + 0x84) = 0x2a8;
        *(undefined2 *)(param_1 + 0x86) = 0x514;
        *param_1 = 1;
        param_1[0x29] = 0;
        param_1[4] = param_1[4] + '\x01';
        *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)(param_1 + 0x32);
      }
      else {
        param_1[4] = 3;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

