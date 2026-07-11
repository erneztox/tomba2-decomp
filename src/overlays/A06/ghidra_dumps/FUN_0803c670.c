// FUN_0803c670

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803c670(undefined1 *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if (param_1[6] == '\0') {
    *param_1 = 2;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    **(undefined2 **)(param_1 + 0xc0) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0x50;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4) = 0x68;
    **(undefined2 **)(param_1 + 0xc4) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2) = 0x50;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 4) = 0xff98;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 8) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 10) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0;
    *(undefined2 *)(param_1 + 0x40) = 0;
    param_1[6] = param_1[6] + '\x01';
  }
  sVar1 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar1 + 0x20;
  iVar2 = func_0x00083e80((int)(short)(sVar1 + 0x20));
  iVar2 = iVar2 >> 3;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  *(short *)(*(int *)(param_1 + 0xc0) + 8) = -0x100 - (short)iVar2;
  iVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x40));
  iVar2 = iVar2 >> 3;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  *(short *)(*(int *)(param_1 + 0xc4) + 8) = (short)iVar2 + 0x100;
  func_0x0004139c(param_1 + 0x58,
                  ((int)((uint)*(ushort *)(iVar4 + 0x44) << 0x10) >> 0x15) + 0xe80U & 0xfff,0x20);
  func_0x00051b34(*(int *)(iVar4 + 0xc0) + 0x18,0x1f800020);
  func_0x00085480(param_1 + 0x54,&DAT_1f800040);
  func_0x00084110(0x1f800020,&DAT_1f800040,param_1 + 0x98);
  _DAT_1f8000c2 = 0xff88;
  _DAT_1f8000c4 = 0;
  _DAT_1f8000c0 = 0;
  func_0x00051d90(*(undefined4 *)(iVar4 + 0xc0),&DAT_1f8000c0,&DAT_1f8000c8);
  if (*(short *)(param_1 + 0x32) < (short)_DAT_1f8000ca) {
    *(ushort *)(param_1 + 0x32) = _DAT_1f8000ca;
  }
  iVar2 = ((uint)_DAT_1f8000c8 - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000;
  iVar3 = iVar2 >> 0x10;
  iVar4 = iVar3;
  if (iVar3 < 0) {
    iVar4 = -iVar3;
  }
  if (4 < iVar4) {
    iVar2 = iVar2 >> 0x13;
    if (iVar4 < 0x47) {
      iVar4 = iVar2;
      if (iVar2 < 0) {
        iVar4 = -iVar2;
      }
      if ((iVar4 < 4) && (iVar2 = -4, 0 < iVar3)) {
        iVar2 = 4;
      }
      *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)iVar2;
    }
    else if (iVar3 < 1) {
      *(ushort *)(param_1 + 0x2e) = _DAT_1f8000c8 + 0x46;
    }
    else {
      *(ushort *)(param_1 + 0x2e) = _DAT_1f8000c8 - 0x46;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(ushort *)(param_1 + 0x2e) = _DAT_1f8000c8;
  iVar2 = ((uint)_DAT_1f8000ca - (uint)*(ushort *)(param_1 + 0x32)) * 0x10000;
  iVar3 = iVar2 >> 0x10;
  iVar4 = iVar3;
  if (iVar3 < 0) {
    iVar4 = -iVar3;
  }
  if (4 < iVar4) {
    iVar2 = iVar2 >> 0x13;
    if (iVar4 < 0x47) {
      iVar4 = iVar2;
      if (iVar2 < 0) {
        iVar4 = -iVar2;
      }
      if ((iVar4 < 4) && (iVar2 = -4, 0 < iVar3)) {
        iVar2 = 4;
      }
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + (short)iVar2;
    }
    else if (iVar3 < 1) {
      *(ushort *)(param_1 + 0x32) = _DAT_1f8000ca + 0x46;
    }
    else {
      *(ushort *)(param_1 + 0x32) = _DAT_1f8000ca - 0x46;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(ushort *)(param_1 + 0x32) = _DAT_1f8000ca;
  iVar2 = ((uint)_DAT_1f8000cc - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000;
  iVar3 = iVar2 >> 0x10;
  iVar4 = iVar3;
  if (iVar3 < 0) {
    iVar4 = -iVar3;
  }
  if (4 < iVar4) {
    iVar2 = iVar2 >> 0x13;
    if (iVar4 < 0x47) {
      iVar4 = iVar2;
      if (iVar2 < 0) {
        iVar4 = -iVar2;
      }
      if ((iVar4 < 4) && (iVar2 = -4, 0 < iVar3)) {
        iVar2 = 4;
      }
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + (short)iVar2;
    }
    else if (iVar3 < 1) {
      *(ushort *)(param_1 + 0x36) = _DAT_1f8000cc + 0x46;
    }
    else {
      *(ushort *)(param_1 + 0x36) = _DAT_1f8000cc - 0x46;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(ushort *)(param_1 + 0x36) = _DAT_1f8000cc;
  func_0x00084470(param_1 + 0x98,param_1 + 0x88,param_1 + 0xac);
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + (int)*(short *)(param_1 + 0x2e);
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + (int)*(short *)(param_1 + 0x32);
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + (int)*(short *)(param_1 + 0x36);
  func_0x00051128();
  return;
}

