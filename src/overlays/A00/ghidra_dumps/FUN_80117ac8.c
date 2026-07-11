// FUN_80117ac8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80117ac8(int param_1)

{
  short sVar1;
  int iVar2;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_1 + 0x5e) = 0;
    *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xbf;
    if (*(char *)(param_1 + 1) != '\0') {
      func_0x80074590(0x99,0,0);
      return;
    }
    func_0x80077c40(param_1,0x8014e1a4,8);
    iVar2 = func_0x80077768((uint)*(byte *)(param_1 + 0x2b) << 4,(int)*(short *)(param_1 + 0x56),0);
    if (iVar2 == 0) {
      iVar2 = func_0x80083f50((int)*(short *)(param_1 + 0x56));
      *(short *)(param_1 + 0x48) = (short)(iVar2 >> 4);
      iVar2 = func_0x80083e80((int)*(short *)(param_1 + 0x56));
      *(short *)(param_1 + 0x4c) = (short)(-iVar2 >> 4);
      *(undefined2 *)(param_1 + 0x4a) = 0xfe00;
      *(undefined2 *)(param_1 + 0x44) = 0x1000;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      FUN_801217f4(param_1);
      if (*(char *)(param_1 + 5) == '\a') {
        func_0x80077e20(param_1,0x20,0x30,0xff);
      }
      else if (*(char *)(param_1 + 5) == '\b') {
        func_0x80077e20(param_1,0xf0,0x40,0x40);
      }
    }
    else {
      iVar2 = func_0x80083f50((int)*(short *)(param_1 + 0x56));
      *(short *)(param_1 + 0x48) = (short)(-iVar2 >> 4);
      iVar2 = func_0x80083e80((int)*(short *)(param_1 + 0x56));
      iVar2 = iVar2 >> 4;
      while( true ) {
        func_0x80084d10((int)*(short *)(iVar2 + 8));
        func_0x80084eb0((int)*(short *)(*(int *)(unaff_s1 + 0xc0) + 10));
        func_0x80085050((int)*(short *)(*(int *)(unaff_s1 + 0xc0) + 0xc));
        _DAT_1f8000c0 = 0;
        *(undefined2 *)(unaff_s6 + 2) = 0x369;
        *(undefined2 *)(unaff_s6 + 4) = 0;
        func_0x800844c0();
        **(short **)(param_1 + 0xc0) = **(short **)(param_1 + 0xc0) + *(short *)(unaff_s7 + 200);
        *(short *)(*(int *)(param_1 + 0xc0) + 2) =
             *(short *)(*(int *)(param_1 + 0xc0) + 2) + *(short *)(unaff_s5 + 2);
        *(short *)(*(int *)(param_1 + 0xc0) + 4) =
             *(short *)(*(int *)(param_1 + 0xc0) + 4) + *(short *)(unaff_s5 + 4);
        if ((int)(uint)*(byte *)(unaff_s2 + 8) <= unaff_s3) break;
        unaff_s3 = unaff_s3 + 1;
        iVar2 = func_0x8007aae8();
        *(int *)(param_1 + 0xc4) = iVar2;
        *(undefined2 *)(iVar2 + 6) = 0xffff;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3a) = 0x2d3;
        **(undefined2 **)(param_1 + 0xc4) = **(undefined2 **)(unaff_s1 + 0xc4);
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2) =
             *(undefined2 *)(*(int *)(unaff_s1 + 0xc4) + 2);
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 4) =
             *(undefined2 *)(*(int *)(unaff_s1 + 0xc4) + 4);
        *(short *)(*(int *)(param_1 + 0xc4) + 8) = -*(short *)(*(int *)(unaff_s1 + 0xc4) + 8);
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 10) =
             *(undefined2 *)(*(int *)(unaff_s1 + 0xc4) + 10);
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) =
             *(undefined2 *)(*(int *)(unaff_s1 + 0xc4) + 0xc);
        *(undefined4 *)(*(int *)(param_1 + 0xc4) + 0x40) = 0;
        func_0x80051794();
        iVar2 = *(int *)(unaff_s1 + 0xc4);
        param_1 = param_1 + 4;
        unaff_s1 = unaff_s1 + 4;
      }
      *(undefined2 *)(unaff_s2 + 0x60) = 0xd;
      *(undefined2 *)(unaff_s2 + 0x62) = 0x3cf7;
      *(undefined2 *)(unaff_s2 + 100) = 0x88d8;
      *(undefined2 *)(unaff_s2 + 0x66) = 0x88df;
      *(undefined2 *)(unaff_s2 + 0x68) = 0x97d8;
      *(undefined2 *)(unaff_s2 + 0x6a) = 0x97df;
      *(undefined2 *)(unaff_s2 + 0x6c) = 0x28;
      *(undefined2 *)(unaff_s2 + 0x6e) = 0x50;
      *(undefined2 *)(unaff_s2 + 0x70) = 0xfff8;
    }
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    FUN_80120498(param_1,2);
    func_0x8004766c(param_1);
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x180;
    iVar2 = func_0x800495dc(param_1,0x32,0);
    if (iVar2 == 0) {
      sVar1 = *(short *)(param_1 + 0x4a) + 0x30;
      *(short *)(param_1 + 0x4a) = sVar1;
      if (0x1000 < sVar1) {
        *(undefined2 *)(param_1 + 0x4a) = 0x1000;
      }
      return;
    }
    if (*(char *)(param_1 + 1) != '\0') {
      func_0x80074590(0x1b,0,0);
      return;
    }
    *(undefined1 *)(param_1 + 4) = 3;
  }
  return;
}

