// FUN_0803a058

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803a058(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    if ((_DAT_1f80017c & 3) == 0) {
      iVar4 = 0;
      uVar3 = func_0x0009a450();
      if ((uVar3 & 1) != 0xfffffffe) {
        do {
          local_20 = *(undefined4 *)(param_1 + 0x2c);
          local_1c = *(undefined4 *)(param_1 + 0x30);
          local_18 = *(undefined4 *)(param_1 + 0x34);
          sVar2 = func_0x00070698(0x40);
          iVar4 = iVar4 + 1;
          local_20 = CONCAT22(local_20._2_2_ + sVar2,(undefined2)local_20);
          sVar2 = func_0x00070698(0x40);
          local_1c = CONCAT22(local_1c._2_2_ + sVar2,(undefined2)local_1c);
          sVar2 = func_0x00070698(0x40);
          local_18 = CONCAT22(local_18._2_2_ + sVar2,(undefined2)local_18);
          func_0x0003116c(0x503,&local_20,0xffffffce);
          func_0x0003116c(0x504,&local_20,0xffffffce);
        } while (iVar4 < (int)((uVar3 & 1) + 2));
      }
    }
    sVar2 = *(short *)(param_1 + 0xb8);
    *(ushort *)(param_1 + 0xb8) = sVar2 + 0x20U;
    if (0x11ff < (ushort)(sVar2 + 0x20U)) {
      *(undefined2 *)(param_1 + 0xb8) = 0x1200;
      *(undefined2 *)(param_1 + 0x40) = 0x14;
      param_1[6] = param_1[6] + '\x01';
    }
    iVar4 = (int)*(short *)(param_1 + 0xb8);
    iVar6 = iVar4 * 0x90;
    *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0xb8);
    *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_1 + 0xb8);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xfff;
    }
    iVar5 = iVar4 * 0x140;
    *(short *)(param_1 + 0x80) = (short)(iVar6 >> 0xc);
    *(short *)(param_1 + 0x82) = (short)((iVar6 >> 0xc) << 1);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xfff;
    }
    iVar4 = iVar4 * 0x110;
    sVar2 = (short)(iVar5 >> 0xc);
    *(short *)(param_1 + 0x84) = sVar2;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xfff;
    }
    *(short *)(param_1 + 0x86) = sVar2 + (short)(iVar4 >> 0xc);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *param_1 = 0xb;
      param_1[0x5e] = 1;
      func_0x00041768(param_1,1,8);
      param_1[6] = param_1[6] + '\x01';
    }
  }
  else if (bVar1 == 2) {
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      param_1[0x5e] = 0;
      param_1[0x2b] = 0;
      *param_1 = 1;
      param_1[4] = 1;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[5] = 0;
    }
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x1e;
    iVar4 = func_0x0004766c(param_1);
    if (iVar4 != 0) {
      if (param_1[0x29] == '\0') {
        bVar1 = func_0x00049250(param_1,0,
                                (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                      (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
        param_1[0x29] = bVar1;
        if ((bVar1 != 0) && ((bVar1 & 1) != 0)) {
          param_1[0x29] = bVar1 | 0x80;
        }
      }
      if ((param_1[0x29] & 0x80) != 0) {
        func_0x00049674(param_1);
        *(undefined2 *)(param_1 + 0x62) = _DAT_1f8001a2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00049760(param_1);
      *(undefined2 *)(param_1 + 0x62) = 0;
      *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

