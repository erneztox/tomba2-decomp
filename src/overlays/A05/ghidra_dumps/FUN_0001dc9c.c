// FUN_0001dc9c

void FUN_0001dc9c(short param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  short in_v1;
  int unaff_s2;
  
  sVar1 = param_1 + *(short *)(unaff_s2 + 0x52);
  *(short *)(unaff_s2 + 0x50) = sVar1;
  *(short *)(unaff_s2 + 0x6c) = in_v1 + param_1;
  if (sVar1 < -0x2000) {
    *(undefined1 *)(unaff_s2 + 0x5e) = 0;
    *(undefined1 *)(unaff_s2 + 5) = 0;
    *(undefined1 *)(unaff_s2 + 6) = 0;
  }
  func_0x00051d90(param_3,unaff_s2 + 0x60,0x1f8000c0);
  *(undefined2 *)(unaff_s2 + 0x2e) = uRam1f8000c0;
  *(undefined2 *)(unaff_s2 + 0x32) = uRam1f8000c2;
  *(undefined2 *)(unaff_s2 + 0x36) = uRam1f8000c4;
  *(int *)(unaff_s2 + 0x30) = *(int *)(unaff_s2 + 0x30) + *(short *)(unaff_s2 + 0x6c) * 0x100;
  return;
}

