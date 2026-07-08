
void FUN_80062a30(int param_1,int param_2,uint param_3)

{
  undefined2 uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 == 3) {
    uVar3 = FUN_8005444c();
    if ((uVar3 & 1) == 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x148) = 0;
    *(undefined1 *)(param_2 + 0x29) = 0;
    *(undefined1 *)(param_1 + 0x164) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
LAB_80062d68:
    FUN_80054d14(param_1,2,3);
    return;
  }
  if ((param_3 & 4) == 0) {
    if (*(char *)(param_1 + 0x165) == '\0') {
      uVar3 = param_3 & 1;
    }
    else {
      uVar3 = (param_3 & 1) + 3;
    }
    uVar3 = (uint)(char)(&DAT_800a4700)[uVar3];
  }
  else {
    sVar2 = *(short *)(param_1 + 0x4a) + 4;
    *(short *)(param_1 + 0x4a) = sVar2;
    if (0x1d < sVar2) {
      *(undefined2 *)(param_1 + 0x4a) = 0x1e;
    }
    uVar3 = (uint)*(ushort *)(param_1 + 0x4a);
  }
  if ((param_3 & 1) != 0) {
    iVar4 = *(ushort *)(param_1 + 0x156) + uVar3;
    *(short *)(param_1 + 0x156) = (short)iVar4;
    if (((param_3 & 0x80) == 0) &&
       ((*(char *)(param_2 + 2) != '\x17' || (*(char *)(param_2 + 0x47) == '\x02')))) {
      if ((int)*(short *)(param_2 + 0x86) - (int)*(short *)(param_2 + 0x84) <
          (int)*(short *)(param_1 + 0x156)) {
        *(short *)(param_1 + 0x156) = *(short *)(param_2 + 0x86) - *(short *)(param_2 + 0x84);
      }
    }
    else {
      iVar5 = 0;
      if (*(short *)(param_1 + 0x17e) < 0) {
        iVar5 = 0x50;
      }
      if (iVar5 + ((int)*(short *)(param_2 + 0x86) - (int)*(short *)(param_2 + 0x84)) +
          (int)*(short *)(param_1 + 0x68) < iVar4 * 0x10000 >> 0x10) {
        *(undefined2 *)(param_1 + 0x4a) = 0;
        *(undefined2 *)(param_1 + 0x50) = 0;
        *(undefined1 *)(param_1 + 0x148) = 0;
        *(undefined1 *)(param_2 + 0x29) = 0;
        *(undefined1 *)(param_1 + 0x164) = 0;
        *(undefined4 *)(param_1 + 0x158) = 0;
        *(undefined2 *)(param_1 + 0x44) = 0;
        *(short *)(param_1 + 0x156) = *(short *)(param_1 + 0x156) + 0x2c;
        FUN_80056d44(param_1,0);
        if (*(char *)(param_2 + 2) != '\x17') {
          return;
        }
        *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_2 + 0x4a);
        sVar2 = *(short *)(param_1 + 0x156) + 0x2c;
        *(short *)(param_1 + 0x156) = sVar2;
        if ((*(ushort *)(param_1 + 0x17e) & 0x60) == 0) {
          return;
        }
        *(short *)(param_1 + 0x156) = sVar2 + (short)((*(ushort *)(param_2 + 0x4a) & 0x1f00) >> 5);
        return;
      }
    }
    if ((param_3 & 0x40) != 0) {
      return;
    }
    uVar3 = FUN_8005444c(param_1);
    if ((uVar3 & 1) == 0) {
      return;
    }
    *(undefined1 *)(param_2 + 0x29) = 0;
    *(undefined1 *)(param_1 + 0x164) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    if (param_3 == 0x85) {
      *(char *)(param_1 + 0x147) = '\x01' - *(char *)(param_1 + 0x147);
      FUN_80054198(param_1);
      *(undefined1 *)(param_1 + 5) = 0x35;
      return;
    }
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x148) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    goto LAB_80062d68;
  }
  *(undefined2 *)(param_1 + 0x6a) = 0;
  uVar1 = *(undefined2 *)(param_1 + 0x156);
  if ((*(char *)(param_2 + 2) == '\x17') && (*(char *)(param_2 + 0x47) != '\x02')) {
    if ((param_3 & 2) != 0) {
      *(short *)(param_1 + 0x156) =
           (*(short *)(param_1 + 0x156) + -0x30) -
           (short)(char)((ushort)*(undefined2 *)(param_2 + 0x4a) >> 8);
      goto LAB_80062b98;
    }
    sVar2 = *(short *)(param_1 + 0x156) +
            ((short)uVar3 - (short)(char)((ushort)*(undefined2 *)(param_2 + 0x4a) >> 8));
  }
  else {
    sVar2 = *(short *)(param_1 + 0x156) + (short)uVar3;
  }
  *(short *)(param_1 + 0x156) = sVar2;
LAB_80062b98:
  iVar4 = FUN_800541f4(param_1,1);
  if (iVar4 != 0) {
    *(undefined2 *)(param_1 + 0x156) = uVar1;
  }
  if (-(int)*(short *)(param_2 + 0x84) <= (int)*(short *)(param_1 + 0x156)) {
    return;
  }
  *(short *)(param_1 + 0x156) = -*(short *)(param_2 + 0x84);
  return;
}

