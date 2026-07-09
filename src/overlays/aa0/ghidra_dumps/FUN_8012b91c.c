// FUN_8012b91c

void FUN_8012b91c(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int unaff_s0;
  int unaff_s1;
  undefined4 *unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int *unaff_s7;
  
  uVar2 = *(ushort *)(param_3 + 0x4a);
  uVar4 = (uint)uVar2;
  iVar3 = uVar4 + *(ushort *)(param_3 + 0x50);
  *(short *)(param_3 + 0x4a) = (short)iVar3;
  *(ushort *)(param_3 + 0x32) = *(short *)(param_3 + 0x32) + uVar2;
  if (0xf < iVar3 * 0x10000 >> 0x10) {
    *(undefined1 *)(param_3 + 6) = 0;
    while( true ) {
      func_0x80084220(uVar4,unaff_s0 + 0x14);
      *(int *)(unaff_s0 + 0x14) = *(int *)(unaff_s0 + 0x14) + *(int *)(unaff_s5 + 0x3c);
      iVar3 = *(int *)(unaff_s5 + 0x44);
      *(int *)(unaff_s0 + 0x18) = *(int *)(unaff_s0 + 0x18) + *(int *)(unaff_s5 + 0x40);
      *(int *)(unaff_s0 + 0x1c) = *(int *)(unaff_s0 + 0x1c) + iVar3;
      func_0x80084660();
      func_0x80084690();
      sVar1 = *(short *)(unaff_s1 + 0x32);
      *(short *)(unaff_s1 + 0x4a) = *(short *)(unaff_s1 + 0x4a) + 0x200;
      uVar5 = *unaff_s3;
      *unaff_s7 = (uint)*(byte *)((int)unaff_s3 + 5) * -0x20 + 0x1000;
      func_0x80027768(uVar5,0,(int)sVar1,*(undefined1 *)(unaff_s1 + 7));
      if (7 < unaff_s4) break;
      unaff_s4 = unaff_s4 + 1;
      func_0x80085480(unaff_s1 + 0x48);
      func_0x80084520();
      func_0x80084110();
      uVar4 = unaff_s1 + 0x2c;
    }
    return;
  }
  *(undefined1 *)(param_3 + 0x29) = 0;
  return;
}

