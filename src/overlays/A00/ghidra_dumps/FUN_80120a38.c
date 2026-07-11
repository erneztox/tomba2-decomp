// FUN_80120a38

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80120a38(int param_1)

{
  undefined1 in_v0;
  int iVar1;
  int iVar2;
  int unaff_s2;
  int iVar3;
  
  *(undefined1 *)(unaff_s2 + 4) = in_v0;
  *(undefined1 *)(unaff_s2 + 9) = 4;
  *(undefined1 *)(unaff_s2 + 0xb) = 5;
  iVar3 = 0;
  *(undefined1 *)(unaff_s2 + 0xd) = 0;
  *(char *)(unaff_s2 + 4) = *(char *)(unaff_s2 + 4) + '\x01';
  iVar2 = unaff_s2;
  if (*(char *)(unaff_s2 + 8) != '\0') {
    do {
      iVar3 = iVar3 + 1;
      iVar1 = func_0x8007aae8();
      *(int *)(iVar2 + 0xc0) = iVar1;
      *(undefined2 *)(iVar1 + 6) = 0xffff;
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 0x3a) = 0x2d3;
      **(undefined2 **)(iVar2 + 0xc0) = **(undefined2 **)(param_1 + 0xc0);
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 2) = *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2);
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 4) = *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4);
      *(short *)(*(int *)(iVar2 + 0xc0) + 8) = -*(short *)(*(int *)(param_1 + 0xc0) + 8);
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 10) = *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10);
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 0xc) =
           *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc);
      *(undefined4 *)(*(int *)(iVar2 + 0xc0) + 0x40) = 0;
      func_0x80051794(0x1f800000);
      func_0x80084d10((int)*(short *)(*(int *)(param_1 + 0xc0) + 8),0x1f800000);
      func_0x80084eb0((int)*(short *)(*(int *)(param_1 + 0xc0) + 10),0x1f800000);
      func_0x80085050((int)*(short *)(*(int *)(param_1 + 0xc0) + 0xc),0x1f800000);
      _DAT_1f8000c0 = 0;
      _DAT_1f8000c2 = 0x369;
      _DAT_1f8000c4 = 0;
      func_0x800844c0(0x1f800000,&DAT_1f8000c0,&DAT_1f8000c8);
      **(short **)(iVar2 + 0xc0) = **(short **)(iVar2 + 0xc0) + _DAT_1f8000c8;
      *(short *)(*(int *)(iVar2 + 0xc0) + 2) =
           *(short *)(*(int *)(iVar2 + 0xc0) + 2) + _DAT_1f8000ca;
      param_1 = param_1 + 4;
      *(short *)(*(int *)(iVar2 + 0xc0) + 4) =
           *(short *)(*(int *)(iVar2 + 0xc0) + 4) + _DAT_1f8000cc;
      iVar2 = iVar2 + 4;
    } while (iVar3 < (int)(uint)*(byte *)(unaff_s2 + 8));
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
  return;
}

