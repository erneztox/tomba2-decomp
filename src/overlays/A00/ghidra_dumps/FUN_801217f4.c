// FUN_801217f4

void FUN_801217f4(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short unaff_s0;
  int unaff_s1;
  short unaff_s2;
  int unaff_s3;
  short unaff_s4;
  int unaff_s5;
  short sStack00000012;
  undefined2 uStack00000016;
  short sStack0000001a;
  
  while( true ) {
    unaff_s2 = unaff_s2 + 0x1e;
    func_0x80027058(param_1,param_2,param_3);
    if (((7 < unaff_s1) || (unaff_s5 <= unaff_s1)) || (param_1 = func_0x8007b26c(), param_1 == 0))
    break;
    *(undefined1 *)(param_1 + 1) = 0;
    *(char *)(param_1 + 2) = (char)unaff_s1;
    *(short *)(param_1 + 0x1e) = *(short *)(unaff_s3 + 0x2c) + unaff_s4 + unaff_s2;
    *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(unaff_s3 + 0x30);
    sVar1 = *(short *)(unaff_s3 + 0x34);
    *(undefined2 *)(param_1 + 0xc) = 0xa00;
    *(short *)(param_1 + 0x26) = sVar1 + unaff_s0 + unaff_s2;
    param_2 = *(undefined4 *)(unaff_s3 + 0x40);
    param_3 = unaff_s1;
    unaff_s1 = unaff_s1 + 1;
  }
  sStack00000012 = *(short *)(unaff_s3 + 0x2c) + unaff_s4;
  uStack00000016 = *(undefined2 *)(unaff_s3 + 0x30);
  sStack0000001a = *(short *)(unaff_s3 + 0x34) + unaff_s0;
  iVar2 = func_0x8003116c(0x107,&stack0x00000010,0xfffffff6);
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
  }
  return;
}

