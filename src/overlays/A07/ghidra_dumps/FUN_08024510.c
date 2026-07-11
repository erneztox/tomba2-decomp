// FUN_08024510

/* WARNING: Control flow encountered bad instruction data */

void FUN_08024510(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((param_1[0x29] != '\0') && (DAT_800bf8e9 == '\0')) {
      func_0x00040b48(0x35);
    }
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 != 0) {
      func_0x000517f8(param_1);
    }
    param_1[0x2b] = 0;
    param_1[0x29] = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar2 = func_0x00051b70(param_1,0xc,0x38);
      if (iVar2 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 0x50;
      *(undefined2 *)(param_1 + 0x82) = 0xa0;
      *(undefined2 *)(param_1 + 0x84) = 0x140;
      *(undefined2 *)(param_1 + 0x86) = 0x140;
      *param_1 = 1;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0x638;
      *(undefined2 *)(param_1 + 0x58) = 0;
      param_1[4] = param_1[4] + '\x01';
    }
  }
  else if (bVar1 == 2) {
    if (param_1[6] == '\0') {
      if (DAT_800e7eef == '\x15') {
        param_1[6] = 1;
        func_0x00040c00(0x35);
        DAT_800bfa3d = DAT_800bfa3d | (byte)(1 << ((byte)param_1[3] & 0x1f));
        func_0x0006e1c0(8);
        local_1e = *(undefined2 *)(param_1 + 0x2e);
        local_1a = *(short *)(param_1 + 0x32) -
                   (short)(((int)((uint)*(ushort *)(param_1 + 0x84) << 0x10) >> 0x10) -
                           ((int)((uint)*(ushort *)(param_1 + 0x84) << 0x10) >> 0x1f) >> 1);
        local_16 = *(undefined2 *)(param_1 + 0x36);
        func_0x0006cba8(auStack_20);
        func_0x0003116c(0x37,auStack_20,0xffffffe0);
        func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),auStack_20,0x700,8);
        func_0x00074590(0xc,0,0);
        func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0x700,8);
        func_0x00074590(0xc,0,0);
      }
      else {
        *param_1 = 1;
        param_1[4] = 1;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[0x29] = 0;
        iVar2 = func_0x0007778c(param_1);
        if (iVar2 == 0) {
          return;
        }
        func_0x000517f8(param_1);
      }
    }
    else if (param_1[6] == '\x01') {
      if (DAT_800bf809 != '\0') {
        return;
      }
      param_1[4] = 3;
      func_0x0006e1e4();
    }
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

