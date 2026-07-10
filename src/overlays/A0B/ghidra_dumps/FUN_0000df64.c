// FUN_0000df64

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0000e540) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000df64(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_28 [2];
  undefined2 local_26;
  short local_22;
  undefined2 local_1e;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[3] == '\0') {
      if ((DAT_800bf809 == '\0') && (_DAT_800e7fee != 0)) {
        bVar1 = param_1[5];
        if (bVar1 != 1) {
          if (bVar1 < 2) {
            if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          else {
            if (bVar1 != 2) goto LAB_0000e3a0;
            sVar4 = *(short *)(param_1 + 0x40);
            *(short *)(param_1 + 0x40) = sVar4 + -1;
            if (sVar4 == 1) {
              *param_1 = 1;
              param_1[5] = 0;
              if (param_1[0x46] != '\0') {
                if (param_1[0xbe] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + -0x80;
              }
            }
          }
          if (*(short *)(param_1 + 0x6e) < 0x15e) {
            *(short *)(param_1 + 0x6e) = *(short *)(param_1 + 0x6e) + 2;
          }
          sVar4 = *(short *)(param_1 + 0x84);
          if (*(short *)(param_1 + 0x84) < 0x118) {
            *(short *)(param_1 + 0x84) = sVar4 + 2;
            *(short *)(param_1 + 0x80) = sVar4 + 2;
          }
          if (*(short *)(param_1 + 0x80) < 200) {
            *(short *)(param_1 + 0x80) = *(short *)(param_1 + 0x80) + 1;
          }
          *(short *)(param_1 + 0x82) = *(short *)(param_1 + 0x80) << 1;
          *(short *)(param_1 + 0x86) = *(short *)(param_1 + 0x84) << 1;
          sVar4 = *(short *)(param_1 + 0x6e) * 0x1d;
          *(short *)(param_1 + 0xbc) = sVar4;
          *(short *)(param_1 + 0xba) = sVar4;
          *(short *)(param_1 + 0xb8) = sVar4;
          *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)(param_1 + 0x2e);
          *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_1 + 0x32);
          *(undefined2 *)(param_1 + 0x6a) = *(undefined2 *)(param_1 + 0x36);
          if (param_1[0x5f] == '\0') {
            sVar4 = *(short *)(param_1 + 0x60);
            iVar6 = func_0x00083f50((int)sVar4);
            sVar2 = *(short *)(param_1 + 0x44);
            iVar7 = func_0x00083e80((int)sVar4);
            *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar6 * sVar2;
            *(int *)(param_1 + 0x34) =
                 *(int *)(param_1 + 0x34) + -iVar7 * (int)*(short *)(param_1 + 0x44);
          }
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x1000;
          if (param_1[0x5f] == '\0') {
            if (-1 < *(short *)(param_1 + 0x44)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            iVar6 = func_0x00045cac(param_1,(int)-*(short *)(param_1 + 0x80),0,
                                    (int)*(short *)(param_1 + 0x60));
            if (iVar6 != 0) {
              param_1[0x5f] = param_1[0xbe] | 4;
            }
          }
          func_0x00116cb0(param_1);
          iVar6 = func_0x0004766c(param_1);
          if (iVar6 < 0) {
            *(undefined2 *)(param_1 + 100) = 0;
          }
          uVar5 = func_0x000776f8((int)*(short *)(param_1 + 0x60),(int)*(short *)(param_1 + 0x56),
                                  0x20);
          *(undefined2 *)(param_1 + 0x56) = uVar5;
          uVar8 = func_0x00077fb0(((int)*(short *)(param_1 + 0x66) - (int)*(short *)(param_1 + 0x2e)
                                  ) * ((int)*(short *)(param_1 + 0x66) -
                                      (int)*(short *)(param_1 + 0x2e)) +
                                  ((int)*(short *)(param_1 + 0x68) - (int)*(short *)(param_1 + 0x32)
                                  ) * ((int)*(short *)(param_1 + 0x68) -
                                      (int)*(short *)(param_1 + 0x32)) +
                                  ((int)*(short *)(param_1 + 0x6a) - (int)*(short *)(param_1 + 0x36)
                                  ) * ((int)*(short *)(param_1 + 0x6a) -
                                      (int)*(short *)(param_1 + 0x36)));
          iVar6 = (int)*(short *)(param_1 + 0x84);
          iVar7 = (int)((uVar8 & 0xffff) << 10) / iVar6;
          if (iVar6 == 0) {
            trap(0x1c00);
          }
          if ((iVar6 == -1) && ((uVar8 & 0xffff) == 0x200000)) {
            trap(0x1800);
          }
          if (param_1[0xbe] == '\0') {
            *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + (short)iVar7;
            if ((iVar7 != 0) &&
               (uVar3 = *(ushort *)(param_1 + 0x6c),
               *(short *)(param_1 + 0x6c) = (short)((uint)uVar3 + iVar7),
               0xc00 < (int)(((uint)uVar3 + iVar7) * 0x10000) >> 0x10)) {
              func_0x00074590(0x8e,0,0);
              *(undefined2 *)(param_1 + 0x6c) = 0;
            }
            if (((param_1[0x5f] & 4) == 0) && (*(short *)(param_1 + 100) != 0)) {
              *(short *)(param_1 + 100) = *(short *)(param_1 + 100) + -1;
            }
            else {
              *param_1 = 2;
              param_1[4] = 2;
              param_1[6] = 0;
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(undefined2 *)(param_1 + 0x40) = 0x14;
        param_1[5] = param_1[5] + '\x01';
        if (param_1[0x2b] != '\0') {
          *(undefined2 *)(param_1 + 0x44) = 0;
        }
        param_1[0x46] = param_1[0x2b];
      }
LAB_0000e3a0:
      param_1[0x29] = 0;
      param_1[0x5f] = 0;
      param_1[1] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[1] = 1;
    func_0x00077e7c(param_1);
    func_0x000518fc(param_1);
    uVar8 = func_0x00077fb0(((int)*(short *)(param_1 + 0x66) - (int)*(short *)(param_1 + 0x2e)) *
                            ((int)*(short *)(param_1 + 0x66) - (int)*(short *)(param_1 + 0x2e)) +
                            ((int)*(short *)(param_1 + 0x68) - (int)*(short *)(param_1 + 0x32)) *
                            ((int)*(short *)(param_1 + 0x68) - (int)*(short *)(param_1 + 0x32)) +
                            ((int)*(short *)(param_1 + 0x6a) - (int)*(short *)(param_1 + 0x36)) *
                            ((int)*(short *)(param_1 + 0x6a) - (int)*(short *)(param_1 + 0x36)));
    iVar6 = (int)*(short *)(param_1 + 0x84);
    iVar7 = (int)((uVar8 & 0xffff) << 10) / iVar6;
    if (iVar6 == 0) {
      trap(0x1c00);
    }
    if ((iVar6 == -1) && ((uVar8 & 0xffff) == 0x200000)) {
      trap(0x1800);
    }
    sVar4 = (short)iVar7;
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) - sVar4;
    if (iVar7 != 0) {
      *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) + sVar4;
      *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x70) + sVar4;
      if (0xc00 < *(short *)(param_1 + 0x6c)) {
        func_0x00074590(0x8e,0,0);
        *(undefined2 *)(param_1 + 0x6c) = 0;
      }
      if (0x400 < *(short *)(param_1 + 0x70)) {
        *(undefined2 *)(param_1 + 0x70) = 0;
        local_26 = *(undefined2 *)(param_1 + 0x2e);
        local_22 = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x84);
        local_1e = *(undefined2 *)(param_1 + 0x36);
        func_0x0003116c(0xc00,auStack_28,0xffffffb0);
      }
      uVar5 = func_0x000782b0(param_1 + 0x2c,(int)*(short *)(param_1 + 0x66),
                              (int)*(short *)(param_1 + 0x6a));
      *(undefined2 *)(param_1 + 0x56) = uVar5;
    }
    *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(param_1 + 0x6a) = *(undefined2 *)(param_1 + 0x36);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x00116b50(param_1);
    }
  }
  else if (bVar1 == 2) {
    bVar1 = param_1[6];
    if (bVar1 < 3) {
      if (bVar1 == 0) {
        func_0x0003116c(0xc01,param_1 + 0x2c,0xffffffb0);
        func_0x0003116c(0xc06,param_1 + 0x2c,0xffffffb0);
        func_0x00074590(0x8d,0,0);
        param_1[6] = param_1[6] + '\x01';
      }
      else {
        param_1[6] = bVar1 + 1;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 3) {
      param_1[1] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[4] = 3;
    param_1[1] = 1;
    func_0x00077e7c(param_1);
    func_0x000518fc(param_1);
  }
  else if (bVar1 == 3) {
    if (param_1[3] == '\0') {
      DAT_1f80025a = DAT_1f80025a + -1;
    }
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

