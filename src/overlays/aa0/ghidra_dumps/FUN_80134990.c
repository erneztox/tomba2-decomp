// FUN_80134990

void FUN_80134990(void)

{
  short sVar1;
  int in_v0;
  undefined4 uVar2;
  int iVar3;
  int unaff_s0;
  int unaff_s1;
  undefined4 *unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int *unaff_s7;
  
  while( true ) {
    *(int *)(unaff_s0 + 0x14) = in_v0 + *(int *)(unaff_s5 + 0x3c);
    iVar3 = *(int *)(unaff_s5 + 0x44);
    *(int *)(unaff_s0 + 0x18) = *(int *)(unaff_s0 + 0x18) + *(int *)(unaff_s5 + 0x40);
    *(int *)(unaff_s0 + 0x1c) = *(int *)(unaff_s0 + 0x1c) + iVar3;
    func_0x80084660();
    func_0x80084690();
    sVar1 = *(short *)(unaff_s1 + 0x32);
    *(short *)(unaff_s1 + 0x4a) = *(short *)(unaff_s1 + 0x4a) + 0x200;
    uVar2 = *unaff_s3;
    *unaff_s7 = (uint)*(byte *)((int)unaff_s3 + 5) * -0x20 + 0x1000;
    func_0x80027768(uVar2,0,(int)sVar1,*(undefined1 *)(unaff_s1 + 7));
    if (7 < unaff_s4) break;
    unaff_s4 = unaff_s4 + 1;
    func_0x80085480(unaff_s1 + 0x48);
    func_0x80084520();
    func_0x80084110();
    func_0x80084220(unaff_s1 + 0x2c,unaff_s0 + 0x14);
    in_v0 = *(int *)(unaff_s0 + 0x14);
  }
  return;
}

