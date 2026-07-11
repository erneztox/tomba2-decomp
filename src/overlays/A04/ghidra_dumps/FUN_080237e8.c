// FUN_080237e8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080237e8(undefined1 *param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x000778e4(param_1,(int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32)) *
                                 0x10000) >> 0x10);
    if (param_1[3] == '\x03') {
      func_0x0011c4e0(param_1);
      func_0x00051844(param_1);
      param_1[0x2b] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (param_1[3] == '\x03') {
      iVar4 = func_0x00051b70(param_1,0xc,0x23);
      if (iVar4 != 0) {
        return;
      }
      if (((int)(uint)_DAT_800bfe56 >> (DAT_800bf870 & 0x1f) & 1U) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40) = 0;
        DAT_800bf9b4 = DAT_800bf9b4 | 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      iVar4 = func_0x00051b70(param_1,0xc,0);
      if (iVar4 != 0) {
        return;
      }
      *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40) = 0;
    }
    *param_1 = 1;
    uVar5 = (uint)(byte)param_1[3];
    param_1[4] = param_1[4] + '\x01';
    uVar2 = *(ushort *)(uVar5 * 6 + -0x7febece8);
    *(ushort *)(param_1 + 0x80) = uVar2;
    *(short *)(param_1 + 0x82) = (short)((int)((uint)uVar2 << 0x10) >> 0xf);
    *(undefined2 *)(param_1 + 0x84) = *(undefined2 *)(uVar5 * 6 + -0x7febece6);
    uVar3 = *(undefined2 *)(uVar5 * 6 + -0x7febece4);
    param_1[0x2b] = 0;
    *(undefined2 *)(param_1 + 0x86) = uVar3;
    func_0x000517f8(param_1);
    if ((param_1[3] == '\0') && ((_DAT_800bfe56 & 0x10) != 0)) {
      *(short *)(param_1 + 0x86) = *(short *)(param_1 + 0x86) + 300;
      halt_baddata();
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

