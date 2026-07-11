// FUN_0803a334

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803a334(undefined1 *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  bVar2 = param_1[6];
  if (bVar2 == 1) {
    if ((_DAT_1f80017c & 3) == 0) {
      iVar8 = 0;
      uVar6 = func_0x0009a450();
      if ((uVar6 & 1) != 0xfffffffe) {
        do {
          local_20 = *(undefined4 *)(param_1 + 0x2c);
          local_1c = *(undefined4 *)(param_1 + 0x30);
          local_18 = *(undefined4 *)(param_1 + 0x34);
          sVar4 = func_0x00070698(0x40);
          iVar8 = iVar8 + 1;
          local_20 = CONCAT22(local_20._2_2_ + sVar4,(undefined2)local_20);
          sVar4 = func_0x00070698(0x40);
          local_1c = CONCAT22(local_1c._2_2_ + sVar4,(undefined2)local_1c);
          sVar4 = func_0x00070698(0x40);
          local_18 = CONCAT22(local_18._2_2_ + sVar4,(undefined2)local_18);
          func_0x0003116c(0x503,&local_20,0xffffffce);
          func_0x0003116c(0x504,&local_20,0xffffffce);
        } while (iVar8 < (int)((uVar6 & 1) + 2));
      }
    }
    sVar4 = *(short *)(param_1 + 0xb8);
    *(ushort *)(param_1 + 0xb8) = sVar4 - 0x20U;
    if ((int)(uint)(ushort)(sVar4 - 0x20U) <= (int)*(short *)(param_1 + 0x66)) {
      *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_1 + 0x66);
      if (*(short *)(param_1 + 0x66) == 0xe00) {
        *(undefined2 *)(param_1 + 0x40) = 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1[6] = 3;
    }
    if (*(short *)(param_1 + 0xb8) == 0) {
      *(undefined2 *)(param_1 + 0xb8) = 1;
    }
    iVar8 = (int)*(short *)(param_1 + 0xb8);
    iVar5 = iVar8 * 0x90;
    *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0xb8);
    *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_1 + 0xb8);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xfff;
    }
    iVar7 = iVar8 * 0x140;
    *(short *)(param_1 + 0x80) = (short)(iVar5 >> 0xc);
    *(short *)(param_1 + 0x82) = (short)((iVar5 >> 0xc) << 1);
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xfff;
    }
    iVar8 = iVar8 * 0x110;
    sVar4 = (short)(iVar7 >> 0xc);
    *(short *)(param_1 + 0x84) = sVar4;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xfff;
    }
    *(short *)(param_1 + 0x86) = sVar4 + (short)(iVar8 >> 0xc);
  }
  else if (bVar2 < 2) {
    if (bVar2 == 0) {
      if ((param_1[0xbf] != '\0') && (iVar8 = *(int *)(param_1 + 0x10), iVar8 != 0)) {
        if ((*(byte *)(iVar8 + 5) < 2) && (0x7ff < *(ushort *)(iVar8 + 0xb8))) {
          *(undefined2 *)(iVar8 + 0x4a) = 0;
          iVar5 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
          *(short *)(iVar8 + 0x48) = (short)(iVar5 >> 4);
          iVar5 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
          *(short *)(iVar8 + 0x4c) = (short)(-iVar5 >> 4);
          *(undefined2 *)(iVar8 + 0x60) = 0xe800;
          *(undefined2 *)(iVar8 + 0x62) = 0x380;
          *(undefined2 *)(iVar8 + 0x44) = 0xf80;
          *(undefined1 *)(iVar8 + 5) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(undefined1 *)(iVar8 + 4) = 2;
      }
      param_1[0x5e] = 1;
      param_1[0xbf] = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      if (*(short *)(param_1 + 100) != -1) {
        *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 100);
        *(undefined2 *)(param_1 + 100) = 0xffff;
        uVar1 = func_0x00077768((int)*(short *)(param_1 + 0x56),(int)*(short *)(param_1 + 0x60),0);
        param_1[0xbe] = uVar1;
        func_0x0004130c(param_1,1);
      }
      func_0x00074590(0x95,0xf,0);
      func_0x00041768(param_1,1,8);
      uVar3 = 0xc00;
      if (*(short *)(param_1 + 0xb8) == 0x1200) {
        uVar3 = 0xe00;
      }
      *(undefined2 *)(param_1 + 0x66) = uVar3;
      if ((byte)param_1[3] < 2) {
        DAT_800bfa0a = DAT_800bfa0a + (char)(1 << (((byte)param_1[3] & 7) << 2));
      }
      param_1[6] = param_1[6] + '\x01';
    }
  }
  else if (bVar2 == 2) {
    sVar4 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar4 + -1;
    if (sVar4 != 1) goto LAB_0803a778;
    param_1[0x5e] = 0;
    param_1[0x2b] = 0;
    *param_1 = 1;
    param_1[4] = 1;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
  }
  else if (bVar2 == 3) {
    if ((param_1[3] == '\0') && (iVar8 = func_0x00040c00(0x15), iVar8 < 0)) {
      DAT_800bfa0a = DAT_800bfa0a + -1;
    }
    iVar8 = func_0x00072ddc(0,3,2,0xd);
    if (iVar8 != 0) {
      func_0x0003116c(0x504,param_1 + 0x2c,0xffffffce);
      *(undefined4 *)(iVar8 + 0x1c) = 0x80124394;
      *(undefined1 *)(iVar8 + 0x2a) = param_1[0x2a];
      *(undefined2 *)(iVar8 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
      *(undefined2 *)(iVar8 + 0x32) = *(undefined2 *)(param_1 + 0x32);
      uVar3 = *(undefined2 *)(param_1 + 0x36);
      *(undefined1 *)(iVar8 + 3) = 0x80;
      *(undefined2 *)(iVar8 + 0x36) = uVar3;
      *(char *)(iVar8 + 0x46) = '\x01' - param_1[0xbe];
      func_0x00074590(0x8b,0,0);
    }
    param_1[4] = 3;
LAB_0803a778:
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x1e;
    iVar8 = func_0x0004766c(param_1);
    if (iVar8 != 0) {
      if (param_1[0x29] == '\0') {
        bVar2 = func_0x00049250(param_1,0,
                                (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                      (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
        param_1[0x29] = bVar2;
        if ((bVar2 != 0) && ((bVar2 & 1) != 0)) {
          param_1[0x29] = bVar2 | 0x80;
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

