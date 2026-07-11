// FUN_08023348

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08023348(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    cVar2 = param_1[0xbf];
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) - *(short *)(param_1 + 0x52);
    if (cVar2 != '\0') {
      if (cVar2 == '\x01') {
        if (-1 < *(short *)(param_1 + 0x4a)) {
          param_1[0xbf] = 2;
        }
      }
      else if (cVar2 != '\x02') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      sVar5 = *(short *)(param_1 + 0x4a);
      *(short *)(param_1 + 0x4a) = sVar5 + *(short *)(param_1 + 0x50);
      if (0x2800 < (short)(sVar5 + *(short *)(param_1 + 0x50))) {
        *(undefined2 *)(param_1 + 0x4a) = 0x2800;
      }
    }
    iVar6 = func_0x0011bfa4(param_1,1);
    if (iVar6 == 0) {
      return;
    }
    sVar5 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar5 + -1;
    if (sVar5 == 1) {
      param_1[0xbf] = 0;
      if (0 < *(short *)(param_1 + 0x52)) {
        *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x58) & 0xfff;
        *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(param_1 + 0x52);
        halt_baddata();
      }
      *(ushort *)(param_1 + 0x40) = 0x1000 - (*(ushort *)(param_1 + 0x58) & 0xfff);
      *(short *)(param_1 + 0x42) = -*(short *)(param_1 + 0x52);
      param_1[6] = param_1[6] + '\x01';
    }
    else {
      param_1[0xbf] = 1;
      *(undefined2 *)(param_1 + 0x4a) = 0xe800;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((param_1[0x1b] & 0x40) == 0) {
        func_0x000331d8(param_1,*(undefined4 *)(param_1 + 0xc0),0xffffff9c,0);
        param_1[0x1b] = param_1[0x1b] | 0x40;
      }
      func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0x19,8);
      func_0x00077c40(param_1,0x80141e14,0x1b);
      func_0x0004766c(param_1);
      func_0x00049760(param_1);
      if (*(short *)(param_1 + 0x72) != -1) {
        *(undefined2 *)(param_1 + 0x72) = 0xffff;
        if (param_1[0xbe] != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(short *)(param_1 + 0x56) = _DAT_1f8001a0;
      }
      param_1[0xbf] = 1;
      iVar6 = (int)_DAT_1f8001a0;
      *(undefined2 *)(param_1 + 0x4a) = 0xe000;
      *(undefined2 *)(param_1 + 0x50) = 0x300;
      iVar6 = func_0x00077768((uint)(byte)param_1[0x2b] << 4,iVar6);
      uVar4 = 0x900;
      if (iVar6 == 0) {
        uVar4 = 0xf700;
      }
      *(undefined2 *)(param_1 + 0x44) = uVar4;
      iVar6 = func_0x00077768((uint)(byte)param_1[0x2b] << 4,(int)*(short *)(param_1 + 0x56),1);
      uVar4 = 0xff00;
      if (iVar6 == 0) {
        uVar4 = 0x100;
      }
      *(undefined2 *)(param_1 + 0x52) = uVar4;
      *(undefined2 *)(param_1 + 0x40) = 3;
      param_1[0x2b] = 0;
      param_1[3] = 0;
      func_0x00077e20(param_1,0xf0,0x50,0x50);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    func_0x0011bfa4(param_1,1);
    uVar3 = *(ushort *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = (short)((uint)uVar3 - (uint)*(ushort *)(param_1 + 0x42));
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) - *(short *)(param_1 + 0x52);
    if (0 < (int)(((uint)uVar3 - (uint)*(ushort *)(param_1 + 0x42)) * 0x10000)) {
      return;
    }
    *(undefined2 *)(param_1 + 0x40) = 100;
    *(undefined2 *)(param_1 + 0x44) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x42) = 10;
    param_1[7] = 0;
    param_1[6] = param_1[6] + '\x01';
  }
  else if (bVar1 == 3) {
    sVar5 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar5 + -1;
    if (sVar5 == 1) {
      *param_1 = 1;
      param_1[4] = 1;
      sVar5 = func_0x0011bcb0(param_1);
      if (sVar5 != 0) {
        param_1[5] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x66) = 0;
      param_1[5] = 1;
      param_1[6] = 0;
      *(undefined2 *)(param_1 + 0x70) = 0xff;
      *(undefined2 *)(param_1 + 0x72) = 0xffff;
      param_1[7] = 0;
      param_1[0xd] = 0;
      *(undefined2 *)(param_1 + 0x68) = 0;
      param_1[0xbf] = 0;
      *(undefined2 *)(param_1 + 0x40) = 1;
      param_1[0x1b] = param_1[0x1b] & 0xbf;
      func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0x19,0);
      func_0x00077c40(param_1,0x80141e14,0);
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x38) = 0x1000;
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3a) = 0x1000;
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3c) = 0x1000;
    }
    else {
      func_0x0004766c(param_1);
      if (param_1[7] == '\0') {
        iVar6 = func_0x0011bfa4(param_1,1);
        if (iVar6 == 0) {
          sVar5 = *(short *)(param_1 + 0x42);
          *(ushort *)(param_1 + 0x42) = sVar5 - 1U;
          if (0 < (int)((uint)(ushort)(sVar5 - 1U) << 0x10)) {
            return;
          }
          param_1[0xbf] = 2;
          *(undefined2 *)(param_1 + 0x4a) = 0x800;
          param_1[7] = param_1[7] + '\x01';
        }
        else {
          *(undefined2 *)(param_1 + 0x42) = 10;
        }
      }
      else if (param_1[7] == '\x01') {
        sVar5 = *(short *)(param_1 + 0x4a);
        *(short *)(param_1 + 0x4a) = sVar5 + 0x100;
        if (0x1fff < (short)(sVar5 + 0x100)) {
          *(undefined2 *)(param_1 + 0x4a) = 0x2000;
        }
        iVar6 = func_0x0011bfa4(param_1,1);
        if (iVar6 != 0) {
          param_1[0xbf] = 0;
          *(undefined2 *)(param_1 + 0x42) = 10;
          param_1[7] = 0;
        }
        return;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

