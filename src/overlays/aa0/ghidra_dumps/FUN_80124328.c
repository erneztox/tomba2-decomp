// FUN_80124328

void FUN_80124328(int param_1,int param_2)

{
  int in_v0;
  int iVar1;
  int iVar2;
  int in_v1;
  int unaff_s0;
  int unaff_s2;
  int unaff_s5;
  int iStack0000001c;
  
  if (in_v1 == in_v0) {
    *(undefined1 *)(param_1 + 5) = 5;
    iStack0000001c = 0x10;
    *(undefined2 *)(param_1 + 0x50) = 0x10;
  }
  else if (*(byte *)(param_2 + 0x170) < 8) {
    *(undefined1 *)(param_1 + 5) = 1;
    iStack0000001c = 0x100;
    *(undefined2 *)(param_1 + 0x50) = 0x100;
  }
  else {
    *(undefined1 *)(param_1 + 5) = 3;
    iStack0000001c = 0xc0;
    *(undefined2 *)(param_1 + 0x50) = 0xc0;
  }
  iStack0000001c = iStack0000001c + in_v1;
  func_0x80083e80();
  func_0x80083f50();
  iVar1 = func_0x80083e80((int)*(short *)(unaff_s0 + 0x20));
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  func_0x80083e80(-(int)*(short *)(unaff_s0 + 0x22));
  iVar2 = func_0x80083f50(-(int)*(short *)(unaff_s0 + 0x22));
  iStack0000001c =
       (iStack0000001c - ((iVar2 * iVar1 >> 0xc) * *(int *)(unaff_s2 + 0x3f90) * 5 >> 0x10)) / 0x280
  ;
  *(undefined1 *)(unaff_s5 + 6) = 0;
  FUN_8013f4dc();
  return;
}

