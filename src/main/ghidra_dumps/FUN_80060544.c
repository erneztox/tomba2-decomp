
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80060544(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  switch(*(undefined1 *)(param_1 + 7)) {
  case 0:
    *(undefined1 *)(param_1 + 7) = 6;
    _DAT_1f800238 = 0;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    if (param_2 == 0) {
      FUN_80060268(param_1);
    }
    sVar2 = *(short *)(param_1 + 0x44) + 8;
    *(short *)(param_1 + 0x44) = sVar2;
    if (0x7f < sVar2) {
      *(undefined2 *)(param_1 + 0x44) = 0x80;
    }
    iVar4 = (uint)*(ushort *)(param_1 + 0x4e) - (uint)*(ushort *)(param_1 + 0x44);
    *(short *)(param_1 + 0x4e) = (short)iVar4;
    if (iVar4 * 0x10000 < 1) {
      sVar2 = FUN_8006032c(param_1,param_2);
      if (sVar2 == 0) {
LAB_800608b8:
        *(undefined1 *)(param_1 + 0x167) = 4;
LAB_800608c0:
        *(undefined1 *)(param_1 + 0x168) = 0;
        *(undefined1 *)(param_1 + 7) = 5;
      }
      else {
        *(undefined1 *)(param_1 + 7) = 2;
      }
    }
    else if (9 < *(byte *)(param_1 + 7)) {
      *(undefined1 *)(param_1 + 7) = 1;
    }
    break;
  case 1:
    *(undefined1 *)(param_1 + 0x167) = 0;
    if (param_2 != 0) {
LAB_800606b0:
      sVar2 = *(short *)(param_1 + 0x44) + 8;
      *(short *)(param_1 + 0x44) = sVar2;
      if (0x7f < sVar2) {
        *(undefined2 *)(param_1 + 0x44) = 0x80;
      }
      iVar4 = (uint)*(ushort *)(param_1 + 0x4e) - (uint)*(ushort *)(param_1 + 0x44);
      *(short *)(param_1 + 0x4e) = (short)iVar4;
      if (0 < iVar4 * 0x10000) break;
      sVar2 = FUN_8006032c(param_1,param_2);
      goto joined_r0x800608ac;
    }
    FUN_80060268(param_1);
    iVar4 = FUN_8006042c(param_1);
    if (iVar4 == 0) goto LAB_800606b0;
    iVar4 = (int)*(short *)(param_1 + 0x4e);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (0x9f < iVar4) {
      bVar1 = *(char *)(param_1 + 0x168) - 4;
      *(byte *)(param_1 + 0x168) = bVar1;
      if ((int)((uint)bVar1 << 0x18) < 0) {
        *(undefined1 *)(param_1 + 0x168) = 1;
      }
      goto LAB_800606b0;
    }
    *(undefined1 *)(param_1 + 0x167) = 4;
    *(undefined2 *)(param_1 + 0x44) = 0;
    goto LAB_800608c0;
  case 2:
    *(undefined1 *)(param_1 + 0x167) = 2;
    if (param_2 == 2) {
      iVar4 = (uint)*(ushort *)(param_1 + 0x4e) - (uint)*(ushort *)(param_1 + 0x44);
      *(short *)(param_1 + 0x4e) = (short)iVar4;
      if (iVar4 * 0x10000 >> 0x10 < -0x600) {
        *(undefined1 *)(param_1 + 0x169) = 1;
      }
      break;
    }
    if (param_2 != 0) {
LAB_800607a0:
      uVar3 = *(short *)(param_1 + 0x44) - 8;
      *(ushort *)(param_1 + 0x44) = uVar3;
      if ((int)((uint)uVar3 << 0x10) < 0) {
        *(undefined2 *)(param_1 + 0x44) = 0;
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      }
      *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) - *(short *)(param_1 + 0x44);
      break;
    }
    FUN_80060268(param_1);
    iVar4 = FUN_8006042c(param_1);
    if (iVar4 == 0) goto LAB_800607a0;
    *(undefined2 *)(param_1 + 0x44) = 0x20;
    bVar1 = *(char *)(param_1 + 0x168) - 4;
    *(byte *)(param_1 + 0x168) = bVar1;
    if ((int)((uint)bVar1 << 0x18) < 0) {
      *(undefined1 *)(param_1 + 0x168) = 1;
    }
LAB_800608cc:
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    break;
  case 3:
    *(undefined1 *)(param_1 + 0x167) = 3;
    if (param_2 == 0) {
      FUN_80060268(param_1);
      iVar4 = FUN_8006042c(param_1);
      if (iVar4 != 0) {
        iVar4 = (int)*(short *)(param_1 + 0x4e);
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (iVar4 < 0xa0) {
          *(undefined1 *)(param_1 + 0x167) = 4;
          *(undefined2 *)(param_1 + 0x44) = 0;
          goto LAB_800608c0;
        }
        bVar1 = *(char *)(param_1 + 0x168) - 4;
        *(byte *)(param_1 + 0x168) = bVar1;
        if ((int)((uint)bVar1 << 0x18) < 0) {
          *(undefined1 *)(param_1 + 0x168) = 1;
        }
      }
    }
    sVar2 = *(short *)(param_1 + 0x44) + 8;
    *(short *)(param_1 + 0x44) = sVar2;
    if (0x7f < sVar2) {
      *(undefined2 *)(param_1 + 0x44) = 0x80;
    }
    uVar3 = *(short *)(param_1 + 0x4e) + *(short *)(param_1 + 0x44);
    *(ushort *)(param_1 + 0x4e) = uVar3;
    if ((int)((uint)uVar3 << 0x10) < 0) break;
    sVar2 = FUN_8006032c(param_1,param_2);
joined_r0x800608ac:
    if (sVar2 != 0) goto LAB_800608cc;
    goto LAB_800608b8;
  case 4:
    *(undefined1 *)(param_1 + 0x167) = 1;
    if (param_2 == 0) {
      FUN_80060268(param_1);
      iVar4 = FUN_8006042c(param_1);
      if (iVar4 != 0) {
        *(undefined2 *)(param_1 + 0x44) = 0x20;
        bVar1 = *(char *)(param_1 + 0x168) - 4;
        *(byte *)(param_1 + 0x168) = bVar1;
        if ((int)((uint)bVar1 << 0x18) < 0) {
          *(undefined1 *)(param_1 + 0x168) = 1;
        }
        *(undefined1 *)(param_1 + 7) = 1;
        break;
      }
    }
    uVar3 = *(short *)(param_1 + 0x44) - 8;
    *(ushort *)(param_1 + 0x44) = uVar3;
    if ((int)((uint)uVar3 << 0x10) < 0) {
      *(undefined2 *)(param_1 + 0x44) = 0;
      *(undefined1 *)(param_1 + 7) = 1;
      if ((param_2 != 0) && (0x300 < *(short *)(param_1 + 0x4e))) {
        *(byte *)(param_1 + 0x169) = *(byte *)(param_1 + 0x169) | 1;
      }
    }
    *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + *(short *)(param_1 + 0x44);
    break;
  case 5:
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined1 *)(param_1 + 0x167) = 4;
    if (param_2 == 0) {
      iVar4 = FUN_80060268(param_1);
      if (iVar4 == 1) {
        *(undefined1 *)(param_1 + 0x168) = 3;
        if (DAT_1f800237 == *(char *)(param_1 + 0x147)) {
          *(undefined1 *)(param_1 + 7) = 2;
        }
        else {
          *(undefined1 *)(param_1 + 7) = 4;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x169) = 0;
      }
    }
    else if (param_2 == 2) {
      *(undefined1 *)(param_1 + 0x169) = 0;
      *(undefined1 *)(param_1 + 0x168) = 0xf;
      *(undefined1 *)(param_1 + 7) = 2;
    }
    _DAT_1f800238 = 0;
    *(ushort *)(param_1 + 0x44) = (ushort)(byte)(&DAT_800a46f0)[*(byte *)(param_1 + 0x168)];
  }
  if (DAT_1f800237 == *(char *)(param_1 + 0x147)) {
    *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x4e);
  }
  else {
    *(short *)(param_1 + 0x58) = -*(short *)(param_1 + 0x4e);
  }
  FUN_80063b94(param_1,1);
  return;
}

