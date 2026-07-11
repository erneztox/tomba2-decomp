// FUN_0802826c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802826c(undefined1 *param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  undefined1 auStack_28 [2];
  short local_26;
  undefined2 local_22;
  short local_1e;
  
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    sVar5 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar5 + -1;
    if (sVar5 != 1) {
      return;
    }
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x3a);
    *(undefined2 *)(param_1 + 100) = 0;
    *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(param_1 + 0x2e);
    param_1[6] = param_1[6] + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bfa35 == '\0') {
        return;
      }
      param_1[6] = 1;
      *(undefined2 *)(param_1 + 0x40) = 0x1e;
    }
  }
  else {
    if (bVar1 == 2) {
      if ((_DAT_1f80017c & 7) == 0) {
        func_0x00074590(0xc,0xffffffe2,0);
        iVar4 = 0;
        sVar5 = -200;
        do {
          uVar3 = *(short *)(param_1 + 100) + iVar4 & 3;
          if (uVar3 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar3 < 2) {
            if (uVar3 == 0) {
              halt_baddata();
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar3 == 2) {
            if (iVar4 < 5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          else {
            if (uVar3 != 3) {
              halt_baddata();
            }
            if (iVar4 < 5) {
              local_22 = 0xe510;
              local_26 = *(short *)(param_1 + 0x2e) + 0x140;
              local_1e = *(short *)(param_1 + 0x36) + sVar5;
              func_0x0003116c(0,auStack_28,0xffffffec);
            }
          }
          sVar5 = sVar5 + 0x40;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 10);
        *(short *)(param_1 + 100) = *(short *)(param_1 + 100) + 1;
      }
      sVar5 = *(short *)(param_1 + 0x60);
      *(short *)(param_1 + 0x60) = sVar5 + -2;
      if ((short)(sVar5 + -2) < -0x1b00) {
        *(undefined2 *)(param_1 + 0x60) = 0xe500;
        param_1[6] = param_1[6] + '\x01';
      }
      uVar2 = func_0x0009a450();
      *(ushort *)(param_1 + 0x32) = *(short *)(param_1 + 0x60) + -4 + (uVar2 & 7);
      uVar2 = func_0x0009a450();
      *(ushort *)(param_1 + 0x2e) = *(short *)(param_1 + 0x62) + -4 + (uVar2 & 7);
      func_0x000521f4(0,0,0x81,2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 3) {
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x1e;
      DAT_800bfa35 = 2;
      *param_1 = 1;
      param_1[6] = 0;
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x60);
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x62);
      param_1[5] = param_1[5] + '\x01';
      func_0x000517f8();
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

