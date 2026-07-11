// FUN_0803510c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803510c(undefined1 *param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1[6] == '\0') {
    param_1[0x2b] = 0;
    param_1[0x5e] = 0;
    if (param_1[1] != '\0') {
      func_0x00074590(0x91,0,0);
    }
    if ((param_1[0x1b] & 0x40) == 0) {
      func_0x000331d8(param_1,*(undefined4 *)(param_1 + 200),0xffffffce,0);
      param_1[0x1b] = param_1[0x1b] | 0x40;
    }
    *(undefined2 *)(param_1 + 0x42) = 100;
    param_1[6] = param_1[6] + '\x01';
    if (0 < *(short *)(param_1 + 0x58)) {
      *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfff;
    }
    func_0x0004766c(param_1);
    if ((param_1[0x29] != '\0') ||
       (iVar5 = func_0x00049250(param_1,0,
                                (int)((*(ushort *)(param_1 + 0x66) + 0x32) * 0x10000) >> 0x10),
       iVar5 == 1)) {
      func_0x0012f41c(param_1,5,4);
      *(undefined2 *)(param_1 + 0x52) = 0;
      *(undefined2 *)(param_1 + 0x40) = 0;
      param_1[7] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0012f41c(param_1,6,0);
    param_1[7] = 0;
    func_0x0012f690(param_1,0xffffffff,0x42,0x5a);
    uVar6 = func_0x0009a450();
    uVar4 = 0x100;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0xff00;
    }
    *(undefined2 *)(param_1 + 0x50) = uVar4;
    *(undefined2 *)(param_1 + 0x52) = 0x80;
    *(undefined2 *)(param_1 + 0x4a) = 0x10;
    if (param_1[5] != '\x05') goto LAB_080356e8;
    if (param_1[2] == '\x1c') {
      func_0x00077e20(param_1,0xff,0,0x77);
    }
    else {
      func_0x00077e20(param_1,0x81,0x80,0x80);
    }
  }
  else if (param_1[6] == '\x01') {
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + -0x100;
    func_0x0004766c(param_1);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x4a);
    func_0x00045cac(param_1,(int)*(short *)(param_1 + 100),0,(int)*(short *)(param_1 + 0x60));
    bVar1 = param_1[7];
    if (bVar1 == 1) {
      sVar3 = *(short *)(param_1 + 0x58);
      if (sVar3 < 1) {
        *(undefined2 *)(param_1 + 0x58) = 0;
      }
      if (*(short *)(param_1 + 0x40) != 0) {
        *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
        *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + *(short *)(param_1 + 0x50);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(short *)(param_1 + 0x42) == 0) {
        if ((sVar3 < 1 | 2U) == 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + -1;
      }
      if ((param_1[0x29] != '\0') ||
         (iVar5 = func_0x00049250(param_1,0,
                                  (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                        (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10),
         iVar5 == 1)) {
LAB_080356e8:
        func_0x00076d68(param_1);
        return;
      }
      func_0x0012f41c(param_1,6,0);
      func_0x0012f690(param_1,0xffffffff,0x42,0x5a);
      uVar6 = func_0x0009a450();
      uVar4 = 0x100;
      if ((uVar6 & 1) == 0) {
        uVar4 = 0xff00;
      }
      *(undefined2 *)(param_1 + 0x50) = uVar4;
      *(undefined2 *)(param_1 + 0x52) = 0x80;
      param_1[7] = 0;
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        if ((*(short *)(param_1 + 0x58) < -0x400) &&
           (*(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + *(short *)(param_1 + 0x50),
           *(short *)(param_1 + 0x58) < -0xbff)) {
          *(undefined2 *)(param_1 + 0x58) = 0xf400;
        }
        if ((param_1[0x29] != '\0') ||
           (iVar5 = func_0x00049250(param_1,0,(int)*(short *)(param_1 + 0x66)), iVar5 == 1)) {
          func_0x0012f41c(param_1,5,4);
          func_0x00049760(param_1);
          iVar5 = (int)_DAT_1f8001a0;
          *(short *)(param_1 + 0x60) = _DAT_1f8001a0;
          iVar5 = func_0x00077768((int)*(short *)(param_1 + 0x6c),iVar5,1);
          if (iVar5 != 0) {
            param_1[0xbe] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          param_1[0xbe] = 1;
          *(ushort *)(param_1 + 0x6c) = *(ushort *)(param_1 + 0x6c) & 0xfff;
          uVar2 = *(ushort *)(param_1 + 0x56);
          *(ushort *)(param_1 + 0x56) = uVar2 & 0xfff;
          if (0 < *(short *)(param_1 + 0x50)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(ushort *)(param_1 + 0x40) = (uVar2 & 0xfff) - *(short *)(param_1 + 0x6c);
          if (*(short *)(param_1 + 0x40) < 0) {
            *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 0x1000;
          }
          *(undefined2 *)(param_1 + 0x52) = 0;
          *(short *)(param_1 + 0x40) = (short)(char)((ushort)*(undefined2 *)(param_1 + 0x40) >> 8);
          param_1[7] = param_1[7] + '\x01';
          *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfff;
        }
        sVar3 = *(short *)(param_1 + 0x42);
        *(short *)(param_1 + 0x42) = sVar3 + -1;
        if (sVar3 != 1) goto LAB_080356e8;
        func_0x00049760(param_1);
        iVar5 = (int)_DAT_1f8001a0;
        *(short *)(param_1 + 0x60) = _DAT_1f8001a0;
        iVar5 = func_0x00077768((int)*(short *)(param_1 + 0x6c),iVar5,1);
        if (iVar5 != 0) {
          param_1[0xbe] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1[0xbe] = 1;
        *(ushort *)(param_1 + 0x6c) = *(ushort *)(param_1 + 0x6c) & 0xfff;
        uVar2 = *(ushort *)(param_1 + 0x56);
        *(ushort *)(param_1 + 0x56) = uVar2 & 0xfff;
        if (0 < *(short *)(param_1 + 0x50)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(ushort *)(param_1 + 0x40) = (uVar2 & 0xfff) - *(short *)(param_1 + 0x6c);
        if (*(short *)(param_1 + 0x40) < 0) {
          *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 0x1000;
        }
        param_1[7] = 2;
        *(short *)(param_1 + 0x40) = (short)(char)((ushort)*(undefined2 *)(param_1 + 0x40) >> 8);
        *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfff;
      }
    }
    else if (bVar1 == 2) {
      sVar3 = *(short *)(param_1 + 0x58);
      if (sVar3 < 1) {
        *(undefined2 *)(param_1 + 0x58) = 0;
      }
      if (*(short *)(param_1 + 0x40) != 0) {
        *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
        *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + *(short *)(param_1 + 0x50);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((sVar3 < 1 | 2U) == 3) {
        func_0x0012f41c(param_1,0,8);
        *param_1 = 1;
        func_0x0012f690(param_1,0xffffffff,0x28,0x3c);
        *(undefined2 *)(param_1 + 0x44) = 0x1400;
        *(undefined2 *)(param_1 + 0x4a) = 0xff00;
        param_1[5] = 4;
        param_1[6] = 6;
        param_1[4] = 1;
        param_1[0xd] = 0;
        *(undefined2 *)(param_1 + 0x78) = 0;
        param_1[7] = 0;
        param_1[0x1b] = param_1[0x1b] & 0xbf;
        *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x32) - *(short *)(param_1 + 0x70);
      }
      goto LAB_080356e8;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

