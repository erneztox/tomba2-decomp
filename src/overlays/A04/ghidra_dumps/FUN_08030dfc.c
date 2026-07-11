// FUN_08030dfc

/* WARNING: Control flow encountered bad instruction data */

void FUN_08030dfc(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  undefined1 auStack_20 [2];
  short local_1e;
  undefined2 local_1a;
  short local_16;
  
  if (*(char *)(param_1 + 5) == '\0') {
    iVar4 = func_0x00116b48(param_1);
    if (iVar4 != 0) {
      if (*(char *)(param_1 + 0x2b) == '\x03') {
        func_0x00041768(param_1,*(undefined1 *)(param_1 + 0x7b),4);
        func_0x00042354(1,1);
        func_0x00040d68(param_1,0x8014192c);
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(undefined1 *)(param_1 + 6) = 0;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        halt_baddata();
      }
      bVar1 = *(byte *)(param_1 + 6);
      if (bVar1 == 1) {
        iVar4 = func_0x00043108(param_1);
        if (iVar4 != 0) {
          func_0x00041768(param_1,*(undefined1 *)(param_1 + 0x7b),4);
          uVar3 = func_0x0009a450();
          *(ushort *)(param_1 + 0x40) = (uVar3 & 0x1f) + 0x3c;
          if ((DAT_800bfa07 & 8) == 0) {
            *(undefined1 *)(param_1 + 6) = 3;
            halt_baddata();
          }
LAB_08030fa4:
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (bVar1 < 2) {
          if (bVar1 != 0) {
            halt_baddata();
          }
          func_0x00041768(param_1,6,4);
          if (0x146d < *(short *)(param_1 + 0x36)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          func_0x00040d68(param_1,0x80141a84);
          *(undefined2 *)(param_1 + 100) = 0xa00;
          *(undefined2 *)(param_1 + 0x66) = 1;
          *(undefined2 *)(param_1 + 0x68) = 0x80;
          *(undefined2 *)(param_1 + 0x6a) = 0xb08a;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar1 == 2) {
          iVar4 = func_0x00041438(param_1,0x800,0xc0);
          if (iVar4 != 0) goto LAB_08030fa4;
        }
        else {
          if (bVar1 != 3) {
            halt_baddata();
          }
          sVar2 = *(short *)(param_1 + 0x40);
          *(short *)(param_1 + 0x40) = sVar2 + -1;
          if (sVar2 == 1) {
            *(undefined1 *)(param_1 + 6) = 0;
            halt_baddata();
          }
        }
      }
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    if (*(char *)(param_1 + 0x70) == -1) {
      bVar1 = *(byte *)(param_1 + 6);
      if (bVar1 == 1) {
        if (DAT_800bfae3 == '\0') {
          func_0x00040d68(param_1,0x800a3e38);
          *(undefined1 *)(param_1 + 6) = 2;
          *(undefined1 *)(param_1 + 0x70) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x00040d68(param_1,0x8014199c);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        if ((DAT_800bfa07 & 8) == 0) {
          DAT_800bfa07 = DAT_800bfa07 | 8;
          func_0x00040d68(param_1,0x8014193c);
          halt_baddata();
        }
        if (DAT_800bfae3 != '\0') {
          func_0x00040d68(param_1,0x8014199c);
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 == 2) {
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 5) = 0;
        halt_baddata();
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 4) = 3;
    }
    func_0x00041098(param_1);
  }
  if (*(char *)(param_1 + 1) != '\0') {
    if (*(short *)(param_1 + 0x42) == 0) {
      iVar4 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
      local_1e = *(short *)(*(int *)(param_1 + 0xc4) + 0x2c) + (short)(iVar4 * 0x46 >> 0xc);
      local_1a = *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x30);
      iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
      local_16 = *(short *)(*(int *)(param_1 + 0xc4) + 0x34) - (short)(iVar4 * 0x46 >> 0xc);
      func_0x0003116c(0x50a,auStack_20,0xfffffff6);
      func_0x0009a450();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + -1;
  }
  func_0x0004190c(param_1);
  return;
}

