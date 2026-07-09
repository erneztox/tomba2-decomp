// FUN_8011a5e8

void FUN_8011a5e8(void)

{
  int in_v0;
  int iVar1;
  byte bVar2;
  int iVar3;
  int unaff_s1;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  undefined1 unaff_s6;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  bVar2 = 0;
  while( true ) {
    unaff_s3 = unaff_s3 + 1;
    *(byte *)(in_v0 + 0x28) = bVar2 | 0x80;
    iVar3 = unaff_s4 * 0x10000;
    if (4 < unaff_s3) break;
    iVar1 = func_0x80083f50(iVar3 >> 0x10);
    iVar3 = func_0x80083e80(iVar3 >> 0x10);
    unaff_s4 = unaff_s4 + 0x199;
    in_stack_00000010._2_2_ = *(short *)(unaff_s1 + 0x2c) + (short)(iVar1 * 200 >> 0xc);
    in_stack_00000014._2_2_ = *(short *)(unaff_s1 + 0x30) + 0x5a;
    in_stack_00000018._2_2_ = *(short *)(unaff_s1 + 0x34) - (short)(iVar3 * 300 >> 0xc);
    in_v0 = func_0x8003116c(0,&stack0x00000010,0xffffff9c);
    bVar2 = *(byte *)(in_v0 + 0x28);
  }
  *(short *)(unaff_s1 + 0x16) = *(short *)(unaff_s1 + 0x16) + 1;
  *(undefined1 *)(unaff_s5 + 0x2b) = unaff_s6;
  iVar1 = func_0x80083e80();
  *(short *)(unaff_s1 + 0x32) =
       *(short *)(unaff_s1 + 0x60) + (short)(iVar1 * *(short *)(unaff_s1 + 0x4a) >> 0xc);
  *(undefined2 *)(iVar3 + 0x4e) = *(undefined2 *)(unaff_s1 + 0x2e);
  *(short *)(iVar3 + 0x50) = *(short *)(unaff_s1 + 0x32) + 0x3c;
  *(undefined2 *)(iVar3 + 0x52) = *(undefined2 *)(unaff_s1 + 0x36);
  FUN_8013ecf8();
  return;
}

