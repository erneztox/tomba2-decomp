// FUN_080484e4

/* WARNING: Control flow encountered bad instruction data */

void FUN_080484e4(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      sVar2 = *(short *)(param_1 + 0x4a);
      uVar3 = *(ushort *)(param_1 + 0x4a);
      *(short *)(param_1 + 0x4a) = (short)((uint)uVar3 + (uint)*(ushort *)(param_1 + 0x50));
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar2 * 0x100;
      if (0 < (int)(((uint)uVar3 + (uint)*(ushort *)(param_1 + 0x50)) * 0x10000)) {
        *(undefined2 *)(param_1 + 0x4e) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        *(undefined2 *)(param_1 + 0x4a) = 0xc000;
        *(undefined2 *)(param_1 + 0x50) = 0x280;
        param_1[5] = 1;
        *(undefined2 *)(param_1 + 0x60) = 0x4000;
        *param_1 = 1;
        halt_baddata();
      }
      if (bVar1 == 2) {
        sVar2 = *(short *)(param_1 + 0x4e);
        *(short *)(param_1 + 0x4e) = sVar2 + 0x200;
        if (0xfff < (short)(sVar2 + 0x200)) {
          param_1[5] = param_1[5] + '\x01';
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        sVar2 = *(short *)(param_1 + 0x4a);
        uVar3 = *(ushort *)(param_1 + 0x4a);
        *(short *)(param_1 + 0x4a) = (short)((uint)uVar3 + (uint)*(ushort *)(param_1 + 0x50));
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar2 * 0x100;
        if ((int)*(short *)(param_1 + 0x60) <
            (int)(((uint)uVar3 + (uint)*(ushort *)(param_1 + 0x50)) * 0x10000) >> 0x10) {
          param_1[4] = 3;
          func_0x0003116c(8,param_1 + 0x2c,0xffffffe0);
          halt_baddata();
        }
      }
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      func_0x00141304(param_1);
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    bVar1 = param_1[3];
    if (bVar1 == 1) {
      if (param_1[6] == '\0') {
        param_1[6] = 1;
        param_1[7] = 0;
      }
      else if (param_1[6] != '\x01') {
        halt_baddata();
      }
      iVar4 = func_0x00049e54(param_1,1);
      if (iVar4 == 0) {
        return;
      }
      param_1[4] = 3;
      halt_baddata();
    }
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    bVar1 = param_1[5];
    if (bVar1 != 1) {
      if (bVar1 == 0) {
        return;
      }
      if (bVar1 < 4) {
        func_0x0004d4c4(0x3d,1);
        func_0x0004b0d8(param_1);
        param_1[4] = 3;
        DAT_800bfa49 = DAT_800bfa49 | 2;
        halt_baddata();
      }
      return;
    }
  }
  iVar4 = func_0x0007778c(param_1);
  if (iVar4 != 0) {
    func_0x00077b5c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

