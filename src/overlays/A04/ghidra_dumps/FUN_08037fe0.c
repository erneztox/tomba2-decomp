// FUN_08037fe0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08037fe0(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    func_0x0006cba8(param_1 + 0x2c);
    sVar2 = *(short *)(param_1 + 0x44);
    *(ushort *)(param_1 + 0x44) = sVar2 + 0x60U;
    *(ushort *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + 0xe0U & 0xfff;
    if (-1 < (int)((uint)(ushort)(sVar2 + 0x60U) << 0x10)) {
      *(undefined2 *)(param_1 + 0x44) = 0;
    }
    func_0x00041a1c(param_1,1);
    func_0x00041ac0(param_1);
    sVar2 = *(short *)(param_1 + 0x4a);
    *(short *)(param_1 + 0x4a) = sVar2 + 0x140;
    if (0x1800 < (short)(sVar2 + 0x140)) {
      *(undefined2 *)(param_1 + 0x4a) = 0x1800;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    if ((*(short *)(param_1 + 0x4a) < 1) || (func_0x00041938(param_1,0,0x60), param_1[0x29] == '\0')
       ) {
      return;
    }
    if ((_DAT_800bfe56 & 0x10) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00074590(3,0,0);
    param_1[0xb] = param_1[0xb] & 0xc0 | 0x40;
    param_1[6] = param_1[6] + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((DAT_800bf929 & 8) == 0) {
        return;
      }
      DAT_800e806c = 8;
      *param_1 = 2;
      func_0x00041ac0(param_1);
      *(undefined2 *)(param_1 + 0x4a) = 0xf600;
      *(undefined2 *)(param_1 + 0x44) = 0xe000;
      func_0x00041ac0(param_1);
      if (param_1[0x46] != 'l') {
        func_0x000416a8(param_1,0xffffffff,0);
        func_0x00041718(param_1,0x6c,0);
      }
      param_1[6] = param_1[6] + '\x01';
    }
  }
  else if (bVar1 == 2) {
    func_0x0006cba8(param_1 + 0x2c);
    sVar2 = *(short *)(param_1 + 0x44);
    *(ushort *)(param_1 + 0x44) = sVar2 + 0x60U;
    *(ushort *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + 0xc0U & 0xfff;
    if (-1 < (int)((uint)(ushort)(sVar2 + 0x60U) << 0x10)) {
      if (0x3ff < *(short *)(param_1 + 0x56)) {
        *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + -0x1000;
      }
      *(undefined2 *)(param_1 + 0x44) = 0;
      param_1[6] = param_1[6] + '\x01';
    }
    func_0x00041a1c(param_1,1);
    func_0x00041ac0(param_1);
  }
  else if (bVar1 == 3) {
    sVar2 = *(short *)(param_1 + 0x56);
    *(short *)(param_1 + 0x56) = sVar2 + 0x80;
    if ((short)(sVar2 + 0x80) < 0x400) {
      return;
    }
    *param_1 = 1;
    if (param_1[0x46] != -0x1e) {
      func_0x000416a8(param_1,0xffffffff,0);
      func_0x00041718(param_1,0xe2,0);
    }
    func_0x0006e1e4();
    func_0x00042310();
    *(undefined2 *)(param_1 + 0x56) = 0x400;
    param_1[5] = 1;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

