// FUN_0803ce30

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0803ce30(undefined1 *param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_28 [2];
  short local_26;
  short local_22;
  short local_1e;
  
  iVar4 = _DAT_1f800214;
  uVar2 = func_0x00085690(-((int)(((uint)*(ushort *)(param_1 + 0x36) -
                                  (uint)*(ushort *)(_DAT_1f800214 + 0x36)) * 0x10000) >> 0x10),
                          (int)(((uint)*(ushort *)(param_1 + 0x2e) -
                                (uint)*(ushort *)(_DAT_1f800214 + 0x2e)) * 0x10000) >> 0x10);
  *(ushort *)(iVar4 + 0x56) = uVar2 & 0xfff;
  _DAT_800e7ed6 =
       func_0x00085690(-((int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)_DAT_1f800164) * 0x10000)
                        >> 0x10),
                       (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)_DAT_1f800160) * 0x10000) >>
                       0x10);
  _DAT_800e7ed6 = _DAT_800e7ed6 & 0xfff;
  if ((_DAT_1f80017c & 0xf) == 0) {
    func_0x00074590(0x38,0xd,0);
  }
  bVar1 = param_1[0x78];
  if (bVar1 == 1) {
    if ((short)_DAT_1f800164 <= *(short *)(param_1 + 0x36)) {
      func_0x000440e4(&DAT_800e7e80,0xc4,8);
      func_0x00041768(_DAT_1f800214,0xd,8);
      param_1[0x78] = param_1[0x78] + '\x01';
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      sVar3 = *(short *)(param_1 + 0x50);
      *(short *)(param_1 + 0x50) = sVar3 + 0x50;
      iVar4 = func_0x00083e80((int)(short)(sVar3 + 0x50));
      sVar3 = *(short *)(param_1 + 0x44);
      *(short *)(param_1 + 0x32) = (short)(iVar4 >> 6) + -0x1bbc;
      *(short *)(param_1 + 0x44) = sVar3 + 0x80;
      if (0x3fff < (short)(sVar3 + 0x80)) {
        *(undefined2 *)(param_1 + 0x44) = 0x4000;
      }
      *(short *)(param_1 + 100) =
           *(short *)(param_1 + 100) + (short)(char)((ushort)*(undefined2 *)(param_1 + 0x44) >> 8);
      *(short *)(param_1 + 0x66) = *(short *)(param_1 + 0x66) + -1;
      iVar4 = func_0x00083f50((int)*(short *)(param_1 + 100));
      iVar4 = iVar4 * *(short *)(param_1 + 0x66);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      *(ushort *)(param_1 + 0x2e) = _DAT_1f800160 + (short)(iVar4 >> 0xc);
      iVar4 = func_0x00083e80((int)*(short *)(param_1 + 100));
      iVar4 = iVar4 * *(short *)(param_1 + 0x66);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      iVar6 = (int)(short)_DAT_1f800160;
      iVar4 = (uint)_DAT_1f800164 + (iVar4 >> 0xc);
      iVar5 = (int)(short)_DAT_1f800164;
      *(short *)(param_1 + 0x36) = (short)iVar4;
      sVar3 = func_0x00085690((iVar4 * 0x10000 >> 0x10) - iVar5,iVar6 - *(short *)(param_1 + 0x2e));
      *(short *)(param_1 + 0x56) = (sVar3 + 0x300) - (*(short *)(param_1 + 0x44) >> 7);
      if (*(short *)(param_1 + 0x68) <= *(short *)(param_1 + 100)) {
        *param_1 = 2;
        *(undefined2 *)(param_1 + 0x4a) = 0;
        *(short *)(param_1 + 0x4c) =
             (short)(((int)((uint)*(ushort *)(param_1 + 0x44) << 0x10) >> 0x10) -
                     ((int)((uint)*(ushort *)(param_1 + 0x44) << 0x10) >> 0x1f) >> 1);
        param_1[0x78] = param_1[0x78] + '\x01';
      }
      iVar4 = *(int *)(param_1 + 0x14);
      *(short *)(iVar4 + 0x2e) = *(short *)(param_1 + 0x2e) + 0x11;
      *(short *)(iVar4 + 0x32) = *(short *)(param_1 + 0x32) + 0x11;
      *(short *)(iVar4 + 0x36) = *(short *)(param_1 + 0x36) + 0x11;
      *(undefined2 *)(iVar4 + 0x56) = *(undefined2 *)(param_1 + 0x56);
      *(undefined2 *)(iVar4 + 0x58) = *(undefined2 *)(param_1 + 0x58);
      local_26 = *(short *)(param_1 + 0xac) + (short)(-(int)*(short *)(param_1 + 0x98) >> 4);
      uVar2 = func_0x0009a450();
      local_22 = *(short *)(param_1 + 0xb0) + (short)(-(int)*(short *)(param_1 + 0x9e) >> 4) +
                 (uVar2 & 0x1f);
      uVar2 = func_0x0009a450();
      local_1e = (*(short *)(param_1 + 0xb4) + (short)(-(int)*(short *)(param_1 + 0xa4) >> 4) + 0x20
                 ) - (uVar2 & 0x3f);
      iVar4 = func_0x0003116c(0x511,auStack_28,0);
      if (iVar4 != 0) {
        *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 0x80;
      }
      iVar4 = func_0x0003116c(0x512,auStack_28,0);
      if (iVar4 == 0) {
        return 0;
      }
      *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
  }
  sVar3 = *(short *)(param_1 + 0x4a);
  *(short *)(param_1 + 0x4a) = sVar3 + 0x158;
  if (0x4fff < (short)(sVar3 + 0x158)) {
    *(undefined2 *)(param_1 + 0x4a) = 0x5000;
  }
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + 0xc;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * -0x100;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * 0x100;
  *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + -0x20;
  *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + -0x18;
  iVar4 = *(int *)(param_1 + 0x14);
  *(short *)(iVar4 + 0x2e) = *(short *)(param_1 + 0x2e) + 0x11;
  *(short *)(iVar4 + 0x32) = *(short *)(param_1 + 0x32) + 0x11;
  *(short *)(iVar4 + 0x36) = *(short *)(param_1 + 0x36) + 0x11;
  *(undefined2 *)(iVar4 + 0x56) = *(undefined2 *)(param_1 + 0x56);
  *(undefined2 *)(iVar4 + 0x58) = *(undefined2 *)(param_1 + 0x58);
  local_26 = *(short *)(param_1 + 0xac) + (short)(-(int)*(short *)(param_1 + 0x98) >> 4);
  uVar2 = func_0x0009a450();
  local_22 = *(short *)(param_1 + 0xb0) + (short)(-(int)*(short *)(param_1 + 0x9e) >> 4) +
             (uVar2 & 0x1f);
  uVar2 = func_0x0009a450();
  local_1e = (*(short *)(param_1 + 0xb4) + (short)(-(int)*(short *)(param_1 + 0xa4) >> 4) + 0x20) -
             (uVar2 & 0x3f);
  iVar4 = func_0x0003116c(0x511,auStack_28,0);
  if (iVar4 != 0) {
    *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 0x80;
  }
  iVar4 = func_0x0003116c(0x512,auStack_28,0);
  if (iVar4 != 0) {
    *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 0x80;
  }
  if (-9000 < *(short *)(param_1 + 0x32)) {
    return 0;
  }
  DAT_800bfa00 = 6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

