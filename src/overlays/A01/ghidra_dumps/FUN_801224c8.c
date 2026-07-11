// FUN_801224c8

/* WARNING: Control flow encountered bad instruction data */

void FUN_801224c8(undefined1 *param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((*(short *)(param_1 + 0x60) == 1) && (DAT_800bf816 == '\0')) {
      param_1[4] = 3;
      FUN_8012b5bc();
      return;
    }
    func_0x8007778c();
    FUN_8012b5bc();
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_8012b5bc();
      return;
    }
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = 1;
    param_1[0xb] = 0;
    param_1[0x5e] = 0;
    param_1[0x29] = 0;
    param_1[4] = param_1[4] + '\x01';
    if (param_1[3] == '\0') {
      *(undefined2 *)(param_1 + 0x80) = 300;
      *(undefined2 *)(param_1 + 0x82) = 600;
      *(undefined2 *)(param_1 + 0x84) = 500;
      *(undefined2 *)(param_1 + 0x86) = 1000;
      param_1[0x2a] = 0x10;
      *(undefined4 *)(param_1 + 0x2c) = 0x37400000;
      *(undefined4 *)(param_1 + 0x30) = 0xe6e70000;
      FUN_8012b55c();
      return;
    }
    if (param_1[3] == '\x01') {
      *(undefined2 *)(param_1 + 0x80) = 200;
      *(undefined2 *)(param_1 + 0x82) = 400;
      *(undefined2 *)(param_1 + 0x84) = 0x284;
      *(undefined2 *)(param_1 + 0x86) = 0x508;
      param_1[0x2a] = 0xf;
      *(undefined4 *)(param_1 + 0x2c) = 0x30400000;
      *(undefined4 *)(param_1 + 0x30) = 0xed9c0000;
      *(undefined4 *)(param_1 + 0x34) = 0x3f160000;
      bVar1 = param_1[3];
      param_1[3] = 2;
      *(ushort *)(param_1 + 0x60) = (ushort)bVar1;
      func_0x800517f8();
      FUN_8012b5bc();
      return;
    }
    sVar3 = func_0x80085690(-((int)(((uint)*(ushort *)(unaff_s0 + 0x76) -
                                    (uint)*(ushort *)(unaff_s1 + 0x36)) * 0x10000) >> 0x10),0);
    uVar4 = func_0x80077768((int)sVar3,(int)*(short *)(unaff_s1 + 0x140),0);
    *(undefined2 *)(unaff_s0 + 0x72) = uVar4;
    uVar2 = *(short *)(unaff_s0 + 0x76) - *(short *)(unaff_s2 + 2);
    *(ushort *)(unaff_s0 + 100) = uVar2;
  }
  else {
    uVar2 = (ushort)(bVar1 < 4);
    if (uVar2 == 0) {
      return;
    }
  }
  if (uVar2 != 0) {
    *(undefined1 *)(unaff_s1 + 5) = 0x21;
    *(undefined1 *)(unaff_s1 + 6) = 0;
    if (*(ushort *)(unaff_s0 + 0x72) == (ushort)*(byte *)(unaff_s1 + 0x147)) {
      *(undefined1 *)(unaff_s0 + 0x78) = 2;
    }
    else {
      *(undefined1 *)(unaff_s0 + 0x78) = 1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

