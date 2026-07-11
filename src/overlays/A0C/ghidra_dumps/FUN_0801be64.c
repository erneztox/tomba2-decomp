// FUN_0801be64

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801be64(undefined1 *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  iVar4 = 0;
  if (bVar1 == 1) {
    param_1[1] = 1;
    func_0x00077ebc(param_1);
    uVar2 = *(ushort *)(param_1 + 0x44);
    iVar3 = (int)((uint)uVar2 << 0x10) >> 0x10;
    if (iVar3 != 0) {
      iVar4 = (int)((uint)uVar2 << 0x10) >> 0x18;
      if (iVar3 < -0x20) {
        *(ushort *)(param_1 + 0x44) = uVar2 + 0x20;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0x20 < iVar3) {
        *(ushort *)(param_1 + 0x44) = uVar2 - 0x20;
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x44) = 0;
    }
    if (param_1[0x29] != '\0') {
      iVar3 = (int)*(short *)(param_1 + 0x80);
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      if ((iVar3 == -1) && (*(short *)(param_1 + 0x60) * 0x30 == -0x80000000)) {
        trap(0x1800);
      }
      iVar4 = iVar4 + (*(short *)(param_1 + 0x60) * 0x30) / iVar3 >> 2;
    }
    if (iVar4 == 0) {
      param_1[0xbf] = 0;
    }
    else {
      *(short *)(*(int *)(param_1 + 0xc0) + 0xc) =
           *(short *)(*(int *)(param_1 + 0xc0) + 0xc) + (short)iVar4;
      if (0 < iVar4) {
        if (0x1ff < *(short *)(*(int *)(param_1 + 0xc0) + 0xc)) {
          *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0x1ff;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(short *)(*(int *)(param_1 + 0xc0) + 0xc) < -0x1ff) {
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0xfe01;
      }
      if (param_1[0x46] != -1) {
        param_1[0xbf] = 0;
        param_1[0x46] = 0xff;
      }
      if (param_1[0xbf] == '\0') {
        param_1[0xbf] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    func_0x000517f8(param_1);
    param_1[0x29] = 0;
    param_1[0x2b] = 0;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      iVar4 = func_0x00051b70(param_1,0xc,3);
      if (iVar4 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 0x17f;
      *(undefined2 *)(param_1 + 0x82) = 0x2fe;
      *(undefined2 *)(param_1 + 0x84) = 0x50;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x86) = 0xaa;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(undefined2 *)(param_1 + 0x96) = 0;
      param_1[0xbf] = 0;
      param_1[0x46] = 0;
      param_1[4] = param_1[4] + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

