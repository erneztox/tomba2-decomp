// FUN_08031698

/* WARNING: Control flow encountered bad instruction data */

void FUN_08031698(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_20;
  undefined2 local_1c;
  short sStack_1a;
  undefined4 local_18;
  
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    if ((param_1[0x5f] & 0x80) != 0) {
      if (*(short *)(param_1 + 0x40) != 0) {
        *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
        halt_baddata();
      }
      if ((param_1[0x5f] & 0xf0) != 0xa0) {
        *(undefined2 *)(param_1 + 0x44) = 0x600;
        *(undefined2 *)(param_1 + 0x4e) = 0x80;
        *(undefined2 *)(param_1 + 0x40) = 5;
        param_1[5] = 2;
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x44) = 64000;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if ((param_1[0x5f] & 0x80) == 0) goto LAB_080319c4;
        *(undefined2 *)(param_1 + 0x40) = 0x14;
        param_1[6] = 0;
        param_1[5] = param_1[5] + '\x01';
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
    sVar3 = *(short *)(param_1 + 0x44) + *(short *)(param_1 + 0x4e);
    *(short *)(param_1 + 0x44) = sVar3;
    if (*(short *)(param_1 + 0x4e) < 1) {
      if (sVar3 < -0x1400) {
        *(undefined2 *)(param_1 + 0x44) = 0xec00;
      }
    }
    else if (0x1400 < sVar3) {
      *(undefined2 *)(param_1 + 0x44) = 0x1400;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar3 = *(short *)(param_1 + 0x40);
    if ((*(short *)(param_1 + 0x40) != 0) && (*(short *)(param_1 + 0x40) = sVar3 + -1, sVar3 == 1))
    {
      func_0x00074590(0x81,0,0);
    }
    bVar1 = param_1[0x5f];
    if ((bVar1 & 3) != 0) {
      if (*(short *)(param_1 + 0x44) < 0) {
        if ((bVar1 & 1) != 0) {
          *(undefined2 *)(param_1 + 0x44) = 0;
          param_1[5] = 0;
        }
      }
      else if ((bVar1 & 1) == 0) {
        *(undefined2 *)(param_1 + 0x44) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    if (*(short *)(param_1 + 0x44) == 0) goto LAB_080319c4;
    sVar3 = *(short *)(param_1 + 0x36);
    func_0x00041a1c(param_1,1);
    func_0x0004766c(param_1);
    if (sVar3 == *(short *)(param_1 + 0x36)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(short *)(param_1 + 0x44) != 0) {
      if (-1 < *(short *)(param_1 + 0x44)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      cVar2 = func_0x00045cac(param_1,(int)-*(short *)(param_1 + 0x80),
                              (int)((((uint)*(ushort *)(param_1 + 0x86) -
                                     (uint)*(ushort *)(param_1 + 0x84)) + -0x18) * 0x10000) >> 0x10,
                              (int)*(short *)(param_1 + 0x60));
      param_1[0x5f] = param_1[0x5f] | cVar2 << 3;
    }
    bVar1 = param_1[0x2a];
    if (bVar1 == 6) {
      if (*(short *)(param_1 + 0x36) < 0x1af4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (bVar1 < 7) {
        if (bVar1 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 != 8) {
        halt_baddata();
      }
      if (0xf3c < *(ushort *)(param_1 + 0x36) - 0x1a90) {
        *(undefined2 *)(param_1 + 0x44) = 0x1000;
        param_1[0x5f] = param_1[0x5f] | 8;
      }
    }
    if ((param_1[0x5f] & 8) == 0) goto LAB_080319c4;
    iVar4 = (int)*(short *)(param_1 + 0x44);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (0xfff < iVar4) {
      param_1[4] = 2;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 2;
      *param_1 = 2;
      halt_baddata();
    }
  }
  param_1[5] = 0;
LAB_080319c4:
  func_0x0012a244(param_1);
  if ((param_1[0x29] & 0xc0) == 0) {
    sVar3 = *(short *)(param_1 + 0x50);
    *(short *)(param_1 + 0x50) = sVar3 + 0x20;
    if (0xfff < (short)(sVar3 + 0x20)) {
      *(undefined2 *)(param_1 + 0x50) = 0x1000;
    }
    return;
  }
  if (*(short *)(param_1 + 0x50) != 0) {
    if (0xff < *(short *)(param_1 + 0x50)) {
      local_20 = *(undefined4 *)(param_1 + 0x2c);
      local_18 = *(undefined4 *)(param_1 + 0x34);
      sStack_1a = (short)((uint)*(undefined4 *)(param_1 + 0x30) >> 0x10);
      _local_1c = CONCAT22(sStack_1a + 0xa0,(short)*(undefined4 *)(param_1 + 0x30));
      func_0x0003116c(0xd,&local_20,0xffffff9c);
      if (param_1[2] == '/') {
        uVar5 = 0xfffffffb;
        if (*(short *)(param_1 + 0x66) != 0) {
          *(undefined2 *)(param_1 + 0x66) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        uVar5 = 0xfffffff8;
      }
      func_0x00074590(0x32,uVar5,0);
    }
    *(undefined2 *)(param_1 + 0x50) = 0;
  }
  if ((param_1[0x29] & 0x80) != 0) {
    *(undefined2 *)(param_1 + 0x62) = 0;
  }
  func_0x0004139c(param_1 + 0x58,(int)*(short *)(param_1 + 0x62),0x40);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

